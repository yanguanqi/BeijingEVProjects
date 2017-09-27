#ifndef __DeflectorPlaneAffector_H__
#define __DeflectorPlaneAffector_H__
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

                /** This class defines a CParticleAffector which deflects particles.
                @remarks
                    This affector (see EarthView::World::Graphic::CParticleAffector) offers a simple (and inaccurate) physical deflection.
                    All particles which hit the plane are reflected.
                @par
                    The plane is defined by a point (plane_point) and the normal (plane_normal).
                */
                class EV_ParticleFX_DLL CDeflectorPlaneAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CDeflectorPlaneAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for plane point (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdPlanePoint : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdPlanePoint(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdPlanePoint();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for plane normal (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdPlaneNormal : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdPlaneNormal(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdPlaneNormal();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for bounce (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdBounce : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdBounce(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdBounce();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    //// Default constructor
                    CDeflectorPlaneAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                    /** Sets the plane point of the deflector plane. */
                    void setPlanePoint(const EarthView::World::Spatial::Math::CVector3 &pos);
                    /** Gets the plane point of the deflector plane. */
                    EarthView::World::Spatial::Math::CVector3 getPlanePoint() const;
                    /** Sets the plane normal of the deflector plane. */
                    void setPlaneNormal(const EarthView::World::Spatial::Math::CVector3 &normal);
                    /** Gets the plane normal of the deflector plane. */
                    EarthView::World::Spatial::Math::CVector3 getPlaneNormal() const;
                    /** Sets the bounce value of the deflection. */
                    void setBounce(Real bounce);
                    /** Gets the bounce value of the deflection. */
                    Real getBounce() const;
                    //// Command objects
                    static EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlanePoint msPlanePointCmd;
                    static EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdPlaneNormal msPlaneNormalCmd;
                    static EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector::CCmdBounce msBounceCmd;
                protected:
                    //// deflector plane point
                    EarthView::World::Spatial::Math::CVector3 mPlanePoint;
                    //// deflector plane normal vector
                    EarthView::World::Spatial::Math::CVector3 mPlaneNormal;
                    //// bounce factor (0.5 means 50 percent)
                    Real mBounce;
                };
            }
        }
    }
}

#endif

