#ifndef _ACTION_MANAGER_TEST_H_
#define _ACTION_MANAGER_TEST_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ActionManagerTests);

class ActionManagerTest : public TestCase
{
protected:
    cocos2d::TextureAtlas* _atlas;

    std::string    _title;

public:
    ActionManagerTest();
    ~ActionManagerTest();

    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class CrashTest : public ActionManagerTest
{
public:
    CREATE_FUNC(CrashTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void removeThis();
};

class LogicTest : public ActionManagerTest
{
public:
    CREATE_FUNC(LogicTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void bugMe(Node* node);
};

class PauseTest : public ActionManagerTest
{
public:
    CREATE_FUNC(PauseTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void unpause(float dt);
};

class StopActionTest : public ActionManagerTest
{
public:
    CREATE_FUNC(StopActionTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void stopAction();
};

class StopAllActionsTest : public ActionManagerTest
{
public:
    CREATE_FUNC(StopAllActionsTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void stopAction(float time);
};

class ResumeTest : public ActionManagerTest
{
public:
    CREATE_FUNC(ResumeTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void resumeGrossini(float time);
};

class StopActionsByFlagsTest : public ActionManagerTest
{
public:
    CREATE_FUNC(StopActionsByFlagsTest);

    virtual std::string subtitle() const;
    virtual void onEnter();
    void stopAction(float time);
protected:
    static const unsigned int kMoveFlag = 0x01;
    static const unsigned int kScaleFlag = 0x02;
    static const unsigned int kRotateFlag = 0x04;
    static const unsigned int kRepeatForeverFlag = 0x08; // You don't need this for the test, but it's for demonstration how to activate several flags on an action.
};

class Issue14050Test : public ActionManagerTest
{
public:
    CREATE_FUNC(Issue14050Test);

    virtual std::string subtitle() const;
    virtual void onEnter();
protected:
};

#endif
