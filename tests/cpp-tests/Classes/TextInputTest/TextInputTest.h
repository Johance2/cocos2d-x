#ifndef __TEXT_INPUT_TEST_H__
#define __TEXT_INPUT_TEST_H__

#include "../BaseTest.h"

class KeyboardNotificationLayer;

DEFINE_TEST_SUITE(TextInputTests);

//////////////////////////////////////////////////////////////////////////
// KeyboardNotificationLayer for test IME keyboard notification.
//////////////////////////////////////////////////////////////////////////

class KeyboardNotificationLayer : public TestCase, public cocos2d::IMEDelegate
{
public:
    KeyboardNotificationLayer();
    virtual std::string title() const;
    virtual void onClickTrackNode(bool bClicked) = 0;

    virtual void keyboardWillShow(cocos2d::IMEKeyboardNotificationInfo& info);

    bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
    void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);

protected:
    cocos2d::Node*  _trackNode;
    cocos2d::Vec2  _beginPos;
};

//////////////////////////////////////////////////////////////////////////
// TextFieldTTFDefaultTest for test TextFieldTTF default behavior.
//////////////////////////////////////////////////////////////////////////

class TextFieldTTFDefaultTest : public KeyboardNotificationLayer
{
public:
    CREATE_FUNC(TextFieldTTFDefaultTest);
    // KeyboardNotificationLayer
    virtual std::string subtitle() const;
    virtual void onClickTrackNode(bool bClicked);

    // Layer
    virtual void onEnter();
};

//////////////////////////////////////////////////////////////////////////
// TextFieldTTFActionTest
//////////////////////////////////////////////////////////////////////////

class TextFieldTTFActionTest : public KeyboardNotificationLayer, public cocos2d::TextFieldDelegate
{
    cocos2d::TextFieldTTF*    _textField;
    cocos2d::Action*          _textFieldAction;
    bool                _action;
    size_t              _charLimit;       // the textfield max char limit

public:
    CREATE_FUNC(TextFieldTTFActionTest);
    void callbackRemoveNodeWhenDidAction(Node * node);

    // KeyboardNotificationLayer
    virtual std::string subtitle() const;
    virtual void onClickTrackNode(bool bClicked);

    // Layer
    virtual void onEnter();
    virtual void onExit();

    // TextFieldDelegate
    virtual bool onTextFieldAttachWithIME(cocos2d::TextFieldTTF*  sender);
    virtual bool onTextFieldDetachWithIME(cocos2d::TextFieldTTF*  sender);
    virtual bool onTextFieldInsertText(cocos2d::TextFieldTTF*  sender, const char * text, size_t nLen);
    virtual bool onTextFieldDeleteBackward(cocos2d::TextFieldTTF*  sender, const char * delText, size_t nLen);
    virtual bool onDraw(cocos2d::TextFieldTTF*  sender);
};

//////////////////////////////////////////////////////////////////////////
// TextFieldTTFSecureTextEntryTest for test TextFieldTTF SecureTextEntry.
//////////////////////////////////////////////////////////////////////////

class TextFieldTTFSecureTextEntryTest : public TextFieldTTFDefaultTest
{
public:
    CREATE_FUNC(TextFieldTTFSecureTextEntryTest);
    
    virtual std::string subtitle() const;
    // Layer
    virtual void onEnter();
};
#endif    // __TEXT_INPUT_TEST_H__
