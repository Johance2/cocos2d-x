#ifndef _EFFECT_ADVANCED_TEST_H_
#define _EFFECT_ADVANCED_TEST_H_

#include "cocos2d.h"
#include "../BaseTest.h"

DEFINE_TEST_SUITE(EffectAdvanceTests);

class EffectAdvanceBaseTest: public TestCase
{
protected:
    cocos2d::TextureAtlas* _atlas;

    std::string    _title;

    cocos2d::Node* _bgNode;
    cocos2d::Node* _target1;
    cocos2d::Node* _target2;

public:
    virtual void onEnter();
    ~EffectAdvanceBaseTest(void);

    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Effect1 : public EffectAdvanceBaseTest
{
public:
    CREATE_FUNC(Effect1);
    virtual void onEnter();
    virtual std::string title() const;
};

class Effect2 : public EffectAdvanceBaseTest
{
public:
    CREATE_FUNC(Effect2);
    virtual void onEnter();
    virtual std::string title() const;
};

class Effect3 : public EffectAdvanceBaseTest
{
public:
    CREATE_FUNC(Effect3);
    virtual void onEnter();
    virtual std::string title() const;
};

class Effect4 : public EffectAdvanceBaseTest
{
public:
    CREATE_FUNC(Effect4);
    virtual void onEnter();
    virtual std::string title() const;
};

class Effect5 : public EffectAdvanceBaseTest
{
public:
    CREATE_FUNC(Effect5);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
};

class Issue631 : public EffectAdvanceBaseTest
{
public:
    CREATE_FUNC(Issue631);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

#endif
