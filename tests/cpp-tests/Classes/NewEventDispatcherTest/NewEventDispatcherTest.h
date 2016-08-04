//
//  NewEventDispatcherTest.h
//  samples
//
//  Created by James Chen on 9/13/13.
//
//

#ifndef __samples__NewEventDispatcherTest__
#define __samples__NewEventDispatcherTest__

#include "cocos2d.h"
#include "../BaseTest.h"

DEFINE_TEST_SUITE(EventDispatcherTests);

class EventDispatcherTestDemo : public TestCase
{
public:
    virtual std::string title() const;
};


class TouchableSpriteTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(TouchableSpriteTest);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class FixedPriorityTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(FixedPriorityTest);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class RemoveListenerWhenDispatching : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(RemoveListenerWhenDispatching);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class CustomEventTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(CustomEventTest);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    cocos2d::EventListenerCustom* _listener;
    cocos2d::EventListenerCustom* _listener2;
};

class LabelKeyboardEventTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(LabelKeyboardEventTest);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class SpriteAccelerationEventTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(SpriteAccelerationEventTest);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class RemoveAndRetainNodeTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(RemoveAndRetainNodeTest);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    cocos2d::Sprite* _sprite;
    bool _spriteSaved;
};

class RemoveListenerAfterAddingTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(RemoveListenerAfterAddingTest);
    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class DirectorEventTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(DirectorEventTest);
    DirectorEventTest();
    virtual void onEnter();
    virtual void onExit();

    virtual void update(float dt);

    void onEvent1(cocos2d::EventCustom* event);
    void onEvent2(cocos2d::EventCustom* event);

    virtual std::string title() const;
    virtual std::string subtitle() const;

protected:
    int _count1, _count2, _count3, _count4;
    cocos2d::Label* _label1, *_label2, *_label3, *_label4;
    cocos2d::EventListenerCustom* _event1, *_event2, *_event3, *_event4;
};

class GlobalZTouchTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(GlobalZTouchTest);
    GlobalZTouchTest();
    
    virtual void update(float dt);
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
protected:
    cocos2d::Sprite* _sprite;
    float _accum;
};

class StopPropagationTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(StopPropagationTest);
    StopPropagationTest();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
protected:
    bool isPointInNode(cocos2d::Vec2 pt, cocos2d::Node* node);
    bool isPointInTopHalfAreaOfScreen(cocos2d::Vec2 pt);
};

class PauseResumeTargetTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(PauseResumeTargetTest);
    PauseResumeTargetTest();
    virtual ~PauseResumeTargetTest();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
private:
};

class Issue4129 : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(Issue4129);
    Issue4129();
    virtual ~Issue4129();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
private:
    cocos2d::EventListenerCustom* _customlistener;
    bool _bugFixed;
};

class Issue4160 : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(Issue4160);
    Issue4160();
    virtual ~Issue4160();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
private:
};

class DanglingNodePointersTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(DanglingNodePointersTest);
    DanglingNodePointersTest();
    virtual ~DanglingNodePointersTest();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class RegisterAndUnregisterWhileEventHanldingTest : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(RegisterAndUnregisterWhileEventHanldingTest);
    RegisterAndUnregisterWhileEventHanldingTest();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue8194 : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(Issue8194);
    Issue8194();
    virtual ~Issue8194();
    
    virtual std::string title() const;
    virtual std::string subtitle() const;
    
private:
    cocos2d::EventListenerCustom* _listener;
};

class Issue9898 : public EventDispatcherTestDemo
{
public:
    CREATE_FUNC(Issue9898);
    Issue9898();

    virtual std::string title() const;
    virtual std::string subtitle() const;

private:
    cocos2d::EventListenerCustom* _listener;
};

#endif /* defined(__samples__NewEventDispatcherTest__) */
