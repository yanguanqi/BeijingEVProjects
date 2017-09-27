#ifndef _ShaderExPerPixelLighting_
#define _ShaderExPerPixelLighting_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shaderparameter.h"
#include "shadersubrenderstate.h"
#include <mathengine/vector4.h>
#include <light.h>
#include <common.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

#define SGX_LIB_PERPIXELLIGHTING					"SGXLib_PerPixelLighting"
#define SGX_FUNC_TRANSFORMNORMAL					"SGX_TransformNormal"
#define SGX_FUNC_TRANSFORMPOSITION					"SGX_TransformPosition"
#define SGX_FUNC_LIGHT_DIRECTIONAL_DIFFUSE			"SGX_Light_Directional_Diffuse"
#define SGX_FUNC_LIGHT_DIRECTIONAL_DIFFUSESPECULAR	"SGX_Light_Directional_DiffuseSpecular"
#define SGX_FUNC_LIGHT_POINT_DIFFUSE				"SGX_Light_Point_Diffuse"
#define SGX_FUNC_LIGHT_POINT_DIFFUSESPECULAR		"SGX_Light_Point_DiffuseSpecular"
#define SGX_FUNC_LIGHT_SPOT_DIFFUSE					"SGX_Light_Spot_Diffuse"
#define SGX_FUNC_LIGHT_SPOT_DIFFUSESPECULAR			"SGX_Light_Spot_DiffuseSpecular"

                /** Per pixel Lighting extension sub render state implementation.
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CPerPixelLighting : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CPerPixelLighting(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CPerPixelLighting();
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


                    static EVString Type;
                    /// Protected types:
                ev_private:

                    /// Per light parameters.
                    struct EV_RTSS_DLL LightParams
                    {
                        CLight::LightTypes		mType;								/// CLight type.
                        UniformParameterPtr		mPosition;							/// CLight position.
                        UniformParameterPtr		mDirection;							/// CLight direction.
                        UniformParameterPtr		mAttenuatParams;					/// Attenuation parameters.
                        UniformParameterPtr		mSpotParams;						/// Spot light parameters.
                        UniformParameterPtr		mDiffuseColour;						/// Diffuse colour.
                        UniformParameterPtr		mSpecularColour;					/// Specular colour.
                    };
                protected:
                    typedef vector<LightParams>				LightParamsList;
                    typedef LightParamsList::iterator				LightParamsIterator;
                    typedef LightParamsList::const_iterator			LightParamsConstIterator;
                    /// Protected methods
                protected:
                    /**
                    Set the track per vertex colour type. Ambient, Diffuse, Specular and Emissive lighting components source
                    can be the vertex colour component. To establish such a link one should provide the matching flags to this
                    sub render state.
                    */
                    void					setTrackVertexColourType(TrackVertexColourType type)
                    {
                        mTrackVertexColourType = type;
                    }
                    /**
                    Return the current track per vertex type.
                    */
                    TrackVertexColourType	getTrackVertexColourType() const
                    {
                        return mTrackVertexColourType;
                    }

                    /**
                    Set the light count per light type that this sub render state will generate.
                    @see ShaderGenerator::setLightCount.
                    */
                    void					setLightCount			(const int lightCount[3]);
                    /**
                    Get the light count per light type that this sub render state will generate.
                    @see ShaderGenerator::getLightCount.
                    */
                    void					getLightCount			(int lightCount[3]) const;
                    /**
                    Set the specular component state. If set to true this sub render state will compute a specular
                    lighting component in addition to the diffuse component.
                    @param enable EarthView::World::Graphic::CPass true to enable specular component computation.
                    */
                    void					setSpecularEnable		(bool enable)
                    {
                        mSpecularEnable = enable;
                    }
                    /**
                    Get the specular component state.
                    */
                    bool					getSpecularEnable		() const
                    {
                        return mSpecularEnable;
                    }


                    /** Resolve global lighting parameters */
                    bool					resolveGlobalParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /** Resolve per light parameters */
                    bool					resolvePerLightParameters	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                ev_internal:
                    /**
                    @see SubRenderState::resolveParameters.
                    */
                    virtual bool			resolveParameters			(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::resolveDependencies.
                    */
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::addFunctionInvocations.
                    */
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                protected:

                    /**
                    Internal method that adds related vertex shader functions invocations.
                    */
                    bool			addVSInvocation						(CFunction *vsMain, const int groupOrder, int &internalCounter);

                    /**
                    Internal method that adds global illumination component functions invocations.
                    */
                    bool			addPSGlobalIlluminationInvocation	(CFunction *psMain, const int groupOrder, int &internalCounter);
                    /**
                    Internal method that adds per light illumination component functions invocations.
                    */
                    bool			addPSIlluminationInvocation		(LightParams *curLightParams, CFunction *psMain, const int groupOrder, int &internalCounter);
                    /**
                    Internal method that adds the final colour assignments.
                    */
                    bool			addPSFinalAssignmentInvocation	(CFunction *psMain, const int groupOrder, int &internalCounter);

                    /// Attributes.
                protected:
                    TrackVertexColourType	mTrackVertexColourType;							/// Track per vertex colour type.
                    bool					mSpecularEnable;								/// Specular component enabled/disabled.
                    LightParamsList			mLightParamsList;								/// CLight list.
                    UniformParameterPtr		mWorldViewMatrix;								/// World view matrix parameter.
                    UniformParameterPtr		mWorldViewITMatrix;								/// World view matrix inverse transpose parameter.
                    ParameterPtr			mVSInPosition;									/// Vertex shader input position parameter.
                    ParameterPtr			mVSOutViewPos;									/// Vertex shader output view position (position in camera space) parameter.
                    ParameterPtr			mPSInViewPos;									/// Pixel shader input view position (position in camera space) parameter.
                    ParameterPtr			mVSInNormal;									/// Vertex shader input normal.
                    ParameterPtr			mVSOutNormal;									/// Vertex shader output normal.
                    ParameterPtr			mPSInNormal;									/// Pixel shader input normal.
                    ParameterPtr			mPSTempDiffuseColour;							/// Pixel shader temporary diffuse calculation parameter.
                    ParameterPtr			mPSTempSpecularColour;							/// Pixel shader temporary specular calculation parameter.
                    ParameterPtr			mPSDiffuse;										/// Pixel shader input/local diffuse parameter.
                    ParameterPtr			mPSSpecular;									/// Pixel shader input/local specular parameter.
                    ParameterPtr			mPSOutDiffuse;									/// Pixel shader output diffuse parameter.
                    ParameterPtr			mPSOutSpecular;									/// Pixel shader output specular parameter.
                    UniformParameterPtr		mDerivedSceneColour;							/// Derived scene colour parameter.
                    UniformParameterPtr		mLightAmbientColour;							/// Ambient light colour parameter.
                    UniformParameterPtr		mDerivedAmbientLightColour;						/// Derived ambient light colour parameter.
                    UniformParameterPtr		mSurfaceAmbientColour;							/// Surface ambient colour parameter.
                    UniformParameterPtr		mSurfaceDiffuseColour;							/// Surface diffuse colour parameter.
                    UniformParameterPtr		mSurfaceSpecularColour;							/// Surface specular colour parameter.
                    UniformParameterPtr		mSurfaceEmissiveColour;							/// Surface emissive colour parameter.
                    UniformParameterPtr		mSurfaceShininess;								/// Surface shininess parameter.
                    static CLight			msBlankLight;									/// Shared blank light.
                };

                /**
                A factory that enables creation of PerPixelLighting instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CPerPixelLightingFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CPerPixelLightingFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CPerPixelLightingFactory() {}
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

