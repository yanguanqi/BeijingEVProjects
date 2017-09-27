#ifndef __ColourFaderAffector2_H__
#define __ColourFaderAffector2_H__
#include <mathengine/mathengine.h>
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
                class EV_ParticleFX_DLL CColourFaderAffector2 : public EarthView::World::Graphic::CParticleAffector
                {
                ev_private:
                    CColourFaderAffector2(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /** Command object for red adjust (see EarthView::World::Core::CParamCommand).*/
                    class  EV_ParticleFX_DLL CCmdRedAdjust1 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRedAdjust1(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRedAdjust1();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for green adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdGreenAdjust1 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdGreenAdjust1(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdGreenAdjust1();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for blue adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdBlueAdjust1 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdBlueAdjust1(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdBlueAdjust1();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for alpha adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdAlphaAdjust1 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdAlphaAdjust1(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdAlphaAdjust1();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for red adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdRedAdjust2 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdRedAdjust2(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdRedAdjust2();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for green adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdGreenAdjust2 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdGreenAdjust2(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdGreenAdjust2();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for blue adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdBlueAdjust2 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdBlueAdjust2(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdBlueAdjust2();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for alpha adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdAlphaAdjust2 : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdAlphaAdjust2(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdAlphaAdjust2();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };
                    /** Command object for alpha adjust (see EarthView::World::Core::CParamCommand).*/
                    class EV_ParticleFX_DLL CCmdStateChange : public EarthView::World::Core::CParamCommand
                    {
                    ev_private:
                        CCmdStateChange(_in EarthView::World::Core::CNameValuePairList *pList);
                    public:
                        CCmdStateChange();
                        EVString doGet(const void *target) const;
                        void doSet(void *target, const EVString &val);
                    };

                    /** Default constructor. */
                    CColourFaderAffector2(EarthView::World::Graphic::CParticleSystem *psys);
                    /** See EarthView::World::Graphic::CParticleAffector. */
                    void _affectParticles(EarthView::World::Graphic::CParticleSystem *pSystem, Real timeElapsed);
                    /** Sets the colour adjustment to be made per second to particles.
                    @param red, green, blue, alpha
                        Sets the adjustment to be made to each of the colour components per second. These
                        values will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setAdjust1(float red, float green, float blue, float alpha );
                    void setAdjust1(float red, float green, float blue);
                    void setAdjust2(float red, float green, float blue, float alpha );
                    void setAdjust2(float red, float green, float blue);
                    /** Sets the red adjustment to be made per second to particles.
                    @param red
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setRedAdjust1(float red);
                    void setRedAdjust2(float red);
                    /** Gets the red adjustment to be made per second to particles. */
                    float getRedAdjust1() const;
                    float getRedAdjust2() const;
                    /** Sets the green adjustment to be made per second to particles.
                    @param green
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setGreenAdjust1(float green);
                    void setGreenAdjust2(float green);
                    /** Gets the green adjustment to be made per second to particles. */
                    float getGreenAdjust1() const;
                    float getGreenAdjust2() const;
                    /** Sets the blue adjustment to be made per second to particles.
                    @param blue
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setBlueAdjust1(float blue);
                    void setBlueAdjust2(float blue);
                    /** Gets the blue adjustment to be made per second to particles. */
                    float getBlueAdjust1() const;
                    float getBlueAdjust2() const;
                    /** Sets the alpha adjustment to be made per second to particles.
                    @param alpha
                        The adjustment to be made to the colour component per second. This
                        value will be added to the colour of all particles every second, scaled over each frame
                        for a smooth adjustment.
                    */
                    void setAlphaAdjust1(float alpha);
                    void setAlphaAdjust2(float alpha);
                    /** Gets the alpha adjustment to be made per second to particles. */
                    float getAlphaAdjust1() const;
                    float getAlphaAdjust2() const;

                    void setStateChange(Real NewValue );
                    Real getStateChange() const;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust1 msRedCmd1;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdRedAdjust2 msRedCmd2;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust1 msGreenCmd1;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdGreenAdjust2 msGreenCmd2;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust1 msBlueCmd1;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdBlueAdjust2 msBlueCmd2;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust1 msAlphaCmd1;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdAlphaAdjust2 msAlphaCmd2;
                    static EarthView::World::Plugin::ParticleFX::CColourFaderAffector2::CCmdStateChange msStateCmd;
                protected:
                    float mRedAdj1, mRedAdj2;
                    float mGreenAdj1,  mGreenAdj2;
                    float mBlueAdj1, mBlueAdj2;
                    float mAlphaAdj1, mAlphaAdj2;
                    Real StateChangeVal;
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

