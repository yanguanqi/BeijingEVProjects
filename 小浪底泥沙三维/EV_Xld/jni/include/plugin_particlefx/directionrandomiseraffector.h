#ifndef __DirectionRandomiserAffector_H__
#define __DirectionRandomiserAffector_H__
#include <mathengine/vector3.h>
#include <mathengine/vector4.h>
#include "plugin_particlefx/particlefxprerequisites.h"
#include "graphic/particleaffector.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** This class defines a CParticleAffector which applies randomness to the movement of the particles.
                @remarks
                    This affector (see EarthView::World::Graphic::CParticleAffector) applies randomness to the movement of the particles by
                	changing the direction vectors.
                @par
                    The most important parameter to control the effect is randomness. It controls the range in which changes
                    are applied to each axis of the direction vector.
                	The parameter scope can be used to limit the effect to a certain percentage of the particles.
                */
                class EV_ParticleFX_DLL CDirectionRandomiserAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CDirectionRandomiserAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for randomness (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdRandomness : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRandomness(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRandomness();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for scope (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CmdScope : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CmdScope(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CmdScope();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for keep_velocity (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdKeepVelocity : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdKeepVelocity(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdKeepVelocity();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    //// Default constructor
                    CDirectionRandomiserAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);

                    /** Sets the randomness to apply to the particles in a system. */
                    void setRandomness(Real force);
                    /** Sets the scope (percentage of particles which are randomised). */
                    void setScope(Real force);
                    /** Set flag which detemines whether particle speed is changed. */
                    void setKeepVelocity(bool keepVelocity);
                    /** Gets the randomness to apply to the particles in a system. */
                    Real getRandomness() const;
                    /** Gets the scope (percentage of particles which are randomised). */
                    Real getScope() const;
                    /** Gets flag which detemines whether particle speed is changed. */
                    bool getKeepVelocity() const;
                    //// Command objects
                    static EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdRandomness msRandomnessCmd;
                    static EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CmdScope msScopeCmd;
                    static EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector::CCmdKeepVelocity msKeepVelocityCmd;
                protected:
                    Real mRandomness;
                    Real mScope;
                    bool mKeepVelocity;
                };
            }
        }
    }
}

#endif

