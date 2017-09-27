#ifndef __HollowEllipsoidEmitterFactory_H__
#define __HollowEllipsoidEmitterFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleemitterfactory.h"
#include "plugin_particlefx/hollowellipsoidemitter.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for particle emitter of type "HollowEllipsoid".
                @remarks
                    Creates instances of CHollowEllipsoidEmitter to be used in particle systems.
                */
                class EV_ParticleFX_DLL CHollowEllipsoidEmitterFactory : public EarthView::World::Graphic::CParticleEmitterFactory
                {
                protected:
                public:
                    CHollowEllipsoidEmitterFactory() {}
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EVString getName() const
                    {
                        return "HollowEllipsoid";
                    }
                    /** See EarthView::World::Graphic::CParticleEmitterFactory */
                    EarthView::World::Graphic::CParticleEmitter *createEmitter(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleEmitter *emit = EV_NEW CHollowEllipsoidEmitter(psys);
                        mEmitters.push_back(emit);
                        return emit;
                    }
                ev_private:
                    CHollowEllipsoidEmitterFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
            }
        }
    }
}

#endif

