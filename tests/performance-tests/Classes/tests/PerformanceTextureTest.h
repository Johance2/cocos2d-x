#ifndef __PERFORMANCE_TEXTURE_TEST_H__
#define __PERFORMANCE_TEXTURE_TEST_H__

#include "BaseTest.h"

DEFINE_TEST_SUITE(PerformceTextureTests);

class TexturePerformceTest : public TestCase
{
public:
    CREATE_FUNC(TexturePerformceTest);

    virtual void performTests();
    void performTestsPNG(const char* filename, const char* fileType, const char* resolution, const char* remark);

    virtual std::string title() const ;
    virtual std::string subtitle() const ;
    virtual void onEnter() ;
};

#endif
