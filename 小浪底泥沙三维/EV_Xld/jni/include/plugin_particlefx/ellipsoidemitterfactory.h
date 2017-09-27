#ifndef __EllipsoidEmitterFactory_H__
#define __EllipsoidEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "plugin_particlefx/ellipsoidemitter.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for particle emitter of type "Ellipsoid".
                @remarks
                    Creates instances of CEllipsoidEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CEllipsoidEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                protected:
                public:
                    CEllipsoidEmitterFactory() {}
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "Ellipsoid";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CEllipsoidEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                ev_private:
                    CEllipsoidEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
            }
        }
    }
}

#endif

