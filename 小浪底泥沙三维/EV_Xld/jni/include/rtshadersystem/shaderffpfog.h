#ifndef _ShaderFFPFog_
#define _ShaderFFPFog_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
#include "shaderparameter.h"
#include "shadersubrenderstate.h"
#include <mathengine/vector4.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Fog sub render state implementation of the Fixed Function Pipeline.
                @see http://msdn.microsoft.com/en-us/library/bb173398.aspx
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CFFPFog : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                public:
                    /// Fog calculation mode enum.
                    enum CalcMode
                    {
                        CM_PER_VERTEX	= 1,						/// Per vertex fog calculations. (Default).
                        CM_PER_PIXEL	= 2							/// Per pixel fog calculations.
                    };
                ev_private:
                    CFFPFog(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CFFPFog();
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString	getType					() const;
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual int				getExecutionOrder		() const;
                    /**
                    @see SubRenderState::updateGpuProgramsParams.
                    */
                    virtual void			updateGpuProgramsParams	(EarthView::World::Graphic::CRenderable *rend, EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList);
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void			copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    /**
                    @see SubRenderState::preAddToRenderState.
                    */
                    virtual bool			preAddToRenderState		(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    /**
                    Set the fog properties this fog sub render state should emulate.
                    @param fogMode The fog mode to emulate (FOG_NONE, FOG_EXP, FOG_EXP2, FOG_LINEAR).
                    @param fogColour The colour of the fog.
                    @param fogStart Start distance of fog, used for linear mode only.
                    @param fogEnd End distance of fog, used for linear mode only.
                    @param fogDensity Fog density used in exponential modes only.
                    @see http://msdn.microsoft.com/en-us/library/bb173401.aspx
                    */
                    void			setFogProperties				(EarthView::World::Graphic::FogMode fogMode,
                            const EarthView::World::Graphic::CColourValue &fogColour,
                            float fogStart,
                            float fogEnd,
                            float fogDensity);
                    /**
                    Set the fog calculation mode. Either per vertex or per pixel.
                    @param calcMode The calculation mode to set.
                    */
                    void			setCalcMode						(EarthView::World::Graphic::RTShaderSystem::CFFPFog::CalcMode calcMode)
                    {
                        mCalcMode = calcMode;
                    }
                    /**
                    Return the current calculation mode.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CFFPFog::CalcMode		getCalcMode						() const
                    {
                        return mCalcMode;
                    }
                    static EVString Type;
                    /// Protected methods
                ev_internal:
                    /**
                    @see SubRenderState::resolveParameters.
                    */
                    virtual bool			resolveParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::resolveDependencies.
                    */
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::addFunctionInvocations.
                    */
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /// Attributes.
                protected:
                    EarthView::World::Graphic::RTShaderSystem::CFFPFog::CalcMode			mCalcMode;								/// Fog calculation mode.
                    EarthView::World::Graphic::FogMode				mFogMode;								/// Fog formula.
                    EarthView::World::Graphic::CColourValue			mFogColourValue;						/// Fog colour value.
                    EarthView::World::Spatial::Math::CVector4				mFogParamsValue;						/// Fog parameters (density, start, end, 1/end-start).
                    bool				mPassOverrideParams;					/// True if the fog parameters should be taken from the pass.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	mWorldViewProjMatrix;					/// World view projection parameter.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	mFogColour;								/// Fog colour parameter.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr	mFogParams;								/// Fog parameters program parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mVSInPos;								/// Vertex shader input position parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mVSOutFogFactor;						/// Vertex shader output fog colour parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mPSInFogFactor;							/// Pixel shader input fog factor.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mVSOutDepth;							/// Vertex shader output depth.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mPSInDepth;								/// Pixel shader input depth.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr		mPSOutDiffuse;							/// Pixel shader output diffuse colour.
                };

                /**
                A factory that enables creation of FFPFog instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CFFPFogFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CFFPFogFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CFFPFogFactory() {}
                    /**
                    @see SubRenderStateFactory::getType.
                    */
                    virtual EVString	getType				() const;
                    /**
                    @see SubRenderStateFactory::createInstance.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);
                    /**
                    @see SubRenderStateFactory::writeInstance.
                    */
                    virtual void			writeInstance		(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);

                ev_internal:
                    /**
                    @see SubRenderStateFactory::createInstanceImpl.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstanceImpl	();
                };
            }
        }
    }
}

#endif
#endif

