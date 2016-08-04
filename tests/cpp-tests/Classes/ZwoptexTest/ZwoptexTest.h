#ifndef __ZWOPTEX_TEST_H__
#define __ZWOPTEX_TEST_H__

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ZwoptexTests);

class ZwoptexTest : public TestCase
{
public:
};

class ZwoptexGenericTest : public ZwoptexTest
{
public:
    CREATE_FUNC(ZwoptexGenericTest);

    virtual ~ZwoptexGenericTest();

    virtual void onEnter();
    void flipSprites(float dt);
    void startIn05Secs(float dt);

    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    cocos2d::Sprite*  sprite1;
    cocos2d::Sprite*  sprite2;
    int counter;
};

#endif // __ZWOPTEX_TEST_H__
