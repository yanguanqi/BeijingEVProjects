/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/skeleton.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SkeletonAnimationBlendModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					ANIMBLEND_AVERAGE,
					ANIMBLEND_CUMULATIVE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			class JCSkeletonProxy : public EarthView::World::Graphic::CSkeleton
			{
			 private:
				EarthView::World::Core::ev_string m_getAnimationContainerPtr_void_callback;
				EarthView::World::Core::ev_string m_createBone_void_callback;
				EarthView::World::Core::ev_string m_createBone_ev_uint16_callback;
				EarthView::World::Core::ev_string m_createBone_EVString_callback;
				EarthView::World::Core::ev_string m_createBone_EVString_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getNumBones_void_callback;
				EarthView::World::Core::ev_string m_getRootBone_void_callback;
				EarthView::World::Core::ev_string m_getRootBoneIterator_void_callback;
				EarthView::World::Core::ev_string m_getBoneIterator_void_callback;
				EarthView::World::Core::ev_string m_getBone_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getBone_EVString_callback;
				EarthView::World::Core::ev_string m_hasBone_EVString_callback;
				EarthView::World::Core::ev_string m_setBindingPose_void_callback;
				EarthView::World::Core::ev_string m_reset_ev_bool_callback;
				EarthView::World::Core::ev_string m_reset_void_callback;
				EarthView::World::Core::ev_string m_createAnimation_EVString_Real_callback;
				EarthView::World::Core::ev_string m_getAnimation_EVString_LinkedSkeletonAnimationSource_callback;
				EarthView::World::Core::ev_string m_getAnimation_EVString_callback;
				EarthView::World::Core::ev_string m__getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback;
				EarthView::World::Core::ev_string m__getAnimationImpl_EVString_callback;
				EarthView::World::Core::ev_string m_hasAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_removeAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_setAnimationState_CAnimationStateSet_callback;
				EarthView::World::Core::ev_string m__initAnimationState_CAnimationStateSet_callback;
				EarthView::World::Core::ev_string m__refreshAnimationState_CAnimationStateSet_callback;
				EarthView::World::Core::ev_string m__getBoneMatrices_CMatrix4_callback;
				EarthView::World::Core::ev_string m__getBoneMatrices_CMatrix4_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getNumAnimations_void_callback;
				EarthView::World::Core::ev_string m_getAnimation_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getBlendMode_void_callback;
				EarthView::World::Core::ev_string m_setBlendMode_SkeletonAnimationBlendMode_callback;
				EarthView::World::Core::ev_string m__updateTransforms_void_callback;
				EarthView::World::Core::ev_string m_optimiseAllAnimations_ev_bool_callback;
				EarthView::World::Core::ev_string m_optimiseAllAnimations_void_callback;
				EarthView::World::Core::ev_string m_addLinkedSkeletonAnimationSource_EVString_Real_callback;
				EarthView::World::Core::ev_string m_addLinkedSkeletonAnimationSource_EVString_callback;
				EarthView::World::Core::ev_string m_removeAllLinkedSkeletonAnimationSources_void_callback;
				EarthView::World::Core::ev_string m_getLinkedSkeletonAnimationSourceIterator_void_callback;
				EarthView::World::Core::ev_string m__notifyManualBonesDirty_void_callback;
				EarthView::World::Core::ev_string m__notifyManualBoneStateChange_CBone_callback;
				EarthView::World::Core::ev_string m_getManualBonesDirty_void_callback;
				EarthView::World::Core::ev_string m_hasManualBones_void_callback;
				EarthView::World::Core::ev_string m__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback;
				EarthView::World::Core::ev_string m__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback;
				EarthView::World::Core::ev_string m__buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback;
				EarthView::World::Core::ev_string m__buildMapBoneByName_CSkeleton_BoneHandleMap_callback;
				EarthView::World::Core::ev_string m_preLoadImpl_void_callback;
				EarthView::World::Core::ev_string m_postLoadImpl_void_callback;
				EarthView::World::Core::ev_string m_preUnloadImpl_void_callback;
				EarthView::World::Core::ev_string m_postUnloadImpl_void_callback;
				EarthView::World::Core::ev_string m_prepareImpl_void_callback;
				EarthView::World::Core::ev_string m_unprepareImpl_void_callback;
				EarthView::World::Core::ev_string m_loadImpl_void_callback;
				EarthView::World::Core::ev_string m_unloadImpl_void_callback;
				EarthView::World::Core::ev_string m_calculateSize_void_callback;
				EarthView::World::Core::ev_string m_prepare_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_void_callback;
				EarthView::World::Core::ev_string m_load_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_void_callback;
				EarthView::World::Core::ev_string m_reload_void_callback;
				EarthView::World::Core::ev_string m_isReloadable_void_callback;
				EarthView::World::Core::ev_string m_isManuallyLoaded_void_callback;
				EarthView::World::Core::ev_string m_unload_void_callback;
				EarthView::World::Core::ev_string m_getSize_void_callback;
				EarthView::World::Core::ev_string m_touch_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getHandle_void_callback;
				EarthView::World::Core::ev_string m_isPrepared_void_callback;
				EarthView::World::Core::ev_string m_isLoaded_void_callback;
				EarthView::World::Core::ev_string m_isLoading_void_callback;
				EarthView::World::Core::ev_string m_getLoadingState_void_callback;
				EarthView::World::Core::ev_string m_isBackgroundLoaded_void_callback;
				EarthView::World::Core::ev_string m_setBackgroundLoaded_ev_bool_callback;
				EarthView::World::Core::ev_string m_escalateLoading_void_callback;
				EarthView::World::Core::ev_string m_addListener_CResourceListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CResourceListener_callback;
				EarthView::World::Core::ev_string m_getGroup_void_callback;
				EarthView::World::Core::ev_string m_changeGroupOwnership_EVString_callback;
				EarthView::World::Core::ev_string m_getCreator_void_callback;
				EarthView::World::Core::ev_string m_getOrigin_void_callback;
				EarthView::World::Core::ev_string m__notifyOrigin_EVString_callback;
				EarthView::World::Core::ev_string m_getStateCount_void_callback;
				EarthView::World::Core::ev_string m__dirtyState_void_callback;
				EarthView::World::Core::ev_string m__fireLoadingComplete_ev_bool_callback;
				EarthView::World::Core::ev_string m__firePreparingComplete_ev_bool_callback;
				EarthView::World::Core::ev_string m__fireUnloadingComplete_void_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCSkeletonProxy(EarthView::World::Core::CNameValuePairList *pList) : CSkeleton(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_getAnimationContainerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimationContainerPtr_void_callback = __method;
				}
				void register_createBone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createBone_void_callback = __method;
				}
				void register_createBone_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createBone_ev_uint16_callback = __method;
				}
				void register_createBone_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createBone_EVString_callback = __method;
				}
				void register_createBone_EVString_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createBone_EVString_ev_uint16_callback = __method;
				}
				void register_getNumBones_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumBones_void_callback = __method;
				}
				void register_getRootBone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRootBone_void_callback = __method;
				}
				void register_getRootBoneIterator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRootBoneIterator_void_callback = __method;
				}
				void register_getBoneIterator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBoneIterator_void_callback = __method;
				}
				void register_getBone_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBone_ev_uint16_callback = __method;
				}
				void register_getBone_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBone_EVString_callback = __method;
				}
				void register_hasBone_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasBone_EVString_callback = __method;
				}
				void register_setBindingPose_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBindingPose_void_callback = __method;
				}
				void register_reset_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reset_ev_bool_callback = __method;
				}
				void register_reset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reset_void_callback = __method;
				}
				void register_createAnimation_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_EVString_Real_callback = __method;
				}
				void register_getAnimation_EVString_LinkedSkeletonAnimationSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_EVString_LinkedSkeletonAnimationSource_callback = __method;
				}
				void register_getAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_EVString_callback = __method;
				}
				void register__getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback = __method;
				}
				void register__getAnimationImpl_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getAnimationImpl_EVString_callback = __method;
				}
				void register_hasAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnimation_EVString_callback = __method;
				}
				void register_removeAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAnimation_EVString_callback = __method;
				}
				void register_setAnimationState_CAnimationStateSet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAnimationState_CAnimationStateSet_callback = __method;
				}
				void register__initAnimationState_CAnimationStateSet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__initAnimationState_CAnimationStateSet_callback = __method;
				}
				void register__refreshAnimationState_CAnimationStateSet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__refreshAnimationState_CAnimationStateSet_callback = __method;
				}
				void register__getBoneMatrices_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getBoneMatrices_CMatrix4_callback = __method;
				}
				void register__getBoneMatrices_CMatrix4_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getBoneMatrices_CMatrix4_ev_uint32_callback = __method;
				}
				void register_getNumAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumAnimations_void_callback = __method;
				}
				void register_getAnimation_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_ev_uint16_callback = __method;
				}
				void register_getBlendMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBlendMode_void_callback = __method;
				}
				void register_setBlendMode_SkeletonAnimationBlendMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBlendMode_SkeletonAnimationBlendMode_callback = __method;
				}
				void register__updateTransforms_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateTransforms_void_callback = __method;
				}
				void register_optimiseAllAnimations_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimiseAllAnimations_ev_bool_callback = __method;
				}
				void register_optimiseAllAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimiseAllAnimations_void_callback = __method;
				}
				void register_addLinkedSkeletonAnimationSource_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addLinkedSkeletonAnimationSource_EVString_Real_callback = __method;
				}
				void register_addLinkedSkeletonAnimationSource_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addLinkedSkeletonAnimationSource_EVString_callback = __method;
				}
				void register_removeAllLinkedSkeletonAnimationSources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllLinkedSkeletonAnimationSources_void_callback = __method;
				}
				void register_getLinkedSkeletonAnimationSourceIterator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLinkedSkeletonAnimationSourceIterator_void_callback = __method;
				}
				void register__notifyManualBonesDirty_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyManualBonesDirty_void_callback = __method;
				}
				void register__notifyManualBoneStateChange_CBone_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyManualBoneStateChange_CBone_callback = __method;
				}
				void register_getManualBonesDirty_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getManualBonesDirty_void_callback = __method;
				}
				void register_hasManualBones_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasManualBones_void_callback = __method;
				}
				void register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback = __method;
				}
				void register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback = __method;
				}
				void register__buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback = __method;
				}
				void register__buildMapBoneByName_CSkeleton_BoneHandleMap_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildMapBoneByName_CSkeleton_BoneHandleMap_callback = __method;
				}
				void register_preLoadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preLoadImpl_void_callback = __method;
				}
				void register_postLoadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postLoadImpl_void_callback = __method;
				}
				void register_preUnloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preUnloadImpl_void_callback = __method;
				}
				void register_postUnloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postUnloadImpl_void_callback = __method;
				}
				void register_prepareImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareImpl_void_callback = __method;
				}
				void register_unprepareImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unprepareImpl_void_callback = __method;
				}
				void register_loadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadImpl_void_callback = __method;
				}
				void register_unloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadImpl_void_callback = __method;
				}
				void register_calculateSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateSize_void_callback = __method;
				}
				void register_prepare_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_ev_bool_callback = __method;
				}
				void register_prepare_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_void_callback = __method;
				}
				void register_load_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_ev_bool_callback = __method;
				}
				void register_load_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_void_callback = __method;
				}
				void register_reload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reload_void_callback = __method;
				}
				void register_isReloadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReloadable_void_callback = __method;
				}
				void register_isManuallyLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isManuallyLoaded_void_callback = __method;
				}
				void register_unload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_void_callback = __method;
				}
				void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSize_void_callback = __method;
				}
				void register_touch_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touch_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getHandle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHandle_void_callback = __method;
				}
				void register_isPrepared_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPrepared_void_callback = __method;
				}
				void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoaded_void_callback = __method;
				}
				void register_isLoading_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoading_void_callback = __method;
				}
				void register_getLoadingState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingState_void_callback = __method;
				}
				void register_isBackgroundLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isBackgroundLoaded_void_callback = __method;
				}
				void register_setBackgroundLoaded_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBackgroundLoaded_ev_bool_callback = __method;
				}
				void register_escalateLoading_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_escalateLoading_void_callback = __method;
				}
				void register_addListener_CResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CResourceListener_callback = __method;
				}
				void register_removeListener_CResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CResourceListener_callback = __method;
				}
				void register_getGroup_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGroup_void_callback = __method;
				}
				void register_changeGroupOwnership_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeGroupOwnership_EVString_callback = __method;
				}
				void register_getCreator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCreator_void_callback = __method;
				}
				void register_getOrigin_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOrigin_void_callback = __method;
				}
				void register__notifyOrigin_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyOrigin_EVString_callback = __method;
				}
				void register_getStateCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStateCount_void_callback = __method;
				}
				void register__dirtyState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__dirtyState_void_callback = __method;
				}
				void register__fireLoadingComplete_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__fireLoadingComplete_ev_bool_callback = __method;
				}
				void register__firePreparingComplete_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__firePreparingComplete_ev_bool_callback = __method;
				}
				void register__fireUnloadingComplete_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__fireUnloadingComplete_void_callback = __method;
				}
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* getAnimationContainerPtr() const
				{
					if (this->_gRef != NULL && this->m_getAnimationContainerPtr_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAnimationContainerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *__values1 = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getAnimationContainerPtr();
					}
				}
				virtual EarthView::World::Graphic::CBone* createBone()
				{
					if (this->_gRef != NULL && this->m_createBone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createBone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::createBone();
					}
				}
				virtual EarthView::World::Graphic::CBone* createBone(ev_uint16 handle)
				{
					if (this->_gRef != NULL && this->m_createBone_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint handle_j = (jint) handle;
						jmethodID __method = __gr->getMethod("createBone_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::createBone(handle);
					}
				}
				virtual EarthView::World::Graphic::CBone* createBone(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_createBone_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("createBone_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::createBone(name);
					}
				}
				virtual EarthView::World::Graphic::CBone* createBone(const EVString& name, ev_uint16 handle)
				{
					if (this->_gRef != NULL && this->m_createBone_EVString_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jint handle_j = (jint) handle;
						jmethodID __method = __gr->getMethod("createBone_EVString_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, handle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::createBone(name, handle);
					}
				}
				virtual ev_uint16 getNumBones() const
				{
					if (this->_gRef != NULL && this->m_getNumBones_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNumBones_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getNumBones();
					}
				}
				virtual EarthView::World::Graphic::CBone* getRootBone() const
				{
					if (this->_gRef != NULL && this->m_getRootBone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getRootBone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getRootBone();
					}
				}
				virtual EarthView::World::Graphic::CSkeleton::BoneIterator getRootBoneIterator()
				{
					if (this->_gRef != NULL && this->m_getRootBoneIterator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getRootBoneIterator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = *(EarthView::World::Graphic::CSkeleton::BoneIterator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getRootBoneIterator();
					}
				}
				virtual EarthView::World::Graphic::CSkeleton::BoneIterator getBoneIterator()
				{
					if (this->_gRef != NULL && this->m_getBoneIterator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getBoneIterator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = *(EarthView::World::Graphic::CSkeleton::BoneIterator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getBoneIterator();
					}
				}
				virtual EarthView::World::Graphic::CBone* getBone(ev_uint16 handle) const
				{
					if (this->_gRef != NULL && this->m_getBone_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint handle_j = (jint) handle;
						jmethodID __method = __gr->getMethod("getBone_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , handle_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getBone(handle);
					}
				}
				virtual EarthView::World::Graphic::CBone* getBone(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getBone_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getBone_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CBone *__values1 = (EarthView::World::Graphic::CBone*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getBone(name);
					}
				}
				virtual ev_bool hasBone(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_hasBone_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("hasBone_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::hasBone(name);
					}
				}
				virtual void setBindingPose()
				{
					if (this->_gRef != NULL && this->m_setBindingPose_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("setBindingPose_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::setBindingPose();
					}
				}
				virtual void reset(ev_bool resetManualBones)
				{
					if (this->_gRef != NULL && this->m_reset_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean resetManualBones_j = (jboolean) resetManualBones;
						jmethodID __method = __gr->getMethod("reset_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , resetManualBones_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::reset(resetManualBones);
					}
				}
				virtual void reset()
				{
					if (this->_gRef != NULL && this->m_reset_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("reset_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::reset();
					}
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(const EVString& name, Real length)
				{
					if (this->_gRef != NULL && this->m_createAnimation_EVString_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jdouble length_j = (jdouble) length;
						jmethodID __method = __gr->getMethod("createAnimation_EVString_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, length_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::createAnimation(name, length);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(const EVString& name, const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_EVString_LinkedSkeletonAnimationSource_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong linker_j = (jlong) linker;
						jmethodID __method = __gr->getMethod("getAnimation_EVString_LinkedSkeletonAnimationSource_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, linker_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getAnimation(name, linker);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getAnimation_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getAnimation(name);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(const EVString& name, const EarthView::World::Graphic::LinkedSkeletonAnimationSource** linker) const
				{
					if (this->_gRef != NULL && this->m__getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jlong linker_j = (jlong) linker;
						jmethodID __method = __gr->getMethod("_getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, linker_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::_getAnimationImpl(name, linker);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m__getAnimationImpl_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("_getAnimationImpl_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::_getAnimationImpl(name);
					}
				}
				virtual ev_bool hasAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_hasAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("hasAnimation_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::hasAnimation(name);
					}
				}
				virtual void removeAnimation(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeAnimation_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::removeAnimation(name);
					}
				}
				virtual void setAnimationState(const EarthView::World::Graphic::CAnimationStateSet& animSet)
				{
					if (this->_gRef != NULL && this->m_setAnimationState_CAnimationStateSet_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong animSet_j = (jlong) &animSet;
						jmethodID __method = __gr->getMethod("setAnimationState_CAnimationStateSet_callback");
						__env->CallVoidMethod(__obj, __method , animSet_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::setAnimationState(animSet);
					}
				}
				virtual void _initAnimationState(EarthView::World::Graphic::CAnimationStateSet* animSet)
				{
					if (this->_gRef != NULL && this->m__initAnimationState_CAnimationStateSet_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong animSet_j = (jlong) animSet;
						jmethodID __method = __gr->getMethod("_initAnimationState_CAnimationStateSet_callback");
						__env->CallVoidMethod(__obj, __method , animSet_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_initAnimationState(animSet);
					}
				}
				virtual void _refreshAnimationState(EarthView::World::Graphic::CAnimationStateSet* animSet)
				{
					if (this->_gRef != NULL && this->m__refreshAnimationState_CAnimationStateSet_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong animSet_j = (jlong) animSet;
						jmethodID __method = __gr->getMethod("_refreshAnimationState_CAnimationStateSet_callback");
						__env->CallVoidMethod(__obj, __method , animSet_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_refreshAnimationState(animSet);
					}
				}
				virtual void _getBoneMatrices(EarthView::World::Spatial::Math::CMatrix4* pMatrices)
				{
					if (this->_gRef != NULL && this->m__getBoneMatrices_CMatrix4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pMatrices_j = (jlong) pMatrices;
						jmethodID __method = __gr->getMethod("_getBoneMatrices_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , pMatrices_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_getBoneMatrices(pMatrices);
					}
				}
				virtual void _getBoneMatrices(EarthView::World::Spatial::Math::CMatrix4* pMatrices, ev_uint32 index)
				{
					if (this->_gRef != NULL && this->m__getBoneMatrices_CMatrix4_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pMatrices_j = (jlong) pMatrices;
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("_getBoneMatrices_CMatrix4_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , pMatrices_j, index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_getBoneMatrices(pMatrices, index);
					}
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if (this->_gRef != NULL && this->m_getNumAnimations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNumAnimations_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getNumAnimations();
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getAnimation_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getAnimation(index);
					}
				}
				virtual EarthView::World::Graphic::SkeletonAnimationBlendMode getBlendMode() const
				{
					if (this->_gRef != NULL && this->m_getBlendMode_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getBlendMode_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::SkeletonAnimationBlendMode __values1 = (EarthView::World::Graphic::SkeletonAnimationBlendMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getBlendMode();
					}
				}
				virtual void setBlendMode(EarthView::World::Graphic::SkeletonAnimationBlendMode state)
				{
					if (this->_gRef != NULL && this->m_setBlendMode_SkeletonAnimationBlendMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint state_j = (jint) state;
						jmethodID __method = __gr->getMethod("setBlendMode_SkeletonAnimationBlendMode_callback");
						__env->CallVoidMethod(__obj, __method , state_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::setBlendMode(state);
					}
				}
				virtual void _updateTransforms()
				{
					if (this->_gRef != NULL && this->m__updateTransforms_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_updateTransforms_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_updateTransforms();
					}
				}
				virtual void optimiseAllAnimations(ev_bool preservingIdentityNodeTracks)
				{
					if (this->_gRef != NULL && this->m_optimiseAllAnimations_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean preservingIdentityNodeTracks_j = (jboolean) preservingIdentityNodeTracks;
						jmethodID __method = __gr->getMethod("optimiseAllAnimations_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , preservingIdentityNodeTracks_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::optimiseAllAnimations(preservingIdentityNodeTracks);
					}
				}
				virtual void optimiseAllAnimations()
				{
					if (this->_gRef != NULL && this->m_optimiseAllAnimations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("optimiseAllAnimations_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::optimiseAllAnimations();
					}
				}
				virtual void addLinkedSkeletonAnimationSource(const EVString& skelName, Real scale)
				{
					if (this->_gRef != NULL && this->m_addLinkedSkeletonAnimationSource_EVString_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring skelName_wch = skelName;
						jstring skelName_j = __env->NewString((const jchar*)skelName_wch.getString(), skelName_wch.size());
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("addLinkedSkeletonAnimationSource_EVString_Real_callback");
						__env->CallVoidMethod(__obj, __method , skelName_j, scale_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::addLinkedSkeletonAnimationSource(skelName, scale);
					}
				}
				virtual void addLinkedSkeletonAnimationSource(const EVString& skelName)
				{
					if (this->_gRef != NULL && this->m_addLinkedSkeletonAnimationSource_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring skelName_wch = skelName;
						jstring skelName_j = __env->NewString((const jchar*)skelName_wch.getString(), skelName_wch.size());
						jmethodID __method = __gr->getMethod("addLinkedSkeletonAnimationSource_EVString_callback");
						__env->CallVoidMethod(__obj, __method , skelName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::addLinkedSkeletonAnimationSource(skelName);
					}
				}
				virtual void removeAllLinkedSkeletonAnimationSources()
				{
					if (this->_gRef != NULL && this->m_removeAllLinkedSkeletonAnimationSources_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("removeAllLinkedSkeletonAnimationSources_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::removeAllLinkedSkeletonAnimationSources();
					}
				}
				virtual EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator getLinkedSkeletonAnimationSourceIterator() const
				{
					if (this->_gRef != NULL && this->m_getLinkedSkeletonAnimationSourceIterator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLinkedSkeletonAnimationSourceIterator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator __values1 = *(EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getLinkedSkeletonAnimationSourceIterator();
					}
				}
				virtual void _notifyManualBonesDirty()
				{
					if (this->_gRef != NULL && this->m__notifyManualBonesDirty_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_notifyManualBonesDirty_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_notifyManualBonesDirty();
					}
				}
				virtual void _notifyManualBoneStateChange(EarthView::World::Graphic::CBone* ref_bone)
				{
					if (this->_gRef != NULL && this->m__notifyManualBoneStateChange_CBone_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_bone_j = (jlong) ref_bone;
						jmethodID __method = __gr->getMethod("_notifyManualBoneStateChange_CBone_callback");
						__env->CallVoidMethod(__obj, __method , ref_bone_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_notifyManualBoneStateChange(ref_bone);
					}
				}
				virtual ev_bool getManualBonesDirty() const
				{
					if (this->_gRef != NULL && this->m_getManualBonesDirty_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getManualBonesDirty_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getManualBonesDirty();
					}
				}
				virtual ev_bool hasManualBones() const
				{
					if (this->_gRef != NULL && this->m_hasManualBones_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("hasManualBones_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::hasManualBones();
					}
				}
				virtual void _mergeSkeletonAnimations(const EarthView::World::Graphic::CSkeleton* source, const EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap, const EarthView::World::Core::StringVector& animations)
				{
					if (this->_gRef != NULL && this->m__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong source_j = (jlong) source;
						jlong boneHandleMap_j = (jlong) &boneHandleMap;
						jlong animations_j = (jlong) &animations;
						jmethodID __method = __gr->getMethod("_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback");
						__env->CallVoidMethod(__obj, __method , source_j, boneHandleMap_j, animations_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap, animations);
					}
				}
				virtual void _mergeSkeletonAnimations(const EarthView::World::Graphic::CSkeleton* source, const EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap)
				{
					if (this->_gRef != NULL && this->m__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong source_j = (jlong) source;
						jlong boneHandleMap_j = (jlong) &boneHandleMap;
						jmethodID __method = __gr->getMethod("_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback");
						__env->CallVoidMethod(__obj, __method , source_j, boneHandleMap_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap);
					}
				}
				virtual void _buildMapBoneByHandle(const EarthView::World::Graphic::CSkeleton* source, EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap) const
				{
					if (this->_gRef != NULL && this->m__buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong source_j = (jlong) source;
						jlong boneHandleMap_j = (jlong) &boneHandleMap;
						jmethodID __method = __gr->getMethod("_buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback");
						__env->CallVoidMethod(__obj, __method , source_j, boneHandleMap_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_buildMapBoneByHandle(source, boneHandleMap);
					}
				}
				virtual void _buildMapBoneByName(const EarthView::World::Graphic::CSkeleton* source, EarthView::World::Graphic::CSkeleton::BoneHandleMap& boneHandleMap) const
				{
					if (this->_gRef != NULL && this->m__buildMapBoneByName_CSkeleton_BoneHandleMap_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong source_j = (jlong) source;
						jlong boneHandleMap_j = (jlong) &boneHandleMap;
						jmethodID __method = __gr->getMethod("_buildMapBoneByName_CSkeleton_BoneHandleMap_callback");
						__env->CallVoidMethod(__obj, __method , source_j, boneHandleMap_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_buildMapBoneByName(source, boneHandleMap);
					}
				}
				virtual void loadImpl()
				{
					if (this->_gRef != NULL && this->m_loadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("loadImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::loadImpl();
					}
				}
				virtual void unloadImpl()
				{
					if (this->_gRef != NULL && this->m_unloadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("unloadImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::unloadImpl();
					}
				}
				virtual ev_size_t calculateSize() const
				{
					if (this->_gRef != NULL && this->m_calculateSize_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("calculateSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::calculateSize();
					}
				}
				virtual void preLoadImpl()
				{
					if (this->_gRef != NULL && this->m_preLoadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("preLoadImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::preLoadImpl();
					}
				}
				virtual void postLoadImpl()
				{
					if (this->_gRef != NULL && this->m_postLoadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("postLoadImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::postLoadImpl();
					}
				}
				virtual void preUnloadImpl()
				{
					if (this->_gRef != NULL && this->m_preUnloadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("preUnloadImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::preUnloadImpl();
					}
				}
				virtual void postUnloadImpl()
				{
					if (this->_gRef != NULL && this->m_postUnloadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("postUnloadImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::postUnloadImpl();
					}
				}
				virtual void prepareImpl()
				{
					if (this->_gRef != NULL && this->m_prepareImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("prepareImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::prepareImpl();
					}
				}
				virtual void unprepareImpl()
				{
					if (this->_gRef != NULL && this->m_unprepareImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("unprepareImpl_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::unprepareImpl();
					}
				}
				virtual void prepare(ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_prepare_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("prepare_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , backgroundThread_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::prepare(backgroundThread);
					}
				}
				virtual void prepare()
				{
					if (this->_gRef != NULL && this->m_prepare_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("prepare_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::prepare();
					}
				}
				virtual void load(ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_load_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("load_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , backgroundThread_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::load(backgroundThread);
					}
				}
				virtual void load()
				{
					if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("load_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::load();
					}
				}
				virtual void reload()
				{
					if (this->_gRef != NULL && this->m_reload_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("reload_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::reload();
					}
				}
				virtual ev_bool isReloadable() const
				{
					if (this->_gRef != NULL && this->m_isReloadable_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isReloadable_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::isReloadable();
					}
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if (this->_gRef != NULL && this->m_isManuallyLoaded_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isManuallyLoaded_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::isManuallyLoaded();
					}
				}
				virtual void unload()
				{
					if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("unload_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::unload();
					}
				}
				virtual ev_size_t getSize() const
				{
					if (this->_gRef != NULL && this->m_getSize_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getSize();
					}
				}
				virtual void touch()
				{
					if (this->_gRef != NULL && this->m_touch_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("touch_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::touch();
					}
				}
				virtual EVString getName() const
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getName_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CSkeleton::getName();
					}
				}
				virtual ev_uint64 getHandle() const
				{
					if (this->_gRef != NULL && this->m_getHandle_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getHandle_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CSkeleton::getHandle();
					}
				}
				virtual ev_bool isPrepared() const
				{
					if (this->_gRef != NULL && this->m_isPrepared_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isPrepared_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::isPrepared();
					}
				}
				virtual ev_bool isLoaded() const
				{
					if (this->_gRef != NULL && this->m_isLoaded_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isLoaded_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::isLoaded();
					}
				}
				virtual ev_bool isLoading() const
				{
					if (this->_gRef != NULL && this->m_isLoading_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isLoading_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::isLoading();
					}
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if (this->_gRef != NULL && this->m_getLoadingState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLoadingState_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResource::LoadingState __values1 = (EarthView::World::Graphic::CResource::LoadingState) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getLoadingState();
					}
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if (this->_gRef != NULL && this->m_isBackgroundLoaded_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isBackgroundLoaded_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::isBackgroundLoaded();
					}
				}
				virtual void setBackgroundLoaded(ev_bool bl)
				{
					if (this->_gRef != NULL && this->m_setBackgroundLoaded_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean bl_j = (jboolean) bl;
						jmethodID __method = __gr->getMethod("setBackgroundLoaded_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , bl_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::setBackgroundLoaded(bl);
					}
				}
				virtual void escalateLoading()
				{
					if (this->_gRef != NULL && this->m_escalateLoading_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("escalateLoading_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::escalateLoading();
					}
				}
				virtual void addListener(EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if (this->_gRef != NULL && this->m_addListener_CResourceListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_lis_j = (jlong) ref_lis;
						jmethodID __method = __gr->getMethod("addListener_CResourceListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_lis_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::addListener(ref_lis);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if (this->_gRef != NULL && this->m_removeListener_CResourceListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong lis_j = (jlong) lis;
						jmethodID __method = __gr->getMethod("removeListener_CResourceListener_callback");
						__env->CallVoidMethod(__obj, __method , lis_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::removeListener(lis);
					}
				}
				virtual EVString getGroup() const
				{
					if (this->_gRef != NULL && this->m_getGroup_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getGroup_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CSkeleton::getGroup();
					}
				}
				virtual void changeGroupOwnership(const EVString& newGroup)
				{
					if (this->_gRef != NULL && this->m_changeGroupOwnership_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring newGroup_wch = newGroup;
						jstring newGroup_j = __env->NewString((const jchar*)newGroup_wch.getString(), newGroup_wch.size());
						jmethodID __method = __gr->getMethod("changeGroupOwnership_EVString_callback");
						__env->CallVoidMethod(__obj, __method , newGroup_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::changeGroupOwnership(newGroup);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if (this->_gRef != NULL && this->m_getCreator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getCreator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager *__values1 = (EarthView::World::Graphic::CResourceManager*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getCreator();
					}
				}
				virtual EVString getOrigin() const
				{
					if (this->_gRef != NULL && this->m_getOrigin_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getOrigin_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CSkeleton::getOrigin();
					}
				}
				virtual void _notifyOrigin(const EVString& origin)
				{
					if (this->_gRef != NULL && this->m__notifyOrigin_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring origin_wch = origin;
						jstring origin_j = __env->NewString((const jchar*)origin_wch.getString(), origin_wch.size());
						jmethodID __method = __gr->getMethod("_notifyOrigin_EVString_callback");
						__env->CallVoidMethod(__obj, __method , origin_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_notifyOrigin(origin);
					}
				}
				virtual ev_size_t getStateCount() const
				{
					if (this->_gRef != NULL && this->m_getStateCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getStateCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::getStateCount();
					}
				}
				virtual void _dirtyState()
				{
					if (this->_gRef != NULL && this->m__dirtyState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_dirtyState_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_dirtyState();
					}
				}
				virtual void _fireLoadingComplete(ev_bool wasBackgroundLoaded)
				{
					if (this->_gRef != NULL && this->m__fireLoadingComplete_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean wasBackgroundLoaded_j = (jboolean) wasBackgroundLoaded;
						jmethodID __method = __gr->getMethod("_fireLoadingComplete_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , wasBackgroundLoaded_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_fireLoadingComplete(wasBackgroundLoaded);
					}
				}
				virtual void _firePreparingComplete(ev_bool wasBackgroundLoaded)
				{
					if (this->_gRef != NULL && this->m__firePreparingComplete_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean wasBackgroundLoaded_j = (jboolean) wasBackgroundLoaded;
						jmethodID __method = __gr->getMethod("_firePreparingComplete_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , wasBackgroundLoaded_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_firePreparingComplete(wasBackgroundLoaded);
					}
				}
				virtual void _fireUnloadingComplete()
				{
					if (this->_gRef != NULL && this->m__fireUnloadingComplete_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_fireUnloadingComplete_void_callback");
						__env->CallVoidMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::_fireUnloadingComplete();
					}
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeleton::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CSkeleton::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeleton::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSkeletonProxy);
			class JCSkeletonInternalAnimationContainerProxy : public EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer
			{
			 private:
				EarthView::World::Core::ev_string m_getNumAnimations_void_callback;
				EarthView::World::Core::ev_string m_getAnimation_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_createAnimation_EVString_Real_callback;
				EarthView::World::Core::ev_string m_hasAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_removeAnimation_EVString_callback;
			public:
				JCSkeletonInternalAnimationContainerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSkeletonInternalAnimationContainer(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_getNumAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumAnimations_void_callback = __method;
				}
				void register_getAnimation_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_ev_uint16_callback = __method;
				}
				void register_getAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_EVString_callback = __method;
				}
				void register_createAnimation_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_EVString_Real_callback = __method;
				}
				void register_hasAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnimation_EVString_callback = __method;
				}
				void register_removeAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAnimation_EVString_callback = __method;
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if (this->_gRef != NULL && this->m_getNumAnimations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNumAnimations_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeletonInternalAnimationContainer::getNumAnimations();
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getAnimation_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeletonInternalAnimationContainer::getAnimation(index);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getAnimation_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeletonInternalAnimationContainer::getAnimation(name);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(const EVString& name, Real length)
				{
					if (this->_gRef != NULL && this->m_createAnimation_EVString_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jdouble length_j = (jdouble) length;
						jmethodID __method = __gr->getMethod("createAnimation_EVString_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, length_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeletonInternalAnimationContainer::createAnimation(name, length);
					}
				}
				virtual bool hasAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_hasAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("hasAnimation_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeletonInternalAnimationContainer::hasAnimation(name);
					}
				}
				virtual void removeAnimation(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeAnimation_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CSkeletonInternalAnimationContainer::removeAnimation(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSkeletonInternalAnimationContainerProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_getNumAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonInternalAnimationContainerProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_register_1getNumAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonInternalAnimationContainerProxy *pObjectX = (JCSkeletonInternalAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumAnimations_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_getNumAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getNumAnimations();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_getAnimation_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonInternalAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_register_1getAnimation_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonInternalAnimationContainerProxy *pObjectX = (JCSkeletonInternalAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_getAnimation_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_getAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonInternalAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_register_1getAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonInternalAnimationContainerProxy *pObjectX = (JCSkeletonInternalAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_getAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::getAnimation(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_createAnimation_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real length = (Real) length_j;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonInternalAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_register_1createAnimation_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonInternalAnimationContainerProxy *pObjectX = (JCSkeletonInternalAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_EVString_Real_callback", "(Ljava/lang/String;D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_createAnimation_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real length = (Real) length_j;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::createAnimation(name, length);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_hasAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonInternalAnimationContainerProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_register_1hasAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonInternalAnimationContainerProxy *pObjectX = (JCSkeletonInternalAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnimation_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_hasAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::hasAnimation(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_removeAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonInternalAnimationContainerProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::removeAnimation(name);
				}
				else
				{
					pObjectX->removeAnimation(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_register_1removeAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonInternalAnimationContainerProxy *pObjectX = (JCSkeletonInternalAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAnimation_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024SkeletonInternalAnimationContainer_removeAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer *pObjectX = (EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer::removeAnimation(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimationContainerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimationContainerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* __values1 = pObjectX->getAnimationContainerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getAnimationContainerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimationContainerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimationContainerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimationContainerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CSkeleton::CSkeletonInternalAnimationContainer* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimationContainerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_push_1back_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				ev_uint16 t = (ev_uint16) t_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_insert_1ev_1uint32_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_uint16 t = (ev_uint16) t_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap& pObjectX = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_uint16& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneHandleMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneHandleMap *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneHandleMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->createBone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1createBone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createBone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createBone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone(handle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->createBone(handle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1createBone_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createBone_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createBone_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->createBone(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1createBone_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createBone_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createBone_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint handle_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone(name, handle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->createBone(name, handle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1createBone_1EVString_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createBone_EVString_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createBone_EVString_ev_uint16_callback", "(Ljava/lang/String;I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createBone_1EVString_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint handle_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createBone(name, handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_getNumBones_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getNumBones();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumBones();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getNumBones_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumBones_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumBones_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_getNumBones_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getNumBones();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getRootBone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getRootBone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->getRootBone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getRootBone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRootBone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRootBone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getRootBone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getRootBone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_push_1back_1CBone(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CBone *&ref_t = *(EarthView::World::Graphic::CBone**) ref_t_j;
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				EarthView::World::Graphic::CBone*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				EarthView::World::Graphic::CBone*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_insert_1ev_1uint32_1CBone(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CBone *&ref_t = *(EarthView::World::Graphic::CBone**) ref_t_j;
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CSkeleton::BoneList& pObjectX = *(EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CBone*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				EarthView::World::Graphic::CBone*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneList *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::BoneIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024BoneIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::BoneIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::BoneIterator*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getRootBoneIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getRootBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::BoneIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = pObjectX->getRootBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::BoneIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getRootBoneIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRootBoneIterator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRootBoneIterator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getRootBoneIterator_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getRootBoneIterator();
				EarthView::World::Graphic::CSkeleton::BoneIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::BoneIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getBoneIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::BoneIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = pObjectX->getBoneIterator();
					EarthView::World::Graphic::CSkeleton::BoneIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::BoneIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getBoneIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBoneIterator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBoneIterator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getBoneIterator_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CSkeleton::BoneIterator __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBoneIterator();
				EarthView::World::Graphic::CSkeleton::BoneIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::BoneIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getBone_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBone(handle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->getBone(handle);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getBone_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBone_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBone_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getBone_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBone(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getBone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBone(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CBone* __values1 = pObjectX->getBone(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getBone_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBone_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBone_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getBone_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CBone* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBone(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_hasBone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::hasBone(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasBone(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1hasBone_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasBone_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasBone_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_hasBone_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::hasBone(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_setBindingPose_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::setBindingPose();
				}
				else
				{
					pObjectX->setBindingPose();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setBindingPose_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBindingPose_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBindingPose_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_setBindingPose_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::setBindingPose();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_reset_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean resetManualBones_j)
			{
				ev_bool resetManualBones = (ev_bool) resetManualBones_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::reset(resetManualBones);
				}
				else
				{
					pObjectX->reset(resetManualBones);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1reset_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reset_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reset_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_reset_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean resetManualBones_j)
			{
				ev_bool resetManualBones = (ev_bool) resetManualBones_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::reset(resetManualBones);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::reset();
				}
				else
				{
					pObjectX->reset();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reset_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_reset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::reset();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createAnimation_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real length = (Real) length_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1createAnimation_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_EVString_Real_callback", "(Ljava/lang/String;D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_createAnimation_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				Real length = (Real) length_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::createAnimation(name, length);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimation_1EVString_1LinkedSkeletonAnimationSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong linker_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker = (const EarthView::World::Graphic::LinkedSkeletonAnimationSource**) linker_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimation(name, linker);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(name, linker);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getAnimation_1EVString_1LinkedSkeletonAnimationSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_EVString_LinkedSkeletonAnimationSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_EVString_LinkedSkeletonAnimationSource_callback", "(Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimation_1EVString_1LinkedSkeletonAnimationSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong linker_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker = (const EarthView::World::Graphic::LinkedSkeletonAnimationSource**) linker_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimation(name, linker);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimation(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton__1getAnimationImpl_1EVString_1LinkedSkeletonAnimationSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong linker_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker = (const EarthView::World::Graphic::LinkedSkeletonAnimationSource**) linker_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name, linker);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->_getAnimationImpl(name, linker);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1getAnimationImpl_1EVString_1LinkedSkeletonAnimationSource(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getAnimationImpl_EVString_LinkedSkeletonAnimationSource_callback", "(Ljava/lang/String;J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton__1getAnimationImpl_1EVString_1LinkedSkeletonAnimationSource_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong linker_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker = (const EarthView::World::Graphic::LinkedSkeletonAnimationSource**) linker_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name, linker);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton__1getAnimationImpl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->_getAnimationImpl(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1getAnimationImpl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getAnimationImpl_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getAnimationImpl_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton__1getAnimationImpl_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::_getAnimationImpl(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_hasAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1hasAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnimation_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_hasAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::hasAnimation(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_removeAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::removeAnimation(name);
				}
				else
				{
					pObjectX->removeAnimation(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1removeAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAnimation_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_removeAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::removeAnimation(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_setAnimationState_1CAnimationStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				const EarthView::World::Graphic::CAnimationStateSet &animSet = *(EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::setAnimationState(animSet);
				}
				else
				{
					pObjectX->setAnimationState(animSet);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setAnimationState_1CAnimationStateSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAnimationState_CAnimationStateSet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAnimationState_CAnimationStateSet_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_setAnimationState_1CAnimationStateSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				const EarthView::World::Graphic::CAnimationStateSet &animSet = *(EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::setAnimationState(animSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1initAnimationState_1CAnimationStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *animSet = (EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_initAnimationState(animSet);
				}
				else
				{
					pObjectX->_initAnimationState(animSet);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1initAnimationState_1CAnimationStateSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__initAnimationState_CAnimationStateSet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_initAnimationState_CAnimationStateSet_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1initAnimationState_1CAnimationStateSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *animSet = (EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_initAnimationState(animSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1refreshAnimationState_1CAnimationStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *animSet = (EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_refreshAnimationState(animSet);
				}
				else
				{
					pObjectX->_refreshAnimationState(animSet);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1refreshAnimationState_1CAnimationStateSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__refreshAnimationState_CAnimationStateSet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_refreshAnimationState_CAnimationStateSet_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1refreshAnimationState_1CAnimationStateSet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *animSet = (EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_refreshAnimationState(animSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1getBoneMatrices_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMatrices_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *pMatrices = (EarthView::World::Spatial::Math::CMatrix4*) pMatrices_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices);
				}
				else
				{
					pObjectX->_getBoneMatrices(pMatrices);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1getBoneMatrices_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getBoneMatrices_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getBoneMatrices_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1getBoneMatrices_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMatrices_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *pMatrices = (EarthView::World::Spatial::Math::CMatrix4*) pMatrices_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1getBoneMatrices_1CMatrix4_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMatrices_j, jlong index_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *pMatrices = (EarthView::World::Spatial::Math::CMatrix4*) pMatrices_j;
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices, index);
				}
				else
				{
					pObjectX->_getBoneMatrices(pMatrices, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1getBoneMatrices_1CMatrix4_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getBoneMatrices_CMatrix4_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getBoneMatrices_CMatrix4_ev_uint32_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1getBoneMatrices_1CMatrix4_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMatrices_j, jlong index_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *pMatrices = (EarthView::World::Spatial::Math::CMatrix4*) pMatrices_j;
				ev_uint32 index = (ev_uint32) index_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_getBoneMatrices(pMatrices, index);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_getNumAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getNumAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumAnimations_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_getNumAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getNumAnimations();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimation_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getAnimation_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getAnimation_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getAnimation(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_getBlendMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::SkeletonAnimationBlendMode __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBlendMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::SkeletonAnimationBlendMode __values1 = pObjectX->getBlendMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getBlendMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBlendMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBlendMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Skeleton_getBlendMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::SkeletonAnimationBlendMode __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getBlendMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_setBlendMode_1SkeletonAnimationBlendMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint state_j)
			{
				EarthView::World::Graphic::SkeletonAnimationBlendMode state = (EarthView::World::Graphic::SkeletonAnimationBlendMode) state_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::setBlendMode(state);
				}
				else
				{
					pObjectX->setBlendMode(state);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setBlendMode_1SkeletonAnimationBlendMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBlendMode_SkeletonAnimationBlendMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBlendMode_SkeletonAnimationBlendMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_setBlendMode_1SkeletonAnimationBlendMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint state_j)
			{
				EarthView::World::Graphic::SkeletonAnimationBlendMode state = (EarthView::World::Graphic::SkeletonAnimationBlendMode) state_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::setBlendMode(state);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1updateTransforms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_updateTransforms();
				}
				else
				{
					pObjectX->_updateTransforms();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1updateTransforms_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateTransforms_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateTransforms_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1updateTransforms_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_updateTransforms();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_optimiseAllAnimations_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean preservingIdentityNodeTracks_j)
			{
				ev_bool preservingIdentityNodeTracks = (ev_bool) preservingIdentityNodeTracks_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations(preservingIdentityNodeTracks);
				}
				else
				{
					pObjectX->optimiseAllAnimations(preservingIdentityNodeTracks);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1optimiseAllAnimations_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimiseAllAnimations_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimiseAllAnimations_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_optimiseAllAnimations_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean preservingIdentityNodeTracks_j)
			{
				ev_bool preservingIdentityNodeTracks = (ev_bool) preservingIdentityNodeTracks_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations(preservingIdentityNodeTracks);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_optimiseAllAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations();
				}
				else
				{
					pObjectX->optimiseAllAnimations();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1optimiseAllAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimiseAllAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimiseAllAnimations_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_optimiseAllAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::optimiseAllAnimations();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_addLinkedSkeletonAnimationSource_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring skelName_j, jdouble scale_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* skelName_ch = (const ev_char*)__env->GetStringUTFChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringUTFChars(skelName_j, (const char *)skelName_ch);
				#else
				const ev_wchar* skelName_ch = (const ev_wchar*)__env->GetStringChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringChars(skelName_j, (const jchar *)skelName_ch);
				#endif
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName, scale);
				}
				else
				{
					pObjectX->addLinkedSkeletonAnimationSource(skelName, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1addLinkedSkeletonAnimationSource_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addLinkedSkeletonAnimationSource_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addLinkedSkeletonAnimationSource_EVString_Real_callback", "(Ljava/lang/String;D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_addLinkedSkeletonAnimationSource_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring skelName_j, jdouble scale_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* skelName_ch = (const ev_char*)__env->GetStringUTFChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringUTFChars(skelName_j, (const char *)skelName_ch);
				#else
				const ev_wchar* skelName_ch = (const ev_wchar*)__env->GetStringChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringChars(skelName_j, (const jchar *)skelName_ch);
				#endif
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_addLinkedSkeletonAnimationSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring skelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* skelName_ch = (const ev_char*)__env->GetStringUTFChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringUTFChars(skelName_j, (const char *)skelName_ch);
				#else
				const ev_wchar* skelName_ch = (const ev_wchar*)__env->GetStringChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringChars(skelName_j, (const jchar *)skelName_ch);
				#endif
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName);
				}
				else
				{
					pObjectX->addLinkedSkeletonAnimationSource(skelName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1addLinkedSkeletonAnimationSource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addLinkedSkeletonAnimationSource_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addLinkedSkeletonAnimationSource_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_addLinkedSkeletonAnimationSource_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring skelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* skelName_ch = (const ev_char*)__env->GetStringUTFChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringUTFChars(skelName_j, (const char *)skelName_ch);
				#else
				const ev_wchar* skelName_ch = (const ev_wchar*)__env->GetStringChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringChars(skelName_j, (const jchar *)skelName_ch);
				#endif
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::addLinkedSkeletonAnimationSource(skelName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_removeAllLinkedSkeletonAnimationSources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::removeAllLinkedSkeletonAnimationSources();
				}
				else
				{
					pObjectX->removeAllLinkedSkeletonAnimationSources();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1removeAllLinkedSkeletonAnimationSources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllLinkedSkeletonAnimationSources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllLinkedSkeletonAnimationSources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_removeAllLinkedSkeletonAnimationSources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::removeAllLinkedSkeletonAnimationSources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_push_1back_1LinkedSkeletonAnimationSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource &t = *(EarthView::World::Graphic::LinkedSkeletonAnimationSource*) t_j;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_insert_1ev_1uint32_1LinkedSkeletonAnimationSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource &t = *(EarthView::World::Graphic::LinkedSkeletonAnimationSource*) t_j;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList& pObjectX = *(EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *returnvalues = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource __values1 = pObjectX->next();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *returnvalues = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *returnvalues = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_00024LinkedSkeletonAnimSourceIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *pObjectX = (EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator*) pObjXXXX;
				EarthView::World::Graphic::LinkedSkeletonAnimationSource __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *returnvalues = new EarthView::World::Graphic::LinkedSkeletonAnimationSource(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getLinkedSkeletonAnimationSourceIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getLinkedSkeletonAnimationSourceIterator();
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator __values1 = pObjectX->getLinkedSkeletonAnimationSourceIterator();
					EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getLinkedSkeletonAnimationSourceIterator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLinkedSkeletonAnimationSourceIterator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLinkedSkeletonAnimationSourceIterator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_getLinkedSkeletonAnimationSourceIterator_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getLinkedSkeletonAnimationSourceIterator();
				EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator *returnvalues = new EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1notifyManualBonesDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_notifyManualBonesDirty();
				}
				else
				{
					pObjectX->_notifyManualBonesDirty();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1notifyManualBonesDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyManualBonesDirty_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyManualBonesDirty_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1notifyManualBonesDirty_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_notifyManualBonesDirty();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1notifyManualBoneStateChange_1CBone(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_bone_j)
			{
				EarthView::World::Graphic::CBone *ref_bone = (EarthView::World::Graphic::CBone*) ref_bone_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_notifyManualBoneStateChange(ref_bone);
				}
				else
				{
					pObjectX->_notifyManualBoneStateChange(ref_bone);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1notifyManualBoneStateChange_1CBone(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyManualBoneStateChange_CBone_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyManualBoneStateChange_CBone_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1notifyManualBoneStateChange_1CBone_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_bone_j)
			{
				EarthView::World::Graphic::CBone *ref_bone = (EarthView::World::Graphic::CBone*) ref_bone_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_notifyManualBoneStateChange(ref_bone);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_getManualBonesDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getManualBonesDirty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getManualBonesDirty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getManualBonesDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getManualBonesDirty_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getManualBonesDirty_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_getManualBonesDirty_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::getManualBonesDirty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_hasManualBones_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::hasManualBones();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasManualBones();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1hasManualBones_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasManualBones_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasManualBones_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Skeleton_hasManualBones_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::hasManualBones();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1mergeSkeletonAnimations_1CSkeleton_1BoneHandleMap_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j, jlong animations_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				const EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				const EarthView::World::Core::StringVector &animations = *(EarthView::World::Core::StringVector*) animations_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap, animations);
				}
				else
				{
					pObjectX->_mergeSkeletonAnimations(source, boneHandleMap, animations);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1mergeSkeletonAnimations_1CSkeleton_1BoneHandleMap_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_StringVector_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1mergeSkeletonAnimations_1CSkeleton_1BoneHandleMap_1StringVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j, jlong animations_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				const EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				const EarthView::World::Core::StringVector &animations = *(EarthView::World::Core::StringVector*) animations_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap, animations);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1mergeSkeletonAnimations_1CSkeleton_1BoneHandleMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				const EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap);
				}
				else
				{
					pObjectX->_mergeSkeletonAnimations(source, boneHandleMap);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1mergeSkeletonAnimations_1CSkeleton_1BoneHandleMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_mergeSkeletonAnimations_CSkeleton_BoneHandleMap_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1mergeSkeletonAnimations_1CSkeleton_1BoneHandleMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				const EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_mergeSkeletonAnimations(source, boneHandleMap);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1buildMapBoneByHandle_1CSkeleton_1BoneHandleMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_buildMapBoneByHandle(source, boneHandleMap);
				}
				else
				{
					pObjectX->_buildMapBoneByHandle(source, boneHandleMap);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1buildMapBoneByHandle_1CSkeleton_1BoneHandleMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildMapBoneByHandle_CSkeleton_BoneHandleMap_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1buildMapBoneByHandle_1CSkeleton_1BoneHandleMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_buildMapBoneByHandle(source, boneHandleMap);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1buildMapBoneByName_1CSkeleton_1BoneHandleMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::_buildMapBoneByName(source, boneHandleMap);
				}
				else
				{
					pObjectX->_buildMapBoneByName(source, boneHandleMap);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1buildMapBoneByName_1CSkeleton_1BoneHandleMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildMapBoneByName_CSkeleton_BoneHandleMap_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildMapBoneByName_CSkeleton_BoneHandleMap_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton__1buildMapBoneByName_1CSkeleton_1BoneHandleMap_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jlong boneHandleMap_j)
			{
				const EarthView::World::Graphic::CSkeleton *source = (const EarthView::World::Graphic::CSkeleton*) source_j;
				EarthView::World::Graphic::CSkeleton::BoneHandleMap &boneHandleMap = *(EarthView::World::Graphic::CSkeleton::BoneHandleMap*) boneHandleMap_j;
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::_buildMapBoneByName(source, boneHandleMap);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_loadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::loadImpl();
				}
				else
				{
					pObjectX->loadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1loadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_loadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::loadImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_unloadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeleton::unloadImpl();
				}
				else
				{
					pObjectX->unloadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1unloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_unloadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeleton::unloadImpl();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_calculateSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1calculateSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Skeleton_calculateSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeleton *pObjectX = (EarthView::World::Graphic::CSkeleton*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CSkeleton::calculateSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1preLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preLoadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preLoadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1postLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postLoadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postLoadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1preUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preUnloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preUnloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1postUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postUnloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postUnloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1prepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1unprepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unprepareImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unprepareImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1prepare_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1prepare_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1load_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1reload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1isReloadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReloadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReloadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1isManuallyLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isManuallyLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isManuallyLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1touch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touch_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touch_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getHandle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHandle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHandle_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1isPrepared_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPrepared_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPrepared_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1isLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoading_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoading_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getLoadingState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingState_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1isBackgroundLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isBackgroundLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isBackgroundLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setBackgroundLoaded_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBackgroundLoaded_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBackgroundLoaded_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1escalateLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_escalateLoading_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"escalateLoading_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1addListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CResourceListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1removeListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CResourceListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGroup_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGroup_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1changeGroupOwnership_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeGroupOwnership_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeGroupOwnership_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getCreator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCreator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCreator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getOrigin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOrigin_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOrigin_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1notifyOrigin_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyOrigin_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyOrigin_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getStateCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStateCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStateCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1dirtyState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__dirtyState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_dirtyState_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1fireLoadingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__fireLoadingComplete_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_fireLoadingComplete_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1firePreparingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__firePreparingComplete_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_firePreparingComplete_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1_1fireUnloadingComplete_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__fireUnloadingComplete_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_fireUnloadingComplete_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Skeleton_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonProxy *pObjectX = (JCSkeletonProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SkeletonPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSkeletonPtr *pObjectX = (EarthView::World::Graphic::CSkeletonPtr*) pObjXXXX;
				EarthView::World::Graphic::CSkeleton* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SkeletonPtr_OperatorAssign_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Graphic::CSkeletonPtr& pObjectX = *(EarthView::World::Graphic::CSkeletonPtr*) pObjXXXX;
				const EarthView::World::Graphic::ResourcePtr &r = *(EarthView::World::Graphic::ResourcePtr*) r_j;
				pObjectX = r;
				EarthView::World::Graphic::CSkeletonPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_LinkedSkeletonAnimationSource_get_1skeletonName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pObjectX = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->skeletonName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LinkedSkeletonAnimationSource_set_1skeletonName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pObjectX = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->skeletonName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_LinkedSkeletonAnimationSource_get_1pSkeleton_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pObjectX = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->pSkeleton);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LinkedSkeletonAnimationSource_set_1pSkeleton_1CSkeletonPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pObjectX = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjXXXX;
				pObjectX->pSkeleton = *(EarthView::World::Graphic::CSkeletonPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_LinkedSkeletonAnimationSource_get_1scale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pObjectX = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->scale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_LinkedSkeletonAnimationSource_set_1scale_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::LinkedSkeletonAnimationSource *pObjectX = (EarthView::World::Graphic::LinkedSkeletonAnimationSource*)pObjXXXX;
				pObjectX->scale = (Real)__values1_j;
			}
		}
	}
}
