#ifndef _ShaderFFPColur_
#define _ShaderFFPColur_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
#include "shadersubrenderstate.h"
#include "shaderparameter.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** Colour sub render state implementation of the Fixed Function Pipeline.
                Derives from SubRenderState class.
                */
                class EV_RTSS_DLL CFFPColour : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                ev_private:
                    CFFPColour(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// Parameter stage flags of the colour component.
                    enum StageFlags
                    {
                        SF_VS_INPUT_DIFFUSE		= 1 << 1,
                        SF_VS_INPUT_SPECULAR	= 1 << 2,
                        SF_VS_OUTPUT_DIFFUSE	= 1 << 3,
                        SF_VS_OUTPUT_SPECULAR	= 1 << 4,
                        SF_PS_INPUT_DIFFUSE		= 1 << 5,
                        SF_PS_INPUT_SPECULAR	= 1 << 6,
                        SF_PS_OUTPUT_DIFFUSE	= 1 << 7,
                        SF_PS_OUTPUT_SPECULAR	= 1 << 8,
                    };
                    /// Interface.
                public:
                    /** Class default constructor */
                    CFFPColour();

                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString	getType					() const;
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual int				getExecutionOrder		() const;
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void			copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    /**
                    @see SubRenderState::preAddToRenderState.
                    */
                    virtual bool			preAddToRenderState		(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    /**
                    Set the resolve stage flags that this sub render state will produce.
                    I.E - If one want to specify that the vertex shader program needs to get a diffuse component
                    and the pixel shader should output diffuse component he should pass SF_VS_INPUT_DIFFUSE | SF_PS_OUTPUT_DIFFUSE.
                    @param flags The stage flag to set.
                    */
                    void				setResolveStageFlags		(ev_uint32 flags)
                    {
                        mResolveStageFlags = flags;
                    }
                    /**
                    Get the current resolve stage flags.
                    */
                    ev_uint32		getResolveStageFlags		() const
                    {
                        return mResolveStageFlags;
                    }
                    /**
                    Add the given mask to resolve stage flags that this sub render state will produce.
                    @param mask The mask to add to current flag set.
                    */
                    void				addResolveStageMask 		(ev_uint32 mask)
                    {
                        mResolveStageFlags |= mask;
                    }
                    /**
                    Remove the given mask from the resolve stage flags that this sub render state will produce.
                    @param mask The mask to remove from current flag set.
                    */
                    void				removeResolveStageMask 		(ev_uint32 mask)
                    {
                        mResolveStageFlags &= ~mask;
                    }
                    static EVString Type;
                    /// Protected methods
                ev_internal:
                    virtual bool			resolveParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /// Attributes.
                protected:
                    ParameterPtr	mVSInputDiffuse;							/// Vertex shader input diffuse component.
                    ParameterPtr	mVSInputSpecular;							/// Vertex shader input specular component.
                    ParameterPtr	mVSOutputDiffuse;							/// Vertex shader output diffuse component.
                    ParameterPtr	mVSOutputSpecular;							/// Vertex shader input specular component.
                    ParameterPtr	mPSInputDiffuse;							/// Pixel shader input diffuse component.
                    ParameterPtr	mPSInputSpecular;							/// Pixel shader input specular component.
                    ParameterPtr	mPSOutputDiffuse;							/// Pixel shader output diffuse component.
                    ParameterPtr	mPSOutputSpecular;							/// Pixel shader input specular component.
                    ev_uint32	mResolveStageFlags;							/// Stage flags that defines resolve parameters definitions.
                };

                /**
                A factory that enables creation of FFPColour instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CFFPColourFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                ev_private:
                    CFFPColourFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CFFPColourFactory() {}
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

