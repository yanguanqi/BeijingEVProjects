#ifndef __ColourInterpolatorAffector_H__
#define __ColourInterpolatorAffector_H__
#include <mathengine/vector4.h>
#include "plugin_particlefx/particlefxprerequisites.h"
#include "graphic/particleaffector.h"
#include "graphic/colourvalue.h"
#include "core/stringinterface.h"

namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {
                class EV_ParticleFX_DLL CColourInterpolatorAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CColourInterpolatorAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// this is something of a hack..
                    /// needs to be replaced with something more..
                    /// ..elegant
                    enum  ENUM_MAX_STAGES { MAX_STAGES = 6 };

                    /** Command object for red adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdColourAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdColourAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        size_t		mIndex;
                    public:
                        CCmdColourAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for red adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdTimeAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdTimeAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        size_t		mIndex;
                    public:
                        CCmdTimeAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Default constructor. */
                    CColourInterpolatorAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                    void setColourAdjust(size_t index, EarthView::World::Graphic::CColourValue colour);
                    EarthView::World::Graphic::CColourValue getColourAdjust(size_t index) const;

                    void setTimeAdjust(size_t index, Real time);
                    Real getTimeAdjust(size_t index) const;

                    ev_private:

                    static CCmdColourAdjust	msColourCmd[MAX_STAGES];
                    static CCmdTimeAdjust	msTimeCmd[MAX_STAGES];
                protected:
                    EarthView::World::Graphic::CColourValue				mColourAdj[MAX_STAGES];
                    Real					mTimeAdj[MAX_STAGES];
                };

            }
        }
    }
}


#endif

