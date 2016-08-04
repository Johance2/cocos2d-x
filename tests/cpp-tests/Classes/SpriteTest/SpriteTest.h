/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org

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

#ifndef _SPRITE_TEST_H_
#define _SPRITE_TEST_H_

#include "cocos2d.h"
#include "../BaseTest.h"
#include <string>

DEFINE_TEST_SUITE(SpriteTests);

class SpriteTestDemo : public TestCase
{
protected:
    std::string    _title;

public:
};

class Sprite1 : public SpriteTestDemo
{
public:
    CREATE_FUNC(Sprite1);
    Sprite1();
    virtual std::string title() const;
    virtual std::string subtitle() const;

    void addNewSpriteWithCoords(cocos2d::Vec2 p);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
};

class Sprite1ETC1Alpha : public SpriteTestDemo
{
public:
    CREATE_FUNC(Sprite1ETC1Alpha);
    Sprite1ETC1Alpha();
    bool init();
    virtual std::string title() const;
    virtual std::string subtitle() const;

    void addNewSpriteWithCoords(cocos2d::Vec2 p);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);

    cocos2d::Sprite* _background;
};

class SpriteBatchNode1: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNode1);
    SpriteBatchNode1();
    void addNewSpriteWithCoords(cocos2d::Vec2 p);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteColorOpacity : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteColorOpacity);
    SpriteColorOpacity();
    void removeAndAddSprite(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;

};

class SpriteBatchNodeColorOpacity : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeColorOpacity);

    SpriteBatchNodeColorOpacity();
    void removeAndAddSprite(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteZOrder : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteZOrder);

    SpriteZOrder();
    void reorderSprite(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    int _dir;
};

class SpriteBatchNodeZOrder: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeZOrder);

    SpriteBatchNodeZOrder();
    void reorderSprite(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    int _dir;
};

class SpriteBatchNodeReorder : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeReorder);

    SpriteBatchNodeReorder();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeReorderIssue744: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeReorderIssue744);

    SpriteBatchNodeReorderIssue744();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeReorderIssue766 : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeReorderIssue766);

    SpriteBatchNodeReorderIssue766();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void reorderSprite(float dt);
    cocos2d::Sprite* makeSpriteZ(int aZ);

private:
    cocos2d::SpriteBatchNode* batchNode;
    cocos2d::Sprite* sprite1;
    cocos2d::Sprite* sprite2;
    cocos2d::Sprite* sprite3;    
};

class SpriteBatchNodeReorderIssue767 : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeReorderIssue767);

    SpriteBatchNodeReorderIssue767();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void reorderSprites(float dt);
};

class SpriteZVertex: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteZVertex);

    virtual void onEnter();
    virtual void onExit();
    SpriteZVertex();
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    int _dir;
    float _time;
};

class SpriteBatchNodeZVertex: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeZVertex);

    virtual void onEnter();
    virtual void onExit();
    SpriteBatchNodeZVertex();
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    int _dir;
    float _time;
};

class SpriteAnchorPoint : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteAnchorPoint);

    SpriteAnchorPoint();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeAnchorPoint : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeAnchorPoint);

    SpriteBatchNodeAnchorPoint();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteAnchorPointFromFile : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteAnchorPointFromFile);
    
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Sprite6 : public SpriteTestDemo
{
public:
    CREATE_FUNC(Sprite6);

    Sprite6();
    virtual std::string title() const;
};

class SpriteFlip : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteFlip);

    SpriteFlip();
    void flipSprites(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeFlip : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeFlip);
    SpriteBatchNodeFlip();
    void flipSprites(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteAliased : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteAliased);
    SpriteAliased();
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeAliased : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeAliased);
    SpriteBatchNodeAliased();
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteNewTexture : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteNewTexture);
    SpriteNewTexture();
    virtual ~SpriteNewTexture();
    void addNewSprite();
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    bool _usingTexture1;
    cocos2d::Texture2D* _texture1;
    cocos2d::Texture2D* _texture2;
};

class SpriteBatchNodeNewTexture : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeNewTexture);
    SpriteBatchNodeNewTexture();
    virtual ~SpriteBatchNodeNewTexture();
    void addNewSprite();
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    cocos2d::Texture2D*    _texture1;
    cocos2d::Texture2D*    _texture2;
};

class SpriteFrameTest: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteFrameTest);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;

    void startIn05Secs(float dt);
    void flipSprites(float dt);
private:
    
    cocos2d::Sprite* _sprite1;
    cocos2d::Sprite* _sprite2;
    int      _counter;
};

class SpriteFrameAliasNameTest : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteFrameAliasNameTest);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteFramesFromFileContent : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteFramesFromFileContent);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual std::string sheetName() const;
};

class SpritePolygonFromFileContent : public SpriteFramesFromFileContent
{
public:
    CREATE_FUNC(SpritePolygonFromFileContent);
    virtual std::string subtitle() const;
    virtual std::string sheetName() const;
};

class SpriteOffsetAnchorRotation: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorRotation);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorRotation: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorRotation);
    SpriteBatchNodeOffsetAnchorRotation();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteOffsetAnchorScale: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorScale);
    SpriteOffsetAnchorScale();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorScale: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorScale);
    SpriteBatchNodeOffsetAnchorScale();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteOffsetAnchorSkew : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorSkew);
    SpriteOffsetAnchorSkew();
    virtual ~SpriteOffsetAnchorSkew();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteOffsetAnchorRotationalSkew : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorRotationalSkew);
    SpriteOffsetAnchorRotationalSkew();
    virtual ~SpriteOffsetAnchorRotationalSkew();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorSkew : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorSkew);
    SpriteBatchNodeOffsetAnchorSkew();
    virtual ~SpriteBatchNodeOffsetAnchorSkew();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteOffsetAnchorRotationalSkewScale : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorRotationalSkewScale);
    SpriteOffsetAnchorRotationalSkewScale();
    virtual ~SpriteOffsetAnchorRotationalSkewScale();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorRotationalSkew : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorRotationalSkew);
    SpriteBatchNodeOffsetAnchorRotationalSkew();
    virtual ~SpriteBatchNodeOffsetAnchorRotationalSkew();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteOffsetAnchorSkewScale : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorSkewScale);
    SpriteOffsetAnchorSkewScale();
    virtual ~SpriteOffsetAnchorSkewScale();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorSkewScale : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorSkewScale);
    SpriteBatchNodeOffsetAnchorSkewScale();
    virtual ~SpriteBatchNodeOffsetAnchorSkewScale();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorRotationalSkewScale : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorRotationalSkewScale);
    SpriteBatchNodeOffsetAnchorRotationalSkewScale();
    virtual ~SpriteBatchNodeOffsetAnchorRotationalSkewScale();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteOffsetAnchorFlip : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteOffsetAnchorFlip);
    SpriteOffsetAnchorFlip();
    virtual ~SpriteOffsetAnchorFlip();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeOffsetAnchorFlip : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeOffsetAnchorFlip);
    SpriteBatchNodeOffsetAnchorFlip();
    virtual ~SpriteBatchNodeOffsetAnchorFlip();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteAnimationSplit : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteAnimationSplit);
    SpriteAnimationSplit();
    virtual void onExit();
    virtual std::string title() const;
};

class SpriteHybrid: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteHybrid);

    SpriteHybrid();
    void reparentSprite(float dt);
    virtual std::string title() const;
    virtual void onExit();

protected:
    bool     _usingSpriteBatchNode;
};

class SpriteBatchNodeChildren: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeChildren);
    SpriteBatchNodeChildren();
    virtual void onExit();
    virtual std::string title() const;
};

class SpriteBatchNodeChildrenZ : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeChildrenZ);
    SpriteBatchNodeChildrenZ();
    virtual void onExit();
    virtual std::string title() const;
};

class SpriteChildrenVisibility: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteChildrenVisibility);
    SpriteChildrenVisibility();
    virtual void onExit();
    virtual std::string title() const;
};

class SpriteChildrenVisibilityIssue665 : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteChildrenVisibilityIssue665);
    SpriteChildrenVisibilityIssue665();
    virtual ~SpriteChildrenVisibilityIssue665();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteChildrenAnchorPoint: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteChildrenAnchorPoint);
    SpriteChildrenAnchorPoint();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeChildrenAnchorPoint: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeChildrenAnchorPoint);
    SpriteBatchNodeChildrenAnchorPoint();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeChildrenScale: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeChildrenScale);
    SpriteBatchNodeChildrenScale();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteChildrenChildren: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteChildrenChildren);
    SpriteChildrenChildren();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};


class SpriteBatchNodeChildrenChildren: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeChildrenChildren);
    SpriteBatchNodeChildrenChildren();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteNilTexture: public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteNilTexture);
    SpriteNilTexture();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteSubclass : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteSubclass);
    SpriteSubclass();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class AnimationCacheTest : public SpriteTestDemo
{
public:
    CREATE_FUNC(AnimationCacheTest);
    AnimationCacheTest();
    virtual ~AnimationCacheTest();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class NodeSort : public SpriteTestDemo
{
public:
    CREATE_FUNC(NodeSort);
    NodeSort();

    virtual std::string title() const;
    virtual std::string subtitle() const;
    void reorderSprite(float dt);

private:
    cocos2d::Node* _node;
    cocos2d::Sprite* _sprite1;
    cocos2d::Sprite* _sprite2;
    cocos2d::Sprite* _sprite3;
    cocos2d::Sprite* _sprite4;
    cocos2d::Sprite* _sprite5;
};

class SpriteBatchNodeReorderSameIndex : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeReorderSameIndex);
    SpriteBatchNodeReorderSameIndex();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void reorderSprite(float dt);

private:
    cocos2d::SpriteBatchNode* _batchNode;
    cocos2d::Sprite* _sprite1;
    cocos2d::Sprite* _sprite2;
    cocos2d::Sprite* _sprite3;
    cocos2d::Sprite* _sprite4;
    cocos2d::Sprite* _sprite5;
};

class SpriteBatchNodeReorderOneChild : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeReorderOneChild);
    SpriteBatchNodeReorderOneChild();
    void reorderSprite(float dt);
    virtual std::string title() const;
private:
    cocos2d::SpriteBatchNode* _batchNode;
    cocos2d::Sprite* _reorderSprite;
};

class SpriteBatchNodeSkewNegativeScaleChildren : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeSkewNegativeScaleChildren);
    SpriteBatchNodeSkewNegativeScaleChildren();
    virtual ~SpriteBatchNodeSkewNegativeScaleChildren();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchNodeRotationalSkewNegativeScaleChildren : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchNodeRotationalSkewNegativeScaleChildren);
    SpriteBatchNodeRotationalSkewNegativeScaleChildren();
    virtual ~SpriteBatchNodeRotationalSkewNegativeScaleChildren();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteSkewNegativeScaleChildren : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteSkewNegativeScaleChildren);
    SpriteSkewNegativeScaleChildren();
    virtual ~SpriteSkewNegativeScaleChildren();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteRotationalSkewNegativeScaleChildren : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteRotationalSkewNegativeScaleChildren);
    SpriteRotationalSkewNegativeScaleChildren();
    virtual ~SpriteRotationalSkewNegativeScaleChildren();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteDoubleResolution : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteDoubleResolution);
    SpriteDoubleResolution();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class AnimationCacheFile : public SpriteTestDemo
{
public:
    CREATE_FUNC(AnimationCacheFile);

    AnimationCacheFile();
    virtual ~AnimationCacheFile();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteBatchBug1217 : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteBatchBug1217);
    SpriteBatchBug1217();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteCullTest1 : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteCullTest1);
    SpriteCullTest1();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteCullTest2 : public SpriteTestDemo
{
public:
    CREATE_FUNC(SpriteCullTest2);
    SpriteCullTest2();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Sprite3DRotationTest : public SpriteTestDemo
{
public:
    CREATE_FUNC(Sprite3DRotationTest);
    Sprite3DRotationTest();
    virtual std::string title() const { return "3D Rotation Test"; };
    virtual std::string subtitle() const { return "Rotation should based on the anchor point"; };
    
protected:
    cocos2d::Sprite* sprite1;
    cocos2d::Sprite* sprite2;
    
    cocos2d::Vec3 rotation;
};

#endif
