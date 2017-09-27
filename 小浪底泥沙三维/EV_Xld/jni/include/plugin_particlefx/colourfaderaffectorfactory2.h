#ifndef __ColourFaderAffectorFactory2_H__
#define __ColourFaderAffectorFactory2_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "colourfaderaffector2.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CColourFaderAffector. */
                class EV_ParticleFX_DLL CColourFaderAffectorFactory2 : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "ColourFader2";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CColourFaderAffector2(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                public:
                    CColourFaderAffectorFactory2() {}				///添加默认构造函数
                ev_private:
                    CColourFaderAffectorFactory2(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };

            }
        }
    }
}

#endif

