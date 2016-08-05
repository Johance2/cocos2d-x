/****************************************************************************
 Copyright (c) 2008-2010 Ricardo Quesada
 Copyright (c) 2009      Valentin Milea
 Copyright (c) 2010-2012 cocos2d-x.org
 Copyright (c) 2011      Zynga Inc.
 Copyright (c) 2013-2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "2d/CCProtectedNode.h"

#include "base/CCDirector.h"
#include "2d/CCScene.h"

NS_CC_BEGIN

ProtectedNode::ProtectedNode() : _reorderProtectedChildDirty(false)
{
}

ProtectedNode::~ProtectedNode()
{
    CCLOGINFO( "deallocing ProtectedNode: %p - tag: %i", this, _tag );
    removeAllProtectedChildren();
}

ProtectedNode * ProtectedNode::create(void)
{
	ProtectedNode * ret = new (std::nothrow) ProtectedNode();
    if (ret && ret->init())
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
	return ret;
}

void ProtectedNode::cleanup()
{
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript)
    {
        if (ScriptEngineManager::sendNodeEventToJSExtended(this, kNodeOnCleanup))
            return;
    }
#endif // #if CC_ENABLE_SCRIPT_BINDING
    
    Node::cleanup();
    // timers
	for(auto itr = _protectedChildren.begin(); itr != _protectedChildren.end(); ++itr)
	{
		auto &child = *itr;
        child->cleanup();
	}
}

void ProtectedNode::addProtectedChild(cocos2d::Node *child)
{
    addProtectedChild(child, child->getLocalZOrder(), child->getTag());
}

void ProtectedNode::addProtectedChild(cocos2d::Node *child, int localZOrder)
{
    addProtectedChild(child, localZOrder, child->getTag());
}

/* "add" logic MUST only be on this method
 * If a class want's to extend the 'addChild' behavior it only needs
 * tothis method
 */
void ProtectedNode::addProtectedChild(Node *child, int zOrder, int tag)
{
    CCASSERT( child != nullptr, "Argument must be non-nil");
    CCASSERT( child->getParent() == nullptr, "child already added. It can't be added again");
    
    if (_protectedChildren.empty())
    {
        _protectedChildren.reserve(4);
    }
    
    this->insertProtectedChild(child, zOrder);
    
    child->setTag(tag);
    
    child->setParent(this);

    child->updateOrderOfArrival();
    
    if( _running )
    {
        child->onEnter();
        // prevent onEnterTransitionDidFinish to be called twice when a node is added in onEnter
        if (_isTransitionFinished) {
            child->onEnterTransitionDidFinish();
        }
    }
    
    if (_cascadeColorEnabled)
    {
        updateCascadeColor();
    }
    
    if (_cascadeOpacityEnabled)
    {
        updateCascadeOpacity();
    }
}

Node* ProtectedNode::getProtectedChildByTag(int tag)
{
    CCASSERT( tag != Node::INVALID_TAG, "Invalid tag");
    
    for(auto itr0 = _protectedChildren.begin(); itr0 != _protectedChildren.end(); ++itr0)
    {
    	auto &child=*itr0;
        if(child && child->getTag() == tag)
            return child;
    }
    return nullptr;
}

/* "remove" logic MUST only be on this method
 * If a class want's to extend the 'removeChild' behavior it only needs
 * tothis method
 */
void ProtectedNode::removeProtectedChild(cocos2d::Node *child, bool cleanup)
{
    // explicit nil handling
    if (_protectedChildren.empty())
    {
        return;
    }
    
    ssize_t index = _protectedChildren.getIndex(child);
    if( index != CC_INVALID_INDEX )
    {
        
        // IMPORTANT:
        //  -1st do onExit
        //  -2nd cleanup
        if (_running)
        {
            child->onExitTransitionDidStart();
            child->onExit();
        }
        
        // If you don't do cleanup, the child's actions will not get removed and the
        // its scheduledSelectors_ dict will not get released!
        if (cleanup)
        {
            child->cleanup();
        }
        
        // set parent nil at the end
        child->setParent(nullptr);
        
#if CC_ENABLE_GC_FOR_NATIVE_OBJECTS
        auto sEngine = ScriptEngineManager::getInstance()->getScriptEngine();
        if (sEngine)
        {
            sEngine->releaseScriptObject(this, child);
        }
#endif // CC_ENABLE_GC_FOR_NATIVE_OBJECTS
        _protectedChildren.erase(index);
    }
}

void ProtectedNode::removeAllProtectedChildren()
{
    removeAllProtectedChildrenWithCleanup(true);
}

void ProtectedNode::removeAllProtectedChildrenWithCleanup(bool cleanup)
{
    // not using detachChild improves speed here
    for(auto itr0 = _protectedChildren.begin(); itr0 != _protectedChildren.end(); ++itr0)
    {
    	auto &child=*itr0;
        // IMPORTANT:
        //  -1st do onExit
        //  -2nd cleanup
        if(_running)
        {
            child->onExitTransitionDidStart();
            child->onExit();
        }
        
        if (cleanup)
        {
            child->cleanup();
        }
#if CC_ENABLE_GC_FOR_NATIVE_OBJECTS
        auto sEngine = ScriptEngineManager::getInstance()->getScriptEngine();
        if (sEngine)
        {
            sEngine->releaseScriptObject(this, child);
        }
#endif // CC_ENABLE_GC_FOR_NATIVE_OBJECTS
        // set parent nil at the end
        child->setParent(nullptr);
    }
    
    _protectedChildren.clear();
}

void ProtectedNode::removeProtectedChildByTag(int tag, bool cleanup)
{
    CCASSERT( tag != Node::INVALID_TAG, "Invalid tag");
    
    Node *child = this->getProtectedChildByTag(tag);
    
    if (child == nullptr)
    {
        CCLOG("cocos2d: removeChildByTag(tag = %d): child not found!", tag);
    }
    else
    {
        this->removeProtectedChild(child, cleanup);
    }
}

// helper used by reorderChild & add
void ProtectedNode::insertProtectedChild(cocos2d::Node *child, int z)
{
#if CC_ENABLE_GC_FOR_NATIVE_OBJECTS
    auto sEngine = ScriptEngineManager::getInstance()->getScriptEngine();
    if (sEngine)
    {
        sEngine->retainScriptObject(this, child);
    }
#endif // CC_ENABLE_GC_FOR_NATIVE_OBJECTS
    _reorderProtectedChildDirty = true;
    _protectedChildren.pushBack(child);
    child->setLocalZOrder(z);
}

void ProtectedNode::sortAllProtectedChildren()
{
    if( _reorderProtectedChildDirty ) {
        sortNodes(_protectedChildren);
        _reorderProtectedChildDirty = false;
    }
}

void ProtectedNode::reorderProtectedChild(cocos2d::Node *child, int localZOrder)
{
    CCASSERT( child != nullptr, "Child must be non-nil");
    _reorderProtectedChildDirty = true;
    child->updateOrderOfArrival();
    child->setLocalZOrder(localZOrder);
}

void ProtectedNode::visit(Renderer* renderer, const Mat4 &parentTransform, uint32_t parentFlags)
{
    // quick return if not visible. children won't be drawn.
    if (!_visible)
    {
        return;
    }
    
    uint32_t flags = processParentFlags(parentTransform, parentFlags);
    
    // IMPORTANT:
    // To ease the migration to v3.0, we still support the Mat4 stack,
    // but it is deprecated and your code should not rely on it
    Director* director = Director::getInstance();
    CCASSERT(nullptr != director, "Director is null when setting matrix stack");
    director->pushMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
    director->loadMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW, _modelViewTransform);
    
    int i = 0;      // used by _children
    int j = 0;      // used by _protectedChildren
    
    sortAllChildren();
    sortAllProtectedChildren();
    
    //
    // draw children and protectedChildren zOrder < 0
    //
    for( ; i < _children.size(); i++ )
    {
        auto node = _children.at(i);
        
        if ( node && node->getLocalZOrder() < 0 )
            node->visit(renderer, _modelViewTransform, flags);
        else
            break;
    }
    
    for( ; j < _protectedChildren.size(); j++ )
    {
        auto node = _protectedChildren.at(j);
        
        if ( node && node->getLocalZOrder() < 0 )
            node->visit(renderer, _modelViewTransform, flags);
        else
            break;
    }
    
    //
    // draw self
    //
    if (isVisitableByVisitingCamera())
        this->draw(renderer, _modelViewTransform, flags);
    
    //
    // draw children and protectedChildren zOrder >= 0
    //
    for(auto it=_protectedChildren.cbegin()+j; it != _protectedChildren.cend(); ++it)
        (*it)->visit(renderer, _modelViewTransform, flags);
    
    for(auto it=_children.cbegin()+i; it != _children.cend(); ++it)
        (*it)->visit(renderer, _modelViewTransform, flags);
    
    // FIX ME: Why need to set _orderOfArrival to 0??
    // Please refer to https://github.com/cocos2d/cocos2d-x/pull/6920
    // setOrderOfArrival(0);
    
    director->popMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
}

void ProtectedNode::onEnter()
{
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript)
    {
        if (ScriptEngineManager::sendNodeEventToJSExtended(this, kNodeOnEnter))
            return;
    }
#endif
    
    Node::onEnter();
	for(auto itr = _protectedChildren.begin(); itr != _protectedChildren.end(); ++itr)
	{
		auto &child = *itr;
        child->onEnter();
	}
}

void ProtectedNode::onEnterTransitionDidFinish()
{
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript)
    {
        if (ScriptEngineManager::sendNodeEventToJSExtended(this, kNodeOnEnterTransitionDidFinish))
            return;
    }
#endif
    
    Node::onEnterTransitionDidFinish();
	for(auto itr = _protectedChildren.begin(); itr != _protectedChildren.end(); ++itr)
	{
		auto &child = *itr;
        child->onEnterTransitionDidFinish();
	}
}

void ProtectedNode::onExitTransitionDidStart()
{
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript)
    {
        if (ScriptEngineManager::sendNodeEventToJSExtended(this, kNodeOnExitTransitionDidStart))
            return;
    }
#endif
    
    Node::onExitTransitionDidStart();
	for(auto itr = _protectedChildren.begin(); itr != _protectedChildren.end(); ++itr)
	{
		auto &child = *itr;
        child->onExitTransitionDidStart();
	}
}

void ProtectedNode::onExit()
{
#if CC_ENABLE_SCRIPT_BINDING
    if (_scriptType == kScriptTypeJavascript)
    {
        if (ScriptEngineManager::sendNodeEventToJSExtended(this, kNodeOnExit))
            return;
    }
#endif
    
    Node::onExit();
	for(auto itr = _protectedChildren.begin(); itr != _protectedChildren.end(); ++itr)
	{
		auto &child = *itr;
        child->onExit();
	}
}

void ProtectedNode::updateDisplayedOpacity(GLubyte parentOpacity)
{
	_displayedOpacity = _realOpacity * parentOpacity/255.0;
    updateColor();
    
    if (_cascadeOpacityEnabled)
    {
        for(auto itr = _children.begin(); itr != _children.end(); ++itr)
        {
        	auto &child=*itr;
            child->updateDisplayedOpacity(_displayedOpacity);
        }
    }
    
    for(auto itr0 = _protectedChildren.begin(); itr0 != _protectedChildren.end(); ++itr0)
    {
    	auto &child=*itr0;
        child->updateDisplayedOpacity(_displayedOpacity);
    }
}

void ProtectedNode::updateDisplayedColor(const Color3B& parentColor)
{
	_displayedColor.r = _realColor.r * parentColor.r/255.0;
	_displayedColor.g = _realColor.g * parentColor.g/255.0;
	_displayedColor.b = _realColor.b * parentColor.b/255.0;
    updateColor();
    
    if (_cascadeColorEnabled)
    {
        for(auto itr = _children.begin(); itr != _children.end(); ++itr)
        {
        	auto &child=*itr;
            child->updateDisplayedColor(_displayedColor);
        }
    }
    for(auto itr0 = _protectedChildren.begin(); itr0 != _protectedChildren.end(); ++itr0)
    {
    	auto &child=*itr0;
        child->updateDisplayedColor(_displayedColor);
    }
}

void ProtectedNode::disableCascadeColor()
{
    for(auto itr0 = _children.begin(); itr0 != _children.end(); ++itr0)
    {
    	auto &child=*itr0;
        child->updateDisplayedColor(Color3B::WHITE);
    }
    for(auto itr0 = _protectedChildren.begin(); itr0 != _protectedChildren.end(); ++itr0)
    {
    	auto &child=*itr0;
        child->updateDisplayedColor(Color3B::WHITE);
    }
}

void ProtectedNode::disableCascadeOpacity()
{
    _displayedOpacity = _realOpacity;
    
    for(auto itr0 = _children.begin(); itr0 != _children.end(); ++itr0)
    {
    	auto &child=*itr0;
        child->updateDisplayedOpacity(255);
    }
    
    for(auto itr0 = _protectedChildren.begin(); itr0 != _protectedChildren.end(); ++itr0)
    {
    	auto &child=*itr0;
        child->updateDisplayedOpacity(255);
    }
}

void ProtectedNode::setCameraMask(unsigned short mask, bool applyChildren)
{
    Node::setCameraMask(mask, applyChildren);
    if (applyChildren)
    {
        for(auto itr = _protectedChildren.begin(); itr != _protectedChildren.end(); ++itr)
        {
        	auto &iter=*itr;
            iter->setCameraMask(mask);
        }
    }
    
}

NS_CC_END
