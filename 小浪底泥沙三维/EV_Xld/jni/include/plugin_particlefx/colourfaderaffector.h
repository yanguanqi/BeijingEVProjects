#ifndef __ColourFaderAffector_H__
#define __ColourFaderAffector_H__
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


                /** This plugin subclass of CParticleAffector allows you to alter the colour of particles.
                @remarks
                    This class supplies the CParticleAffector implementation required to modify the colour of
                    particle in mid-flight.
                */
                class EV_ParticleFX_DLL CColourFaderAffector : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CColourFaderAffector(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for red adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdRedAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRedAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRedAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for green adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdGreenAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdGreenAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdGreenAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for blue adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdBlueAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdBlueAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdBlueAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for alpha adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdAlphaAdjust : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdAlphaAdjust(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdAlphaAdjust();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };

                    /** Default constructor. */
                    CColourFaderAffector(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                    /** Sets the colour adjustment to be made per second to particles.
                    @param red, green, blue, alpha
                        Sets the adjustment to be made to each of the colour components per second. These
                        values will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setAdjust(float red, float green, float blue, float alpha );
                    void setAdjust(float red, float green, float blue);
                    /** Sets the red adjustment to be made per second to particles.
                    @param red
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setRedAdjust(float red);
                    /** Gets the red adjustment to be made per second to particles. */
                    float getRedAdjust() const;
                    /** Sets the green adjustment to be made per second to particles.
                    @param green
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setGreenAdjust(float green);
                    /** Gets the green adjustment to be made per second to particles. */
                    float getGreenAdjust() const;
                    /** Sets the blue adjustment to be made per second to particles.
                    @param blue
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setBlueAdjust(float blue);
                    /** Gets the blue adjustment to be made per second to particles. */
                    float getBlueAdjust() const;
                    /** Sets the alpha adjustment to be made per second to particles.
                    @param alpha
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setAlphaAdjust(float alpha);
                    /** Gets the alpha adjustment to be made per second to particles. */
                    float getAlphaAdjust() const;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdRedAdjust msRedCmd;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdGreenAdjust msGreenCmd;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdBlueAdjust msBlueCmd;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector::CCmdAlphaAdjust msAlphaCmd;
                protected:
                    float mRedAdj;
                    float mGreenAdj;
                    float mBlueAdj;
                    float mAlphaAdj;
                    /** Internal method for adjusting while clamping to [0,1] */
                    inline void applyAdjustWithClamp(float *pComponent, float adjust)
                    {
                        *pComponent += adjust;
                        /// Limit to 0
                        if (*pComponent < 0.0)
                        {
                            *pComponent = 0.0f;
                        }
                        /// Limit to 1
                        else if (*pComponent > 1.0)
                        {
                            *pComponent = 1.0f;
                        }
                    }
                };

            }
        }
    }
}


#endif

