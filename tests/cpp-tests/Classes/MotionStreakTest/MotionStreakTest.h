#ifndef _MOTION_STREAK_TEST_H_
#define _MOTION_STREAK_TEST_H_

#include "../BaseTest.h"


DEFINE_TEST_SUITE(MotionStreakTests);

class MotionStreakTest : public TestCase
{
public:
    MotionStreakTest(void);
    ~MotionStreakTest(void);

    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void onEnter();

    void modeCallback(cocos2d::Ref* sender);
protected:
    cocos2d::MotionStreak* _streak;
};

class MotionStreakTest1 : public MotionStreakTest
{
protected:
    cocos2d::Node*        _root;
    cocos2d::Node*        _target;

public:
    CREATE_FUNC(MotionStreakTest1);
    virtual void onEnter();
    void onUpdate(float delta);
    virtual std::string title() const;
};

class MotionStreakTest2 : public MotionStreakTest
{
protected:
    cocos2d::Node*        _root;
    cocos2d::Node*        _target;

public:
    CREATE_FUNC(MotionStreakTest2);
    virtual void onEnter();
    void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    virtual std::string title() const;
};

class Issue1358 : public MotionStreakTest
{
public:
    CREATE_FUNC(Issue1358);

    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void onEnter();
    virtual void update(float dt);
private:
    cocos2d::Vec2 _center;
    float _radius;
    float _angle;
};

class Issue12226 : public MotionStreakTest
{
public:
    CREATE_FUNC(Issue12226);

    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void onEnter();
};


#endif
