/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gpuprogram.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback)(_in char*& source);
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback)(_in char*& syntax);
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback)(_in int t);
			typedef int  ( _stdcall EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback)();
			typedef EarthView::World::Graphic::CGpuProgram*  ( _stdcall EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback)(_in ev_bool included);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback)(_in ev_bool included);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback)(_in ev_uint16 poseCount);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback)(_in ev_bool r);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback)(_in ev_bool r);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback)(_in const void* namedConstants);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback)(_in char*& paramDefFile);
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CGpuProgramProxy : public EarthView::World::Graphic::CGpuProgram
			{
			private:
				EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback* m_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback;
				EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback* m_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback;
				EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback* m_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback;
				EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback* m_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback;
				EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback* m_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback;
				EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback* m_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback;
				EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback* m_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback;
				EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback* m_EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback;
				EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback* m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback;
				EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback* m_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback;
				EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback* m_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback;
				EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback* m_EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback;
				EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback* m_EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback;
				EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_prepare_void_Callback* m_EarthView_World_Graphic_CGpuProgram_prepare_void_Callback;
				EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_load_void_Callback* m_EarthView_World_Graphic_CGpuProgram_load_void_Callback;
				EarthView_World_Graphic_CGpuProgram_reload_void_Callback* m_EarthView_World_Graphic_CGpuProgram_reload_void_Callback;
				EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_unload_void_Callback* m_EarthView_World_Graphic_CGpuProgram_unload_void_Callback;
				EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuProgram_touch_void_Callback* m_EarthView_World_Graphic_CGpuProgram_touch_void_Callback;
				EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback* m_EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback;
				EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback* m_EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback;
				EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback;
			public:
				CGpuProgramProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuProgram(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString(EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString(EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString(EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString(EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString(EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getSource_EVString(EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType(EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType(EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram(EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool(EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr(EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool(EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool(EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool(EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16(EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool(EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool(EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16(EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool(EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool(EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool(EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool(EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr(EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool(EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool(EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool(EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool(EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString(EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool(EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_resetCompileError_void(EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants(EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants(EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString(EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString(EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants(EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_loadFromSource_void(EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void(EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void(EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void(EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void(EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_prepareImpl_void(EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void(EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_loadImpl_void(EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_unloadImpl_void(EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t(EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool(EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_prepare_void(EarthView_World_Graphic_CGpuProgram_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool(EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_load_void(EarthView_World_Graphic_CGpuProgram_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_reload_void(EarthView_World_Graphic_CGpuProgram_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool(EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_unload_void(EarthView_World_Graphic_CGpuProgram_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t(EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_touch_void(EarthView_World_Graphic_CGpuProgram_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getName_EVString(EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64(EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool(EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool(EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool(EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState(EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_escalateLoading_void(EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener(EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener(EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getGroup_EVString(EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager(EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString(EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString(EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t(EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram__dirtyState_void(EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void(EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString(EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::calculateSize();
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback();
					}
					else
						return this->CGpuProgram::loadImpl();
				}
				virtual void setSourceFile(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback(filename_Char);
					}
					else
						return this->CGpuProgram::setSourceFile(filename);
				}
				virtual void setSource(_in const EVString& source)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* source_Char = source.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback(source_Char);
					}
					else
						return this->CGpuProgram::setSource(source);
				}
				virtual EVString getSyntaxCode() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getSyntaxCode();
				}
				virtual void setSyntaxCode(_in const EVString& syntax)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* syntax_Char = syntax.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback(syntax_Char);
					}
					else
						return this->CGpuProgram::setSyntaxCode(syntax);
				}
				virtual EVString getSourceFile() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getSourceFile();
				}
				virtual EVString getSource() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getSource();
				}
				virtual void setType(_in EarthView::World::Graphic::GpuProgramType t)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback((int)t);
					}
					else
						return this->CGpuProgram::setType(t);
				}
				virtual EarthView::World::Graphic::GpuProgramType getType() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::GpuProgramType returnValue = (EarthView::World::Graphic::GpuProgramType)m_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getType();
				}
				virtual EarthView::World::Graphic::CGpuProgram* _getBindingDelegate()
				{
					if(m_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CGpuProgram* returnValue = m_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::_getBindingDelegate();
				}
				virtual ev_bool isSupported() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isSupported();
				}
				virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr createParameters()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::GpuProgramParametersSharedPtr returnValue = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)m_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::createParameters();
				}
				virtual void setSkeletalAnimationIncluded(_in ev_bool included)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback(included);
					}
					else
						return this->CGpuProgram::setSkeletalAnimationIncluded(included);
				}
				virtual ev_bool isSkeletalAnimationIncluded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isSkeletalAnimationIncluded();
				}
				virtual void setMorphAnimationIncluded(_in ev_bool included)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback(included);
					}
					else
						return this->CGpuProgram::setMorphAnimationIncluded(included);
				}
				virtual void setPoseAnimationIncluded(_in ev_uint16 poseCount)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback(poseCount);
					}
					else
						return this->CGpuProgram::setPoseAnimationIncluded(poseCount);
				}
				virtual ev_bool isMorphAnimationIncluded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isMorphAnimationIncluded();
				}
				virtual ev_bool isPoseAnimationIncluded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isPoseAnimationIncluded();
				}
				virtual ev_uint16 getNumberOfPosesIncluded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getNumberOfPosesIncluded();
				}
				virtual void setVertexTextureFetchRequired(_in ev_bool r)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback(r);
					}
					else
						return this->CGpuProgram::setVertexTextureFetchRequired(r);
				}
				virtual ev_bool isVertexTextureFetchRequired() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isVertexTextureFetchRequired();
				}
				virtual void setAdjacencyInfoRequired(_in ev_bool r)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback(r);
					}
					else
						return this->CGpuProgram::setAdjacencyInfoRequired(r);
				}
				virtual ev_bool isAdjacencyInfoRequired() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isAdjacencyInfoRequired();
				}
				virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr getDefaultParameters()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::GpuProgramParametersSharedPtr returnValue = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)m_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getDefaultParameters();
				}
				virtual ev_bool hasDefaultParameters() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::hasDefaultParameters();
				}
				virtual ev_bool getPassSurfaceAndLightStates() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getPassSurfaceAndLightStates();
				}
				virtual ev_bool getPassFogStates() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getPassFogStates();
				}
				virtual ev_bool getPassTransformStates() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getPassTransformStates();
				}
				virtual EVString getLanguage() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getLanguage();
				}
				virtual ev_bool hasCompileError() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::hasCompileError();
				}
				virtual void resetCompileError()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback();
					}
					else
						return this->CGpuProgram::resetCompileError();
				}
				virtual void setManualNamedConstants(_in const EarthView::World::Graphic::GpuNamedConstants& namedConstants)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback(&namedConstants);
					}
					else
						return this->CGpuProgram::setManualNamedConstants(namedConstants);
				}
				virtual const EarthView::World::Graphic::GpuNamedConstants& getNamedConstants() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::GpuNamedConstants& returnValue = *(EarthView::World::Graphic::GpuNamedConstants*)m_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getNamedConstants();
				}
				virtual void setManualNamedConstantsFile(_in const EVString& paramDefFile)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* paramDefFile_Char = paramDefFile.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback(paramDefFile_Char);
					}
					else
						return this->CGpuProgram::setManualNamedConstantsFile(paramDefFile);
				}
				virtual EVString getManualNamedConstantsFile() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getManualNamedConstantsFile();
				}
				virtual const EarthView::World::Graphic::GpuNamedConstants& getConstantDefinitions() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::GpuNamedConstants& returnValue = *(EarthView::World::Graphic::GpuNamedConstants*)m_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getConstantDefinitions();
				}
				virtual void loadFromSource()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback();
					}
					else
						return this->CGpuProgram::loadFromSource();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback();
					}
					else
						return this->CGpuProgram::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback();
					}
					else
						return this->CGpuProgram::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback();
					}
					else
						return this->CGpuProgram::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback();
					}
					else
						return this->CGpuProgram::postUnloadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback();
					}
					else
						return this->CGpuProgram::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback();
					}
					else
						return this->CGpuProgram::unprepareImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback();
					}
					else
						return this->CGpuProgram::unloadImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CGpuProgram::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_prepare_void_Callback();
					}
					else
						return this->CGpuProgram::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CGpuProgram::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_load_void_Callback();
					}
					else
						return this->CGpuProgram::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_reload_void_Callback();
					}
					else
						return this->CGpuProgram::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_unload_void_Callback();
					}
					else
						return this->CGpuProgram::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_touch_void_Callback();
					}
					else
						return this->CGpuProgram::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CGpuProgram::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback();
					}
					else
						return this->CGpuProgram::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CGpuProgram::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CGpuProgram::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CGpuProgram::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CGpuProgram::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgram::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback();
					}
					else
						return this->CGpuProgram::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CGpuProgram::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CGpuProgram::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CGpuProgram::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CGpuProgram::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CGpuProgram::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CGpuProgram::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CGpuProgram::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CGpuProgram::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CGpuProgramProxy);
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CGpuprogramCmdTypeProxy : public EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CGpuprogramCmdTypeProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuprogramCmdType(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CGpuprogramCmdType::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CGpuprogramCmdType::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CGpuprogramCmdType::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CGpuprogramCmdTypeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX;
				if (dynamic_cast<CGpuprogramCmdTypeProxy*>((EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_Callback* pCallback )
			{
				CGpuprogramCmdTypeProxy* ptr = dynamic_cast<CGpuprogramCmdTypeProxy*>((EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX;
				if (dynamic_cast<CGpuprogramCmdTypeProxy*>((EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_Callback* pCallback )
			{
				CGpuprogramCmdTypeProxy* ptr = dynamic_cast<CGpuprogramCmdTypeProxy*>((EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CGpuprogramCmdTypeProxy* ptr = dynamic_cast<CGpuprogramCmdTypeProxy*>((EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CGpuprogramCmdType_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdSyntaxProxy : public EarthView::World::Graphic::CGpuProgram::CCmdSyntax
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdSyntaxProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdSyntax(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdSyntax::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdSyntax::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdSyntax::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdSyntaxProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdSyntax* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX;
				if (dynamic_cast<CCmdSyntaxProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSyntax*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_Callback* pCallback )
			{
				CCmdSyntaxProxy* ptr = dynamic_cast<CCmdSyntaxProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdSyntax* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdSyntax* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX;
				if (dynamic_cast<CCmdSyntaxProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSyntax*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdSyntaxProxy* ptr = dynamic_cast<CCmdSyntaxProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSyntax_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdSyntax* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdSyntaxProxy* ptr = dynamic_cast<CCmdSyntaxProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSyntax_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdSkeletalProxy : public EarthView::World::Graphic::CGpuProgram::CCmdSkeletal
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdSkeletalProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdSkeletal(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdSkeletal::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdSkeletal::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdSkeletal::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdSkeletalProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdSkeletal* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX;
				if (dynamic_cast<CCmdSkeletalProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_Callback* pCallback )
			{
				CCmdSkeletalProxy* ptr = dynamic_cast<CCmdSkeletalProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdSkeletal* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdSkeletal* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX;
				if (dynamic_cast<CCmdSkeletalProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdSkeletalProxy* ptr = dynamic_cast<CCmdSkeletalProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdSkeletal* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdSkeletalProxy* ptr = dynamic_cast<CCmdSkeletalProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdSkeletal_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdMorphProxy : public EarthView::World::Graphic::CGpuProgram::CCmdMorph
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdMorphProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMorph(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdMorph::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdMorph::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdMorph::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdMorphProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdMorph* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX;
				if (dynamic_cast<CCmdMorphProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdMorph*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_Callback* pCallback )
			{
				CCmdMorphProxy* ptr = dynamic_cast<CCmdMorphProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdMorph* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdMorph* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX;
				if (dynamic_cast<CCmdMorphProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdMorph*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdMorphProxy* ptr = dynamic_cast<CCmdMorphProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdMorph_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdMorph* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdMorphProxy* ptr = dynamic_cast<CCmdMorphProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdMorph_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdPoseProxy : public EarthView::World::Graphic::CGpuProgram::CCmdPose
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdPoseProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdPose(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdPose::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdPose::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdPose::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdPoseProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdPose* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX;
				if (dynamic_cast<CCmdPoseProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdPose*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdPose::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_Callback* pCallback )
			{
				CCmdPoseProxy* ptr = dynamic_cast<CCmdPoseProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdPose* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdPose::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdPose* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX;
				if (dynamic_cast<CCmdPoseProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdPose*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdPose::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdPoseProxy* ptr = dynamic_cast<CCmdPoseProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdPose_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdPose* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdPose::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdPoseProxy* ptr = dynamic_cast<CCmdPoseProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdPose_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdVTFProxy : public EarthView::World::Graphic::CGpuProgram::CCmdVTF
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdVTFProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdVTF(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdVTF::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdVTF::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdVTF::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdVTFProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdVTF* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX;
				if (dynamic_cast<CCmdVTFProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdVTF*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_Callback* pCallback )
			{
				CCmdVTFProxy* ptr = dynamic_cast<CCmdVTFProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdVTF* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdVTF* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX;
				if (dynamic_cast<CCmdVTFProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdVTF*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdVTFProxy* ptr = dynamic_cast<CCmdVTFProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdVTF_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdVTF* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdVTFProxy* ptr = dynamic_cast<CCmdVTFProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdVTF_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdManualNamedConstsFileProxy : public EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdManualNamedConstsFileProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdManualNamedConstsFile(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdManualNamedConstsFile::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdManualNamedConstsFile::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdManualNamedConstsFile::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdManualNamedConstsFileProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX;
				if (dynamic_cast<CCmdManualNamedConstsFileProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_Callback* pCallback )
			{
				CCmdManualNamedConstsFileProxy* ptr = dynamic_cast<CCmdManualNamedConstsFileProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX;
				if (dynamic_cast<CCmdManualNamedConstsFileProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdManualNamedConstsFileProxy* ptr = dynamic_cast<CCmdManualNamedConstsFileProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdManualNamedConstsFileProxy* ptr = dynamic_cast<CCmdManualNamedConstsFileProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdManualNamedConstsFile_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdAdjacencyProxy : public EarthView::World::Graphic::CGpuProgram::CCmdAdjacency
			{
			private:
				EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdAdjacencyProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAdjacency(pList)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void(EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString(EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdAdjacency::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdAdjacency::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdAdjacency::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdAdjacencyProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdAdjacency* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX;
				if (dynamic_cast<CCmdAdjacencyProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_Callback* pCallback )
			{
				CCmdAdjacencyProxy* ptr = dynamic_cast<CCmdAdjacencyProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CGpuProgram::CCmdAdjacency* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdAdjacency* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX;
				if (dynamic_cast<CCmdAdjacencyProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdAdjacencyProxy* ptr = dynamic_cast<CCmdAdjacencyProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CGpuProgram::CCmdAdjacency* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdAdjacencyProxy* ptr = dynamic_cast<CCmdAdjacencyProxy*>((EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_CCmdAdjacency_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CGpuProgram_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_loadImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSourceFile(filename1);
				else
					ptrNativeObject->setSourceFile(filename1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSourceFile_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSourceFile(filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSource_void_EVString(void *pObjectXXXX, _in const char* source )
			{
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSource(source1);
				else
					ptrNativeObject->setSource(source1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setSource_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSource_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* source )
			{
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSource(source1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getSyntaxCode();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getSyntaxCode();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getSyntaxCode_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getSyntaxCode();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString(void *pObjectXXXX, _in const char* syntax )
			{
				EarthView::World::Core::ev_string syntax1 = syntax;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSyntaxCode(syntax1);
				else
					ptrNativeObject->setSyntaxCode(syntax1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSyntaxCode_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* syntax )
			{
				EarthView::World::Core::ev_string syntax1 = syntax;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSyntaxCode(syntax1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getSourceFile();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getSourceFile();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getSourceFile_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getSourceFile();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getSource_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getSource();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getSource();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getSource_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getSource_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getSource_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getSource();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType(void *pObjectXXXX, _in int t )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setType((EarthView::World::Graphic::GpuProgramType)t);
				else
					ptrNativeObject->setType((EarthView::World::Graphic::GpuProgramType)t);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setType_void_GpuProgramType_NoVirtual(void *pObjectXXXX, _in int t )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setType((EarthView::World::Graphic::GpuProgramType)t);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CGpuProgram_getType_GpuProgramType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramType objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuProgram*  _stdcall EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CGpuProgram* objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::_getBindingDelegate();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CGpuProgram* objXXXX = ptrNativeObject->_getBindingDelegate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuProgram*  _stdcall EarthView_World_Graphic_CGpuProgram__getBindingDelegate_CGpuProgram_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgram* objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::_getBindingDelegate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isSupported();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSupported();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isSupported_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isSupported();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::createParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->createParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgram_createParameters_GpuProgramParametersSharedPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::createParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool(void *pObjectXXXX, _in ev_bool included )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSkeletalAnimationIncluded(included);
				else
					ptrNativeObject->setSkeletalAnimationIncluded(included);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setSkeletalAnimationIncluded_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool included )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setSkeletalAnimationIncluded(included);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isSkeletalAnimationIncluded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSkeletalAnimationIncluded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isSkeletalAnimationIncluded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isSkeletalAnimationIncluded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool(void *pObjectXXXX, _in ev_bool included )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setMorphAnimationIncluded(included);
				else
					ptrNativeObject->setMorphAnimationIncluded(included);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setMorphAnimationIncluded_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool included )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setMorphAnimationIncluded(included);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 poseCount )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setPoseAnimationIncluded(poseCount);
				else
					ptrNativeObject->setPoseAnimationIncluded(poseCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setPoseAnimationIncluded_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 poseCount )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setPoseAnimationIncluded(poseCount);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isMorphAnimationIncluded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isMorphAnimationIncluded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isMorphAnimationIncluded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isMorphAnimationIncluded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isPoseAnimationIncluded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isPoseAnimationIncluded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isPoseAnimationIncluded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isPoseAnimationIncluded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getNumberOfPosesIncluded();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumberOfPosesIncluded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CGpuProgram_getNumberOfPosesIncluded_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getNumberOfPosesIncluded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool(void *pObjectXXXX, _in ev_bool r )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setVertexTextureFetchRequired(r);
				else
					ptrNativeObject->setVertexTextureFetchRequired(r);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setVertexTextureFetchRequired_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool r )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setVertexTextureFetchRequired(r);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isVertexTextureFetchRequired();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isVertexTextureFetchRequired();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isVertexTextureFetchRequired_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isVertexTextureFetchRequired();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool(void *pObjectXXXX, _in ev_bool r )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setAdjacencyInfoRequired(r);
				else
					ptrNativeObject->setAdjacencyInfoRequired(r);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setAdjacencyInfoRequired_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool r )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setAdjacencyInfoRequired(r);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isAdjacencyInfoRequired();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isAdjacencyInfoRequired();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_isAdjacencyInfoRequired_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::isAdjacencyInfoRequired();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getDefaultParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getDefaultParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgram_getDefaultParameters_GpuProgramParametersSharedPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getDefaultParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::hasDefaultParameters();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasDefaultParameters();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_hasDefaultParameters_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::hasDefaultParameters();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getPassSurfaceAndLightStates();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPassSurfaceAndLightStates();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_getPassSurfaceAndLightStates_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getPassSurfaceAndLightStates();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getPassFogStates();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPassFogStates();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_getPassFogStates_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getPassFogStates();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getPassTransformStates();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPassTransformStates();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_getPassTransformStates_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getPassTransformStates();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getLanguage_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getLanguage();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLanguage();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getLanguage_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getLanguage_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getLanguage();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::hasCompileError();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasCompileError();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CGpuProgram_hasCompileError_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::hasCompileError();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_resetCompileError_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::resetCompileError();
				else
					ptrNativeObject->resetCompileError();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_resetCompileError_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_resetCompileError_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_resetCompileError_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_resetCompileError_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::resetCompileError();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants(void *pObjectXXXX, _in const void* namedConstants )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setManualNamedConstants(*(EarthView::World::Graphic::GpuNamedConstants*)namedConstants);
				else
					ptrNativeObject->setManualNamedConstants(*(EarthView::World::Graphic::GpuNamedConstants*)namedConstants);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setManualNamedConstants_void_GpuNamedConstants_NoVirtual(void *pObjectXXXX, _in const void* namedConstants )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setManualNamedConstants(*(EarthView::World::Graphic::GpuNamedConstants*)namedConstants);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getNamedConstants();
					const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->getNamedConstants();
					const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgram_getNamedConstants_GpuNamedConstants_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getNamedConstants();
				const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString(void *pObjectXXXX, _in const char* paramDefFile )
			{
				EarthView::World::Core::ev_string paramDefFile1 = paramDefFile;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setManualNamedConstantsFile(paramDefFile1);
				else
					ptrNativeObject->setManualNamedConstantsFile(paramDefFile1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_setManualNamedConstantsFile_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* paramDefFile )
			{
				EarthView::World::Core::ev_string paramDefFile1 = paramDefFile;
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::setManualNamedConstantsFile(paramDefFile1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getManualNamedConstantsFile();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getManualNamedConstantsFile();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CGpuProgram_getManualNamedConstantsFile_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getManualNamedConstantsFile();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getConstantDefinitions();
					const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->getConstantDefinitions();
					const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CGpuProgram_getConstantDefinitions_GpuNamedConstants_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgram::getConstantDefinitions();
				const EarthView::World::Graphic::GpuNamedConstants *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_loadFromSource_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgram::loadFromSource();
				else
					ptrNativeObject->loadFromSource();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_loadFromSource_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_loadFromSource_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_loadFromSource_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgram_loadFromSource_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgram* ptrNativeObject = (EarthView::World::Graphic::CGpuProgram*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgram::loadFromSource();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_preLoadImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_postLoadImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_prepareImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_unprepareImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_unloadImpl_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_prepare_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_load_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_load_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_load_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_reload_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_unload_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_touch_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getName_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_escalateLoading_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getGroup_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getOrigin_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram__dirtyState_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CGpuProgramProxy* ptr = dynamic_cast<CGpuProgramProxy*>((EarthView::World::Graphic::CGpuProgram*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgram_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CGpuProgram*  _stdcall EarthView_World_Graphic_CGpuProgramPtr_get_CGpuProgram(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CGpuProgramPtr* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramPtr*) pObjectXXXX;
				EarthView::World::Graphic::CGpuProgram* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramPtr_OperatorAssign_CGpuProgramPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CGpuProgramPtr& objXXXX = *((EarthView::World::Graphic::CGpuProgramPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CGpuProgramPtr_OperatorAssign_CGpuProgramPtr_CHighLevelGpuProgramPtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CGpuProgramPtr& objXXXX = *((EarthView::World::Graphic::CGpuProgramPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CHighLevelGpuProgramPtr*)r;
				EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
