#ifndef _ShaderExLinearSkinning_
#define _ShaderExLinearSkinning_
#include "shaderprerequisites.h"
#ifdef RTSHADER_SYSTEM_BUILD_EXT_SHADERS
#include "shaderexhardwareskinningtechnique.h"
#include "shaderparameter.h"
#include <rendersystem.h>
#include "shaderfunctionatom.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Implement a sub render state which performs hardware skinning.
                Meaning, this sub render states adds calculations which multiply
                the points and normals by their assigned bone matricies.
                */
                class EV_RTSS_DLL CLinearSkinning : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique
                {
                ev_private:
                    CLinearSkinning(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CLinearSkinning();
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
                    /** Adds functions to calculate position data in world, object and projective space */
                    void addPositionCalculations (CFunction *vsMain, int &funcCounter);
                    /** Adds the weight of a given position for a given index */
                    void addIndexedPositionWeight (CFunction *vsMain, int index, int &funcCounter);
                    /** Adds the calculations for calculating a normal related element */
                    void addNormalRelatedCalculations (CFunction *vsMain,
                                                       ParameterPtr &pNormalRelatedParam,
                                                       ParameterPtr &pNormalWorldRelatedParam,
                                                       int &funcCounter);
                    /** Adds the weight of a given normal related parameter for a given index */
                    void addIndexedNormalRelatedWeight (CFunction *vsMain, ParameterPtr &pNormalRelatedParam,
                                                        ParameterPtr &pNormalWorldRelatedParam,
                                                        int index, int &funcCounter);
                };
            }
        }
    }
}


#endif
#endif
