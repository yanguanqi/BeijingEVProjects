#ifndef _ShaderExHardwareSkinningTechnique_
#define _ShaderExHardwareSkinningTechnique_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shadersubrenderstate.h"
#include "shaderparameter.h"
#include "rendersystem.h"
#include "shaderfunctionatom.h"

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
                class EV_RTSS_DLL CHardwareSkinningTechnique : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CHardwareSkinningTechnique(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CHardwareSkinningTechnique();
                    virtual ~CHardwareSkinningTechnique();
                    /**
                    @see SubRenderState::copyFrom.
                    */
                    virtual void copyFrom(const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique *hardSkin);
                    /**
                    @see HardwareSkinning::setHardwareSkinningParam.
                    */
                    void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, bool correctAntipodalityHandling, bool scalingShearingSupport);
                    void setHardwareSkinningParam(ev_uint16 boneCount, ev_uint16 weightCount, bool correctAntipodalityHandling);
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
                    */
                    void setDoBoneCalculations(bool doBoneCalculations);
                    /**
                    @see SubRenderState::resolveParameters.
                    */
                    virtual bool resolveParameters (EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /**
                    @see SubRenderState::resolveDependencies.
                    */
                    virtual bool resolveDependencies (EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /**
                    @see SubRenderState::addFunctionInvocations.
                    */
                    virtual bool addFunctionInvocations (EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                protected:
                    /** Translates an index number to a mask value */
                    COperand::OpMask indexToMask (int index);
                    /// Attributes.
                protected:
                    ev_uint16 mBoneCount;
                    ev_uint16 mWeightCount;
                    bool mCorrectAntipodalityHandling;
                    bool mScalingShearingSupport;
                    bool mDoBoneCalculations;

                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInPosition;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInNormal;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInBiNormal;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInTangent;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInIndices;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInWeights;
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr mParamInWorldMatrices;
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr mParamInInvWorldMatrix;
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr mParamInViewProjMatrix;
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr mParamInWorldMatrix;
                    EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr mParamInWorldViewProjMatrix;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamTempFloat4;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamTempFloat3;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamLocalPositionWorld;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamLocalNormalWorld;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamLocalTangentWorld;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamLocalBinormalWorld;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamOutPositionProj;
                };
            }
        }
    }
}

#endif
#endif

