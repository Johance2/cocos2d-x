/*
 *
 */
#ifndef __RELEASE_POOL_TEST_H__
#define __RELEASE_POOL_TEST_H__

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ReleasePoolTests);
class ReleasePoolTest : public TestCase
{
public:
    CREATE_FUNC(ReleasePoolTest);

    virtual bool init();
private:
    
};

#endif // __RELEASE_POOL_TEST_H__
