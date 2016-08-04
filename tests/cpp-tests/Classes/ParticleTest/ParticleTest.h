#ifndef _PARTICLE_TEST_H_
#define _PARTICLE_TEST_H_

#include "../BaseTest.h"

DEFINE_TEST_SUITE(ParticleTests);

class ParticleDemo : public TestCase
{
protected:
    cocos2d::ParticleSystemQuad* _emitter;
    cocos2d::Sprite* _background;
    cocos2d::LayerColor* _color;

public:
    ~ParticleDemo();

    virtual void onEnter()override;

    virtual std::string title() const;
    virtual std::string subtitle() const;

    void toggleCallback(cocos2d::Ref* sender);

    void onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);
    void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event);

    virtual void update(float dt);
    void setEmitterPosition();
};

class DemoFirework : public ParticleDemo
{
public:
    CREATE_FUNC(DemoFirework);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoFire : public ParticleDemo
{
public:
    CREATE_FUNC(DemoFire);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoSun : public ParticleDemo
{
public:
    CREATE_FUNC(DemoSun);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoGalaxy : public ParticleDemo
{
public:
    CREATE_FUNC(DemoGalaxy);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoFlower : public ParticleDemo
{
public:
    CREATE_FUNC(DemoFlower);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoBigFlower : public ParticleDemo
{
public:
    CREATE_FUNC(DemoBigFlower);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoRotFlower : public ParticleDemo
{
public:
    CREATE_FUNC(DemoRotFlower);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoMeteor : public ParticleDemo
{
public:
    CREATE_FUNC(DemoMeteor);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoSpiral : public ParticleDemo
{
public:
    CREATE_FUNC(DemoSpiral);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoExplosion : public ParticleDemo
{
public:
    CREATE_FUNC(DemoExplosion);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoSmoke : public ParticleDemo
{
public:
    CREATE_FUNC(DemoSmoke);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoSnow : public ParticleDemo
{
public:
    CREATE_FUNC(DemoSnow);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoRain : public ParticleDemo
{
public:
    CREATE_FUNC(DemoRain);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoModernArt : public ParticleDemo
{
public:
    CREATE_FUNC(DemoModernArt);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoRing : public ParticleDemo
{
public:
    CREATE_FUNC(DemoRing);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class ParallaxParticle : public ParticleDemo
{
public:
    CREATE_FUNC(ParallaxParticle);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoParticleFromFile : public ParticleDemo
{
public:
    static DemoParticleFromFile* create(const std::string& file)
    {
        auto ret = new (std::nothrow) DemoParticleFromFile;
        if (ret && ret->init())
        {
            ret->_title = file;
            ret->autorelease();
        }
        else
        {
            delete ret;
            ret = nullptr;
        }

        return ret;
    }

    std::string _title;
    
    virtual void onEnter();
    virtual std::string subtitle() const
    {
        return _title;
    }
};

class RadiusMode1 : public ParticleDemo
{
public:
    CREATE_FUNC(RadiusMode1);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class RadiusMode2 : public ParticleDemo
{
public:
    CREATE_FUNC(RadiusMode2);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class Issue704 : public ParticleDemo
{
public:
    CREATE_FUNC(Issue704);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue870 : public ParticleDemo
{
public:
    CREATE_FUNC(Issue870);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void updateQuads(float dt);

private:
    int _index;
};

class Issue1201 : public ParticleDemo
{
public:
    CREATE_FUNC(Issue1201);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ParticleBatchHybrid : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleBatchHybrid);
    virtual void onEnter();
    void switchRender(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    cocos2d::Node* _parent1;
    cocos2d::Node* _parent2;
};

class ParticleBatchMultipleEmitters : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleBatchMultipleEmitters);

    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ParticleReorder : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleReorder);
    virtual void onEnter();
    void reorderParticles(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    unsigned int _order;
};

class MultipleParticleSystems : public ParticleDemo
{
public:
    CREATE_FUNC(MultipleParticleSystems);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    virtual void update(float dt);
};

class MultipleParticleSystemsBatched : public ParticleDemo
{
public:
    CREATE_FUNC(MultipleParticleSystemsBatched);
    virtual void onEnter();
    virtual void update(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class AddAndDeleteParticleSystems : public ParticleDemo
{
public:
    CREATE_FUNC(AddAndDeleteParticleSystems);
    virtual void onEnter();
    virtual void update(float dt);
    void removeSystem(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    cocos2d::ParticleBatchNode* _batchNode;
};

class ReorderParticleSystems : public ParticleDemo
{
public:
    CREATE_FUNC(ReorderParticleSystems);
    virtual void onEnter();
    void reorderSystem(float time);
    virtual void update(float dt);
    virtual std::string title() const;
    virtual std::string subtitle() const;
private:
    cocos2d::ParticleBatchNode* _batchNode;
};

class PremultipliedAlphaTest : public ParticleDemo
{
    bool _hasEmitter;
public:
    CREATE_FUNC(PremultipliedAlphaTest);
    virtual void onEnter();
    void readdPaticle(float delta);
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class PremultipliedAlphaTest2 : public ParticleDemo
{
public:
    CREATE_FUNC(PremultipliedAlphaTest2);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class Issue3990 : public ParticleDemo
{
public:
    CREATE_FUNC(Issue3990);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ParticleVisibleTest : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleVisibleTest);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
    void callback(float delta);
};

class ParticleAutoBatching : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleAutoBatching);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ParticleResetTotalParticles : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleResetTotalParticles);
    virtual void onEnter();
    virtual std::string title() const;
    virtual std::string subtitle() const;
};

class ParticleIssue12310 : public ParticleDemo
{
public:
    CREATE_FUNC(ParticleIssue12310);
    virtual void onEnter();
    virtual std::string subtitle() const;
};

class DemoPause : public ParticleDemo
{
public:
    CREATE_FUNC(DemoPause);
    virtual void onEnter();
    virtual std::string subtitle() const;
    void pauseEmitter(float time);
};

#endif
