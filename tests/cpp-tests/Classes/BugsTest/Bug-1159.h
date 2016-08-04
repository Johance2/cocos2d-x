#ifndef __BUG_1159_H__
#define __BUG_1159_H__

#include "BugsTest.h"

class Bug1159Layer : public BugsTestBase
{
public:
    virtual bool init();
    virtual void onExit();

    void callBack(cocos2d::Ref* sender);

    CREATE_FUNC(Bug1159Layer);
};

#endif // __BUG_1159_H__
