/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/gpuprogram.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCGpuProgramProxy : public EarthView::World::Graphic::CGpuProgram
			{
			 private:
				EarthView::World::Core::ev_string m_setSourceFile_EVString_callback;
				EarthView::World::Core::ev_string m_setSource_EVString_callback;
				EarthView::World::Core::ev_string m_getSyntaxCode_void_callback;
				EarthView::World::Core::ev_string m_setSyntaxCode_EVString_callback;
				EarthView::World::Core::ev_string m_getSourceFile_void_callback;
				EarthView::World::Core::ev_string m_getSource_void_callback;
				EarthView::World::Core::ev_string m_setType_GpuProgramType_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m__getBindingDelegate_void_callback;
				EarthView::World::Core::ev_string m_isSupported_void_callback;
				EarthView::World::Core::ev_string m_createParameters_void_callback;
				EarthView::World::Core::ev_string m_setSkeletalAnimationIncluded_ev_bool_callback;
				EarthView::World::Core::ev_string m_isSkeletalAnimationIncluded_void_callback;
				EarthView::World::Core::ev_string m_setMorphAnimationIncluded_ev_bool_callback;
				EarthView::World::Core::ev_string m_setPoseAnimationIncluded_ev_uint16_callback;
				EarthView::World::Core::ev_string m_isMorphAnimationIncluded_void_callback;
				EarthView::World::Core::ev_string m_isPoseAnimationIncluded_void_callback;
				EarthView::World::Core::ev_string m_getNumberOfPosesIncluded_void_callback;
				EarthView::World::Core::ev_string m_setVertexTextureFetchRequired_ev_bool_callback;
				EarthView::World::Core::ev_string m_isVertexTextureFetchRequired_void_callback;
				EarthView::World::Core::ev_string m_setAdjacencyInfoRequired_ev_bool_callback;
				EarthView::World::Core::ev_string m_isAdjacencyInfoRequired_void_callback;
				EarthView::World::Core::ev_string m_getDefaultParameters_void_callback;
				EarthView::World::Core::ev_string m_hasDefaultParameters_void_callback;
				EarthView::World::Core::ev_string m_getPassSurfaceAndLightStates_void_callback;
				EarthView::World::Core::ev_string m_getPassFogStates_void_callback;
				EarthView::World::Core::ev_string m_getPassTransformStates_void_callback;
				EarthView::World::Core::ev_string m_getLanguage_void_callback;
				EarthView::World::Core::ev_string m_hasCompileError_void_callback;
				EarthView::World::Core::ev_string m_resetCompileError_void_callback;
				EarthView::World::Core::ev_string m_setManualNamedConstants_GpuNamedConstants_callback;
				EarthView::World::Core::ev_string m_getNamedConstants_void_callback;
				EarthView::World::Core::ev_string m_setManualNamedConstantsFile_EVString_callback;
				EarthView::World::Core::ev_string m_getManualNamedConstantsFile_void_callback;
				EarthView::World::Core::ev_string m_getConstantDefinitions_void_callback;
				EarthView::World::Core::ev_string m_loadFromSource_void_callback;
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
				JCGpuProgramProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuProgram(pList)
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
				void register_setSourceFile_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSourceFile_EVString_callback = __method;
				}
				void register_setSource_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSource_EVString_callback = __method;
				}
				void register_getSyntaxCode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSyntaxCode_void_callback = __method;
				}
				void register_setSyntaxCode_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSyntaxCode_EVString_callback = __method;
				}
				void register_getSourceFile_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSourceFile_void_callback = __method;
				}
				void register_getSource_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSource_void_callback = __method;
				}
				void register_setType_GpuProgramType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setType_GpuProgramType_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register__getBindingDelegate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getBindingDelegate_void_callback = __method;
				}
				void register_isSupported_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isSupported_void_callback = __method;
				}
				void register_createParameters_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createParameters_void_callback = __method;
				}
				void register_setSkeletalAnimationIncluded_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSkeletalAnimationIncluded_ev_bool_callback = __method;
				}
				void register_isSkeletalAnimationIncluded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isSkeletalAnimationIncluded_void_callback = __method;
				}
				void register_setMorphAnimationIncluded_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMorphAnimationIncluded_ev_bool_callback = __method;
				}
				void register_setPoseAnimationIncluded_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPoseAnimationIncluded_ev_uint16_callback = __method;
				}
				void register_isMorphAnimationIncluded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isMorphAnimationIncluded_void_callback = __method;
				}
				void register_isPoseAnimationIncluded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPoseAnimationIncluded_void_callback = __method;
				}
				void register_getNumberOfPosesIncluded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumberOfPosesIncluded_void_callback = __method;
				}
				void register_setVertexTextureFetchRequired_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVertexTextureFetchRequired_ev_bool_callback = __method;
				}
				void register_isVertexTextureFetchRequired_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isVertexTextureFetchRequired_void_callback = __method;
				}
				void register_setAdjacencyInfoRequired_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAdjacencyInfoRequired_ev_bool_callback = __method;
				}
				void register_isAdjacencyInfoRequired_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isAdjacencyInfoRequired_void_callback = __method;
				}
				void register_getDefaultParameters_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDefaultParameters_void_callback = __method;
				}
				void register_hasDefaultParameters_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasDefaultParameters_void_callback = __method;
				}
				void register_getPassSurfaceAndLightStates_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPassSurfaceAndLightStates_void_callback = __method;
				}
				void register_getPassFogStates_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPassFogStates_void_callback = __method;
				}
				void register_getPassTransformStates_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPassTransformStates_void_callback = __method;
				}
				void register_getLanguage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLanguage_void_callback = __method;
				}
				void register_hasCompileError_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasCompileError_void_callback = __method;
				}
				void register_resetCompileError_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetCompileError_void_callback = __method;
				}
				void register_setManualNamedConstants_GpuNamedConstants_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setManualNamedConstants_GpuNamedConstants_callback = __method;
				}
				void register_getNamedConstants_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNamedConstants_void_callback = __method;
				}
				void register_setManualNamedConstantsFile_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setManualNamedConstantsFile_EVString_callback = __method;
				}
				void register_getManualNamedConstantsFile_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getManualNamedConstantsFile_void_callback = __method;
				}
				void register_getConstantDefinitions_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getConstantDefinitions_void_callback = __method;
				}
				void register_loadFromSource_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadFromSource_void_callback = __method;
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
						return this->CGpuProgram::calculateSize();
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
						return this->CGpuProgram::loadImpl();
					}
				}
				virtual void setSourceFile(const EVString& filename)
				{
					if (this->_gRef != NULL && this->m_setSourceFile_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jmethodID __method = __gr->getMethod("setSourceFile_EVString_callback");
						__env->CallVoidMethod(__obj, __method , filename_j);
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
						return this->CGpuProgram::setSourceFile(filename);
					}
				}
				virtual void setSource(const EVString& source)
				{
					if (this->_gRef != NULL && this->m_setSource_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring source_wch = source;
						jstring source_j = __env->NewString((const jchar*)source_wch.getString(), source_wch.size());
						jmethodID __method = __gr->getMethod("setSource_EVString_callback");
						__env->CallVoidMethod(__obj, __method , source_j);
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
						return this->CGpuProgram::setSource(source);
					}
				}
				virtual EVString getSyntaxCode() const
				{
					if (this->_gRef != NULL && this->m_getSyntaxCode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSyntaxCode_void_callback");
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
						return this->CGpuProgram::getSyntaxCode();
					}
				}
				virtual void setSyntaxCode(const EVString& syntax)
				{
					if (this->_gRef != NULL && this->m_setSyntaxCode_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring syntax_wch = syntax;
						jstring syntax_j = __env->NewString((const jchar*)syntax_wch.getString(), syntax_wch.size());
						jmethodID __method = __gr->getMethod("setSyntaxCode_EVString_callback");
						__env->CallVoidMethod(__obj, __method , syntax_j);
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
						return this->CGpuProgram::setSyntaxCode(syntax);
					}
				}
				virtual EVString getSourceFile() const
				{
					if (this->_gRef != NULL && this->m_getSourceFile_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSourceFile_void_callback");
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
						return this->CGpuProgram::getSourceFile();
					}
				}
				virtual EVString getSource() const
				{
					if (this->_gRef != NULL && this->m_getSource_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSource_void_callback");
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
						return this->CGpuProgram::getSource();
					}
				}
				virtual void setType(EarthView::World::Graphic::GpuProgramType t)
				{
					if (this->_gRef != NULL && this->m_setType_GpuProgramType_callback != "" && this->isCustomExtend())
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
						jint t_j = (jint) t;
						jmethodID __method = __gr->getMethod("setType_GpuProgramType_callback");
						__env->CallVoidMethod(__obj, __method , t_j);
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
						return this->CGpuProgram::setType(t);
					}
				}
				virtual EarthView::World::Graphic::GpuProgramType getType() const
				{
					if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::GpuProgramType __values1 = (EarthView::World::Graphic::GpuProgramType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgram::getType();
					}
				}
				virtual EarthView::World::Graphic::CGpuProgram* _getBindingDelegate()
				{
					if (this->_gRef != NULL && this->m__getBindingDelegate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getBindingDelegate_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CGpuProgram *__values1 = (EarthView::World::Graphic::CGpuProgram*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgram::_getBindingDelegate();
					}
				}
				virtual ev_bool isSupported() const
				{
					if (this->_gRef != NULL && this->m_isSupported_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isSupported_void_callback");
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
						return this->CGpuProgram::isSupported();
					}
				}
				virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr createParameters()
				{
					if (this->_gRef != NULL && this->m_createParameters_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createParameters_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgram::createParameters();
					}
				}
				virtual void setSkeletalAnimationIncluded(ev_bool included)
				{
					if (this->_gRef != NULL && this->m_setSkeletalAnimationIncluded_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean included_j = (jboolean) included;
						jmethodID __method = __gr->getMethod("setSkeletalAnimationIncluded_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , included_j);
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
						return this->CGpuProgram::setSkeletalAnimationIncluded(included);
					}
				}
				virtual ev_bool isSkeletalAnimationIncluded() const
				{
					if (this->_gRef != NULL && this->m_isSkeletalAnimationIncluded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isSkeletalAnimationIncluded_void_callback");
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
						return this->CGpuProgram::isSkeletalAnimationIncluded();
					}
				}
				virtual void setMorphAnimationIncluded(ev_bool included)
				{
					if (this->_gRef != NULL && this->m_setMorphAnimationIncluded_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean included_j = (jboolean) included;
						jmethodID __method = __gr->getMethod("setMorphAnimationIncluded_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , included_j);
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
						return this->CGpuProgram::setMorphAnimationIncluded(included);
					}
				}
				virtual void setPoseAnimationIncluded(ev_uint16 poseCount)
				{
					if (this->_gRef != NULL && this->m_setPoseAnimationIncluded_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint poseCount_j = (jint) poseCount;
						jmethodID __method = __gr->getMethod("setPoseAnimationIncluded_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , poseCount_j);
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
						return this->CGpuProgram::setPoseAnimationIncluded(poseCount);
					}
				}
				virtual ev_bool isMorphAnimationIncluded() const
				{
					if (this->_gRef != NULL && this->m_isMorphAnimationIncluded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isMorphAnimationIncluded_void_callback");
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
						return this->CGpuProgram::isMorphAnimationIncluded();
					}
				}
				virtual ev_bool isPoseAnimationIncluded() const
				{
					if (this->_gRef != NULL && this->m_isPoseAnimationIncluded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isPoseAnimationIncluded_void_callback");
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
						return this->CGpuProgram::isPoseAnimationIncluded();
					}
				}
				virtual ev_uint16 getNumberOfPosesIncluded() const
				{
					if (this->_gRef != NULL && this->m_getNumberOfPosesIncluded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumberOfPosesIncluded_void_callback");
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
						return this->CGpuProgram::getNumberOfPosesIncluded();
					}
				}
				virtual void setVertexTextureFetchRequired(ev_bool r)
				{
					if (this->_gRef != NULL && this->m_setVertexTextureFetchRequired_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean r_j = (jboolean) r;
						jmethodID __method = __gr->getMethod("setVertexTextureFetchRequired_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , r_j);
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
						return this->CGpuProgram::setVertexTextureFetchRequired(r);
					}
				}
				virtual ev_bool isVertexTextureFetchRequired() const
				{
					if (this->_gRef != NULL && this->m_isVertexTextureFetchRequired_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isVertexTextureFetchRequired_void_callback");
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
						return this->CGpuProgram::isVertexTextureFetchRequired();
					}
				}
				virtual void setAdjacencyInfoRequired(ev_bool r)
				{
					if (this->_gRef != NULL && this->m_setAdjacencyInfoRequired_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean r_j = (jboolean) r;
						jmethodID __method = __gr->getMethod("setAdjacencyInfoRequired_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , r_j);
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
						return this->CGpuProgram::setAdjacencyInfoRequired(r);
					}
				}
				virtual ev_bool isAdjacencyInfoRequired() const
				{
					if (this->_gRef != NULL && this->m_isAdjacencyInfoRequired_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isAdjacencyInfoRequired_void_callback");
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
						return this->CGpuProgram::isAdjacencyInfoRequired();
					}
				}
				virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr getDefaultParameters()
				{
					if (this->_gRef != NULL && this->m_getDefaultParameters_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDefaultParameters_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgram::getDefaultParameters();
					}
				}
				virtual ev_bool hasDefaultParameters() const
				{
					if (this->_gRef != NULL && this->m_hasDefaultParameters_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasDefaultParameters_void_callback");
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
						return this->CGpuProgram::hasDefaultParameters();
					}
				}
				virtual ev_bool getPassSurfaceAndLightStates() const
				{
					if (this->_gRef != NULL && this->m_getPassSurfaceAndLightStates_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPassSurfaceAndLightStates_void_callback");
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
						return this->CGpuProgram::getPassSurfaceAndLightStates();
					}
				}
				virtual ev_bool getPassFogStates() const
				{
					if (this->_gRef != NULL && this->m_getPassFogStates_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPassFogStates_void_callback");
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
						return this->CGpuProgram::getPassFogStates();
					}
				}
				virtual ev_bool getPassTransformStates() const
				{
					if (this->_gRef != NULL && this->m_getPassTransformStates_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPassTransformStates_void_callback");
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
						return this->CGpuProgram::getPassTransformStates();
					}
				}
				virtual EVString getLanguage() const
				{
					if (this->_gRef != NULL && this->m_getLanguage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLanguage_void_callback");
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
						return this->CGpuProgram::getLanguage();
					}
				}
				virtual ev_bool hasCompileError() const
				{
					if (this->_gRef != NULL && this->m_hasCompileError_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasCompileError_void_callback");
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
						return this->CGpuProgram::hasCompileError();
					}
				}
				virtual void resetCompileError()
				{
					if (this->_gRef != NULL && this->m_resetCompileError_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resetCompileError_void_callback");
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
						return this->CGpuProgram::resetCompileError();
					}
				}
				virtual void setManualNamedConstants(const EarthView::World::Graphic::GpuNamedConstants& namedConstants)
				{
					if (this->_gRef != NULL && this->m_setManualNamedConstants_GpuNamedConstants_callback != "" && this->isCustomExtend())
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
						jlong namedConstants_j = (jlong) &namedConstants;
						jmethodID __method = __gr->getMethod("setManualNamedConstants_GpuNamedConstants_callback");
						__env->CallVoidMethod(__obj, __method , namedConstants_j);
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
						return this->CGpuProgram::setManualNamedConstants(namedConstants);
					}
				}
				virtual const EarthView::World::Graphic::GpuNamedConstants& getNamedConstants() const
				{
					if (this->_gRef != NULL && this->m_getNamedConstants_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNamedConstants_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::GpuNamedConstants &__values1 = *(const EarthView::World::Graphic::GpuNamedConstants*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgram::getNamedConstants();
					}
				}
				virtual void setManualNamedConstantsFile(const EVString& paramDefFile)
				{
					if (this->_gRef != NULL && this->m_setManualNamedConstantsFile_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring paramDefFile_wch = paramDefFile;
						jstring paramDefFile_j = __env->NewString((const jchar*)paramDefFile_wch.getString(), paramDefFile_wch.size());
						jmethodID __method = __gr->getMethod("setManualNamedConstantsFile_EVString_callback");
						__env->CallVoidMethod(__obj, __method , paramDefFile_j);
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
						return this->CGpuProgram::setManualNamedConstantsFile(paramDefFile);
					}
				}
				virtual EVString getManualNamedConstantsFile() const
				{
					if (this->_gRef != NULL && this->m_getManualNamedConstantsFile_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getManualNamedConstantsFile_void_callback");
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
						return this->CGpuProgram::getManualNamedConstantsFile();
					}
				}
				virtual const EarthView::World::Graphic::GpuNamedConstants& getConstantDefinitions() const
				{
					if (this->_gRef != NULL && this->m_getConstantDefinitions_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getConstantDefinitions_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::GpuNamedConstants &__values1 = *(const EarthView::World::Graphic::GpuNamedConstants*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CGpuProgram::getConstantDefinitions();
					}
				}
				virtual void loadFromSource()
				{
					if (this->_gRef != NULL && this->m_loadFromSource_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("loadFromSource_void_callback");
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
						return this->CGpuProgram::loadFromSource();
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
						return this->CGpuProgram::preLoadImpl();
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
						return this->CGpuProgram::postLoadImpl();
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
						return this->CGpuProgram::preUnloadImpl();
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
						return this->CGpuProgram::postUnloadImpl();
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
						return this->CGpuProgram::prepareImpl();
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
						return this->CGpuProgram::unprepareImpl();
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
						return this->CGpuProgram::unloadImpl();
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
						return this->CGpuProgram::prepare(backgroundThread);
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
						return this->CGpuProgram::prepare();
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
						return this->CGpuProgram::load(backgroundThread);
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
						return this->CGpuProgram::load();
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
						return this->CGpuProgram::reload();
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
						return this->CGpuProgram::isReloadable();
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
						return this->CGpuProgram::isManuallyLoaded();
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
						return this->CGpuProgram::unload();
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
						return this->CGpuProgram::getSize();
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
						return this->CGpuProgram::touch();
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
						return this->CGpuProgram::getName();
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
						return this->CGpuProgram::getHandle();
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
						return this->CGpuProgram::isPrepared();
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
						return this->CGpuProgram::isLoaded();
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
						return this->CGpuProgram::isLoading();
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
						return this->CGpuProgram::getLoadingState();
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
						return this->CGpuProgram::isBackgroundLoaded();
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
						return this->CGpuProgram::setBackgroundLoaded(bl);
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
						return this->CGpuProgram::escalateLoading();
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
						return this->CGpuProgram::addListener(ref_lis);
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
						return this->CGpuProgram::removeListener(lis);
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
						return this->CGpuProgram::getGroup();
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
						return this->CGpuProgram::changeGroupOwnership(newGroup);
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
						return this->CGpuProgram::getCreator();
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
						return this->CGpuProgram::getOrigin();
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
						return this->CGpuProgram::_notifyOrigin(origin);
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
						return this->CGpuProgram::getStateCount();
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
						return this->CGpuProgram::_dirtyState();
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
						return this->CGpuProgram::_fireLoadingComplete(wasBackgroundLoaded);
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
						return this->CGpuProgram::_firePreparingComplete(wasBackgroundLoaded);
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
						return this->CGpuProgram::_fireUnloadingComplete();
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
						return this->CGpuProgram::setParameter(name, value);
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
						return this->CGpuProgram::setParameter(name, readOnly, enable);
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
						return this->CGpuProgram::setParameterList(paramList);
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
						return this->CGpuProgram::getParameter(name);
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
						return this->CGpuProgram::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGpuProgramProxy);
			class JCGpuprogramCmdTypeProxy : public EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCGpuprogramCmdTypeProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuprogramCmdType(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CGpuprogramCmdType::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CGpuprogramCmdType::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CGpuprogramCmdType::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGpuprogramCmdTypeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType *pObjectX = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuprogramCmdTypeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuprogramCmdTypeProxy *pObjectX = (JCGpuprogramCmdTypeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType *pObjectX = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType *pObjectX = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuprogramCmdTypeProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuprogramCmdTypeProxy *pObjectX = (JCGpuprogramCmdTypeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType *pObjectX = (EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CGpuprogramCmdType::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024GpuprogramCmdType_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuprogramCmdTypeProxy *pObjectX = (JCGpuprogramCmdTypeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdSyntaxProxy : public EarthView::World::Graphic::CGpuProgram::CCmdSyntax
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdSyntaxProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdSyntax(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdSyntax::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdSyntax::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdSyntax::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdSyntaxProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdSyntax *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdSyntaxProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdSyntaxProxy *pObjectX = (JCCmdSyntaxProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdSyntax *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdSyntax *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdSyntaxProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdSyntaxProxy *pObjectX = (JCCmdSyntaxProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdSyntax *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSyntax*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSyntax::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSyntax_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdSyntaxProxy *pObjectX = (JCCmdSyntaxProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdSkeletalProxy : public EarthView::World::Graphic::CGpuProgram::CCmdSkeletal
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdSkeletalProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdSkeletal(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdSkeletal::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdSkeletal::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdSkeletal::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdSkeletalProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdSkeletal *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdSkeletalProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdSkeletalProxy *pObjectX = (JCCmdSkeletalProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdSkeletal *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdSkeletal *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdSkeletalProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdSkeletalProxy *pObjectX = (JCCmdSkeletalProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdSkeletal *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdSkeletal*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdSkeletal::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdSkeletal_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdSkeletalProxy *pObjectX = (JCCmdSkeletalProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdMorphProxy : public EarthView::World::Graphic::CGpuProgram::CCmdMorph
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdMorphProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdMorph(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdMorph::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdMorph::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdMorph::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdMorphProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdMorph *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdMorphProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdMorphProxy *pObjectX = (JCCmdMorphProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdMorph *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdMorph *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdMorphProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdMorphProxy *pObjectX = (JCCmdMorphProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdMorph *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdMorph*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdMorph::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdMorph_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdMorphProxy *pObjectX = (JCCmdMorphProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdPoseProxy : public EarthView::World::Graphic::CGpuProgram::CCmdPose
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdPoseProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdPose(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdPose::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdPose::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdPose::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdPoseProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdPose *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdPoseProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdPose::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdPoseProxy *pObjectX = (JCCmdPoseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdPose *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdPose::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdPose *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdPoseProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdPose::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdPoseProxy *pObjectX = (JCCmdPoseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdPose *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdPose*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdPose::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdPose_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdPoseProxy *pObjectX = (JCCmdPoseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdVTFProxy : public EarthView::World::Graphic::CGpuProgram::CCmdVTF
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdVTFProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdVTF(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdVTF::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdVTF::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdVTF::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdVTFProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdVTF *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdVTFProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdVTFProxy *pObjectX = (JCCmdVTFProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdVTF *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdVTF *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdVTFProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdVTFProxy *pObjectX = (JCCmdVTFProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdVTF *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdVTF*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdVTF::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdVTF_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdVTFProxy *pObjectX = (JCCmdVTFProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdManualNamedConstsFileProxy : public EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdManualNamedConstsFileProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdManualNamedConstsFile(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdManualNamedConstsFile::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdManualNamedConstsFile::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdManualNamedConstsFile::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdManualNamedConstsFileProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdManualNamedConstsFileProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdManualNamedConstsFileProxy *pObjectX = (JCCmdManualNamedConstsFileProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdManualNamedConstsFileProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdManualNamedConstsFileProxy *pObjectX = (JCCmdManualNamedConstsFileProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdManualNamedConstsFile::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdManualNamedConstsFile_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdManualNamedConstsFileProxy *pObjectX = (JCCmdManualNamedConstsFileProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCCmdAdjacencyProxy : public EarthView::World::Graphic::CGpuProgram::CCmdAdjacency
			{
			 private:
				EarthView::World::Core::ev_string m_doGet_void_callback;
				EarthView::World::Core::ev_string m_doSet_void_EVString_callback;
				EarthView::World::Core::ev_string m_trySet_void_EVString_EVString_callback;
			public:
				JCCmdAdjacencyProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdAdjacency(pList)
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
				void register_doGet_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doGet_void_callback = __method;
				}
				void register_doSet_void_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_doSet_void_EVString_callback = __method;
				}
				void register_trySet_void_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_trySet_void_EVString_EVString_callback = __method;
				}
				virtual EVString doGet(const void* target) const
				{
					if (this->_gRef != NULL && this->m_doGet_void_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						jmethodID __method = __gr->getMethod("doGet_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , target_j);
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
						return this->CCmdAdjacency::doGet(target);
					}
				}
				virtual void doSet(void* target, const EVString& val)
				{
					if (this->_gRef != NULL && this->m_doSet_void_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jmethodID __method = __gr->getMethod("doSet_void_EVString_callback");
						__env->CallVoidMethod(__obj, __method , target_j, val_j);
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
						return this->CCmdAdjacency::doSet(target, val);
					}
				}
				virtual ev_bool trySet(void* target, const EVString& val, EVString& reason)
				{
					if (this->_gRef != NULL && this->m_trySet_void_EVString_EVString_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) target;
						EarthView::World::Core::ev_wstring val_wch = val;
						jstring val_j = __env->NewString((const jchar*)val_wch.getString(), val_wch.size());
						jlong reason_j = (jlong) &reason;
						jmethodID __method = __gr->getMethod("trySet_void_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , target_j, val_j, reason_j);
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
						return this->CCmdAdjacency::trySet(target, val, reason);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCmdAdjacencyProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_doGet_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdAdjacency *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdAdjacencyProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->doGet(target);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_register_1doGet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdAdjacencyProxy *pObjectX = (JCCmdAdjacencyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doGet_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doGet_void_callback", "(J)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_doGet_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				const void *target = (const void*) target_j;
				const 				EarthView::World::Graphic::CGpuProgram::CCmdAdjacency *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doGet(target);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_doSet_1void_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdAdjacency *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCmdAdjacencyProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doSet(target, val);
				}
				else
				{
					pObjectX->doSet(target, val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_register_1doSet_1void_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdAdjacencyProxy *pObjectX = (JCCmdAdjacencyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_doSet_void_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"doSet_void_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_doSet_1void_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j, jstring val_j)
			{
				void *target = (void*) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				const EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram::CCmdAdjacency *pObjectX = (EarthView::World::Graphic::CGpuProgram::CCmdAdjacency*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::CCmdAdjacency::doSet(target, val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_00024CmdAdjacency_register_1trySet_1void_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCmdAdjacencyProxy *pObjectX = (JCCmdAdjacencyProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_trySet_void_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"trySet_void_EVString_EVString_callback", "(JLjava/lang/String;J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_calculateSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::calculateSize();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1calculateSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_calculateSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::calculateSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_loadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::loadImpl();
				}
				else
				{
					pObjectX->loadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1loadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_loadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::loadImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSourceFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setSourceFile(filename);
				}
				else
				{
					pObjectX->setSourceFile(filename);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setSourceFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSourceFile_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSourceFile_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSourceFile_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setSourceFile(filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring source_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setSource(source);
				}
				else
				{
					pObjectX->setSource(source);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setSource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSource_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSource_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSource_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring source_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setSource(source);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getSyntaxCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getSyntaxCode();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getSyntaxCode();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getSyntaxCode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSyntaxCode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSyntaxCode_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getSyntaxCode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getSyntaxCode();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSyntaxCode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring syntax_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* syntax_ch = (const ev_char*)__env->GetStringUTFChars(syntax_j,JNI_FALSE);
				const EVString syntax = syntax_ch;
				__env->ReleaseStringUTFChars(syntax_j, (const char *)syntax_ch);
				#else
				const ev_wchar* syntax_ch = (const ev_wchar*)__env->GetStringChars(syntax_j,JNI_FALSE);
				const EVString syntax = syntax_ch;
				__env->ReleaseStringChars(syntax_j, (const jchar *)syntax_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setSyntaxCode(syntax);
				}
				else
				{
					pObjectX->setSyntaxCode(syntax);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setSyntaxCode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSyntaxCode_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSyntaxCode_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSyntaxCode_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring syntax_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* syntax_ch = (const ev_char*)__env->GetStringUTFChars(syntax_j,JNI_FALSE);
				const EVString syntax = syntax_ch;
				__env->ReleaseStringUTFChars(syntax_j, (const char *)syntax_ch);
				#else
				const ev_wchar* syntax_ch = (const ev_wchar*)__env->GetStringChars(syntax_j,JNI_FALSE);
				const EVString syntax = syntax_ch;
				__env->ReleaseStringChars(syntax_j, (const jchar *)syntax_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setSyntaxCode(syntax);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getSourceFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getSourceFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getSourceFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getSourceFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSourceFile_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSourceFile_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getSourceFile_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getSourceFile();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getSource();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getSource();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSource_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSource_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getSource_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getSource();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setType_1GpuProgramType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				EarthView::World::Graphic::GpuProgramType t = (EarthView::World::Graphic::GpuProgramType) t_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setType(t);
				}
				else
				{
					pObjectX->setType(t);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setType_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setType_GpuProgramType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setType_GpuProgramType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setType_1GpuProgramType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				EarthView::World::Graphic::GpuProgramType t = (EarthView::World::Graphic::GpuProgramType) t_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setType(t);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgram_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EarthView::World::Graphic::GpuProgramType __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::GpuProgramType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgram_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramType __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram__1getBindingDelegate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EarthView::World::Graphic::CGpuProgram* __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::_getBindingDelegate();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CGpuProgram* __values1 = pObjectX->_getBindingDelegate();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1_1getBindingDelegate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getBindingDelegate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getBindingDelegate_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram__1getBindingDelegate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgram* __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::_getBindingDelegate();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isSupported_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isSupported();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isSupported();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isSupported_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isSupported_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isSupported_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isSupported_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isSupported();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_createParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::createParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->createParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1createParameters_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createParameters_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createParameters_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_createParameters_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::createParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSkeletalAnimationIncluded_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean included_j)
			{
				ev_bool included = (ev_bool) included_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setSkeletalAnimationIncluded(included);
				}
				else
				{
					pObjectX->setSkeletalAnimationIncluded(included);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setSkeletalAnimationIncluded_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSkeletalAnimationIncluded_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSkeletalAnimationIncluded_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setSkeletalAnimationIncluded_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean included_j)
			{
				ev_bool included = (ev_bool) included_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setSkeletalAnimationIncluded(included);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isSkeletalAnimationIncluded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isSkeletalAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isSkeletalAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isSkeletalAnimationIncluded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isSkeletalAnimationIncluded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isSkeletalAnimationIncluded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isSkeletalAnimationIncluded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isSkeletalAnimationIncluded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setMorphAnimationIncluded_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean included_j)
			{
				ev_bool included = (ev_bool) included_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setMorphAnimationIncluded(included);
				}
				else
				{
					pObjectX->setMorphAnimationIncluded(included);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setMorphAnimationIncluded_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMorphAnimationIncluded_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMorphAnimationIncluded_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setMorphAnimationIncluded_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean included_j)
			{
				ev_bool included = (ev_bool) included_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setMorphAnimationIncluded(included);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setPoseAnimationIncluded_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poseCount_j)
			{
				ev_uint16 poseCount = (ev_uint16) poseCount_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setPoseAnimationIncluded(poseCount);
				}
				else
				{
					pObjectX->setPoseAnimationIncluded(poseCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setPoseAnimationIncluded_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPoseAnimationIncluded_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPoseAnimationIncluded_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setPoseAnimationIncluded_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poseCount_j)
			{
				ev_uint16 poseCount = (ev_uint16) poseCount_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setPoseAnimationIncluded(poseCount);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isMorphAnimationIncluded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isMorphAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isMorphAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isMorphAnimationIncluded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isMorphAnimationIncluded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isMorphAnimationIncluded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isMorphAnimationIncluded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isMorphAnimationIncluded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isPoseAnimationIncluded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isPoseAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isPoseAnimationIncluded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isPoseAnimationIncluded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPoseAnimationIncluded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPoseAnimationIncluded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isPoseAnimationIncluded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isPoseAnimationIncluded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgram_getNumberOfPosesIncluded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getNumberOfPosesIncluded();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumberOfPosesIncluded();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getNumberOfPosesIncluded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumberOfPosesIncluded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumberOfPosesIncluded_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_GpuProgram_getNumberOfPosesIncluded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getNumberOfPosesIncluded();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setVertexTextureFetchRequired_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r_j)
			{
				ev_bool r = (ev_bool) r_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setVertexTextureFetchRequired(r);
				}
				else
				{
					pObjectX->setVertexTextureFetchRequired(r);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setVertexTextureFetchRequired_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVertexTextureFetchRequired_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVertexTextureFetchRequired_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setVertexTextureFetchRequired_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r_j)
			{
				ev_bool r = (ev_bool) r_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setVertexTextureFetchRequired(r);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isVertexTextureFetchRequired_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isVertexTextureFetchRequired();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isVertexTextureFetchRequired();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isVertexTextureFetchRequired_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isVertexTextureFetchRequired_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isVertexTextureFetchRequired_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isVertexTextureFetchRequired_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isVertexTextureFetchRequired();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setAdjacencyInfoRequired_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r_j)
			{
				ev_bool r = (ev_bool) r_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setAdjacencyInfoRequired(r);
				}
				else
				{
					pObjectX->setAdjacencyInfoRequired(r);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setAdjacencyInfoRequired_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAdjacencyInfoRequired_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAdjacencyInfoRequired_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setAdjacencyInfoRequired_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r_j)
			{
				ev_bool r = (ev_bool) r_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setAdjacencyInfoRequired(r);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isAdjacencyInfoRequired_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isAdjacencyInfoRequired();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isAdjacencyInfoRequired();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isAdjacencyInfoRequired_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isAdjacencyInfoRequired_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isAdjacencyInfoRequired_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_isAdjacencyInfoRequired_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::isAdjacencyInfoRequired();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_getDefaultParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getDefaultParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->getDefaultParameters();
					EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getDefaultParameters_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDefaultParameters_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDefaultParameters_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_getDefaultParameters_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getDefaultParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *returnvalues = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_hasDefaultParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::hasDefaultParameters();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasDefaultParameters();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1hasDefaultParameters_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasDefaultParameters_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasDefaultParameters_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_hasDefaultParameters_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::hasDefaultParameters();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_getPassSurfaceAndLightStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getPassSurfaceAndLightStates();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPassSurfaceAndLightStates();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getPassSurfaceAndLightStates_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPassSurfaceAndLightStates_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPassSurfaceAndLightStates_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_getPassSurfaceAndLightStates_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getPassSurfaceAndLightStates();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_getPassFogStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getPassFogStates();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPassFogStates();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getPassFogStates_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPassFogStates_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPassFogStates_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_getPassFogStates_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getPassFogStates();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_getPassTransformStates_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getPassTransformStates();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getPassTransformStates();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getPassTransformStates_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPassTransformStates_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPassTransformStates_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_getPassTransformStates_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getPassTransformStates();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getLanguage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getLanguage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getLanguage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getLanguage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLanguage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLanguage_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getLanguage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getLanguage();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_hasCompileError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::hasCompileError();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasCompileError();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1hasCompileError_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasCompileError_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasCompileError_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_GpuProgram_hasCompileError_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::hasCompileError();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_resetCompileError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::resetCompileError();
				}
				else
				{
					pObjectX->resetCompileError();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1resetCompileError_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetCompileError_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetCompileError_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_resetCompileError_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::resetCompileError();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setManualNamedConstants_1GpuNamedConstants(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong namedConstants_j)
			{
				const EarthView::World::Graphic::GpuNamedConstants &namedConstants = *(EarthView::World::Graphic::GpuNamedConstants*) namedConstants_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setManualNamedConstants(namedConstants);
				}
				else
				{
					pObjectX->setManualNamedConstants(namedConstants);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setManualNamedConstants_1GpuNamedConstants(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setManualNamedConstants_GpuNamedConstants_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setManualNamedConstants_GpuNamedConstants_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setManualNamedConstants_1GpuNamedConstants_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong namedConstants_j)
			{
				const EarthView::World::Graphic::GpuNamedConstants &namedConstants = *(EarthView::World::Graphic::GpuNamedConstants*) namedConstants_j;
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setManualNamedConstants(namedConstants);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_getNamedConstants_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getNamedConstants();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->getNamedConstants();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getNamedConstants_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNamedConstants_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNamedConstants_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_getNamedConstants_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getNamedConstants();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setManualNamedConstantsFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring paramDefFile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* paramDefFile_ch = (const ev_char*)__env->GetStringUTFChars(paramDefFile_j,JNI_FALSE);
				const EVString paramDefFile = paramDefFile_ch;
				__env->ReleaseStringUTFChars(paramDefFile_j, (const char *)paramDefFile_ch);
				#else
				const ev_wchar* paramDefFile_ch = (const ev_wchar*)__env->GetStringChars(paramDefFile_j,JNI_FALSE);
				const EVString paramDefFile = paramDefFile_ch;
				__env->ReleaseStringChars(paramDefFile_j, (const jchar *)paramDefFile_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::setManualNamedConstantsFile(paramDefFile);
				}
				else
				{
					pObjectX->setManualNamedConstantsFile(paramDefFile);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setManualNamedConstantsFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setManualNamedConstantsFile_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setManualNamedConstantsFile_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_setManualNamedConstantsFile_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring paramDefFile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* paramDefFile_ch = (const ev_char*)__env->GetStringUTFChars(paramDefFile_j,JNI_FALSE);
				const EVString paramDefFile = paramDefFile_ch;
				__env->ReleaseStringUTFChars(paramDefFile_j, (const char *)paramDefFile_ch);
				#else
				const ev_wchar* paramDefFile_ch = (const ev_wchar*)__env->GetStringChars(paramDefFile_j,JNI_FALSE);
				const EVString paramDefFile = paramDefFile_ch;
				__env->ReleaseStringChars(paramDefFile_j, (const jchar *)paramDefFile_ch);
				#endif
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::setManualNamedConstantsFile(paramDefFile);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getManualNamedConstantsFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getManualNamedConstantsFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getManualNamedConstantsFile();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getManualNamedConstantsFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getManualNamedConstantsFile_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getManualNamedConstantsFile_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_GpuProgram_getManualNamedConstantsFile_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getManualNamedConstantsFile();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_getConstantDefinitions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getConstantDefinitions();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->getConstantDefinitions();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getConstantDefinitions_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getConstantDefinitions_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getConstantDefinitions_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgram_getConstantDefinitions_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				const EarthView::World::Graphic::GpuNamedConstants& __values1 = pObjectX->EarthView::World::Graphic::CGpuProgram::getConstantDefinitions();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_loadFromSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGpuProgramProxy))
				{
					pObjectX->EarthView::World::Graphic::CGpuProgram::loadFromSource();
				}
				else
				{
					pObjectX->loadFromSource();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1loadFromSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadFromSource_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadFromSource_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_loadFromSource_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CGpuProgram *pObjectX = (EarthView::World::Graphic::CGpuProgram*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CGpuProgram::loadFromSource();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1preLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1postLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1preUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1postUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1prepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1unprepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1unloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1prepare_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1prepare_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1load_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1reload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isReloadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isManuallyLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1touch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getHandle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isPrepared_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getLoadingState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1isBackgroundLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setBackgroundLoaded_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1escalateLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1addListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1removeListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1changeGroupOwnership_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getCreator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getOrigin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1_1notifyOrigin_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getStateCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1_1dirtyState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1_1fireLoadingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1_1firePreparingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1_1fireUnloadingComplete_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_GpuProgram_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGpuProgramProxy *pObjectX = (JCGpuProgramProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CGpuProgramPtr *pObjectX = (EarthView::World::Graphic::CGpuProgramPtr*) pObjXXXX;
				EarthView::World::Graphic::CGpuProgram* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramPtr_OperatorAssign_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Graphic::CGpuProgramPtr& pObjectX = *(EarthView::World::Graphic::CGpuProgramPtr*) pObjXXXX;
				const EarthView::World::Graphic::ResourcePtr &r = *(EarthView::World::Graphic::ResourcePtr*) r_j;
				pObjectX = r;
				EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_GpuProgramPtr_OperatorAssign_1CHighLevelGpuProgramPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Graphic::CGpuProgramPtr& pObjectX = *(EarthView::World::Graphic::CGpuProgramPtr*) pObjXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramPtr &r = *(EarthView::World::Graphic::CHighLevelGpuProgramPtr*) r_j;
				pObjectX = r;
				EarthView::World::Graphic::CGpuProgramPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
