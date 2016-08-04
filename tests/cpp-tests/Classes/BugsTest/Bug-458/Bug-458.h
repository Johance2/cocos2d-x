#ifndef __BUG_458_H__
#define __BUG_458_H__

#include "../BugsTest.h"

class Bug458Layer : public BugsTestBase
{
public:
    CREATE_FUNC(Bug458Layer);

    virtual bool init();
    void selectAnswer(cocos2d::Ref* sender);
};

#endif // __BUG_458_H__
