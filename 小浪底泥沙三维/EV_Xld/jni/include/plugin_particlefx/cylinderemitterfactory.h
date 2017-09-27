#ifndef __CylinderEmitterFactory_H__
#define __CylinderEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "cylinderemitter.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for particle emitter of type "Cylinder".
                @remarks
                    Creates instances of CCylinderEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CCylinderEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                ev_private:
                    CCylinderEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                protected:
                public:
                    CCylinderEmitterFactory() {}				///添加的默认构造函数
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "Cylinder";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CCylinderEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                };
            }
        }
    }
}

#endif

