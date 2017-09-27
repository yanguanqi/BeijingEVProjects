#ifndef __LinearForceAffectorFactory_H__
#define __LinearForceAffectorFactory_H__
#include "plugin_particlefx/particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "plugin_particlefx/linearforceaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CLinearForceAffector. */
                class EV_ParticleFX_DLL CLinearForceAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "LinearForce";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CLinearForceAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                ev_private:
                    CLinearForceAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CLinearForceAffectorFactory() {}
                };

            }
        }
    }
}

#endif

