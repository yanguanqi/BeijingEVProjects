#ifndef _ShaderExDualQuaternionSkinning_
#define _ShaderExDualQuaternionSkinning_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shaderexhardwareskinningtechnique.h"
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

#define SGX_LIB_DUAL_QUATERNION				"SGXLib_DualQuaternion"
#define SGX_FUNC_BLEND_WEIGHT				"SGX_BlendWeight"
#define SGX_FUNC_ANTIPODALITY_ADJUSTMENT		"SGX_AntipodalityAdjustment"
#define SGX_FUNC_CALCULATE_BLEND_POSITION		"SGX_CalculateBlendPosition"
#define SGX_FUNC_CALCULATE_BLEND_NORMAL			"SGX_CalculateBlendNormal"
#define SGX_FUNC_NORMALIZE_DUAL_QUATERNION		"SGX_NormalizeDualQuaternion"
#define SGX_FUNC_ADJOINT_TRANSPOSE_MATRIX		"SGX_AdjointTransposeMatrix"
#define SGX_FUNC_BUILD_DUAL_QUATERNION_MATRIX		"SGX_BuildDualQuaternionMatrix"
                /** Implement a sub render state which performs dual quaternion hardware skinning.
                This sub render state uses bone matrices converted to dual quaternions and adds calculations
                */
                class EV_RTSS_DLL CDualQuaternionSkinning : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique
                {
                ev_private:
                    CDualQuaternionSkinning(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CDualQuaternionSkinning();
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
                    /// Protected methods
                protected:
                    /** Adds functions to calculate position data in world, object and projective space */
                    void addPositionCalculations(EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain, int &funcCounter);
                    /** Adjusts the sign of a dual quaternion depending on its orientation to the root dual quaternion */
                    void adjustForCorrectAntipodality(EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain, int index, int &funcCounter, const EarthView::World::Graphic::RTShaderSystem::ParameterPtr &pTempWorldMatrix);
                    /**
                     Adds the weight of a given position for a given index

                     @param pPositionTempParameter Requires a temp parameter with a matrix the same size of pPositionRelatedParam
                    */
                    void addIndexedPositionWeight(EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain, int index, ParameterPtr &pWorldMatrix,
                                                  EarthView::World::Graphic::RTShaderSystem::ParameterPtr &pPositionTempParameter, EarthView::World::Graphic::RTShaderSystem::ParameterPtr &pPositionRelatedOutputParam, int &funcCounter);

                    /** Adds the calculations for calculating a normal related element */
                    void addNormalRelatedCalculations(EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain,
                                                      EarthView::World::Graphic::RTShaderSystem::ParameterPtr &pNormalRelatedParam,
                                                      EarthView::World::Graphic::RTShaderSystem::ParameterPtr &pNormalWorldRelatedParam,
                                                      int &funcCounter);
                protected:
                    UniformParameterPtr mParamInScaleShearMatrices;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamLocalBlendPosition;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamBlendS;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamBlendDQ;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamInitialDQ;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamTempWorldMatrix;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamTempFloat2x4;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamTempFloat3x3;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamTempFloat3x4;

                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamIndex1;
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr mParamIndex2;
                };
            }
        }
    }
}

#endif
#endif

