#ifndef __PointEmitterFactory_H__
#define __PointEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "pointemitter.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for particle emitter of type "Point".
                @remarks
                    Creates instances of CPointEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CPointEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                ev_private:
                    CPointEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                protected:
                public:
                    CPointEmitterFactory() {}
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "Point";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CPointEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                };
            }
        }
    }
}

#endif

