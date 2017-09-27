#ifndef _ShaderProgramProcessor_
#define _ShaderProgramProcessor_
#include "shaderprerequisites.h"
#include "shaderparameter.h"
#include "shaderfunctionatom.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** A class that provides extra processing services on CPU based programs.
                The base class perform only the generic processing. In order to provide target language specific services and
                optimization one should derive from this class and register its factory via the ProgramManager instance.
                */
                class EV_RTSS_DLL CProgramProcessor : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CProgramProcessor(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:

                    /** Class constructor.
                    @param type The type of this program.
                    */
                    CProgramProcessor			();
                    /** Class destructor */
                    virtual ~CProgramProcessor	();
                    /** Return the target language of this processor. */
                    virtual EVString		getTargetLanguage	() const
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /** Called before creation of the GPU programs.
                    Do several preparation operation such as validation, register compaction and specific target language optimizations.
                    @param programSet The program set container.
                    Return true on success.
                    */
                    virtual bool				preCreateGpuPrograms	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /** Called after creation of the GPU programs.
                    @param programSet The program set container.
                    Return true on success.
                    */
                    virtual bool				postCreateGpuPrograms	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /// Protected types.
                ev_private:

                    ///-----------------------------------------------------------------------------
                    /// Class that holds merge parameter information.
                    class EV_RTSS_DLL MergeParameter : public CBaseObject
                    {
                    ev_private:
                        MergeParameter(_in EarthView::World::Core::CNameValuePairList *pList);
                        /// Interface.
                    public:
                        /** Class constructor. */
                        MergeParameter();

                        /** Clear the state of this merge parameter. */
                        void			clear						();

                        /** Add source parameter to this merged */
                        void			addSourceParameter			(ParameterPtr srcParam, int mask);
                        /** Return the source parameter count. */
                        size_t			getSourceParameterCount		() const
                        {
                            return mSrcParameterCount;
                        }
                        /** Return source parameter by index. */
                        ParameterPtr	getSourceParameter			(ev_uint32 index)
                        {
                            return mSrcParameter[index];
                        }
                        /** Return source parameter mask by index. */
                        int				getSourceParameterMask		(ev_uint32 index) const
                        {
                            return mSrcParameterMask[index];
                        }
                        /** Return destination parameter mask by index. */
                        int				getDestinationParameterMask	(ev_uint32 index) const
                        {
                            return mDstParameterMask[index];
                        }
                        /** Return the number of used floats. */
                        int				getUsedFloatCount			();

                        /** Return the destination parameter. */
                        ParameterPtr	getDestinationParameter		(int usage, int index);
                    protected:

                        /** Creates the destination parameter by a given class and index. */
                        void			createDestinationParameter	(int usage, int index);

                    protected:
                        ParameterPtr	mDstParameter;							/// Destination merged parameter.
                        ParameterPtr	mSrcParameter[4];						/// Source parameters - 4 source at max 1,1,1,1 -> 4.
                        int				mSrcParameterMask[4];					/// Source parameters mask. OPM_ALL means all fields used, otherwise it is split source parameter.
                        int				mDstParameterMask[4];					/// Destination parameters mask. OPM_ALL means all fields used, otherwise it is split source parameter.
                        size_t			mSrcParameterCount;						/// The actual source parameters count.
                        size_t			mUsedFloatCount;						/// The number of used floats.
                    };
                    ///-----------------------------------------------------------------------------
                    /// A struct that defines merge parameters combination.
                    class EV_RTSS_DLL MergeCombination : public CBaseObject
                    {
                    ev_private:
                        MergeCombination(_in EarthView::World::Core::CNameValuePairList *pList)
                        {
                            if (pList && pList->Count() > 0)
                            {
                                srcParamterTypeCount[0] = *(ev_int32 *)pList->GetAt("float1Count");
                                srcParamterTypeCount[1] = *(ev_int32 *)pList->GetAt("float2Count");
                                srcParamterTypeCount[2] = *(ev_int32 *)pList->GetAt("float3Count");
                                srcParamterTypeCount[3] = *(ev_int32 *)pList->GetAt("float4Count");
                                srcParameterMask[0] 	= *(ev_int32 *)pList->GetAt("float1Mask");
                                srcParameterMask[1] 	= *(ev_int32 *)pList->GetAt("float2Mask");
                                srcParameterMask[2] 	= *(ev_int32 *)pList->GetAt("float3Mask");
                                srcParameterMask[3] 	= *(ev_int32 *)pList->GetAt("float4Mask");
                            }
                            else
                            {
                            };
                        }
                    public:
                        ev_size_t			srcParamterTypeCount[4];					/// The count of each source type. I.E (1 FLOAT1, 0 FLOAT2, 1 FLOAT3, 0 FLOAT4).
                        ev_int32				srcParameterMask[4];						/// Source parameters mask. OPM_ALL means all fields used, otherwise it is split source parameter.
                        MergeCombination(
                            ev_int32 float1Count, ev_int32 float1Mask,
                            ev_int32 float2Count, ev_int32 float2Mask,
                            ev_int32 float3Count, ev_int32 float3Mask,
                            ev_int32 float4Count, ev_int32 float4Mask)
                        {
                            srcParamterTypeCount[0] = float1Count;
                            srcParamterTypeCount[1] = float2Count;
                            srcParamterTypeCount[2] = float3Count;
                            srcParamterTypeCount[3] = float4Count;
                            srcParameterMask[0] 	= float1Mask;
                            srcParameterMask[1] 	= float2Mask;
                            srcParameterMask[2] 	= float3Mask;
                            srcParameterMask[3] 	= float4Mask;
                        }
                        MergeCombination() {};
                    };

                protected:
                    typedef vector<MergeParameter>	MergeParameterList;
                    typedef vector<MergeCombination>	MergeCombinationList;
                    ///-----------------------------------------------------------------------------
                    typedef vector<COperand *>						OperandPtrVector;
                    typedef map<CParameter *, OperandPtrVector>		ParameterOperandMap;
                    typedef map<CParameter *, ParameterPtr>			LocalParameterMap;
                ev_internal:
                    /** Compact the vertex shader output registers.
                    	@param vsMain The vertex shader entry function.
                    	@param fsMain The fragment shader entry function.
                    	Return true on success.
                    	*/
                    virtual bool	compactVsOutputs				(EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain, EarthView::World::Graphic::RTShaderSystem::CFunction *fsMain);
                protected:
                    /** Build parameter merging combinations. */
                    void			buildMergeCombinations			();

                    /** Internal method that counts vertex shader texcoord output slots and output floats.
                    @param vsMain The vertex shader entry function.
                    @param outTexCoordSlots Will hold the number of used output texcoord slots.
                    @param outTexCoordFloats Will hold the total number of floats used by output texcoord slots.
                    */
                    void			countVsTexcoordOutputs			(EarthView::World::Graphic::RTShaderSystem::CFunction *vsMain, int &outTexCoordSlots, int &outTexCoordFloats);
                    /** Internal function that builds parameters table.
                    @param paramList The parameter list.
                    @param outParamsTable Will hold the texcoord params sorted by types in each row.
                    */
                    void			buildTexcoordTable				(const ShaderParameterList &paramList, ShaderParameterList outParamsTable[4]);

                    /** Merge the parameters from the given table.
                    @param paramsTable Source parameters table.
                    @param mergedParams Will hold the merged parameters list.
                    */
                    void			mergeParameters					(ShaderParameterList paramsTable[4], MergeParameterList &mergedParams, ShaderParameterList &splitParams);
/*
                    @param paramsTable Source parameters table.
                    @param mergedParams The merged parameters list.
                    */
                    void			mergeParametersByPredefinedCombinations(ShaderParameterList paramsTable[4], MergeParameterList &mergedParams);
                    /** Internal function that creates merged parameter from given combination.
                    @param combination The merge combination to try.
                    @param paramsTable The params table sorted by types in each row.
                    @param mergedParameter Will hold the merged parameter.
                    */
                    bool			mergeParametersByCombination			(const MergeCombination &combination, ShaderParameterList paramsTable[4],
                            MergeParameter *mergedParameter);
/*                    @param paramsTable The params table sorted by types in each row.
                    @param mergedParams The merged parameters list.
                    @param splitParams The split parameters list.
                    */
                    void			mergeParametersReminders				(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList paramsTable[4], MergeParameterList &mergedParams, ShaderParameterList &splitParams);

                    void			generateLocalSplitParameters				(EarthView::World::Graphic::RTShaderSystem::CFunction *func, GpuProgramType progType, MergeParameterList &mergedParams, ShaderParameterList &splitParams, LocalParameterMap &localParamsMap);


                    void			rebuildParameterList				(EarthView::World::Graphic::RTShaderSystem::CFunction *func, int paramsUsage, MergeParameterList &mergedParams);
                    /** Rebuild function invocations by replacing references to old source parameters with the matching merged parameters components. */
                    void			rebuildFunctionInvocations			(FunctionAtomInstanceList &funcAtomList, MergeParameterList &mergedParams, LocalParameterMap &localParamsMap);
                    /** Builds a map between parameter and all the references to it. */
                    void			buildParameterReferenceMap			(FunctionAtomInstanceList &funcAtomList, ParameterOperandMap &paramsRefMap);
                    /** Replace references to old parameters with the new merged parameters. */
                    void			replaceParametersReferences			(MergeParameterList &mergedParams, ParameterOperandMap &paramsRefMap);
                    /** Replace references to old parameters that have been split with the new local parameters that represents them. */
                    void			replaceSplitParametersReferences	(LocalParameterMap &localParamsMap, ParameterOperandMap &paramsRefMap);
                    /** Return number of floats needed by the given type. */
                    static int		getParameterFloatCount				(EarthView::World::Graphic::GpuConstantType type);

                    /** Return the parameter mask of by the given parameter type (I.E: X|Y for FLOAT2 etc..) */
                    static int		getParameterMaskByType				(EarthView::World::Graphic::GpuConstantType type);

                    /** Return the parameter mask of by the float count type (I.E: X|Y for 2 etc..) */
                    static int		getParameterMaskByFloatCount		(int floatCount);

                    /** Bind the auto parameters for a given CPU and GPU program set. */
                    void			bindAutoParameters					(EarthView::World::Graphic::RTShaderSystem::CProgram *pCpuProgram, EarthView::World::Graphic::CGpuProgramPtr pGpuProgram);
                protected:
                    MergeCombinationList	mParamMergeCombinations;						/// Merging combinations defs.
                    int						mMaxTexCoordSlots;								/// Maximum texcoord slots.
                    int						mMaxTexCoordFloats;								/// Maximum texcoord floats count.
                    map<EarthView::World::Graphic::RTShaderSystem::CFunction *, EVString *>  mFunctionMap;           				/// Map between function signatures and source code
                };
            }
        }
    }
}

#endif

