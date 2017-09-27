#ifndef __ColourImageAffector_H__
#define __ColourImageAffector_H__
#include <mathengine/vector4.h>
#include "particlefxprerequisites.h"
#include "graphic/particleaffector.h"
#include "core/stringinterface.h"
#include "graphic/colourvalue.h"
#include "graphic/image.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {


                class EV_ParticleFX_DLL CColourImageAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CColourImageAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for red adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdImageAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdImageAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdImageAdjust();				///添加默认构造函数
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Default constructor. */
                    CColourImageAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _initParticle(EarthView::World::Graphic::CParticle *pParticle);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                    void setImageAdjust(EVString name);
                    EVString getImageAdjust() const;
					void _loadImage(EVString imgName,EarthView::World::Graphic::CImage& img);


                    static EarthView::World::Plugin::ParticleFX::CColourImageAffector::CCmdImageAdjust	msImageCmd;
                protected:
                    EarthView::World::Graphic::CImage					mColourImage;
                    bool                    mColourImageLoaded;
                    EVString					mColourImageName;
                    /** Internal method to load the image */
                    void _loadImage();
                };

            }
        }
    }
}


#endif

