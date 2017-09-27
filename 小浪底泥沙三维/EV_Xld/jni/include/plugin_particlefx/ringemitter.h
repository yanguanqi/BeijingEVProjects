#ifndef __RingEmitter_H__
#define __RingEmitter_H__
#include "particlefxprerequisites.h"
#include "areaemitter.h"
#include <mathengine/ev_math.h>
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** EarthView::World::Graphic::CParticle emitter which emits particles randomly from points inside a ring (e.g. a tube).
                @remarks
                    This particle emitter emits particles from a ring-shaped area.
                    The initial direction of these particles can either be a single
                    direction (i.e. a line), a random scattering inside a cone, or a random
                    scattering in all directions, depending the 'angle' parameter, which
                    is the angle across which to scatter the particles either side of the
                    base direction of the emitter.
                */
                class EV_ParticleFX_DLL CRingEmitter : public EarthView::World::Plugin::ParticleFX::CAreaEmitter
                {
                ev_private:
                    CRingEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// See EarthView::World::Plugin::ParticleFX::CAreaEmitter
                    /** Command object for inner size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CRingEmitterCmdInnerX : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CRingEmitterCmdInnerX(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CRingEmitterCmdInnerX();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for inner size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CRingEmitterCmdInnerY : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CRingEmitterCmdInnerY(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CRingEmitterCmdInnerY();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    CRingEmitter(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See CParticleEmitter. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                    /** Sets the size of the clear space inside the area from where NO particles are emitted.
                    @param x,y,z
                        Parametric values describing the proportion of the shape which is hollow in each direction.
                        E.g. 0 is solid, 0.5 is half-hollow etc
                    */
                    void setInnerSize(Real x, Real y);
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
                    /** Gets the x component of the area inside the ellipsoid which doesn't emit particles. */
                    Real getInnerSizeX() const;
                    /** Gets the y component of the area inside the ellipsoid which doesn't emit particles. */
                    Real getInnerSizeY() const;
                protected:
                    /// See CParticleEmitter
                    static CRingEmitterCmdInnerX msCmdInnerX;
                    static CRingEmitterCmdInnerY msCmdInnerY;
                    //// Size of 'clear' center area (> 0 and < 1.0)
                    Real mInnerSizex;
                    Real mInnerSizey;

                };
            }
        }
    }
}

#endif

