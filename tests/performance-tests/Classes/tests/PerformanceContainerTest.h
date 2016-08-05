/*
 *
 */
#ifndef __PERFORMANCE_CONTAINER_TEST_H__
#define __PERFORMANCE_CONTAINER_TEST_H__

#include "BaseTest.h"

DEFINE_TEST_SUITE(PerformceContainerTests);

class PerformanceContainerScene : public TestCase
{
public:
    static const int TAG_TITLE = 100;
    static const int TAG_SUBTITLE = 101;
    
    struct TestFunction
    {
        const char* name;
        std::function<void()> func;
    };
    
    virtual bool init() ;
    virtual void initWithQuantityOfNodes(unsigned int nNodes);
    virtual void generateTestFunctions() = 0;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
    virtual void updateQuantityOfNodes();
    
    void switchTestType(unsigned int index);
    void updateStatus();
    const char* profilerName();
    void updateProfilerName();
    
    // for the profiler
    virtual const char* testName();
    void updateQuantityLabel();
    int getQuantityOfNodes() { return quantityOfNodes; }
    void dumpProfilerInfo(float dt);
    
    // overrides
    virtual void update(float dt) ;
    virtual void onEnter() ;
    virtual void onExit() ;
    
protected:
    static int quantityOfNodes;

    char   _profilerName[256];
    int    lastRenderedCount;
    int    currentQuantityOfNodes;
    unsigned int _type;
    std::vector<TestFunction> _testFunctions;
    std::string _typePrefix;
    
    cocos2d::MenuItemFont* _increase;
    cocos2d::MenuItemFont* _decrease;
    cocos2d::MenuItemFont* _startItem;
    cocos2d::MenuItemFont* _stopItem;
    cocos2d::MenuItemToggle* _toggle;

    int autoTestCountIndex;
};

class TemplateVectorPerfTest : public PerformanceContainerScene
{
public:
    CREATE_FUNC(TemplateVectorPerfTest);
    
    virtual void generateTestFunctions() ;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class ArrayPerfTest : public PerformanceContainerScene
{
public:
    CREATE_FUNC(ArrayPerfTest);
    
    virtual void generateTestFunctions() ;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class TemplateMapStringKeyPerfTest : public PerformanceContainerScene
{
public:
    CREATE_FUNC(TemplateMapStringKeyPerfTest);
    
    virtual void generateTestFunctions() ;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class DictionaryStringKeyPerfTest : public PerformanceContainerScene
{
public:
    CREATE_FUNC(DictionaryStringKeyPerfTest);
    
    virtual void generateTestFunctions() ;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class TemplateMapIntKeyPerfTest : public PerformanceContainerScene
{
public:
    CREATE_FUNC(TemplateMapIntKeyPerfTest);
    
    virtual void generateTestFunctions() ;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

class DictionaryIntKeyPerfTest : public PerformanceContainerScene
{
public:
    CREATE_FUNC(DictionaryIntKeyPerfTest);
    
    virtual void generateTestFunctions() ;
    
    virtual std::string title() const ;
    virtual std::string subtitle() const ;
};

#endif // __PERFORMANCE_CONTAINER_TEST_H__
