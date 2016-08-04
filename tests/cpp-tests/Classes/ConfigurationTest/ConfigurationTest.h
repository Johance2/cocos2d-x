#ifndef __CONFIGURATIONTEST_H__
#define __CONFIGURATIONTEST_H__

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ConfigurationTests);

class ConfigurationBase : public TestCase
{
protected:

public:
    virtual std::string title() const;
};

class ConfigurationLoadConfig : public ConfigurationBase
{
public:
    CREATE_FUNC(ConfigurationLoadConfig);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ConfigurationQuery : public ConfigurationBase
{
public:
    CREATE_FUNC(ConfigurationQuery);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ConfigurationInvalid : public ConfigurationBase
{
public:
    CREATE_FUNC(ConfigurationInvalid);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ConfigurationDefault : public ConfigurationBase
{
public:
    CREATE_FUNC(ConfigurationDefault);

    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ConfigurationSet : public ConfigurationBase
{
public:
    CREATE_FUNC(ConfigurationSet);

    virtual void onEnter();
    virtual std::string subtitle() const;
};


#endif // __CONFIGURATIONTEST_H__
