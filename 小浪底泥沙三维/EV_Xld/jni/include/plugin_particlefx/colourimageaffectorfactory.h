#ifndef __ColourImageAffectorFactory_H__
#define __ColourImageAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "colourimageaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CColourImageAffector. */
                class EV_ParticleFX_DLL CColourImageAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "ColourImage";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CColourImageAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                public:
                    CColourImageAffectorFactory() {}
                ev_private:
                    CColourImageAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };

            }
        }
    }
}

#endif

