#ifndef _ShaderExHardwareSkinning_
#define _ShaderExHardwareSkinning_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shadersubrenderstate.h"
#include "shaderparameter.h"
#include "shaderfunctionatom.h"
#include "shaderexlinearskinning.h"
#include "shaderexhardwareskinningtechnique.h"
#include "shaderexdualquaternionskinning.h"
#include "shaderexlinearskinning.h"
#include <rendersystem.h>
#define HS_MAX_WEIGHT_COUNT 4

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                class CHardwareSkinningFactory;
                /** Implement a sub render state which performs hardware skinning.
                Meaning, this sub render states adds calculations which multiply
                the points and normals by their assigned bone matricies.
                */
                class EV_RTSS_DLL CHardwareSkinning : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
                {
                public:
                    class EV_RTSS_DLL SkinningData : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        SkinningData(_in EarthView::World::Core::CNameValuePairList *pList):
                            isValid(true), maxBoneCount(0), maxWeightCount(0), skinningType(ST_LINEAR), correctAntipodalityHandling(false), scalingShearingSupport(false)
                        {}

                    public:
                        SkinningData() :
                            isValid(true), maxBoneCount(0), maxWeightCount(0), skinningType(ST_LINEAR), correctAntipodalityHandling(false), scalingShearingSupport(false)
                        {}
                        bool isValid;
                        ev_uint16 maxBoneCount;
                        ev_uint16 maxWeightCount;
                        EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType;
                        bool correctAntipodalityHandling;
                        bool scalingShearingSupport;
                    };
                ev_private:
                    CHardwareSkinning(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CHardwareSkinning();
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual EVString getType() const;
                    /**
                    @see SubRenderState::getType.
                    */
                    virtual int getExecutionOrder() const;
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void copyFrom(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    /**
                    Set the hardware skinning parameters.
                    @param boneCount The maximum number of bones in the model this material
                    	 is assigned to. Note that this parameter can be higher but not
                    	 lower than the actual number of bones.
                    @param weightCount The maximum number of weights/bones affecting
                    	a vertex. Note that this parameter can be higher but not
                    	 lower than the actual number of affecting bones.
                    @param skinningType The type of skinning desired.
                    @param correctAntipodalityHandling If correct antipodality handling should be utilized (Only applicable for dual quaternion skinning).
                    @param scalingShearingSupport If scaling and shearing support should be enabled (Only applicable for dual quaternion skinning).
                    */
                    ///void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = ST_LINEAR,  bool correctAntipodalityHandling = false, bool scalingShearingSupport = false);
                    void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType,  bool correctAntipodalityHandling, bool scalingShearingSupport);
                    void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType,  bool correctAntipodalityHandling);
                    void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType);
                    void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount);
                    /**
                    Returns the number of bones in the model assigned to the material.
                    @see setHardwareSkinningParam()
                    */
                    ev_uint16 getBoneCount();
                    /**
                    Returns the number of weights/bones affecting a vertex.
                    @see setHardwareSkinningParam()
                    */
                    ev_uint16 getWeightCount();
                    /**
                    Returns the current skinning type in use.
                    @see setHardwareSkinningParam()
                     */
                    EarthView::World::Graphic::RTShaderSystem::SkinningType getSkinningType();
                    /**
                    Only applicable for dual quaternion skinning.
                    @see setHardwareSkinningParam()
                    */
                    bool hasCorrectAntipodalityHandling();
                    /**
                    Only applicable for dual quaternion skinning.
                    @see setHardwareSkinningParam()
                    */
                    bool hasScalingShearingSupport();
                    /**
                    @see SubRenderState::preAddToRenderState.
                    */
                    virtual bool preAddToRenderState(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    /**
                    Set the factory which created this sub render state
                    */
                    void _setCreator(const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pCreator)
                    {
                        mCreator = pCreator;
                    }
                    static EVString Type;
                ev_internal:
                    /// Protected methods
                    /**
                    @see SubRenderState::resolveParameters.
                    */
                    virtual bool resolveParameters (EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::resolveDependencies.
                    */
                    virtual bool resolveDependencies (EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see SubRenderState::addFunctionInvocations.
                    */
                    virtual bool addFunctionInvocations (EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                protected:
                    EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CLinearSkinning> mLinear;
                    EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning> mDualQuat;
                    EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique> mActiveTechnique;

                    const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *mCreator; 				////The factory which created this sub render state
                    EarthView::World::Graphic::RTShaderSystem::SkinningType mSkinningType;
                };
                EV_RTSS_DLL void operator<<(std::ostream &o, const CHardwareSkinning::SkinningData &data);
                /**
                A factory that enables creation of HardwareSkinning instances.
                @remarks Sub class of SubRenderStateFactory
                */
                class EV_RTSS_DLL CHardwareSkinningFactory : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
                {
                private:
                    static EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *ms_Singleton;
                ev_private:
                    CHardwareSkinningFactory(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CHardwareSkinningFactory();
                    ~CHardwareSkinningFactory();
                    /**
                    @see SubRenderStateFactory::getType.
                    */
                    virtual EVString getType() const;
                    /**
                    @see SubRenderStateFactory::createInstance.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState *createInstance(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);
                    /**
                    @see SubRenderStateFactory::writeInstance.
                    */
                    virtual void writeInstance(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    /**
                    Sets the list of custom shadow caster materials
                    */
                    virtual void setCustomShadowCasterMaterials(const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, const EarthView::World::Graphic::CMaterialPtr &caster1Weight, const EarthView::World::Graphic::CMaterialPtr &caster2Weight,
                            const EarthView::World::Graphic::CMaterialPtr &caster3Weight, const EarthView::World::Graphic::CMaterialPtr &caster4Weight);

                    /**
                    Sets the list of custom shadow receiver materials
                    */
                    virtual void setCustomShadowReceiverMaterials(const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, const EarthView::World::Graphic::CMaterialPtr &receiver1Weight, const EarthView::World::Graphic::CMaterialPtr &receiver2Weight,
                            const EarthView::World::Graphic::CMaterialPtr &receiver3Weight, const EarthView::World::Graphic::CMaterialPtr &receiver4Weight);
                    /**
                    Returns the name of a custom shadow caster material for a given number of weights
                    */
                    const EarthView::World::Graphic::CMaterialPtr &getCustomShadowCasterMaterial(const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, ev_uint16 index) const;
                    /**
                    Returns the name of a custom shadow receiver material for a given number of weights
                    */
                    const EarthView::World::Graphic::CMaterialPtr &getCustomShadowReceiverMaterial(const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, ev_uint16 index) const;
                    /**
                    	@brief
                    		Prepares an entity's material for use in the hardware skinning (HS).

                    	This function prepares an entity's material for use by the HS sub-render
                    	state. This function scans the entity and extracts the information of the amount
                    	of bones and weights in the entity. This function replaces the need specify in
                    	the material script the  amount of bones and weights needed to make the HS work.

                    	Note that this class does not save the the bone and weight count information
                    	internally. Rather this information is stored in the entity's materials as a
                    	user binded object.

                    	@param pEntity A pointer to an entity who's materials need preparing.
                    */
                    /*void prepareEntityForSkinning(const EarthView::World::Graphic::CEntity* pEntity, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType = ST_LINEAR, bool correctAntidpodalityHandling = false, bool shearScale = false);*/
                    void prepareEntityForSkinning(const EarthView::World::Graphic::CEntity *pEntity, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, bool correctAntidpodalityHandling, bool shearScale);
                    void prepareEntityForSkinning(const EarthView::World::Graphic::CEntity *pEntity, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, bool correctAntidpodalityHandling);
                    void prepareEntityForSkinning(const EarthView::World::Graphic::CEntity *pEntity, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType);
                    void prepareEntityForSkinning(const EarthView::World::Graphic::CEntity *pEntity);
                    /**
                    	@brief
                    		The maximum number of bones for which hardware skinning is performed.

                    	in a shader. For example, in pixel shader 3 this should be around 70-90
                    	dependent on other sub-render states in the shader.

                    	The default value for this property is 70 which correspond to pixel shader model 3 limitations
                    */
                    ev_uint16 getMaxCalculableBoneCount() const
                    {
                        return mMaxCalculableBoneCount;
                    }
                    /**
                    	Sets the maximum number of bones for which hardware skinning is performed.
                    	@see getMaxCalculableBoneCount()
                    */
                    void setMaxCalculableBoneCount(ev_uint16 count)
                    {
                        mMaxCalculableBoneCount = count;
                    }
                    /**
                    Override standard CSingleton retrieval.

                    @remarks Why do we do this? Well, it's because the CSingleton
                    	implementation is in a .h file, which means it gets compiled
                    	into anybody who includes it. This is needed for the
                    	CSingleton template to work, but we actually only want it
                    	compiled into the implementation of the class based on the
                    	CSingleton, not all of them. If we don't change this, we get
                    	link errors when trying to use the CSingleton-based class from
                    	an outside dll.

                    @par
                    	This method just delegates to the template version anyway,
                    	but the implementation stays in this single compilation unit,
                    	preventing link errors.
                    */
                    static EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory &getSingleton();

                    /**
                    Override standard CSingleton retrieval.

                    @remarks Why do we do this? Well, it's because the CSingleton
                    	implementation is in a .h file, which means it gets compiled
                    	into anybody who includes it. This is needed for the
                    	CSingleton template to work, but we actually only want it
                    	compiled into the implementation of the class based on the
                    	CSingleton, not all of them. If we don't change this, we get
                    	link errors when trying to use the CSingleton-based class from
                    	an outside dll.

                    @par
                    	This method just delegates to the template version anyway,
                    	but the implementation stays in this single compilation unit,
                    	preventing link errors.
                    */
                    static EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *getSingletonPtr();
                protected:
                    /**
                    	@brief
                    		Extracts the maximum amount of bones and weights used in an entity.

                    	@param pEntity The entity from which the information needs to be extracted.
                    	@param boneCount The maximum number of bones used by the entity.
                    	@param weightCount The maximum number of weights used by the entity.
                    	@return Returns true if the entity can use HS. False if not.
                    */
                    bool extractSkeletonData(const EarthView::World::Graphic::CEntity *pEntity, ev_uint16 &boneCount,
                                             ev_uint16 &weightCount);
                    /**
                    	@brief
                    		Updates an entity's the skeleton data onto one of it's materials.

                    	@param pMaterial The material to update with the information.
                    	@param isVaild Tells if the material can be used with HS.
                    	@param boneCount The maximum number of bones used by the entity.
                    	@param weightCount The maximum number of weights used by the entity.
                    	@return Returns true if the data was updated on the material. False if not.
                    */
                    bool imprintSkeletonData(const EarthView::World::Graphic::CMaterialPtr &pMaterial, bool isVaild,
                                             ev_uint16 boneCount, ev_uint16 weightCount, EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, bool correctAntidpodalityHandling, bool scalingShearingSupport);

                ev_internal:
                    /**
                    @see SubRenderStateFactory::createInstanceImpl.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState *createInstanceImpl();
                protected:
                    //// A set of custom shadow caster materials
                    EarthView::World::Graphic::CMaterialPtr mCustomShadowCasterMaterialsLinear[HS_MAX_WEIGHT_COUNT];
                    EarthView::World::Graphic::CMaterialPtr mCustomShadowCasterMaterialsDualQuaternion[HS_MAX_WEIGHT_COUNT];
                    //// A set of custom shadow receiver materials
                    EarthView::World::Graphic::CMaterialPtr mCustomShadowReceiverMaterialsLinear[HS_MAX_WEIGHT_COUNT];
                    EarthView::World::Graphic::CMaterialPtr mCustomShadowReceiverMaterialsDualQuaternion[HS_MAX_WEIGHT_COUNT];
                    ////The maximum number of bones for which hardware skinning is performed.
                    ////@see getMaxCalculableBoneCount()
                    ev_uint16 mMaxCalculableBoneCount;
                };
            }
        }
    }
}

#endif
#endif

