#ifndef __PointExtendEmitterFactory_H__
#define __PointExtendEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "pointextendemitter.h"

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
                    Creates instances of CPointExtendEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CPointExtendEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                ev_private:
                    CPointExtendEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                protected:
                public:
                    CPointExtendEmitterFactory() {}
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "PointExtend";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CPointExtendEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                };
            }
        }
    }
}

#endif

