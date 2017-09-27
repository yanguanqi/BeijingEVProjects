#ifndef __PointExtendEmitter_H__
#define __PointExtendEmitter_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitter.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** EarthView::World::Graphic::CParticle emitter which emits particles from a single point.
                @remarks
                    This basic particle emitter emits particles from a single point in space. The
                    initial direction of these particles can either be a single direction (i.e. a line),
                    a random scattering inside a cone, or a random scattering in all directions,
                    depending the 'angle' parameter, which is the angle across which to scatter the
                    particles either side of the base direction of the emitter.
                */
                class EV_ParticleFX_DLL CPointExtendEmitter : public EarthView::World::Graphic::CParticleEmitter
                {
                public:
                    CPointExtendEmitter(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleEmitter. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                    /** See EarthView::World::Graphic::CParticleEmitter. */
                    ev_uint16 _getEmissionCount(Real timeElapsed);
                ev_private:
                    CPointExtendEmitter(_in EarthView::World::Core::CNameValuePairList *pList);

                };
            }
        }
    }
}

#endif

