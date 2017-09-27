#ifndef __LinearForceAffector_H__
#define __LinearForceAffector_H__
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

                /** This class defines a CParticleAffector which applies a linear force to particles in a system.
                @remarks
                    This affector (see EarthView::World::Graphic::CParticleAffector) applies a linear force, such as gravity, to a particle system.
                    This force can be applied in 2 ways: by taking the average of the particle's current momentum and the
                    force vector, or by adding the force vector to the current particle's momentum.
                @par
                    The former approach is self-stabilising i.e. once a particle's momentum
                    is equal to the force vector, no further change is made to it's momentum. It also results in
                    a non-linear acceleration of particles.
                    The latter approach is simpler and applies a constant acceleration to particles. However,
                    it is not self-stabilising and can lead to perpetually increasing particle velocities.
                    You choose the approach by calling the setForceApplication method.
                */
                class EV_ParticleFX_DLL CLinearForceAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CLinearForceAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for force vector (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdForceVector : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdForceVector(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdForceVector();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for force application (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdForceApp : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdForceApp(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdForceApp();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    //// Choice of how to apply the force vector to particles
                    enum ForceApplication
                    {
                        //// Take the average of the force vector and the particle momentum
                        FA_AVERAGE,
                        //// Add the force vector to the particle momentum
                        FA_ADD
                    };
                    //// Default constructor
                    CLinearForceAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);

                    /** Sets the force vector to apply to the particles in a system. */
                    void setForceVector(const EarthView::World::Spatial::Math::CVector3 &force);
                    /** Gets the force vector to apply to the particles in a system. */
                    EarthView::World::Spatial::Math::CVector3 getForceVector() const;
                    /** Sets how the force vector is applied to a particle.
                    @remarks
                      The default is FA_ADD.
                    @param fa A member of the ForceApplication enum.
                    */
                    void setForceApplication(ForceApplication fa);
                    /** Retrieves how the force vector is applied to a particle.
                    @param fa A member of the ForceApplication enum.
                    */
                    EarthView::World::Plugin::ParticleFX::CLinearForceAffector::ForceApplication getForceApplication() const;
                    //// Command objects
                    static EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceVector msForceVectorCmd;
                    static EarthView::World::Plugin::ParticleFX::CLinearForceAffector::CCmdForceApp msForceAppCmd;
                protected:
                    //// Force vector
                    EarthView::World::Spatial::Math::CVector3 mForceVector;
                    //// How to apply force
                    EarthView::World::Plugin::ParticleFX::CLinearForceAffector::ForceApplication mForceApplication;
                };

            }
        }
    }
}


#endif

