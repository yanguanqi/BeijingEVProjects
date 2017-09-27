#ifndef _ShaderFFPTextureStage_
#define _ShaderFFPTextureStage_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
#include "shadersubrenderstate.h"
#include "shaderparameter.h"
#include <rendersystem.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Texturing sub render state implementation of the Fixed Function Pipeline.
                Implements texture coordinate processing:
                @see http://msdn.microsoft.com/en-us/library/bb206247.aspx
                Implements texture blending operation:
                @see http://msdn.microsoft.com/en-us/library/bb206241.aspx
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CFFPTexturing : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CFFPTexturing(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CFFPTexturing();
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
                public:
                    /// Per texture unit parameters.
                    class EV_RTSS_DLL TextureUnitParams : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        TextureUnitParams(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        TextureUnitParams() {}
                        EarthView::World::Graphic::CTextureUnitState		*mTextureUnitState;								/// Texture unit state.
                        const EarthView::World::Graphic::CFrustum			*mTextureProjector;								/// Texture projector.
                        ev_uint16			mTextureSamplerIndex;							/// Texture sampler index.
                        EarthView::World::Graphic::GpuConstantType			mTextureSamplerType;							/// Texture sampler index.
                        EarthView::World::Graphic::GpuConstantType			mVSInTextureCoordinateType;						/// Vertex shader input texture coordinate type.
                        EarthView::World::Graphic::GpuConstantType			mVSOutTextureCoordinateType;					/// Vertex shader output texture coordinates type.
                        TexCoordCalcMethod		mTexCoordCalcMethod;							/// Texture coordinates calculation method.
                        EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		mTextureMatrix;									/// Texture matrix parameter.
                        EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		mTextureViewProjImageMatrix;					/// Texture View Projection Image space matrix parameter.
                        EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		mTextureSampler;								/// Texture sampler parameter.
                        EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mVSInputTexCoord;								/// Vertex shader input texture coordinates parameter.
                        EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mVSOutputTexCoord;								/// Vertex shader output texture coordinates parameter.
                        EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mPSInputTexCoord;								/// Pixel shader input texture coordinates parameter.
                    };
                protected:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams>			TextureUnitParamsList;
                    typedef TextureUnitParamsList::iterator			TextureUnitParamsIterator;
                    typedef TextureUnitParamsList::const_iterator	TextureUnitParamsConstIterator;
                    /// Protected methods
                protected:
                    /**
                    Set the number of texture units this texturing sub state has to handle.
                    @param count The number of texture unit states.
                    */
                    void					setTextureUnitCount		(size_t count);
                    /**
                    Return the number of texture units this sub state handle.
                    */
                    size_t					getTextureUnitCount		() const
                    {
                        return mTextureUnitParamsList.size();
                    }
                    /**
                    Set texture unit of a given stage index.
                    @param index The stage index of the given texture unit state.
                    @param textureUnitState The texture unit state to bound the the stage index.
                    */
                    void					setTextureUnit			(ev_uint16 index, EarthView::World::Graphic::CTextureUnitState *textureUnitState);

                    /**
                    Internal method that resolves uniform parameters of the given texture unit parameters.
                    */
                    bool			resolveUniformParams	(EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams, EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    Internal method that resolves functions parameters of the given texture unit parameters.
                    */
                    bool			resolveFunctionsParams	(EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams, EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
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
                    Internal method that adds vertex shader functions invocations.
                    */
                    bool					addVSFunctionInvocations(EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams, EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain);
                    /**
                    Internal method that adds pixel shader functions invocations.
                    */
                    bool					addPSFunctionInvocations(EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams, EarthView::World::Graphic::RTShaderSystem::CFunction *psMain, int &internalCounter);
                    /**
                    	Determines the texture coordinates calculation method of the given texture unit state.
                    	*/
                    TexCoordCalcMethod		getTexCalcMethod		(EarthView::World::Graphic::CTextureUnitState *textureUnitState);
                    /**
                    Determines if the given texture unit state need to use texture transformation matrix..
                    */
                    bool					needsTextureMatrix		(EarthView::World::Graphic::CTextureUnitState *textureUnitState);
                ev_internal:
                    /**
                    Adds the fragment shader code which samples the texel color in the texture
                    */
                    virtual void					addPSSampleTexelInvocation(EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams *textureUnitParams, EarthView::World::Graphic::RTShaderSystem::CFunction *psMain,
                            const EarthView::World::Graphic::RTShaderSystem::ParameterPtr &texel, int groupOrder, int &internalCounter);
                    virtual void					addPSArgumentInvocations(EarthView::World::Graphic::RTShaderSystem::CFunction *psMain,
                            EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg,
                            EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel,
                            int samplerIndex,
                            EarthView::World::Graphic::LayerBlendSource blendSrc,
                            const EarthView::World::Graphic::CColourValue &colourValue,
                            Real alphaValue,
                            bool isAlphaArgument,
                            const int groupOrder,
                            int &internalCounter);
                    virtual void					addPSBlendInvocations(EarthView::World::Graphic::RTShaderSystem::CFunction *psMain,
                            EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1,
                            EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2,
                            EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel,
                            int samplerIndex,
                            const EarthView::World::Graphic::CLayerBlendModeEx &blendMode,
                            const int groupOrder,
                            int &internalCounter,
                            int targetChannels);


                    /**
                    Determines whether a given texture unit needs to be processed by this srs
                    */
                    virtual bool isProcessingNeeded(EarthView::World::Graphic::CTextureUnitState *texUnitState);

                    /// Attributes.
                protected:
                    TextureUnitParamsList	mTextureUnitParamsList;						/// Texture units list.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		mWorldMatrix;								/// World matrix parameter.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		mWorldITMatrix;								/// World inverse transpose matrix parameter.
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr		mViewMatrix;								/// View matrix parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mVSInputNormal;								/// Vertex shader input normal parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr  			mVSInputPos;								/// Vertex shader input position parameter.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mPSOutDiffuse;								/// Pixel shader output colour.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mPSDiffuse;									/// Pixel shader diffuse colour.
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr			mPSSpecular;								/// Pixel shader specular colour.
                };

                /**
                A factory that enables creation of FFPTexturing instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CFFPTexturingFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CFFPTexturingFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CFFPTexturingFactory() {}
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

