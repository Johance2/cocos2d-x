#ifndef __FILEUTILSTEST_H__
#define __FILEUTILSTEST_H__

#include "../BaseTest.h"


DEFINE_TEST_SUITE(FileUtilsTests);

class FileUtilsDemo : public TestCase
{
public:
};

class TestResolutionDirectories : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestResolutionDirectories);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    std::vector<std::string> _defaultSearchPathArray;
    std::vector<std::string> _defaultResolutionsOrderArray;
};

class TestSearchPath : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestSearchPath);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    std::vector<std::string> _defaultSearchPathArray;
    std::vector<std::string> _defaultResolutionsOrderArray;
};

class TestFilenameLookup : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestFilenameLookup);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
};

class TestIsFileExist : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestIsFileExist);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestIsDirectoryExist : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestIsDirectoryExist);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestFileFuncs : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestFileFuncs);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestDirectoryFuncs : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestDirectoryFuncs);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TextWritePlist : public FileUtilsDemo
{
public:
    CREATE_FUNC(TextWritePlist);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestWriteString : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestWriteString);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestGetContents : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestGetContents);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    std::string _generatedFile;
};

class TestWriteData : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestWriteData);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestWriteValueMap : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestWriteValueMap);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestWriteValueVector : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestWriteValueVector);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class TestUnicodePath : public FileUtilsDemo
{
public:
    CREATE_FUNC(TestUnicodePath);

    virtual void onEnter();
    virtual void onExit();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

#endif /* __FILEUTILSTEST_H__ */
