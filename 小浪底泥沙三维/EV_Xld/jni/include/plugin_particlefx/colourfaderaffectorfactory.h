#ifndef __ColourFaderAffectorFactory_H__
#define __ColourFaderAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "colourfaderaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CColourFaderAffector. */
                class EV_ParticleFX_DLL CColourFaderAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "ColourFader";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CColourFaderAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                public:
                    CColourFaderAffectorFactory() {}				///添加默认构造函数
                ev_private:
                    CColourFaderAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };

            }
        }
    }
}

#endif

