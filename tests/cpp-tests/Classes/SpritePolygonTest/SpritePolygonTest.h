#ifndef __cocos2d_tests__SpritePolygonTest__

#include "../BaseTest.h"
#include "ui/CocosGUI.h"

DEFINE_TEST_SUITE(SpritePolygonTest);

class SpritePolygonTestCase : public TestCase
{
protected:
    std::string _title;
    std::string _subtitle;
    bool _isDebugDraw;
    bool _isNeedDebugMenu;
    cocos2d::Vector<cocos2d::DrawNode* > _drawNodes;
    virtual std::string title() const {return _title;};
    virtual std::string subtitle() const {return _subtitle;};
    virtual bool init();
    virtual void onEnter()override;
    virtual void onExit()override;
    SpritePolygonTestCase();
    ~SpritePolygonTestCase();
    void updateDrawNode();
};

class SpritePolygonTestDemo : public SpritePolygonTestCase
{
protected:
    cocos2d::Sprite* _polygonSprite;
    cocos2d::Sprite* _normalSprite;
    virtual bool init();
    virtual void initSprites(){};
    void initTouches();
};

class SpritePolygonTest1 : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(SpritePolygonTest1);
    SpritePolygonTest1();
    void initSprites();
};

class SpritePolygonTest2 : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(SpritePolygonTest2);
    SpritePolygonTest2();
    virtual void initSprites();
};

class SpritePolygonTestSlider : public SpritePolygonTestCase
{
protected:
    cocos2d::Label *_epsilonLabel;
    int _tagIndex;
    cocos2d::Sprite* makeSprite(const std::string& filename, const cocos2d::Vec2& pos);
    virtual bool init();
    void initSliders();
    virtual void initSprites(){};
    void makeSprites(const std::string* list, const int count, const float y);
    void changeEpsilon(Ref *pSender, cocos2d::ui::Slider::EventType type);
    void updateLabel(const cocos2d::Sprite* sp, const cocos2d::PolygonInfo &pinfo);
};

class SpritePolygonTest3 : public SpritePolygonTestSlider
{
public:
    CREATE_FUNC(SpritePolygonTest3);
    SpritePolygonTest3();
    void initSprites();
};

class SpritePolygonTest4 : public SpritePolygonTestSlider
{
public:
    CREATE_FUNC(SpritePolygonTest4);
    SpritePolygonTest4();
    void initSprites();
};

class SpritePolygonTest5 : public SpritePolygonTestCase
{
public:
    CREATE_FUNC(SpritePolygonTest5);
    SpritePolygonTest5();
protected:
    virtual bool init();
    void initTouch();
    void loadDefaultSprites();
    void addSpritePolygon(const cocos2d::Vec2& pos);
    void update(float dt)override;
private:
    cocos2d::PolygonInfo _polygonInfo;
    int _tagIndex;
};

class SpritePolygonPerformance : public SpritePolygonTestCase
{
public:
    CREATE_FUNC(SpritePolygonPerformance);
    SpritePolygonPerformance();
protected:
    int _spriteCount;
    int _vertCount;
    int _triCount;
    int _pixelCount;
    float _elapsedTime;
    cocos2d::Label * _perfLabel;
    int _continuousLowDt;
    float _continuousHighDtTime;
    float _waitingTime;

    int _posX;
    int _posY;
    int _leftX;
    int _rightX;
    bool goRight;
    bool ended;
    
    float prevDt;
    
    unsigned int _incVert;
    unsigned int _incTri;
    unsigned int _incPix;

    void updateLabel();
    virtual void update(float dt)override;
    virtual bool init();
    virtual Node* makeSprite();
    void incrementStats();
    virtual void initIncrementStats(){};
};

class SpritePolygonPerformanceTestDynamic : public SpritePolygonPerformance
{
public:
    CREATE_FUNC(SpritePolygonPerformanceTestDynamic);
    SpritePolygonPerformanceTestDynamic();
protected:
    cocos2d::Sprite* makeSprite();
    cocos2d::PolygonInfo _pinfo;
    virtual void initIncrementStats();
};

class SpritePerformanceTestDynamic : public SpritePolygonPerformance
{
public:
    CREATE_FUNC(SpritePerformanceTestDynamic);
    SpritePerformanceTestDynamic();
protected:
    virtual cocos2d::Sprite* makeSprite();
    virtual void initIncrementStats();
};

class SpritePolygonTestNoCrash : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(SpritePolygonTestNoCrash);
    SpritePolygonTestNoCrash();
    virtual void initSprites();
};

class SpritePolygonTestTPIsland : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(SpritePolygonTestTPIsland);
    SpritePolygonTestTPIsland();
    virtual void initSprites();
};

class SpritePolygonTestAutoPolyIsland : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(SpritePolygonTestAutoPolyIsland);
    SpritePolygonTestAutoPolyIsland();
    virtual void initSprites();
};

class SpritePolygonTestFrameAnim : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(SpritePolygonTestFrameAnim);
    SpritePolygonTestFrameAnim();
    virtual void initSprites();
};

class Issue14017Test : public SpritePolygonTestDemo
{
public:
    CREATE_FUNC(Issue14017Test);
    Issue14017Test();
    virtual void initSprites();
};

#endif /* defined(__cocos2d_tests__SpritePolygonTest__) */
