#ifndef __DeflectorPlaneAffectorFactory_H__
#define __DeflectorPlaneAffectorFactory_H__
#include "particlefxprerequisites.h"
#include "graphic/particleaffectorfactory.h"
#include "deflectorplaneaffector.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {

                /** Factory class for CDeflectorPlaneAffector. */
                class EV_ParticleFX_DLL CDeflectorPlaneAffectorFactory : public EarthView::World::Graphic::CParticleAffectorFactory
                {
				public:
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EVString getName() const
                    {
                        return "DeflectorPlane";
                    }
                    /** See EarthView::World::Graphic::CParticleAffectorFactory */
                    EarthView::World::Graphic::CParticleAffector *createAffector(EarthView::World::Graphic::CParticleSystem *psys)
                    {
                        EarthView::World::Graphic::CParticleAffector *p = EV_NEW CDeflectorPlaneAffector(psys);
                        mAffectors.push_back(p);
                        return p;
                    }
                public:
                    CDeflectorPlaneAffectorFactory() {}				///添加的默认构造函数
                ev_private:
                    CDeflectorPlaneAffectorFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };

            }
        }
    }
}

#endif

