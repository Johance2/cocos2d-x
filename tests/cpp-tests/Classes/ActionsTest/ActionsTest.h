/****************************************************************************
 Copyright (c) 2012 cocos2d-x.org
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

#ifndef _ActionsTest_H_
#define _ActionsTest_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ActionsTests);

class ActionsDemo : public TestCase
{
protected:
    cocos2d::Sprite*    _grossini;
    cocos2d::Sprite*    _tamara;
    cocos2d::Sprite*    _kathia;
public:
    virtual void onEnter();
    virtual void onExit();

    void centerSprites(unsigned int numberOfSprites);
    void alignSpritesLeft(unsigned int numberOfSprites);
    virtual std::string title() const;
};

class ActionMove : public ActionsDemo
{
public:
    CREATE_FUNC(ActionMove);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionMove3D : public ActionsDemo
{
public:
    CREATE_FUNC(ActionMove3D);
    
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionScale : public ActionsDemo
{
public:
    CREATE_FUNC(ActionScale);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionSkew : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSkew);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionRotationalSkew : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRotationalSkew);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionRotationalSkewVSStandardSkew : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRotationalSkewVSStandardSkew);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionSkewRotateScale : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSkewRotateScale);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionRotate : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRotate);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionRotateBy3D : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRotateBy3D);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionJump : public ActionsDemo
{
public:
    CREATE_FUNC(ActionJump);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionBezier : public ActionsDemo
{
public:
    CREATE_FUNC(ActionBezier);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionBlink : public ActionsDemo
{
public:
    CREATE_FUNC(ActionBlink);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionFade : public ActionsDemo
{
public:
    CREATE_FUNC(ActionFade);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionTint : public ActionsDemo
{
public:
    CREATE_FUNC(ActionTint);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionAnimate : public ActionsDemo
{
public:
    CREATE_FUNC(ActionAnimate);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
private:
    cocos2d::EventListenerCustom* _frameDisplayedListener;
};

class ActionSequence : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSequence);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionSequence2 : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSequence2);

    virtual void onEnter();
    virtual std::string subtitle() const;

    void callback1();
    void callback2(Node* sender);
    void callback3(Node* sender, long data);
};

class ActionSequence3 : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSequence3);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionSpawn : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSpawn);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionSpawn2 : public ActionsDemo
{
public:
    CREATE_FUNC(ActionSpawn2);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionReverse : public ActionsDemo
{
public:
    CREATE_FUNC(ActionReverse);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionRepeat : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRepeat);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionDelayTime : public ActionsDemo
{
public:
    CREATE_FUNC(ActionDelayTime);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionReverseSequence : public ActionsDemo
{
public:
    CREATE_FUNC(ActionReverseSequence);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionReverseSequence2 : public ActionsDemo
{
public:
    CREATE_FUNC(ActionReverseSequence2);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionOrbit : public ActionsDemo
{
public:
    CREATE_FUNC(ActionOrbit);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string subtitle() const;
};

class ActionRemoveSelf : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRemoveSelf);

	virtual void onEnter();
	virtual std::string subtitle() const;
};

class ActionRepeatForever : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRepeatForever);

    virtual void onEnter();
    virtual std::string subtitle() const;

    void repeatForever(Node* pTarget);
};

class ActionRotateToRepeat : public ActionsDemo
{
public:
    CREATE_FUNC(ActionRotateToRepeat);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionCallFuncN : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCallFuncN);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void callback(Node* sender);
};

class ActionCallFuncND : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCallFuncND);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void doRemoveFromParentAndCleanup(Node* sender, bool cleanup);
};

class ActionCallFunction : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCallFunction);

    virtual void onEnter();
    virtual std::string subtitle() const;

    void callback1();
    void callback2(Node* pTarget);
    void callback3(Node* pTarget, long data);
};


class ActionFollow : public ActionsDemo
{
public:
    CREATE_FUNC(ActionFollow);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionFollowWithOffset : public ActionsDemo
{
    
public:
    CREATE_FUNC(ActionFollowWithOffset);
    
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ActionTargeted : public ActionsDemo
{
public:
    CREATE_FUNC(ActionTargeted);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ActionTargetedReverse : public ActionsDemo
{
public:
    CREATE_FUNC(ActionTargetedReverse);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ActionStacked : public ActionsDemo
{
public:
    CREATE_FUNC(ActionStacked);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void addNewSpriteWithCoords(cocos2d::Vec2 p);
    virtual void runActionsInSprite(cocos2d::Sprite* sprite);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
};

class ActionMoveStacked : public ActionStacked
{
public:
    CREATE_FUNC(ActionMoveStacked);

    virtual std::string title() const;
    virtual void runActionsInSprite(cocos2d::Sprite* sprite);
};

class ActionMoveJumpStacked : public ActionStacked
{
public:
    CREATE_FUNC(ActionMoveJumpStacked);

    virtual std::string title() const;
    virtual void runActionsInSprite(cocos2d::Sprite* sprite);
};

class ActionMoveBezierStacked : public ActionStacked
{
public:
    CREATE_FUNC(ActionMoveBezierStacked);

    virtual std::string title() const;
    virtual void runActionsInSprite(cocos2d::Sprite* sprite);
};

class ActionCatmullRomStacked : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCatmullRomStacked);

    virtual ~ActionCatmullRomStacked();
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ActionCardinalSplineStacked : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCardinalSplineStacked);

    virtual ~ActionCardinalSplineStacked();
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue1305 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue1305);

    virtual void onEnter();
    virtual void onExit();
    void log(Node* sender);
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    cocos2d::Sprite* _spriteTmp;
};

class Issue1305_2 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue1305_2);

    virtual void onEnter();
    void printLog1();
    void printLog2();
    void printLog3();
    void printLog4();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue1288 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue1288);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue1288_2 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue1288_2);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue1327 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue1327);

    virtual void onEnter();
    virtual std::string subtitle() const;
    virtual std::string title() const;
    void logSprRotation(cocos2d::Sprite* sender);
};

class Issue1398 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue1398);

    void incrementInteger();
    void incrementIntegerCallback(void* data);
    virtual void onEnter();
    virtual std::string subtitle() const;
    virtual std::string title() const;
private:
    int _testInteger;
};

class Issue2599 : public ActionsDemo
{
public:
    CREATE_FUNC(Issue2599);
    
    virtual void onEnter();
    virtual std::string subtitle() const;
    virtual std::string title() const;
private:
    int _count;
};

class ActionCatmullRom : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCatmullRom);

    ~ActionCatmullRom();
    
    virtual void onEnter();
    virtual std::string subtitle() const;
    virtual std::string title() const;
};

class ActionCardinalSpline : public ActionsDemo
{
public:
    CREATE_FUNC(ActionCardinalSpline);

    ~ActionCardinalSpline();
    
    virtual void onEnter();
    virtual std::string subtitle() const;
    virtual std::string title() const;
};

class PauseResumeActions : public ActionsDemo
{
public:
    CREATE_FUNC(PauseResumeActions);

    PauseResumeActions();
    virtual ~PauseResumeActions();
    virtual void onEnter();
    virtual std::string subtitle() const;
    virtual std::string title() const;    
private:
    cocos2d::Vector<Node*> _pausedTargets;
};

class ActionFloatTest : public ActionsDemo
{
public:
    CREATE_FUNC(ActionFloatTest);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

#endif
