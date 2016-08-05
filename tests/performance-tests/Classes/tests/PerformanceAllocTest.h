/*
 *
 */
#ifndef __PERFORMANCE_ALLOC_TEST_H__
#define __PERFORMANCE_ALLOC_TEST_H__

#include "BaseTest.h"

DEFINE_TEST_SUITE(PerformceAllocTests);

class PerformceAllocScene : public TestCase
{
public:
    virtual bool init() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes);
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
    virtual void updateQuantityOfNodes() = 0;

    const char* profilerName();
    void updateProfilerName();

    // for the profiler
    virtual const char* testName() = 0;

    void updateQuantityLabel();

    int getQuantityOfNodes() { return quantityOfNodes; }

    void dumpProfilerInfo(float dt);

    // overrides
    virtual void onExitTransitionDidStart() ;
    virtual void onEnterTransitionDidFinish() ;

protected:
    PerformceAllocScene();
    char   _profilerName[256];
    int    lastRenderedCount;
    static int quantityOfNodes;
    int    currentQuantityOfNodes;
    int    autoTestIndex;
};

class NodeCreateTest : public PerformceAllocScene
{
public:
    CREATE_FUNC(NodeCreateTest);

    virtual void updateQuantityOfNodes() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes) ;
    virtual void update(float dt) ;
    virtual const char* testName() ;

    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class NodeDeallocTest : public PerformceAllocScene
{
public:
    CREATE_FUNC(NodeDeallocTest);

    virtual void updateQuantityOfNodes() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes) ;
    virtual void update(float dt) ;
    virtual const char* testName() ;

    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class SpriteCreateEmptyTest : public PerformceAllocScene
{
public:
    CREATE_FUNC(SpriteCreateEmptyTest);

    virtual void updateQuantityOfNodes() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes) ;
    virtual void update(float dt) ;
    virtual const char* testName() ;

    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class SpriteCreateTest : public PerformceAllocScene
{
public:
    CREATE_FUNC(SpriteCreateTest);

    virtual void updateQuantityOfNodes() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes) ;
    virtual void update(float dt) ;
    virtual const char* testName() ;

    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class SpriteDeallocTest : public PerformceAllocScene
{
public:
    CREATE_FUNC(SpriteDeallocTest);

    virtual void updateQuantityOfNodes() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes) ;
    virtual void update(float dt) ;
    virtual const char* testName() ;

    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

#endif // __PERFORMANCE_ALLOC_TEST_H__
