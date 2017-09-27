#ifndef _ShaderFFPLighting_
#define _ShaderFFPLighting_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
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


                /** Lighting sub render state implementation of the Fixed Function Pipeline.
                @see http://msdn.microsoft.com/en-us/library/bb147178.aspx
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CFFPLighting : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CFFPLighting(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:

                    /** Class default constructor */
                    CFFPLighting();
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
                protected:
                    /**
                    Internal method that adds global illumination component functions invocations.
                    */
                    bool			addGlobalIlluminationInvocation	(CFunction *vsMain, const int groupOrder, int &internalCounter);

                    /**
                    Internal method that adds per light illumination component functions invocations.
                    */
                    bool			addIlluminationInvocation		(LightParams *curLightParams, CFunction *vsMain, const int groupOrder, int &internalCounter);

                    /// Attributes.
                protected:
                    TrackVertexColourType	mTrackVertexColourType;							/// Track per vertex colour type.
                    bool					mSpecularEnable;								/// Specular component enabled/disabled.
                    LightParamsList			mLightParamsList;								/// CLight list.
                    UniformParameterPtr		mWorldViewMatrix;								/// World view matrix parameter.
                    UniformParameterPtr		mWorldViewITMatrix;								/// World view matrix inverse transpose parameter.
                    ParameterPtr			mVSInPosition;									/// Vertex shader input position parameter.
                    ParameterPtr			mVSInNormal;									/// Vertex shader input normal.
                    ParameterPtr			mVSDiffuse;										/// Vertex shader diffuse.
                    ParameterPtr			mVSOutDiffuse;									/// Vertex shader output diffuse colour parameter.
                    ParameterPtr			mVSOutSpecular;									/// Vertex shader output specular colour parameter.
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
                A factory that enables creation of FFPLighting instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CFFPLightingFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CFFPLightingFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CFFPLightingFactory() {}
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

