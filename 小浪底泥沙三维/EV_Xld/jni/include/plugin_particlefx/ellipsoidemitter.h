#ifndef __EllipsoidEmitter_H__
#define __EllipsoidEmitter_H__
#include "particlefxprerequisites.h"
#include "areaemitter.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** EarthView::World::Graphic::CParticle emitter which emits particles randomly from points inside an ellipsoid.
                @remarks
                    This basic particle emitter emits particles from a ellipsoid area.
                    The initial direction of these particles can either be a single
                    direction (i.e. a line), a random scattering inside a cone, or a random
                    scattering in all directions, depending the 'angle' parameter, which
                    is the angle across which to scatter the particles either side of the
                    base direction of the emitter.
                */
                class EV_ParticleFX_DLL CEllipsoidEmitter : public EarthView::World::Plugin::ParticleFX::CAreaEmitter
                {
                ev_private:
                    CEllipsoidEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// See EarthView::World::Plugin::ParticleFX::CAreaEmitter
                    CEllipsoidEmitter(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See CParticleEmitter. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                protected:


                };
            }
        }
    }
}

#endif

