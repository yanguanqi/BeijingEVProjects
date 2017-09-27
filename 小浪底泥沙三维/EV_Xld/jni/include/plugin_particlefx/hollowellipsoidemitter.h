#ifndef __HollowEllipsoidEmitter_H__
#define __HollowEllipsoidEmitter_H__
#include "particlefxprerequisites.h"
#include "ellipsoidemitter.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** EarthView::World::Graphic::CParticle emitter which emits particles randomly from points inside a hollow ellipsoid.
                @remarks
                    This particle emitter emits particles from a hollow ellipsoid area.
                    The initial direction of these particles can either be a single
                    direction (i.e. a line), a random scattering inside a cone, or a random
                    scattering in all directions, depending the 'angle' parameter, which
                    is the angle across which to scatter the particles either side of the
                    base direction of the emitter.
                */
                class EV_ParticleFX_DLL CHollowEllipsoidEmitter : public EarthView::World::Plugin::ParticleFX::CEllipsoidEmitter
                {
                ev_private:
                    CHollowEllipsoidEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for inner size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CHollowEllipsoidEmitterCmdInnerX : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CHollowEllipsoidEmitterCmdInnerX(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CHollowEllipsoidEmitterCmdInnerX();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for inner size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CHollowEllipsoidEmitterCmdInnerY : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CHollowEllipsoidEmitterCmdInnerY(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CHollowEllipsoidEmitterCmdInnerY();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for inner size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CHollowEllipsoidEmitterCmdInnerZ : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CHollowEllipsoidEmitterCmdInnerZ(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CHollowEllipsoidEmitterCmdInnerZ();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /// See CAreaEmitter
                    CHollowEllipsoidEmitter(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See CParticleEmitter. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                    /** Sets the size of the clear space inside the area from where NO particles are emitted.
                    @param x,y,z
                        Parametric values describing the proportion of the shape which is hollow in each direction.
                        E.g. 0 is solid, 0.5 is half-hollow etc
                    */
                    void setInnerSize(Real x, Real y, Real z);
                    /** Sets the x component of the area inside the ellipsoid which doesn't emit particles.
                    @param x
                        Parametric value describing the proportion of the shape which is hollow in this direction.
                        E.g. 0 is solid, 0.5 is half-hollow etc
                    */
                    void setInnerSizeX(Real x);
                    /** Sets the y component of the area inside the ellipsoid which doesn't emit particles.
                    @param y
                        Parametric value describing the proportion of the shape which is hollow in this direction.
                        E.g. 0 is solid, 0.5 is half-hollow etc
                    */
                    void setInnerSizeY(Real y);
                    /** Sets the z component of the area inside the ellipsoid which doesn't emit particles.
                    @param z
                        Parametric value describing the proportion of the shape which is hollow in this direction.
                        E.g. 0 is solid, 0.5 is half-hollow etc
                    */
                    void setInnerSizeZ(Real z);
                    /** Gets the x component of the area inside the ellipsoid which doesn't emit particles. */
                    Real getInnerSizeX() const;
                    /** Gets the y component of the area inside the ellipsoid which doesn't emit particles. */
                    Real getInnerSizeY() const;
                    /** Gets the z component of the area inside the ellipsoid which doesn't emit particles. */
                    Real getInnerSizeZ() const;
                protected:
                    /// See CParticleEmitter
                    //// Size of 'clear' center area (> 0 and < 1.0)
                    EarthView::World::Spatial::Math::CVector3 mInnerSize;
                    static CHollowEllipsoidEmitterCmdInnerX msCmdInnerX;
                    static CHollowEllipsoidEmitterCmdInnerY msCmdInnerY;
                    static CHollowEllipsoidEmitterCmdInnerZ msCmdInnerZ;

                };
            }
        }
    }
}

#endif

