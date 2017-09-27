#ifndef __RotationAffector_H__
#define __RotationAffector_H__
#include <mathengine/ev_math.h>
#include <mathengine/vector4.h>
#include "plugin_particlefx/particlefxprerequisites.h"
#include "graphic/particleaffector.h"
#include "core/stringinterface.h"


namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {


                /** This plugin subclass of CParticleAffector allows you to alter the rotation of particles.
                @remarks
                    This class supplies the CParticleAffector implementation required to make the particle expand
                	or contract in mid-flight.
                */
                class EV_ParticleFX_DLL CRotationAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CRotationAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    //// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
                    class EV_ParticleFX_DLL CCmdRotationSpeedRangeStart : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRotationSpeedRangeStart(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRotationSpeedRangeStart();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    //// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
                    class EV_ParticleFX_DLL CCmdRotationSpeedRangeEnd : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRotationSpeedRangeEnd(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRotationSpeedRangeEnd();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    //// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
                    class EV_ParticleFX_DLL CCmdRotationRangeStart : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRotationRangeStart(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRotationRangeStart();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    //// Command object for particle emitter  - see EarthView::World::Core::CParamCommand
                    class EV_ParticleFX_DLL CCmdRotationRangeEnd : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRotationRangeEnd(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRotationRangeEnd();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Default constructor. */
                    CRotationAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);

                    /** Sets the minimum rotation speed of particles to be emitted. */
                    void setRotationSpeedRangeStart(const EarthView::World::Spatial::Math::CRadian &angle);
                    /** Sets the maximum rotation speed of particles to be emitted. */
                    void setRotationSpeedRangeEnd(const EarthView::World::Spatial::Math::CRadian &angle);
                    /** Gets the minimum rotation speed of particles to be emitted. */
                    const EarthView::World::Spatial::Math::CRadian &getRotationSpeedRangeStart() const;
                    /** Gets the maximum rotation speed of particles to be emitted. */
                    const EarthView::World::Spatial::Math::CRadian &getRotationSpeedRangeEnd() const;

                    /** Sets the minimum rotation angle of particles to be emitted. */
                    void setRotationRangeStart(const EarthView::World::Spatial::Math::CRadian &angle);
                    /** Sets the maximum rotation angle of particles to be emitted. */
                    void setRotationRangeEnd(const EarthView::World::Spatial::Math::CRadian &angle);
                    /** Gets the minimum rotation of particles to be emitted. */
                    const EarthView::World::Spatial::Math::CRadian &getRotationRangeStart() const;
                    /** Gets the maximum rotation of particles to be emitted. */
                    const EarthView::World::Spatial::Math::CRadian &getRotationRangeEnd() const;
                    static EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeStart	msRotationSpeedRangeStartCmd;
                    static EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationSpeedRangeEnd		msRotationSpeedRangeEndCmd;
                    static EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeStart		msRotationRangeStartCmd;
                    static EarthView::World::Plugin::ParticleFX::CRotationAffector::CCmdRotationRangeEnd			msRotationRangeEndCmd;

                protected:
                    //// Initial rotation speed of particles (range start)
                    EarthView::World::Spatial::Math::CRadian mRotationSpeedRangeStart;
                    //// Initial rotation speed of particles (range end)
                    EarthView::World::Spatial::Math::CRadian mRotationSpeedRangeEnd;
                    //// Initial rotation angle of particles (range start)
                    EarthView::World::Spatial::Math::CRadian mRotationRangeStart;
                    //// Initial rotation angle of particles (range end)
                    EarthView::World::Spatial::Math::CRadian mRotationRangeEnd;
                };

            }
        }
    }
}


#endif

