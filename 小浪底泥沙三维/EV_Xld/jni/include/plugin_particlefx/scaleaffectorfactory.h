#ifndef __ScaleAffectorFactory_H__
#define __ScaleAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "scaleaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CScaleAffector. */
                class EV_ParticleFX_DLL CScaleAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {

				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "Scaler";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CScaleAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                ev_private:
                    CScaleAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CScaleAffectorFactory() {}				///添加默认构造函数
                };

            }
        }
    }
}

#endif

