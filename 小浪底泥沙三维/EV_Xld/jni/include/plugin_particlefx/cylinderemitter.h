#ifndef __CylinderEmitter_H__
#define __CylinderEmitter_H__
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

                /** EarthView::World::Graphic::CParticle emitter which emits particles randomly from points inside a cylinder.
                @remarks
                    This basic particle emitter emits particles from a cylinder area. The
                    initial direction of these particles can either be a single direction
                    (i.e. a line), a random scattering inside a cone, or a random
                    scattering in all directions, depending the 'angle' parameter, which
                    is the angle across which to scatter the particles either side of the
                    base direction of the emitter.
                */
                class EV_ParticleFX_DLL CCylinderEmitter : public EarthView::World::Plugin::ParticleFX::CAreaEmitter
                {
                ev_private:
                    CCylinderEmitter(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// See EarthView::World::Plugin::ParticleFX::CAreaEmitter
                    CCylinderEmitter(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See CParticleEmitter. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                protected:
                    /// See EarthView::World::Plugin::ParticleFX::CAreaEmitter


                };
            }
        }
    }
}

#endif

