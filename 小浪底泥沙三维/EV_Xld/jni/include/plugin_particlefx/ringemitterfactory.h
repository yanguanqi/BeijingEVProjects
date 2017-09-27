#ifndef __RingEmitterFactory_H__
#define __RingEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "plugin_particlefx/ringemitter.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for particle emitter of type "Ring".
                @remarks
                    Creates instances of CRingEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CRingEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                ev_private:
                    CRingEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                protected:
                public:
                    CRingEmitterFactory() {}
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "Ring";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CRingEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                };
            }
        }
    }
}

#endif

