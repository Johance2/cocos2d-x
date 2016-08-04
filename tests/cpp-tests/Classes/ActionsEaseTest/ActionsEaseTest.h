/****************************************************************************
 Copyright (c) 2012 cocos2d-x.org
 Copyright (c) 2013-2014 Chukong Technologies Inc.

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef _ACTIONS__EASE_TEST_H_
#define _ACTIONS__EASE_TEST_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ActionsEaseTests);

class EaseSpriteDemo : public TestCase
{
protected:
    cocos2d::Sprite*    _grossini;
    cocos2d::Sprite*    _tamara;
    cocos2d::Sprite*    _kathia;

    std::string    _title;

public:
    EaseSpriteDemo(void);
    ~EaseSpriteDemo(void);

    virtual std::string subtitle() const;
    virtual void onEnter();
    
    void centerSprites(unsigned int numberOfSprites);

    void positionForTwo();
};

class SpriteEase : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEase);

    void onEnter();
    virtual std::string subtitle() const;

    void testStopAction(float dt);
};

class SpriteEaseInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseExponential : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseExponential);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseExponentialInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseExponentialInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseSine : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseSine);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseSineInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseSineInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseElastic : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseElastic);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseElasticInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseElasticInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseBounce : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseBounce);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseBounceInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseBounceInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseBack : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseBack);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseBackInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseBackInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseBezier : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseBezier);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseQuadratic : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseQuadratic);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseQuadraticInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseQuadraticInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseQuartic : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseQuartic);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseQuarticInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseQuarticInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseQuintic : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseQuintic);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseQuinticInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseQuinticInOut);

    void onEnter();
    virtual std::string subtitle() const;
};


class SpriteEaseCircle : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseCircle);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseCircleInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseCircleInOut);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseCubic : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseCubic);

    void onEnter();
    virtual std::string subtitle() const;
};

class SpriteEaseCubicInOut : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpriteEaseCubicInOut);

    void onEnter();
    virtual std::string title() const;
};
class SpeedTest : public EaseSpriteDemo
{
public:
    CREATE_FUNC(SpeedTest);

    void onEnter();
    virtual std::string subtitle() const;

    void altertime(float dt);
};


#endif
