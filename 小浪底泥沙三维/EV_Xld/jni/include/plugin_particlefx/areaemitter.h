#ifndef __AreaEmitter_H__
#define __AreaEmitter_H__
#include "plugin_particlefx/particlefxprerequisites.h"
#include "graphic/particleemitter.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** CParticle emitter which emits particles randomly from points inside
                    an area (box, sphere, ellipsoid whatever subclasses choose to be).
                @remarks
                    This is an empty superclass and needs to be subclassed. Basic particle
                    emitter emits particles from/in an (unspecified) area. The
                    initial direction of these particles can either be a single direction
                    (i.e. a line), a random scattering inside a cone, or a random
                    scattering in all directions, depending the 'angle' parameter, which
                    is the angle across which to scatter the particles either side of the
                    base direction of the emitter.
                */
                class EV_ParticleFX_DLL CAreaEmitter : public EarthView::World::Graphic::CParticleEmitter
                {
                ev_private:
                    CAreaEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for area emitter size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CAreaEmitterCmdWidth : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CAreaEmitterCmdWidth(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CAreaEmitterCmdWidth();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for area emitter size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CAreaEmitterCmdHeight : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CAreaEmitterCmdHeight(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CAreaEmitterCmdHeight();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for area emitter size (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdDepth : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdDepth(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdDepth();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };

                    CAreaEmitter(EarthView::World::Graphic::CParticleSystem *psys);

                    /** See EarthView::World::Graphic::CParticleEmitter. */
                    ev_uint16 _getEmissionCount(Real timeElapsed);
                    /** Overloaded to update the trans. matrix */
                    void setDirection( const EarthView::World::Spatial::Math::CVector3 &direction );
                    /** Sets the size of the area from which particles are emitted.
                    @param
                        size Vector describing the size of the area. The area extends
                        around the center point by half the x, y and z components of
                        this vector. The box is aligned such that it's local Z axis points
                        along it's direction (see setDirection)
                    */
                    void setSize(const EarthView::World::Spatial::Math::CVector3 &size);
                    /** Sets the size of the area from which particles are emitted.
                    @param x,y,z
                        Individual axis lengths describing the size of the area. The area
                        extends around the center point by half the x, y and z components
                        of this vector. The box is aligned such that it's local Z axis
                        points along it's direction (see setDirection)
                    */
                    void setSize(Real x, Real y, Real z);
                    /** Sets the width (local x size) of the emitter. */
                    void setWidth(Real width);
                    /** Gets the width (local x size) of the emitter. */
                    Real getWidth() const;
                    /** Sets the height (local y size) of the emitter. */
                    void setHeight(Real Height);
                    /** Gets the height (local y size) of the emitter. */
                    Real getHeight() const;
                    /** Sets the depth (local y size) of the emitter. */
                    void setDepth(Real Depth);
                    /** Gets the depth (local y size) of the emitter. */
                    Real getDepth() const;
                protected:
                    //// Size of the area
                    EarthView::World::Spatial::Math::CVector3 mSize;
                    //// Local axes, not normalised, their magnitude reflects area size
                    EarthView::World::Spatial::Math::CVector3 mXRange, mYRange, mZRange;
                    //// Internal method for generating the area axes
                    void genAreaAxes();
                    /** Internal for initializing some defaults and parameters
                    @return True if custom parameters need initialising
                    */
                    bool initDefaults(const EVString &mType);
                    //// Command objects
                    static CAreaEmitterCmdWidth msWidthCmd;
                    static CAreaEmitterCmdHeight msHeightCmd;
                    static CCmdDepth msDepthCmd;
                };
            }
        }
    }
}

#endif

