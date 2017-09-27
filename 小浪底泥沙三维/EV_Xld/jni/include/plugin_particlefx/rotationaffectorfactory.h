#ifndef __RotationAffectorFactory_H__
#define __RotationAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "rotationaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CRotationAffector. */
                class EV_ParticleFX_DLL CRotationAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {

				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "Rotator";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CRotationAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                ev_private:
                    CRotationAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CRotationAffectorFactory() {}
                };

            }
        }
    }
}

#endif

