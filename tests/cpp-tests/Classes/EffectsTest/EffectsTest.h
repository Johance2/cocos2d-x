#ifndef _EFFECTS_TEST_H_
#define _EFFECTS_TEST_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(EffectTests);

class EffectBaseTest : public TestCase
{
public:
    EffectBaseTest();
    virtual ~EffectBaseTest();
protected:
    virtual bool init();
    virtual cocos2d::ActionInterval* createEffect(float t) {return nullptr;}
    void checkAnim(float dt);
    virtual bool isRectEffect(){return false;}
    virtual std::string title() const {return _title;};
    virtual std::string subtitle() const {return _subtitle;};
    std::string _title;
    std::string _subtitle;
    cocos2d::NodeGrid* _gridNodeTarget;
};

class Shaky3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(Shaky3DDemo);
    Shaky3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class Waves3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(Waves3DDemo);
    Waves3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class FlipX3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(FlipX3DDemo);
    FlipX3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class FlipY3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(FlipY3DDemo);
    FlipY3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class Lens3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(Lens3DDemo);
    Lens3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class Ripple3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(Ripple3DDemo);
    Ripple3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class LiquidDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(LiquidDemo);
    LiquidDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class WavesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(WavesDemo);
    WavesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class TwirlDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(TwirlDemo);
    TwirlDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class ShakyTiles3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(ShakyTiles3DDemo);
    ShakyTiles3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class ShatteredTiles3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(ShatteredTiles3DDemo);
    ShatteredTiles3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class ShuffleTilesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(ShuffleTilesDemo);
    ShuffleTilesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class FadeOutTRTilesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(FadeOutTRTilesDemo);
    FadeOutTRTilesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class FadeOutBLTilesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(FadeOutBLTilesDemo);
    FadeOutBLTilesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class FadeOutUpTilesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(FadeOutUpTilesDemo);
    FadeOutUpTilesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class FadeOutDownTilesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(FadeOutDownTilesDemo);
    FadeOutDownTilesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class TurnOffTilesDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(TurnOffTilesDemo);
    TurnOffTilesDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class WavesTiles3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(WavesTiles3DDemo);
    WavesTiles3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class JumpTiles3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(JumpTiles3DDemo);
    JumpTiles3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class SplitRowsDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(SplitRowsDemo);
    SplitRowsDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class SplitColsDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(SplitColsDemo);
    SplitColsDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class PageTurn3DDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(PageTurn3DDemo);
    PageTurn3DDemo();
protected:
    virtual cocos2d::ActionInterval* createEffect(float t);
};

class PageTurn3DRectDemo : public EffectBaseTest
{
public:
    CREATE_FUNC(PageTurn3DRectDemo);
    PageTurn3DRectDemo();
protected:
    virtual bool isRectEffect() {return true;}
    virtual cocos2d::ActionInterval* createEffect(float t);
};

#endif
