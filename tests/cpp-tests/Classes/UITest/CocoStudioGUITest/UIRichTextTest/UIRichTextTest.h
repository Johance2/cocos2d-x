

#ifndef __TestCpp__UIRichTextTest__
#define __TestCpp__UIRichTextTest__

#include "../UIScene.h"

DEFINE_TEST_SUITE(UIRichTextTests);

class UIRichTextTest : public UIScene
{
public:
    CREATE_FUNC(UIRichTextTest);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLBasic : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLBasic);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLSmallBig : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLSmallBig);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLColor : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLColor);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLSUIB : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLSUIB);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLSUIB2 : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLSUIB2);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLSUIB3 : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLSUIB3);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLImg : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLImg);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLUrl : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLUrl);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLUrlImg : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLUrlImg);
    
    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    
protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLFace : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLFace);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLBR : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLBR);

    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLInvalid : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLInvalid);

    bool init();

protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLOutline : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLOutline);
    
    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    
protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLShadow : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLShadow);
    
    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    
protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLGlow : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLGlow);
    
    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    
protected:
    cocos2d::ui::RichText* _richText;
};

class UIRichTextXMLExtend : public UIScene
{
public:
    CREATE_FUNC(UIRichTextXMLExtend);
    
    bool init();
    void touchEvent(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    void switchWrapMode(cocos2d::Ref* sender, cocos2d::ui::Widget::TouchEventType type);
    
protected:
    cocos2d::ui::RichText* _richText;
};

#endif /* defined(__TestCpp__UIRichTextTest__) */
