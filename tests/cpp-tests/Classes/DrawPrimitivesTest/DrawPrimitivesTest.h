#ifndef _DRAW_PRIMITIVES_TEST_H_
#define _DRAW_PRIMITIVES_TEST_H_

#include "cocos2d.h"
#include "../BaseTest.h"

#include <string>

DEFINE_TEST_SUITE(DrawPrimitivesTests);

class DrawPrimitivesBaseTest : public TestCase
{
public:
    virtual std::string title() const;
};

class DrawPrimitivesTest : public DrawPrimitivesBaseTest
{
public:
    CREATE_FUNC(DrawPrimitivesTest);
    DrawPrimitivesTest();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void draw(cocos2d::Renderer* renderer, const cocos2d::Mat4& transform, uint32_t flags);

protected:
    void onDraw(const cocos2d::Mat4& transform, uint32_t flags);
    cocos2d::CustomCommand _customCommand;
};

class DrawNodeTest : public DrawPrimitivesBaseTest
{
public:
    CREATE_FUNC(DrawNodeTest);

    DrawNodeTest();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class PrimitivesCommandTest : public DrawPrimitivesBaseTest
{
public:
    CREATE_FUNC(PrimitivesCommandTest);

    PrimitivesCommandTest();
    virtual ~PrimitivesCommandTest();

    virtual void draw(cocos2d::Renderer* renderer, const cocos2d::Mat4& transform, uint32_t flags);
    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    cocos2d::Texture2D* _texture;
    cocos2d::GLProgramState* _programState;
    cocos2d::Primitive* _primitive;

    cocos2d::PrimitiveCommand _primitiveCommand;
};

class Issue11942Test : public DrawPrimitivesBaseTest
{
public:
    CREATE_FUNC(Issue11942Test);

    Issue11942Test();

    virtual std::string title() const;
    virtual std::string subtitle() const;

};

#endif
