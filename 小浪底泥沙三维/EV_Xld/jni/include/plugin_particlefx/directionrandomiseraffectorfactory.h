#ifndef __DirectionRandomiserAffectorFactory_H__
#define __DirectionRandomiserAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "directionrandomiseraffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CDirectionRandomiserAffector. */
                class EV_ParticleFX_DLL CDirectionRandomiserAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "DirectionRandomiser";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CDirectionRandomiserAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                public:
                    CDirectionRandomiserAffectorFactory() {}				///添加的默认构造函数
                ev_private:
                    CDirectionRandomiserAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
            }
        }
    }
}

#endif

