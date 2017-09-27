#ifndef __ScaleAffector_H__
#define __ScaleAffector_H__
#include <mathengine/vector4.h>
#include "plugin_particlefx/particlefxprerequisites.h"
#include "graphic/particleaffector.h"
#include "core/stringinterface.h"
namespace EarthView
{
    namespace World
    {
        namespace Plugin
        {
            namespace ParticleFX
            {


                /** This plugin subclass of CParticleAffector allows you to alter the scale of particles.
                @remarks
                    This class supplies the CParticleAffector implementation required to make the particle expand
                	or contract in mid-flight.
                */
                class EV_ParticleFX_DLL CScaleAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CScaleAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for scale adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdScaleAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdScaleAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdScaleAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Default constructor. */
                    CScaleAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                    /** Sets the scale adjustment to be made per second to particles.
                    @param Rate
                        Sets the adjustment to be made to the x and y scale components per second. These
                        values will be added to the scale of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setAdjust( Real rate );
                    /** Gets the scale adjustment to be made per second to particles. */
                    Real getAdjust() const;
                    static EarthView::World::Plugin::ParticleFX::CScaleAffector::CCmdScaleAdjust msScaleCmd;
                protected:
                    Real mScaleAdj;
                };

            }
        }
    }
}


#endif

