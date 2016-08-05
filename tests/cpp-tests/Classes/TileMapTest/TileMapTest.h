#ifndef _TILEMAP_TEST_H_
#define _TILEMAP_TEST_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(TileMapTests);

class TileDemo : public TestCase
{
public:
    TileDemo();
    virtual ~TileDemo();

    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void onExit();

    void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
};

class TileMapTest : public TileDemo
{
public:
    CREATE_FUNC(TileMapTest);
    TileMapTest();
    virtual std::string title() const;
};

class TileMapEditTest : public TileDemo
{
public:
    CREATE_FUNC(TileMapEditTest);
    TileMapEditTest ();
    virtual std::string title() const;

    void updateMap(float dt);
};

class TMXOrthoTest : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoTest);
    TMXOrthoTest();
    virtual std::string title() const;

    virtual void onEnter();
    virtual void onExit();
};

class TMXStaggeredTest : public TileDemo
{
public:
    CREATE_FUNC(TMXStaggeredTest);
    TMXStaggeredTest();
    virtual std::string title() const;
    
    virtual void onEnter();
    virtual void onExit();
};

class TMXOrthoTest2 : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoTest2);
    TMXOrthoTest2();
    virtual std::string title() const;
};

class TMXOrthoTest3 : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoTest3);
    TMXOrthoTest3();
    virtual std::string title() const;
};

class TMXOrthoTest4 : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoTest4);
    TMXOrthoTest4();
    void removeSprite(float dt);
    virtual std::string title() const;
};

class TMXReadWriteTest : public TileDemo
{
    unsigned int _gid;
    unsigned int _gid2;
public:
    CREATE_FUNC(TMXReadWriteTest);
    TMXReadWriteTest();
    virtual std::string title() const;

    void removeSprite(Node* sender);
    void updateCol(float dt);
    void repaintWithGID(float dt);
    void removeTiles(float dt);
};

class TMXHexTest : public TileDemo
{
public:
    CREATE_FUNC(TMXHexTest);
    TMXHexTest();
    virtual std::string title() const;
};

class TMXIsoTest : public TileDemo
{
public:
    CREATE_FUNC(TMXIsoTest);
    TMXIsoTest();
    virtual std::string title() const;
};

class TMXIsoTest1 : public TileDemo
{
public:
    CREATE_FUNC(TMXIsoTest1);
    TMXIsoTest1();
    virtual std::string title() const;
};

class TMXIsoTest2 : public TileDemo
{
public:
    CREATE_FUNC(TMXIsoTest2);
    TMXIsoTest2();
    virtual std::string title() const;
};

class TMXUncompressedTest : public TileDemo
{
public:
    CREATE_FUNC(TMXUncompressedTest);
    TMXUncompressedTest();
    virtual std::string title() const;
};

class TMXTilesetTest : public TileDemo
{
public:
    CREATE_FUNC(TMXTilesetTest);
    TMXTilesetTest();
    virtual std::string title() const;
};

class TMXCvsFormatTest : public TileDemo
{
public:
    CREATE_FUNC(TMXCvsFormatTest);
    TMXCvsFormatTest();
    virtual std::string title() const;
};

class TMXOrthoObjectsTest : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoObjectsTest);
    TMXOrthoObjectsTest();
    virtual std::string title() const;

    virtual std::string subtitle() const;
};

class TMXIsoObjectsTest : public TileDemo
{
public:
    CREATE_FUNC(TMXIsoObjectsTest);
    TMXIsoObjectsTest();
    virtual std::string title() const;

    virtual std::string subtitle() const;
};

class TMXResizeTest : public TileDemo
{
public:
    CREATE_FUNC(TMXResizeTest);
    TMXResizeTest();
    virtual std::string title() const;

    virtual std::string subtitle() const;
};

class TMXIsoZorder : public TileDemo
{
    cocos2d::Sprite*    _tamara;
public:
    CREATE_FUNC(TMXIsoZorder);
    TMXIsoZorder();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void onExit();

    ~TMXIsoZorder();
    void repositionSprite(float dt);
};

class TMXOrthoZorder : public TileDemo
{
    cocos2d::Sprite*    _tamara;
public:
    CREATE_FUNC(TMXOrthoZorder);
    TMXOrthoZorder();
    virtual std::string title() const;
    virtual std::string subtitle() const;

    virtual ~TMXOrthoZorder();
    void repositionSprite(float dt);
};

class TMXIsoVertexZ : public TileDemo
{
    cocos2d::Sprite*    _tamara;
public:
    CREATE_FUNC(TMXIsoVertexZ);
    TMXIsoVertexZ();
    virtual std::string title() const;
    virtual std::string subtitle() const;

    ~TMXIsoVertexZ();
    void repositionSprite(float dt);
    virtual void onEnter();
    virtual void onExit();
};

class TMXOrthoVertexZ : public TileDemo
{
    cocos2d::Sprite*    _tamara;
public:
    CREATE_FUNC(TMXOrthoVertexZ);
    TMXOrthoVertexZ();
    virtual std::string title() const;
    virtual std::string subtitle() const;

    ~TMXOrthoVertexZ();
    void repositionSprite(float dt);
    virtual void onEnter();
    virtual void onExit();
};

class TMXIsoMoveLayer : public TileDemo
{
public:
    CREATE_FUNC(TMXIsoMoveLayer);
    TMXIsoMoveLayer();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TMXOrthoMoveLayer : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoMoveLayer);
    TMXOrthoMoveLayer();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TMXTilePropertyTest : public TileDemo
{
public:
    CREATE_FUNC(TMXTilePropertyTest);
    TMXTilePropertyTest();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TMXOrthoFlipTest : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoFlipTest);
    TMXOrthoFlipTest();
    virtual std::string title() const;
};

class TMXOrthoFlipRunTimeTest : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoFlipRunTimeTest);
    TMXOrthoFlipRunTimeTest();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void flipIt(float dt);
};

class TMXOrthoFromXMLTest : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoFromXMLTest);
    TMXOrthoFromXMLTest();
    virtual std::string title() const;
};

class TMXOrthoXMLFormatTest : public TileDemo
{
public:
    CREATE_FUNC(TMXOrthoXMLFormatTest);
    TMXOrthoXMLFormatTest();
    virtual std::string title() const;
};

class TMXBug987 : public TileDemo
{
public:
    CREATE_FUNC(TMXBug987);
    TMXBug987();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TMXBug787 : public TileDemo
{
public:
    CREATE_FUNC(TMXBug787);
    TMXBug787();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TMXGIDObjectsTest : public TileDemo
{
public:
    CREATE_FUNC(TMXGIDObjectsTest);
    TMXGIDObjectsTest();
    virtual std::string title() const;
    virtual std::string subtitle() const;    
};

class TMXHexOddXTest : public TileDemo
{
public:
    CREATE_FUNC(TMXHexOddXTest);
    TMXHexOddXTest();
    virtual std::string title() const;
};

class TMXHexOddYTest : public TileDemo
{
public:
    CREATE_FUNC(TMXHexOddYTest);
    TMXHexOddYTest();
    virtual std::string title() const;
};

class TMXHexEvenXTest : public TileDemo
{
public:
    CREATE_FUNC(TMXHexEvenXTest);
    TMXHexEvenXTest();
    virtual std::string title() const;
};

class TMXHexEvenYTest : public TileDemo
{
public:
    CREATE_FUNC(TMXHexEvenYTest);
    TMXHexEvenYTest();
    virtual std::string title() const;
};

class TMXHexAxisXTest : public TileDemo
{
public:
    CREATE_FUNC(TMXHexAxisXTest);
    TMXHexAxisXTest();
    virtual std::string title() const;

};

class Issue16105Test : public TileDemo
{
public:
    CREATE_FUNC(Issue16105Test);
    Issue16105Test();
    virtual std::string title() const;

};

#endif
