#ifndef __ColourInterpolatorAffectorFactory_H__
#define __ColourInterpolatorAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "colourinterpolatoraffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CColourInterpolatorAffector. */
                class EV_ParticleFX_DLL CColourInterpolatorAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "ColourInterpolator";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = new CColourInterpolatorAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                public:
                    CColourInterpolatorAffectorFactory() {}
                ev_private:
                    CColourInterpolatorAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };

            }
        }
    }
}

#endif

