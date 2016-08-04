#ifndef _LAYER_TEST_H_
#define _LAYER_TEST_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(LayerTests);

class LayerTest : public TestCase
{
public:
    virtual std::string title() const;
protected:
    std::string    _title;
};

class LayerTestCascadingOpacityA : public LayerTest
{
public:
    CREATE_FUNC(LayerTestCascadingOpacityA);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class LayerTestCascadingOpacityB : public LayerTest
{
public:
    CREATE_FUNC(LayerTestCascadingOpacityB);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class LayerTestCascadingOpacityC : public LayerTest
{
public:
    CREATE_FUNC(LayerTestCascadingOpacityC);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class LayerTestCascadingColorA : public LayerTest
{
public:
    CREATE_FUNC(LayerTestCascadingColorA);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class LayerTestCascadingColorB : public LayerTest
{
public:
    CREATE_FUNC(LayerTestCascadingColorB);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class LayerTestCascadingColorC : public LayerTest
{
public:
    CREATE_FUNC(LayerTestCascadingColorC);
    virtual void onEnter();
    virtual std::string subtitle() const;
};


class LayerTest1 : public LayerTest
{
public:
    CREATE_FUNC(LayerTest1);

    virtual void onEnter();
    virtual std::string subtitle() const;

    void updateSize(cocos2d::Vec2 &touchLocation);

    void onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
};

class LayerTest2 : public LayerTest
{
public:
    CREATE_FUNC(LayerTest2);
    virtual void onEnter();
    virtual std::string subtitle() const;
};


class LayerTestBlend : public LayerTest
{
public:
    CREATE_FUNC(LayerTestBlend);

    LayerTestBlend();
    void newBlend(float dt);
    virtual std::string subtitle() const;
};

class LayerGradientTest : public LayerTest
{
public:
    CREATE_FUNC(LayerGradientTest);
    LayerGradientTest();
    void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void toggleItem(cocos2d::Ref *sender);
};

class LayerGradientTest2 : public LayerTest
{
public:
    CREATE_FUNC(LayerGradientTest2);
    LayerGradientTest2();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class LayerIgnoreAnchorPointPos : public LayerTest
{
public:
    CREATE_FUNC(LayerIgnoreAnchorPointPos);
    virtual void onEnter();
    void onToggle(cocos2d::Ref* pObject);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class LayerIgnoreAnchorPointRot : public LayerTest
{
public:
    CREATE_FUNC(LayerIgnoreAnchorPointRot);
    virtual void onEnter();
    void onToggle(cocos2d::Ref* pObject);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class LayerIgnoreAnchorPointScale : public LayerTest
{
public:
    CREATE_FUNC(LayerIgnoreAnchorPointScale);
    virtual void onEnter();
    void onToggle(cocos2d::Ref* pObject);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class LayerExtendedBlendOpacityTest : public LayerTest
{
public:
    CREATE_FUNC(LayerExtendedBlendOpacityTest);
    LayerExtendedBlendOpacityTest();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class LayerBug3162A : public LayerTest
{
public:
    CREATE_FUNC(LayerBug3162A);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
    void step(float dt);
    
private:
    cocos2d::LayerColor* _layer[3];
};

class LayerBug3162B : public LayerTest
{
public:
    CREATE_FUNC(LayerBug3162B);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
    void step(float dt);
    
private:
    cocos2d::LayerColor* _layer[3];
};

class LayerColorOccludeBug : public LayerTest
{
public:
    CREATE_FUNC(LayerColorOccludeBug);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
private:
    cocos2d::LayerColor* _layer;
};


#endif
