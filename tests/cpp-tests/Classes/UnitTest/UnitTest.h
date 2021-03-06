#ifndef __UNIT_TEST__
#define __UNIT_TEST__

#include "../BaseTest.h"

DEFINE_TEST_SUITE(UnitTests);

class UnitTestDemo : public TestCase
{
public:
    virtual std::string title() const;
};

//-------------------------------------

class TemplateVectorTest : public UnitTestDemo
{
public:
    CREATE_FUNC(TemplateVectorTest);
    virtual void onEnter();
    virtual std::string subtitle() const;
    void constFunc(const cocos2d::Vector<Node*>& vec) const;
};

class TemplateMapTest : public UnitTestDemo
{
public:
    CREATE_FUNC(TemplateMapTest);
    virtual void onEnter();
    virtual std::string subtitle() const;
    void constFunc(const cocos2d::Map<std::string, cocos2d::Node*>& map) const;
};

class ValueTest : public UnitTestDemo
{
public:
    CREATE_FUNC(ValueTest);
    virtual void onEnter();
    virtual std::string subtitle() const;
    void constFunc(const cocos2d::Value& value) const;
};

class UTFConversionTest : public UnitTestDemo
{
public:
    CREATE_FUNC(UTFConversionTest);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class UIHelperSubStringTest : public UnitTestDemo
{
public:
    CREATE_FUNC(UIHelperSubStringTest);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class MathUtilTest : public UnitTestDemo
{
public:
    CREATE_FUNC(MathUtilTest);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

#endif /* __UNIT_TEST__ */
