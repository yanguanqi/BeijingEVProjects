#ifndef __PredefinedControllers_H__
#define __PredefinedControllers_H__
#pragma once
#include "graphic/graphic_config.h"
#include "common.h"
#include "controller.h"
#include "framelistener.h"
#include "gpuprogramparams.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CTextureUnitState;

            ////-----------------------------------------------------------------------
            //// CController Values
            ////-----------------------------------------------------------------------
            /**** Predefined controller value for getting the latest frame time.
            ****/
            class EV_GRAPHIC_DLL CFrameTimeControllerValue : public EarthView::World::Graphic::CControllerValue			/// public EarthView::World::Graphic::CFrameListener
            {
            protected:
                Real mFrameTime;
                Real mTimeFactor;
                Real mElapsedTime;
                Real mFrameDelay;
            public:
                CFrameTimeControllerValue();
            ev_private:
                CFrameTimeControllerValue(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~CFrameTimeControllerValue();
                Real getValue() const;
                void setValue(_in Real value);
                Real getTimeFactor() const;
                void setTimeFactor(_in Real tf);
                Real getFrameDelay() const;
                void setFrameDelay(_in Real fd);
                Real getElapsedTime() const;
                void setElapsedTime(_in Real elapsedTime);
                virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent &evt);
            public:
                class EV_GRAPHIC_DLL CInternalFrameListener : public EarthView::World::Graphic::CFrameListener
                {
                public:
                    CInternalFrameListener(EarthView::World::Graphic::CFrameTimeControllerValue   *ref_parent);
                    ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent &evt);
                    ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent &evt);
                ev_private:
                    CInternalFrameListener(_in EarthView::World::Core::CNameValuePairList *pList);
                private:
                    EarthView::World::Graphic::CFrameTimeControllerValue   *m_Parent;
                };
                virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent &evt);
                ////virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt);
                virtual EarthView::World::Graphic::CFrameListener *getListenerPtr();
                ////EarthView::World::Graphic::CFrameListener& getListener ();
            private:
                CInternalFrameListener *mpFrameListener;
            };
            ////-----------------------------------------------------------------------
            /**** Predefined controller value for getting / setting the frame number of a texture layer
            ****/
            class EV_GRAPHIC_DLL CTextureFrameControllerValue : public EarthView::World::Graphic::CControllerValue
            {
            protected:
                EarthView::World::Graphic::CTextureUnitState *mTextureLayer;
            public:
                CTextureFrameControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t);
            ev_private:
                CTextureFrameControllerValue(_in EarthView::World::Core::CNameValuePairList *pList);
                /**** Gets the frame number as a parametric value in the range [0,1]
                ****/
            public:
                Real getValue() const;
                /**** Sets the frame number as a parametric value in the range [0,1]; the actual frame number is value * (numFrames-1).
                ****/
                void setValue(_in Real value);
            };
            ////-----------------------------------------------------------------------
            /**** Predefined controller value for getting / setting a texture coordinate modifications (scales and translates).
                @remarks
                    Effects can be applied to the scale or the offset of the u or v coordinates, or both. If separate
                    modifications are required to u and v then 2 instances are required to control both independently, or 4
                    if you ant separate u and v scales as well as separate u and v offsets.
                @par
                    Because of the nature of this value, it can accept values outside the 0..1 parametric range.
            ****/
            class EV_GRAPHIC_DLL CTexCoordModifierControllerValue : public EarthView::World::Graphic::CControllerValue
            {
            protected:
                ev_bool mTransU, mTransV;
                ev_bool mScaleU, mScaleV;
                ev_bool mRotate;
                EarthView::World::Graphic::CTextureUnitState *mTextureLayer;
            public:
                /**** Constructor.
                    @param
                        t EarthView::World::Graphic::CTextureUnitState to apply the modification to.
                    @param
                        translateU If true, the u coordinates will be translated by the modification.
                    @param
                        translateV If true, the v coordinates will be translated by the modification.
                    @param
                        scaleU If true, the u coordinates will be scaled by the modification.
                    @param
                        scaleV If true, the v coordinates will be scaled by the modification.
                    @param
                        rotate If true, the texture will be rotated by the modification.
                ****/
                CTexCoordModifierControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t);
                CTexCoordModifierControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t, _in ev_bool translateU);
                CTexCoordModifierControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t, _in ev_bool translateU, _in ev_bool translateV);
                CTexCoordModifierControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t, _in ev_bool translateU, _in ev_bool translateV,
                                                 _in	ev_bool scaleU);
                CTexCoordModifierControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t, _in ev_bool translateU, _in ev_bool translateV,
                                                 _in	ev_bool scaleU, _in ev_bool scaleV);
                CTexCoordModifierControllerValue(_in EarthView::World::Graphic::CTextureUnitState *ref_t, _in ev_bool translateU, _in ev_bool translateV,
                                                 _in	ev_bool scaleU, _in ev_bool scaleV , _in ev_bool rotate);
                Real getValue() const;
                void setValue(_in Real value);
            ev_private:
                CTexCoordModifierControllerValue(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            ////-----------------------------------------------------------------------
            /**** Predefined controller value for setting a single floating-
                point value in a constant parameter of a vertex or fragment program.
            @remarks
            	EarthView::World::Core::CAny value is accepted, it is propagated into the 'x'
            	component of the constant register identified by the index. If you
            	need to use named parameters, retrieve the index from the param
            	object before setting this controller up.
            @note
            	Retrieving a value from the program parameters is not currently
            	supported, therefore do not use this controller value as a source,
            	only as a target.
            ****/
            class EV_GRAPHIC_DLL CFloatGpuParameterControllerValue : public EarthView::World::Graphic::CControllerValue
            {
            protected:
                //// The parameters to access
                EarthView::World::Graphic::GpuProgramParametersSharedPtr mParams;
                //// The index of the parameter to e read or set
                ev_size_t mParamIndex;
            public:
                /**** Constructor.
                    @param
                		params The parameters object to access
                    @param
                        index The index of the parameter to be set
                ****/
                CFloatGpuParameterControllerValue(_in EarthView::World::Graphic::GpuProgramParametersSharedPtr params,
                                                  _in	ev_size_t index );
                ~CFloatGpuParameterControllerValue() {}
                Real getValue() const;
                void setValue(_in Real value);
            ev_private:
                CFloatGpuParameterControllerValue(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            ////-----------------------------------------------------------------------
            //// CController functions
            ////-----------------------------------------------------------------------
            /**** Predefined controller function which just passes through the original source
            directly to dest.
            ****/
            class EV_GRAPHIC_DLL CPassthroughControllerFunction : public EarthView::World::Graphic::CControllerFunction
            {
            public:
                /**** Constructor.
                @param
                sequenceTime The amount of time in seconds it takes to loop through the whole animation sequence.
                @param
                timeOffset The offset in seconds at which to start (default is start at 0)
                ****/
                CPassthroughControllerFunction();
                CPassthroughControllerFunction(_in ev_bool deltaInput);
                /**** Overriden function.
                ****/
                Real calculate(_in Real source);
            ev_private:
                CPassthroughControllerFunction(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /**** Predefined controller function for dealing with animation.
            ****/
            class EV_GRAPHIC_DLL CAnimationControllerFunction : public EarthView::World::Graphic::CControllerFunction
            {
            protected:
                Real mSeqTime;
                Real mTime;
            public:
                /**** Constructor.
                    @param
                        sequenceTime The amount of time in seconds it takes to loop through the whole animation sequence.
                    @param
                        timeOffset The offset in seconds at which to start (default is start at 0)
                ****/
                CAnimationControllerFunction(_in Real sequenceTime);
                CAnimationControllerFunction(_in Real sequenceTime, _in Real timeOffset);
                /**** Overridden function.
                ****/
                Real calculate(_in Real source);
                /**** Set the time value manually. */
                void setTime(_in Real timeVal);
                /**** Set the sequence duration value manually. */
                void setSequenceTime(_in Real seqVal);
            ev_private:
                CAnimationControllerFunction(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            ////-----------------------------------------------------------------------
            /**** Predefined controller function which simply scales an input to an output value.
            */
            class EV_GRAPHIC_DLL CScaleControllerFunction : public EarthView::World::Graphic::CControllerFunction
            {
            protected:
                Real mScale;
            public:
                /**** Constructor, requires a scale factor.
                    @param
                        scalefactor The multiplier applied to the input to produce the output.
                    @param
                        deltaInput If true, signifies that the input will be a delta value such that the function should
                         add it to an internal counter before calculating the output.
                ****/
                CScaleControllerFunction(_in Real scalefactor, _in ev_bool deltaInput);
                /**** Overridden method.
                ****/
                Real calculate(_in Real source);
            ev_private:
                CScaleControllerFunction(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            ////-----------------------------------------------------------------------
            /**** Predefined controller function based on a waveform.
                @remarks
                    A waveform function translates parametric input to parametric output based on a wave. The factors
                    affecting the function are:
                    - wave type - the shape of the wave
                    - base - the base value of the output from the wave
                    - frequency - the speed of the wave in cycles per second
                    - phase - the offset of the start of the wave, e.g. 0.5 to start half-way through the wave
                    - amplitude - scales the output so that instead of lying within [0,1] it lies within [0,1] * amplitude
            		- duty cycle - the active width of a PWM signal
                @par
                    Note that for simplicity of integration with the rest of the controller insfrastructure, the output of
                    the wave is parametric i.e. 0..1, rather than the typical wave output of [-1,1]. To compensate for this, the
                    traditional output of the wave is scaled by the following function before output:
                @par
                    output = (waveoutput + 1) * 0.5
                @par
                    Hence a wave output of -1 becomes 0, a wave ouput of 1 becomes 1, and a wave output of 0 becomes 0.5.
            ****/
            class EV_GRAPHIC_DLL CWaveformControllerFunction : public EarthView::World::Graphic::CControllerFunction
            {
            protected:
                EarthView::World::Graphic::WaveformType mWaveType;
                Real mBase;
                Real mFrequency;
                Real mPhase;
                Real mAmplitude;
                Real mDutyCycle;
                /**** Overridden from EarthView::World::Graphic::CControllerFunction. ****/
                Real getAdjustedInput(_in Real input);
            public:
                /**** Default constructor, requires at least a wave type, other parameters can be defaulted unless required.
                    @param
                        deltaInput If true, signifies that the input will be a delta value such that the function should
                        add it to an internal counter before calculating the output.
                	@param
                		dutyCycle Used in PWM mode to specify the pulse width.
                ****/
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType);
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType, _in Real base);
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType, _in Real base, _in Real frequency);
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType, _in Real base, _in Real frequency, _in Real phase);
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType, _in Real base, _in Real frequency, _in Real phase, _in Real amplitude);
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType, _in Real base, _in Real frequency, _in Real phase, _in Real amplitude, _in ev_bool deltaInput);
                CWaveformControllerFunction(_in EarthView::World::Graphic::WaveformType wType, _in Real base, _in Real frequency, _in Real phase, _in Real amplitude, _in ev_bool deltaInput, _in Real dutyCycle);
                /**** Overridden function.
                ****/
                Real calculate(_in Real source);
            ev_private:
                CWaveformControllerFunction(_in EarthView::World::Core::CNameValuePairList *pList);
            };
        }
    }
}

#endif

