#ifndef __PERFORMANCE_PARTICLE_TEST_H__
#define __PERFORMANCE_PARTICLE_TEST_H__

#include "BaseTest.h"

DEFINE_TEST_SUITE(PerformceParticleTests);

class ParticleMainScene : public TestCase
{
public:
    ParticleMainScene();
    virtual bool init() ;
    virtual void initWithSubTest(int subtest, int particles);

    void step(float dt);
    void createParticleSystem();
    void testNCallback(cocos2d::Ref* sender);
    void updateQuantityLabel();
    void updateTitle();
    virtual void doTest();

    // overrides
    virtual void onExitTransitionDidStart() ;
    virtual void onEnterTransitionDidFinish() ;
    void beginStat(float dt);
    void endStat(float dt);
    void doAutoTest();

protected:
    int        lastRenderedCount;
    static int quantityParticles;
    static int subtestNumber;
    int        particleSize;

    bool       isStating;
    int        autoTestIndex;
    int        statCount;
    float      totalStatTime;
    float      minFrameRate;
    float      maxFrameRate;
};

class ParticlePerformTest1 : public ParticleMainScene
{
public:
    CREATE_FUNC(ParticlePerformTest1);

    virtual std::string title() const ;
    virtual void initWithSubTest(int subtest, int particles) ;
};

class ParticlePerformTest2 : public ParticleMainScene
{
public:
    CREATE_FUNC(ParticlePerformTest2);

    virtual std::string title() const ;
    virtual void initWithSubTest(int subtest, int particles) ;
};

class ParticlePerformTest3 : public ParticleMainScene
{
public:
    CREATE_FUNC(ParticlePerformTest3);

    virtual std::string title() const ;
    virtual void initWithSubTest(int subtest, int particles) ;
};

class ParticlePerformTest4 : public ParticleMainScene
{
public:
    CREATE_FUNC(ParticlePerformTest4);

    virtual std::string title() const ;
    virtual void initWithSubTest(int subtest, int particles) ;
};

#endif
