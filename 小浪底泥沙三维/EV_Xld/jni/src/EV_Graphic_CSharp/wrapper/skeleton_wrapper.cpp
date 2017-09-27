/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/skeleton.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*  ( _stdcall EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback)();
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback)();
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback)(_in ev_uint16 handle);
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback)(_in char*& name, _in ev_uint16 handle);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback)();
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback)(_in ev_uint16 handle);
			typedef EarthView::World::Graphic::CBone*  ( _stdcall EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback)(_in ev_bool resetManualBones);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_reset_void_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback)(_in char*& name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback)(_in char*& name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback)(_in const void* animSet);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback)(_in EarthView::World::Graphic::CAnimationStateSet* animSet);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback)(_in EarthView::World::Graphic::CAnimationStateSet* animSet);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* pMatrices);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* pMatrices, _in ev_uint32 index);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback)(_in ev_uint16 index);
			typedef int  ( _stdcall EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback)(_in int state);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback)(_in ev_bool preservingIdentityNodeTracks);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback)(_in char*& skelName, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback)(_in char*& skelName);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback)(_in EarthView::World::Graphic::CBone* ref_bone);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback)(_in const EarthView::World::Graphic::CSkeleton* source, _in const void* boneHandleMap, _out const void* animations);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback)(_in const EarthView::World::Graphic::CSkeleton* source, _in const void* boneHandleMap);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback)(_in const EarthView::World::Graphic::CSkeleton* source, _in void* boneHandleMap);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback)(_in const EarthView::World::Graphic::CSkeleton* source, _out void* boneHandleMap);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CSkeleton_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CSkeletonProxy : public EarthView::World::Graphic::CSkeleton
			{
			private:
				EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback* m_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback;
				EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback* m_EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback;
				EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback* m_EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback;
				EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback* m_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback;
				EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback* m_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback;
				EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback* m_EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback;
				EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_reset_void_Callback* m_EarthView_World_Graphic_CSkeleton_reset_void_Callback;
				EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback* m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback;
				EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback* m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback;
				EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback* m_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback;
				EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback* m_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback;
				EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback* m_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback;
				EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback* m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback;
				EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback* m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback;
				EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback* m_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback;
				EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback* m_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback;
				EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback* m_EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback;
				EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback* m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback;
				EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback* m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback;
				EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback* m_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback;
				EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback* m_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback;
				EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback* m_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback;
				EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback* m_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback;
				EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback* m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback;
				EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback* m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback;
				EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback* m_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback;
				EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback* m_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback;
				EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback* m_EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback;
				EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_prepare_void_Callback* m_EarthView_World_Graphic_CSkeleton_prepare_void_Callback;
				EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_load_void_Callback* m_EarthView_World_Graphic_CSkeleton_load_void_Callback;
				EarthView_World_Graphic_CSkeleton_reload_void_Callback* m_EarthView_World_Graphic_CSkeleton_reload_void_Callback;
				EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_unload_void_Callback* m_EarthView_World_Graphic_CSkeleton_unload_void_Callback;
				EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeleton_touch_void_Callback* m_EarthView_World_Graphic_CSkeleton_touch_void_Callback;
				EarthView_World_Graphic_CSkeleton_getName_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_getName_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback* m_EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback;
				EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback* m_EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback;
				EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback;
			public:
				CSkeletonProxy(EarthView::World::Core::CNameValuePairList *pList) : CSkeleton(pList)
				{
					m_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_reset_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer(EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone(EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16(EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString(EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16(EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16(EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getRootBone_CBone(EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator(EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator(EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16(EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString(EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString(EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setBindingPose_void(EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool(EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_reset_void(EarthView_World_Graphic_CSkeleton_reset_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_reset_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource(EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource(EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString(EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString(EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString(EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet(EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet(EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet(EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4(EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32(EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16(EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16(EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode(EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode(EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__updateTransforms_void(EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool(EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void(EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real(EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString(EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void(EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator(EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void(EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone(EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool(EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool(EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector(EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap(EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap(EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap(EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_preLoadImpl_void(EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_postLoadImpl_void(EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void(EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void(EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_prepareImpl_void(EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_unprepareImpl_void(EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_loadImpl_void(EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_unloadImpl_void(EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t(EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool(EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_prepare_void(EarthView_World_Graphic_CSkeleton_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_load_void_ev_bool(EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_load_void(EarthView_World_Graphic_CSkeleton_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_reload_void(EarthView_World_Graphic_CSkeleton_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool(EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_unload_void(EarthView_World_Graphic_CSkeleton_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t(EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_touch_void(EarthView_World_Graphic_CSkeleton_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getName_EVString(EarthView_World_Graphic_CSkeleton_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64(EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool(EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool(EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool(EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState(EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_escalateLoading_void(EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener(EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener(EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getGroup_EVString(EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager(EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getOrigin_EVString(EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString(EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t(EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__dirtyState_void(EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void(EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString(EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* getAnimationContainerPtr() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* returnValue = m_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getAnimationContainerPtr();
				}
				virtual EarthView::World::Graphic::CBone* createBone()
				{
					if(m_EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::createBone();
				}
				virtual EarthView::World::Graphic::CBone* createBone(_in ev_uint16 handle)
				{
					if(m_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback(handle);
						return returnValue;
					}
					else
						return this->CSkeleton::createBone(handle);
				}
				virtual EarthView::World::Graphic::CBone* createBone(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::createBone(name);
				}
				virtual EarthView::World::Graphic::CBone* createBone(_in const EVString& name, _in ev_uint16 handle)
				{
					if(m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback(name_Char, handle);
						return returnValue;
					}
					else
						return this->CSkeleton::createBone(name, handle);
				}
				virtual ev_uint16 getNumBones() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getNumBones();
				}
				virtual EarthView::World::Graphic::CBone* getRootBone() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getRootBone();
				}
				virtual EarthView::World::Graphic::CSkeleton::BoneIterator getRootBoneIterator()
				{
					if(m_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSkeleton::BoneIterator returnValue = *(EarthView::World::Graphic::CSkeleton::BoneIterator*)m_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getRootBoneIterator();
				}
				virtual EarthView::World::Graphic::CSkeleton::BoneIterator getBoneIterator()
				{
					if(m_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSkeleton::BoneIterator returnValue = *(EarthView::World::Graphic::CSkeleton::BoneIterator*)m_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getBoneIterator();
				}
				virtual EarthView::World::Graphic::CBone* getBone(_in ev_uint16 handle) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback(handle);
						return returnValue;
					}
					else
						return this->CSkeleton::getBone(handle);
				}
				virtual EarthView::World::Graphic::CBone* getBone(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBone* returnValue = m_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::getBone(name);
				}
				virtual ev_bool hasBone(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::hasBone(name);
				}
				virtual void setBindingPose()
				{
					if(m_EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback();
					}
					else
						return this->CSkeleton::setBindingPose();
				}
				virtual void reset(_in ev_bool resetManualBones)
				{
					if(m_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback(resetManualBones);
					}
					else
						return this->CSkeleton::reset(resetManualBones);
				}
				virtual void reset()
				{
					if(m_EarthView_World_Graphic_CSkeleton_reset_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_reset_void_Callback();
					}
					else
						return this->CSkeleton::reset();
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CSkeleton::createAnimation(name, length);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback(name_Char, linker);
						return returnValue;
					}
					else
						return this->CSkeleton::getAnimation(name, linker);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::getAnimation(name);
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(_in const EVString& name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker) const
				{
					if(m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback(name_Char, linker);
						return returnValue;
					}
					else
						return this->CSkeleton::_getAnimationImpl(name, linker);
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::_getAnimationImpl(name);
				}
				virtual ev_bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::hasAnimation(name);
				}
				virtual void removeAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CSkeleton::removeAnimation(name);
				}
				virtual void setAnimationState(_in const EarthView::World::Graphic::CAnimationStateSet& animSet)
				{
					if(m_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback(&animSet);
					}
					else
						return this->CSkeleton::setAnimationState(animSet);
				}
				virtual void _initAnimationState(_in EarthView::World::Graphic::CAnimationStateSet* animSet)
				{
					if(m_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback(animSet);
					}
					else
						return this->CSkeleton::_initAnimationState(animSet);
				}
				virtual void _refreshAnimationState(_in EarthView::World::Graphic::CAnimationStateSet* animSet)
				{
					if(m_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback(animSet);
					}
					else
						return this->CSkeleton::_refreshAnimationState(animSet);
				}
				virtual void _getBoneMatrices(_in EarthView::World::Spatial::Math::CMatrix4* pMatrices)
				{
					if(m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback(pMatrices);
					}
					else
						return this->CSkeleton::_getBoneMatrices(pMatrices);
				}
				virtual void _getBoneMatrices(_in EarthView::World::Spatial::Math::CMatrix4* pMatrices, _in ev_uint32 index)
				{
					if(m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback(pMatrices, index);
					}
					else
						return this->CSkeleton::_getBoneMatrices(pMatrices, index);
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getNumAnimations();
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSkeleton::getAnimation(index);
				}
				virtual EarthView::World::Graphic::SkeletonAnimationBlendMode getBlendMode() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::SkeletonAnimationBlendMode returnValue = (EarthView::World::Graphic::SkeletonAnimationBlendMode)m_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getBlendMode();
				}
				virtual void setBlendMode(_in EarthView::World::Graphic::SkeletonAnimationBlendMode state)
				{
					if(m_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback((int)state);
					}
					else
						return this->CSkeleton::setBlendMode(state);
				}
				virtual void _updateTransforms()
				{
					if(m_EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback();
					}
					else
						return this->CSkeleton::_updateTransforms();
				}
				virtual void optimiseAllAnimations(_in ev_bool preservingIdentityNodeTracks)
				{
					if(m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback(preservingIdentityNodeTracks);
					}
					else
						return this->CSkeleton::optimiseAllAnimations(preservingIdentityNodeTracks);
				}
				virtual void optimiseAllAnimations()
				{
					if(m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback();
					}
					else
						return this->CSkeleton::optimiseAllAnimations();
				}
				virtual void addLinkedSkeletonAnimationSource(_in const EVString& skelName, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* skelName_Char = skelName.makeBuffer();
						m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback(skelName_Char, scale);
					}
					else
						return this->CSkeleton::addLinkedSkeletonAnimationSource(skelName, scale);
				}
				virtual void addLinkedSkeletonAnimationSource(_in const EVString& skelName)
				{
					if(m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* skelName_Char = skelName.makeBuffer();
						m_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback(skelName_Char);
					}
					else
						return this->CSkeleton::addLinkedSkeletonAnimationSource(skelName);
				}
				virtual void removeAllLinkedSkeletonAnimationSources()
				{
					if(m_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback();
					}
					else
						return this->CSkeleton::removeAllLinkedSkeletonAnimationSources();
				}
				virtual EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator returnValue = *(EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*)m_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getLinkedSkeletonAnimationSourceIterator();
				}
				virtual void _notifyManualBonesDirty()
				{
					if(m_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback();
					}
					else
						return this->CSkeleton::_notifyManualBonesDirty();
				}
				virtual void _notifyManualBoneStateChange(_in EarthView::World::Graphic::CBone* ref_bone)
				{
					if(m_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback(ref_bone);
					}
					else
						return this->CSkeleton::_notifyManualBoneStateChange(ref_bone);
				}
				virtual ev_bool getManualBonesDirty() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getManualBonesDirty();
				}
				virtual ev_bool hasManualBones() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::hasManualBones();
				}
				virtual void _mergeSkeletonAnimations(_in const EarthView::World::Graphic::CSkeleton* source, _in const EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap, _out const EarthView::World::Core::StringVector& animations)
				{
					if(m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback(source, &boneHandleMap, &animations);
					}
					else
						return this->CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap, animations);
				}
				virtual void _mergeSkeletonAnimations(_in const EarthView::World::Graphic::CSkeleton* source, _in const EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap)
				{
					if(m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback(source, &boneHandleMap);
					}
					else
						return this->CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap);
				}
				virtual void _buildMapBoneByHandle(_in const EarthView::World::Graphic::CSkeleton* source, _in EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap) const
				{
					if(m_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback(source, &boneHandleMap);
					}
					else
						return this->CSkeleton::_buildMapBoneByHandle(source, boneHandleMap);
				}
				virtual void _buildMapBoneByName(_in const EarthView::World::Graphic::CSkeleton* source, _out EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap) const
				{
					if(m_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback(source, &boneHandleMap);
					}
					else
						return this->CSkeleton::_buildMapBoneByName(source, boneHandleMap);
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback();
					}
					else
						return this->CSkeleton::loadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback();
					}
					else
						return this->CSkeleton::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::calculateSize();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback();
					}
					else
						return this->CSkeleton::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback();
					}
					else
						return this->CSkeleton::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback();
					}
					else
						return this->CSkeleton::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback();
					}
					else
						return this->CSkeleton::postUnloadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback();
					}
					else
						return this->CSkeleton::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback();
					}
					else
						return this->CSkeleton::unprepareImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CSkeleton::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CSkeleton_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_prepare_void_Callback();
					}
					else
						return this->CSkeleton::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CSkeleton::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CSkeleton_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_load_void_Callback();
					}
					else
						return this->CSkeleton::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CSkeleton_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_reload_void_Callback();
					}
					else
						return this->CSkeleton::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CSkeleton_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_unload_void_Callback();
					}
					else
						return this->CSkeleton::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CSkeleton_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_touch_void_Callback();
					}
					else
						return this->CSkeleton::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CSkeleton_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CSkeleton::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback();
					}
					else
						return this->CSkeleton::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CSkeleton::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CSkeleton::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CSkeleton::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CSkeleton::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CSkeleton::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback();
					}
					else
						return this->CSkeleton::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CSkeleton::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CSkeleton::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CSkeleton::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CSkeleton::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CSkeleton::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeleton::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CSkeleton::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CSkeletonProxy);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef bool  ( _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback)(_in char*& name);
			class CSkeletonInternalAnimationContainerProxy : public EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer
			{
			private:
				EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback;
				EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback;
				EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback;
			public:
				CSkeletonInternalAnimationContainerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSkeletonInternalAnimationContainer(pList)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16(EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16(EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString(EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString(EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback = pCallback;
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if(m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSkeletonInternalAnimationContainer::getNumAnimations();
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSkeletonInternalAnimationContainer::getAnimation(index);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeletonInternalAnimationContainer::getAnimation(name);
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CSkeletonInternalAnimationContainer::createAnimation(name, length);
				}
				virtual bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						bool returnValue = m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSkeletonInternalAnimationContainer::hasAnimation(name);
				}
				virtual void removeAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CSkeletonInternalAnimationContainer::removeAnimation(name);
				}
			};
			REGISTER_FACTORY_CLASS(CSkeletonInternalAnimationContainerProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getNumAnimations();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumAnimations();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_Callback* pCallback )
			{
				CSkeletonInternalAnimationContainerProxy* ptr = dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getNumAnimations_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getNumAnimations();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* pCallback )
			{
				CSkeletonInternalAnimationContainerProxy* ptr = dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CSkeletonInternalAnimationContainerProxy* ptr = dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_getAnimation_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::createAnimation(name1, length);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->createAnimation(name1, length);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CSkeletonInternalAnimationContainerProxy* ptr = dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_createAnimation_CAnimation_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::createAnimation(name1, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::hasAnimation(name1);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->hasAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_Callback* pCallback )
			{
				CSkeletonInternalAnimationContainerProxy* ptr = dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_hasAnimation_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::hasAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::removeAnimation(name1);
				else
					ptrNativeObject->removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_Callback* pCallback )
			{
				CSkeletonInternalAnimationContainerProxy* ptr = dynamic_cast<CSkeletonInternalAnimationContainerProxy*>((EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_CSkeletonInternalAnimationContainer_removeAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimationContainerPtr();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* objXXXX = ptrNativeObject->getAnimationContainerPtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimationContainerPtr_CSkeletonInternalAnimationContainer_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimationContainerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_push_back_void_ev_uint16(void *pObjectXXXX, _in ev_uint16& t )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_front_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_back_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_insert_void_ev_uint32_ev_uint16(void *pObjectXXXX, _in ev_uint32 pos, _in ev_uint16& t )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_OperatorIndex_ev_uint16_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap& objYYYY = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_uint16& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_at_ev_uint16_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneHandleMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->createBone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_createBone_CBone_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone(handle);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->createBone(handle);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->createBone(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16(void *pObjectXXXX, _in const char* name, _in ev_uint16 handle )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone(name1, handle);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->createBone(name1, handle);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_createBone_CBone_EVString_ev_uint16_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_uint16 handle )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createBone(name1, handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getNumBones();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumBones();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSkeleton_getNumBones_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getNumBones();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_getRootBone_CBone(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getRootBone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->getRootBone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getRootBone_CBone( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getRootBone_CBone_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getRootBone_CBone(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_getRootBone_CBone_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getRootBone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_push_back_void_CBone(void *pObjectXXXX, _in EarthView::World::Graphic::CBone*& ref_t )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_front_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_back_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_insert_void_ev_uint32_CBone(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CBone*& ref_t )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_OperatorIndex_CBone_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSkeleton::BoneList& objYYYY = *(EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				EarthView::World::Graphic::CBone* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_at_CBone_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSkeleton_BoneList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_BoneIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::BoneIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_BoneIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneIterator_getCurrent_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneIterator_next_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneIterator_getBegin_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_BoneIterator_getEnd_CBone(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getRootBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::BoneIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator objXXXX = ptrNativeObject->getRootBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::BoneIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_getRootBoneIterator_BoneIterator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CSkeleton::BoneIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getRootBoneIterator();
				EarthView::World::Graphic::CSkeleton::BoneIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::BoneIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::BoneIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator objXXXX = ptrNativeObject->getBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::BoneIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_getBoneIterator_BoneIterator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CSkeleton::BoneIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBoneIterator();
				EarthView::World::Graphic::CSkeleton::BoneIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::BoneIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBone(handle);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->getBone(handle);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_getBone_CBone_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 handle )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBone(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBone(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->getBone(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CBone*  _stdcall EarthView_World_Graphic_CSkeleton_getBone_CBone_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CBone* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBone(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::hasBone(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasBone(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_hasBone_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::hasBone(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_setBindingPose_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::setBindingPose();
				else
					ptrNativeObject->setBindingPose();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setBindingPose_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setBindingPose_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setBindingPose_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_setBindingPose_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::setBindingPose();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_reset_void_ev_bool(void *pObjectXXXX, _in ev_bool resetManualBones )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::reset(resetManualBones);
				else
					ptrNativeObject->reset(resetManualBones);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_reset_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_reset_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool resetManualBones )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::reset(resetManualBones);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::reset();
				else
					ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_reset_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_reset_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_reset_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_reset_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::reset();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createAnimation(name1, length);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->createAnimation(name1, length);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_createAnimation_CAnimation_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::createAnimation(name1, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimation(name1, linker);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(name1, linker);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_LinkedSkeletonAnimationSource_NoVirtual(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimation(name1, linker);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimation(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name1, linker);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->_getAnimationImpl(name1, linker);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_LinkedSkeletonAnimationSource_NoVirtual(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name1, linker);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->_getAnimationImpl(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton__getAnimationImpl_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::hasAnimation(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_hasAnimation_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::hasAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::removeAnimation(name1);
				else
					ptrNativeObject->removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_removeAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet(void *pObjectXXXX, _in const void* animSet )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::setAnimationState(*(EarthView::World::Graphic::CAnimationStateSet*)animSet);
				else
					ptrNativeObject->setAnimationState(*(EarthView::World::Graphic::CAnimationStateSet*)animSet);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_setAnimationState_void_CAnimationStateSet_NoVirtual(void *pObjectXXXX, _in const void* animSet )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::setAnimationState(*(EarthView::World::Graphic::CAnimationStateSet*)animSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* animSet )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_initAnimationState(animSet);
				else
					ptrNativeObject->_initAnimationState(animSet);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__initAnimationState_void_CAnimationStateSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* animSet )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_initAnimationState(animSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* animSet )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_refreshAnimationState(animSet);
				else
					ptrNativeObject->_refreshAnimationState(animSet);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__refreshAnimationState_void_CAnimationStateSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* animSet )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_refreshAnimationState(animSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* pMatrices )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices);
				else
					ptrNativeObject->_getBoneMatrices(pMatrices);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* pMatrices )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* pMatrices, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices, index);
				else
					ptrNativeObject->_getBoneMatrices(pMatrices, index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__getBoneMatrices_void_CMatrix4_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CMatrix4* pMatrices, _in ev_uint32 index )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices, index);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getNumAnimations();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumAnimations();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSkeleton_getNumAnimations_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getNumAnimations();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimation(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CSkeleton_getAnimation_CAnimation_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getAnimation(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::SkeletonAnimationBlendMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBlendMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::SkeletonAnimationBlendMode objXXXX = ptrNativeObject->getBlendMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CSkeleton_getBlendMode_SkeletonAnimationBlendMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::SkeletonAnimationBlendMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getBlendMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode(void *pObjectXXXX, _in int state )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::setBlendMode((EarthView::World::Graphic::SkeletonAnimationBlendMode)state);
				else
					ptrNativeObject->setBlendMode((EarthView::World::Graphic::SkeletonAnimationBlendMode)state);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_setBlendMode_void_SkeletonAnimationBlendMode_NoVirtual(void *pObjectXXXX, _in int state )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::setBlendMode((EarthView::World::Graphic::SkeletonAnimationBlendMode)state);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__updateTransforms_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_updateTransforms();
				else
					ptrNativeObject->_updateTransforms();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__updateTransforms_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__updateTransforms_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__updateTransforms_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__updateTransforms_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_updateTransforms();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool(void *pObjectXXXX, _in ev_bool preservingIdentityNodeTracks )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations(preservingIdentityNodeTracks);
				else
					ptrNativeObject->optimiseAllAnimations(preservingIdentityNodeTracks);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool preservingIdentityNodeTracks )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations(preservingIdentityNodeTracks);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations();
				else
					ptrNativeObject->optimiseAllAnimations();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_optimiseAllAnimations_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real(void *pObjectXXXX, _in const char* skelName, _in Real scale )
			{
				EarthView::World::Core::ev_string skelName1 = skelName;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName1, scale);
				else
					ptrNativeObject->addLinkedSkeletonAnimationSource(skelName1, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* skelName, _in Real scale )
			{
				EarthView::World::Core::ev_string skelName1 = skelName;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName1, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString(void *pObjectXXXX, _in const char* skelName )
			{
				EarthView::World::Core::ev_string skelName1 = skelName;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName1);
				else
					ptrNativeObject->addLinkedSkeletonAnimationSource(skelName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_addLinkedSkeletonAnimationSource_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* skelName )
			{
				EarthView::World::Core::ev_string skelName1 = skelName;
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::removeAllLinkedSkeletonAnimationSources();
				else
					ptrNativeObject->removeAllLinkedSkeletonAnimationSources();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_removeAllLinkedSkeletonAnimationSources_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::removeAllLinkedSkeletonAnimationSources();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_push_back_void_LinkedSkeletonAnimationSource(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::LinkedSkeletonAnimationSource*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_front_LinkedSkeletonAnimationSource(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_back_LinkedSkeletonAnimationSource(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_insert_void_ev_uint32_LinkedSkeletonAnimationSource(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::LinkedSkeletonAnimationSource*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_OperatorIndex_LinkedSkeletonAnimationSource_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList& objYYYY = *(EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& objXXXX = objYYYY[n];
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_at_LinkedSkeletonAnimationSource_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceIterator_getCurrent_LinkedSkeletonAnimationSource(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource objXXXX = ptrNativeObject->getCurrent();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceIterator_next_LinkedSkeletonAnimationSource(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceIterator_getBegin_LinkedSkeletonAnimationSource(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource objXXXX = ptrNativeObject->getBegin();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_LinkedSkeletonAnimSourceIterator_getEnd_LinkedSkeletonAnimationSource(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator* ptrNativeObject = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjectXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource objXXXX = ptrNativeObject->getEnd();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pXXXX = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getLinkedSkeletonAnimationSourceIterator();
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator objXXXX = ptrNativeObject->getLinkedSkeletonAnimationSourceIterator();
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeleton_getLinkedSkeletonAnimationSourceIterator_LinkedSkeletonAnimSourceIterator_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getLinkedSkeletonAnimationSourceIterator();
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pXXXX = new EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_notifyManualBonesDirty();
				else
					ptrNativeObject->_notifyManualBonesDirty();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__notifyManualBonesDirty_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_notifyManualBonesDirty();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone(void *pObjectXXXX, _in EarthView::World::Graphic::CBone* ref_bone )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_notifyManualBoneStateChange(ref_bone);
				else
					ptrNativeObject->_notifyManualBoneStateChange(ref_bone);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__notifyManualBoneStateChange_void_CBone_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CBone* ref_bone )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_notifyManualBoneStateChange(ref_bone);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getManualBonesDirty();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getManualBonesDirty();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_getManualBonesDirty_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::getManualBonesDirty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::hasManualBones();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasManualBones();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSkeleton_hasManualBones_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::hasManualBones();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _in const void* boneHandleMap, _out const void* animations )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap, *(EarthView::World::Core::StringVector*)animations);
				else
					ptrNativeObject->_mergeSkeletonAnimations(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap, *(EarthView::World::Core::StringVector*)animations);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_StringVector_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _in const void* boneHandleMap, _out const void* animations )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap, *(EarthView::World::Core::StringVector*)animations);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _in const void* boneHandleMap )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
				else
					ptrNativeObject->_mergeSkeletonAnimations(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__mergeSkeletonAnimations_void_CSkeleton_BoneHandleMap_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _in const void* boneHandleMap )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _in void* boneHandleMap )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_buildMapBoneByHandle(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
				else
					ptrNativeObject->_buildMapBoneByHandle(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__buildMapBoneByHandle_void_CSkeleton_BoneHandleMap_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _in void* boneHandleMap )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_buildMapBoneByHandle(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _out void* boneHandleMap )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::_buildMapBoneByName(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
				else
					ptrNativeObject->_buildMapBoneByName(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton__buildMapBoneByName_void_CSkeleton_BoneHandleMap_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSkeleton* source, _out void* boneHandleMap )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::_buildMapBoneByName(source, *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*)boneHandleMap);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_loadImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSkeleton::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_unloadImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSkeleton_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSkeleton::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				if (dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSkeleton_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeleton* ptrNativeObject = (EarthView::World::Graphic::CSkeleton*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CSkeleton::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_preLoadImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_postLoadImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_preUnloadImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_postUnloadImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_prepareImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_unprepareImpl_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_prepare_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_load_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_load_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_load_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_reload_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_unload_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getSize_ev_size_t_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_touch_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getName_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_isLoading_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_escalateLoading_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getGroup_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getOrigin_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__dirtyState_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CSkeletonProxy* ptr = dynamic_cast<CSkeletonProxy*>((EarthView::World::Graphic::CSkeleton*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSkeleton_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSkeleton*  _stdcall EarthView_World_Graphic_CSkeletonPtr_get_CSkeleton(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSkeletonPtr* ptrNativeObject = (EarthView::World::Graphic::CSkeletonPtr*) pObjectXXXX;
				EarthView::World::Graphic::CSkeleton* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSkeletonPtr_OperatorAssign_CSkeletonPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CSkeletonPtr& objXXXX = *((EarthView::World::Graphic::CSkeletonPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CSkeletonPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_LinkedSkeletonAnimationSource_skeletonName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource* ptrNativeObject = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->skeletonName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_LinkedSkeletonAnimationSource_skeletonName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjectXXXX)->skeletonName = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_LinkedSkeletonAnimationSource_pSkeleton( void *pObjectXXXX )
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource* ptrNativeObject = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*) pObjectXXXX;
				EarthView::World::Graphic::CSkeletonPtr &objXXXX = ptrNativeObject->pSkeleton;
				EarthView::World::Graphic::CSkeletonPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_LinkedSkeletonAnimationSource_pSkeleton( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjectXXXX)->pSkeleton = *(EarthView::World::Graphic::CSkeletonPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_LinkedSkeletonAnimationSource_scale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource* ptrNativeObject = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->scale;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_LinkedSkeletonAnimationSource_scale( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjectXXXX)->scale = value;
			}
		}
	}
}
