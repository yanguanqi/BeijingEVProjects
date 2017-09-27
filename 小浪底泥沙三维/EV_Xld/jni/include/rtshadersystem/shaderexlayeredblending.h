#ifndef _ShaderExLayeredBlending_
#define _ShaderExLayeredBlending_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shaderffptexturing.h"
#include "shaderprogramset.h"
#include "shaderparameter.h"
#include "shaderfunction.h"
#include "shadersubrenderstate.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


#define SGX_LIB_LAYEREDBLENDING     "SGXLib_LayeredBlending"
                /** Texturing sub render state implementation of layered blending.
                Derives from FFPTexturing class which derives from SubRenderState class.
                */
                class EV_RTSS_DLL CLayeredBlending : public EarthView::World::Graphic::RTShaderSystem::CFFPTexturing
                {
                ev_private:
                    CLayeredBlending(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    enum BlendMode
                    {
                        LB_Invalid = -1,
                        LB_FFPBlend,
                        LB_BlendNormal,
                        LB_BlendLighten,
                        LB_BlendDarken,
                        LB_BlendMultiply,
                        LB_BlendAverage,
                        LB_BlendAdd,
                        LB_BlendSubtract,
                        LB_BlendDifference,
                        LB_BlendNegation,
                        LB_BlendExclusion,
                        LB_BlendScreen,
                        LB_BlendOverlay,
                        LB_BlendSoftLight,
                        LB_BlendHardLight,
                        LB_BlendColorDodge,
                        LB_BlendColorBurn,
                        LB_BlendLinearDodge,
                        LB_BlendLinearBurn,
                        LB_BlendLinearLight,
                        LB_BlendVividLight,
                        LB_BlendPinLight,
                        LB_BlendHardMix,
                        LB_BlendReflect,
                        LB_BlendGlow,
                        LB_BlendPhoenix,
                        LB_BlendSaturation,
                        LB_BlendColor,
                        LB_BlendLuminosity,
                        LB_MaxBlendModes
                    };
                    enum SourceModifier
                    {
                        SM_Invalid = -1,
                        SM_None,
                        SM_Source1Modulate,
                        SM_Source2Modulate,
                        SM_Source1InvModulate,
                        SM_Source2InvModulate,
                        SM_MaxSourceModifiers
                    };
                    class EV_RTSS_DLL  TextureBlend : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        TextureBlend(_in EarthView::World::Core::CNameValuePairList *pList) : blendMode(LB_Invalid), sourceModifier(SM_Invalid), customNum(0) {}
                    public:
                        TextureBlend() : blendMode(LB_Invalid), sourceModifier(SM_Invalid), customNum(0) {}
                        EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode blendMode; 				///The blend mode to use
                        EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier sourceModifier; 				///The source modification to use
                        int customNum; 				/// The number of the custom param controlling the source modification
                        EarthView::World::Graphic::RTShaderSystem::ParameterPtr modControlParam; 				///The parameter controlling the source modification
                    };

                    /** Class default constructor */
                    CLayeredBlending();
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString	getType					() const;

                    /**
                    Set the blend mode of the given texture unit layer with the previous layer.
                    @param index The texture unit texture. Textures units (index-1) and (index) will be blended.
                    @param mode The blend mode to apply.
                    */
                    void setBlendMode(ev_uint16 index, BlendMode mode);
                    /**
                    Return the blend mode of the given texture unit index.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode getBlendMode(ev_uint16 index) const;


                    /**
                    Set the source modifier parameters for a given texture unit
                    @param modType The source modification type to use
                    @param customNum The custom parameter number used to control the modification
                    */
                    void setSourceModifier(ev_uint16 index, SourceModifier modType, int customNum);
                    /**
                    Returns the source modifier parameters for a given texture unit
                    @return True if a valid modifier exist for the given texture unit
                    @param modType The source modification type to use
                    @param customNum The custom parameter number used to control the modification
                    */
                    bool getSourceModifier(ev_uint16 index, SourceModifier &modType, int &customNum) const;
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    static EVString Type;
                    /// Protected methods
                ev_internal:

                    /**
                    @see SubRenderState::resolveParameters.
                    */
                    virtual bool resolveParameters(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::resolveDependencies.
                    */
                    virtual bool resolveDependencies(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);

                    virtual void addPSBlendInvocations(EarthView::World::Graphic::RTShaderSystem::CFunction *psMain,
                                                       EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1,
                                                       EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2,
                                                       EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel,
                                                       int samplerIndex,
                                                       const EarthView::World::Graphic::CLayerBlendModeEx &blendMode,
                                                       const int groupOrder,
                                                       int &internalCounter,
                                                       int targetChannels);
                protected:
                    /**
                    Adds the function invocation to the pixel shader which will modify
                    the blend sources according to the source modification parameters.
                    */
                    void addPSModifierInvocation(EarthView::World::Graphic::RTShaderSystem::CFunction *psMain,
                                                 int samplerIndex,
                                                 EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1,
                                                 EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2,
                                                 const int groupOrder,
                                                 int &internalCounter,
                                                 int targetChannels);
                    /// Attributes.
                    vector<TextureBlend> mTextureBlends;
                };
                /**
                A factory that enables creation of LayeredBlending instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class CLayeredBlendingFactory : public CSubRenderStateFactory
                {
                public:
                    /**
                    @see SubRenderStateFactory::getType.
                    */
                    virtual EVString	getType	() const;
                    /**
                    @see SubRenderStateFactory::createInstance.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(CScriptCompiler *compiler, CPropertyAbstractNode *prop, CTextureUnitState *texState, CSGScriptTranslator *translator);
                    /**
                    @see SubRenderStateFactory::writeInstance.
                    */
                    virtual void writeInstance		(CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, const CTextureUnitState *srcTextureUnit, const CTextureUnitState *dstTextureUnit);


                ev_internal:
                    /**
                    @see SubRenderStateFactory::createInstanceImpl.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState *createInstanceImpl	();
                protected:
                    /**
                    @Converts string to Enum
                    */
                    CLayeredBlending::BlendMode stringToBlendMode(const EVString &strValue);
                    /**
                    @Converts Enum to string
                    */
                    EVString blendModeToString(CLayeredBlending::BlendMode blendMode);
                    /**
                    @Converts string to Enum
                    */
                    CLayeredBlending::SourceModifier stringToSourceModifier(const EVString &strValue);

                    /**
                    @Converts Enum to string
                    */
                    EVString sourceModifierToString(CLayeredBlending::SourceModifier modifier);
                    /**
                    Returns the LayeredBlending sub-rener state previously created for this material/pass.
                    if no such sub-render state exists creates a new one
                    @param trscript compiler
                    */
                    CLayeredBlending *createOrRetrieveSubRenderState(CSGScriptTranslator *translator);
                };
            }
        }
    }
}


#endif
#endif

