#ifndef __BoxEmitterFactory_H__
#define __BoxEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "boxemitter.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for particle emitter of type "Box".
                @remarks
                    Creates instances of CBoxEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CBoxEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                ev_private:
                    CBoxEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                protected:
                public:
                    CBoxEmitterFactory() {} 				///添加的默认构造函数
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "Box";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CBoxEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                };
            }
        }
    }
}

#endif

