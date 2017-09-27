/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendertarget.h"
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
			class JCRenderTargetProxy : public EarthView::World::Graphic::CRenderTarget
			{
			 private:
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getMetrics_ev_uint32_ev_uint32_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_getColourDepth_void_callback;
				EarthView::World::Core::ev_string m_attachDepthBuffer_CDepthBuffer_callback;
				EarthView::World::Core::ev_string m_detachDepthBuffer_void_callback;
				EarthView::World::Core::ev_string m__detachDepthBuffer_void_callback;
				EarthView::World::Core::ev_string m_update_ev_bool_callback;
				EarthView::World::Core::ev_string m_update_void_callback;
				EarthView::World::Core::ev_string m_swapBuffers_ev_bool_callback;
				EarthView::World::Core::ev_string m_swapBuffers_void_callback;
				EarthView::World::Core::ev_string m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_addViewport_CCamera_ev_int32_ev_real32_callback;
				EarthView::World::Core::ev_string m_addViewport_CCamera_ev_int32_callback;
				EarthView::World::Core::ev_string m_addViewport_CCamera_callback;
				EarthView::World::Core::ev_string m_getNumViewports_void_callback;
				EarthView::World::Core::ev_string m_getViewport_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getViewportByZOrder_ev_int32_callback;
				EarthView::World::Core::ev_string m_hasViewportWithZOrder_ev_int32_callback;
				EarthView::World::Core::ev_string m_removeViewport_ev_int32_callback;
				EarthView::World::Core::ev_string m_removeAllViewports_void_callback;
				EarthView::World::Core::ev_string m_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback;
				EarthView::World::Core::ev_string m_getStatistics_void_callback;
				EarthView::World::Core::ev_string m_getLastFPS_void_callback;
				EarthView::World::Core::ev_string m_getAverageFPS_void_callback;
				EarthView::World::Core::ev_string m_getBestFPS_void_callback;
				EarthView::World::Core::ev_string m_getWorstFPS_void_callback;
				EarthView::World::Core::ev_string m_getBestFrameTime_void_callback;
				EarthView::World::Core::ev_string m_getWorstFrameTime_void_callback;
				EarthView::World::Core::ev_string m_resetStatistics_void_callback;
				EarthView::World::Core::ev_string m_getCustomAttribute_EVString_void_callback;
				EarthView::World::Core::ev_string m_addListener_CRenderTargetListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CRenderTargetListener_callback;
				EarthView::World::Core::ev_string m_removeAllListeners_void_callback;
				EarthView::World::Core::ev_string m_setPriority_ev_uchar_callback;
				EarthView::World::Core::ev_string m_getPriority_void_callback;
				EarthView::World::Core::ev_string m_isActive_void_callback;
				EarthView::World::Core::ev_string m_setActive_ev_bool_callback;
				EarthView::World::Core::ev_string m_setAutoUpdated_ev_bool_callback;
				EarthView::World::Core::ev_string m_isAutoUpdated_void_callback;
				EarthView::World::Core::ev_string m_copyContentsToMemory_CPixelBox_FrameBuffer_callback;
				EarthView::World::Core::ev_string m_copyContentsToMemory_CPixelBox_callback;
				EarthView::World::Core::ev_string m_suggestPixelFormat_void_callback;
				EarthView::World::Core::ev_string m_writeContentsToTimestampedFile_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_requiresTextureFlipping_void_callback;
				EarthView::World::Core::ev_string m_getTriangleCount_void_callback;
				EarthView::World::Core::ev_string m_getBatchCount_void_callback;
				EarthView::World::Core::ev_string m_getVertexCount_void_callback;
				EarthView::World::Core::ev_string m__notifyCameraRemoved_CCamera_callback;
				EarthView::World::Core::ev_string m_isPrimary_void_callback;
				EarthView::World::Core::ev_string m_isHardwareGammaEnabled_void_callback;
				EarthView::World::Core::ev_string m_getFSAA_void_callback;
				EarthView::World::Core::ev_string m_getFSAAHint_void_callback;
				EarthView::World::Core::ev_string m__getImpl_void_callback;
				EarthView::World::Core::ev_string m__beginUpdate_void_callback;
				EarthView::World::Core::ev_string m__updateViewport_ev_int32_ev_bool_callback;
				EarthView::World::Core::ev_string m__updateViewport_ev_int32_callback;
				EarthView::World::Core::ev_string m__updateViewport_CViewport_ev_bool_callback;
				EarthView::World::Core::ev_string m__updateViewport_CViewport_callback;
				EarthView::World::Core::ev_string m__updateAutoUpdatedViewports_ev_bool_callback;
				EarthView::World::Core::ev_string m__updateAutoUpdatedViewports_void_callback;
				EarthView::World::Core::ev_string m__endUpdate_void_callback;
				EarthView::World::Core::ev_string m_firePreUpdate_void_callback;
				EarthView::World::Core::ev_string m_firePostUpdate_void_callback;
				EarthView::World::Core::ev_string m_fireViewportPreUpdate_CViewport_callback;
				EarthView::World::Core::ev_string m_fireViewportPostUpdate_CViewport_callback;
				EarthView::World::Core::ev_string m_fireViewportAdded_CViewport_callback;
				EarthView::World::Core::ev_string m_fireViewportRemoved_CViewport_callback;
				EarthView::World::Core::ev_string m_updateImpl_void_callback;
			public:
				JCRenderTargetProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderTarget(pList)
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
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getMetrics_ev_uint32_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMetrics_ev_uint32_ev_uint32_ev_uint32_callback = __method;
				}
				void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWidth_void_callback = __method;
				}
				void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeight_void_callback = __method;
				}
				void register_getColourDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColourDepth_void_callback = __method;
				}
				void register_attachDepthBuffer_CDepthBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachDepthBuffer_CDepthBuffer_callback = __method;
				}
				void register_detachDepthBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachDepthBuffer_void_callback = __method;
				}
				void register__detachDepthBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__detachDepthBuffer_void_callback = __method;
				}
				void register_update_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_ev_bool_callback = __method;
				}
				void register_update_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_void_callback = __method;
				}
				void register_swapBuffers_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_swapBuffers_ev_bool_callback = __method;
				}
				void register_swapBuffers_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_swapBuffers_void_callback = __method;
				}
				void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback = __method;
				}
				void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback = __method;
				}
				void register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback = __method;
				}
				void register_addViewport_CCamera_ev_int32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addViewport_CCamera_ev_int32_ev_real32_callback = __method;
				}
				void register_addViewport_CCamera_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addViewport_CCamera_ev_int32_callback = __method;
				}
				void register_addViewport_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addViewport_CCamera_callback = __method;
				}
				void register_getNumViewports_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumViewports_void_callback = __method;
				}
				void register_getViewport_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewport_ev_uint16_callback = __method;
				}
				void register_getViewportByZOrder_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewportByZOrder_ev_int32_callback = __method;
				}
				void register_hasViewportWithZOrder_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasViewportWithZOrder_ev_int32_callback = __method;
				}
				void register_removeViewport_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeViewport_ev_int32_callback = __method;
				}
				void register_removeAllViewports_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllViewports_void_callback = __method;
				}
				void register_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback = __method;
				}
				void register_getStatistics_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStatistics_void_callback = __method;
				}
				void register_getLastFPS_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLastFPS_void_callback = __method;
				}
				void register_getAverageFPS_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAverageFPS_void_callback = __method;
				}
				void register_getBestFPS_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBestFPS_void_callback = __method;
				}
				void register_getWorstFPS_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorstFPS_void_callback = __method;
				}
				void register_getBestFrameTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBestFrameTime_void_callback = __method;
				}
				void register_getWorstFrameTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorstFrameTime_void_callback = __method;
				}
				void register_resetStatistics_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetStatistics_void_callback = __method;
				}
				void register_getCustomAttribute_EVString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCustomAttribute_EVString_void_callback = __method;
				}
				void register_addListener_CRenderTargetListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CRenderTargetListener_callback = __method;
				}
				void register_removeListener_CRenderTargetListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CRenderTargetListener_callback = __method;
				}
				void register_removeAllListeners_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllListeners_void_callback = __method;
				}
				void register_setPriority_ev_uchar_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPriority_ev_uchar_callback = __method;
				}
				void register_getPriority_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPriority_void_callback = __method;
				}
				void register_isActive_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isActive_void_callback = __method;
				}
				void register_setActive_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setActive_ev_bool_callback = __method;
				}
				void register_setAutoUpdated_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAutoUpdated_ev_bool_callback = __method;
				}
				void register_isAutoUpdated_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isAutoUpdated_void_callback = __method;
				}
				void register_copyContentsToMemory_CPixelBox_FrameBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyContentsToMemory_CPixelBox_FrameBuffer_callback = __method;
				}
				void register_copyContentsToMemory_CPixelBox_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyContentsToMemory_CPixelBox_callback = __method;
				}
				void register_suggestPixelFormat_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_suggestPixelFormat_void_callback = __method;
				}
				void register_writeContentsToTimestampedFile_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeContentsToTimestampedFile_EVString_EVString_callback = __method;
				}
				void register_requiresTextureFlipping_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_requiresTextureFlipping_void_callback = __method;
				}
				void register_getTriangleCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTriangleCount_void_callback = __method;
				}
				void register_getBatchCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBatchCount_void_callback = __method;
				}
				void register_getVertexCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVertexCount_void_callback = __method;
				}
				void register__notifyCameraRemoved_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyCameraRemoved_CCamera_callback = __method;
				}
				void register_isPrimary_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPrimary_void_callback = __method;
				}
				void register_isHardwareGammaEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isHardwareGammaEnabled_void_callback = __method;
				}
				void register_getFSAA_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFSAA_void_callback = __method;
				}
				void register_getFSAAHint_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFSAAHint_void_callback = __method;
				}
				void register__getImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getImpl_void_callback = __method;
				}
				void register__beginUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__beginUpdate_void_callback = __method;
				}
				void register__updateViewport_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateViewport_ev_int32_ev_bool_callback = __method;
				}
				void register__updateViewport_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateViewport_ev_int32_callback = __method;
				}
				void register__updateViewport_CViewport_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateViewport_CViewport_ev_bool_callback = __method;
				}
				void register__updateViewport_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateViewport_CViewport_callback = __method;
				}
				void register__updateAutoUpdatedViewports_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateAutoUpdatedViewports_ev_bool_callback = __method;
				}
				void register__updateAutoUpdatedViewports_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateAutoUpdatedViewports_void_callback = __method;
				}
				void register__endUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__endUpdate_void_callback = __method;
				}
				void register_firePreUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_firePreUpdate_void_callback = __method;
				}
				void register_firePostUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_firePostUpdate_void_callback = __method;
				}
				void register_fireViewportPreUpdate_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireViewportPreUpdate_CViewport_callback = __method;
				}
				void register_fireViewportPostUpdate_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireViewportPostUpdate_CViewport_callback = __method;
				}
				void register_fireViewportAdded_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireViewportAdded_CViewport_callback = __method;
				}
				void register_fireViewportRemoved_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fireViewportRemoved_CViewport_callback = __method;
				}
				void register_updateImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateImpl_void_callback = __method;
				}
				virtual const EVString& getName() const
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
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EVString &__values1 = *(const EVString*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getName();
					}
				}
				virtual void getMetrics(ev_uint32& width, ev_uint32& height, ev_uint32& colourDepth)
				{
					if (this->_gRef != NULL && this->m_getMetrics_ev_uint32_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong width_j = (jlong) &width;
						jlong height_j = (jlong) &height;
						jlong colourDepth_j = (jlong) &colourDepth;
						jmethodID __method = __gr->getMethod("getMetrics_ev_uint32_ev_uint32_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , width_j, height_j, colourDepth_j);
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
						return this->CRenderTarget::getMetrics(width, height, colourDepth);
					}
				}
				virtual ev_uint32 getWidth() const
				{
					if (this->_gRef != NULL && this->m_getWidth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWidth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getWidth();
					}
				}
				virtual ev_uint32 getHeight() const
				{
					if (this->_gRef != NULL && this->m_getHeight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHeight_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getHeight();
					}
				}
				virtual ev_uint32 getColourDepth() const
				{
					if (this->_gRef != NULL && this->m_getColourDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getColourDepth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getColourDepth();
					}
				}
				virtual ev_bool attachDepthBuffer(EarthView::World::Graphic::CDepthBuffer* ref_depthBuffer)
				{
					if (this->_gRef != NULL && this->m_attachDepthBuffer_CDepthBuffer_callback != "" && this->isCustomExtend())
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
						jlong ref_depthBuffer_j = (jlong) ref_depthBuffer;
						jmethodID __method = __gr->getMethod("attachDepthBuffer_CDepthBuffer_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_depthBuffer_j);
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
						return this->CRenderTarget::attachDepthBuffer(ref_depthBuffer);
					}
				}
				virtual void detachDepthBuffer()
				{
					if (this->_gRef != NULL && this->m_detachDepthBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("detachDepthBuffer_void_callback");
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
						return this->CRenderTarget::detachDepthBuffer();
					}
				}
				virtual void _detachDepthBuffer()
				{
					if (this->_gRef != NULL && this->m__detachDepthBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_detachDepthBuffer_void_callback");
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
						return this->CRenderTarget::_detachDepthBuffer();
					}
				}
				virtual void update(ev_bool swapBuffers)
				{
					if (this->_gRef != NULL && this->m_update_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean swapBuffers_j = (jboolean) swapBuffers;
						jmethodID __method = __gr->getMethod("update_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , swapBuffers_j);
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
						return this->CRenderTarget::update(swapBuffers);
					}
				}
				virtual void update()
				{
					if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("update_void_callback");
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
						return this->CRenderTarget::update();
					}
				}
				virtual void swapBuffers(ev_bool waitForVSync)
				{
					if (this->_gRef != NULL && this->m_swapBuffers_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean waitForVSync_j = (jboolean) waitForVSync;
						jmethodID __method = __gr->getMethod("swapBuffers_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , waitForVSync_j);
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
						return this->CRenderTarget::swapBuffers(waitForVSync);
					}
				}
				virtual void swapBuffers()
				{
					if (this->_gRef != NULL && this->m_swapBuffers_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("swapBuffers_void_callback");
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
						return this->CRenderTarget::swapBuffers();
					}
				}
				virtual EarthView::World::Graphic::CViewport* addViewport(EarthView::World::Graphic::CCamera* ref_cam, ev_int32 ZOrder, ev_real32 left, ev_real32 top, ev_real32 width, ev_real32 height)
				{
					if (this->_gRef != NULL && this->m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jint ZOrder_j = (jint) ZOrder;
						jfloat left_j = (jfloat) left;
						jfloat top_j = (jfloat) top;
						jfloat width_j = (jfloat) width;
						jfloat height_j = (jfloat) height;
						jmethodID __method = __gr->getMethod("addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_cam_j, ZOrder_j, left_j, top_j, width_j, height_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::addViewport(ref_cam, ZOrder, left, top, width, height);
					}
				}
				virtual EarthView::World::Graphic::CViewport* addViewport(EarthView::World::Graphic::CCamera* ref_cam, ev_int32 ZOrder, ev_real32 left, ev_real32 top, ev_real32 width)
				{
					if (this->_gRef != NULL && this->m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jint ZOrder_j = (jint) ZOrder;
						jfloat left_j = (jfloat) left;
						jfloat top_j = (jfloat) top;
						jfloat width_j = (jfloat) width;
						jmethodID __method = __gr->getMethod("addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_cam_j, ZOrder_j, left_j, top_j, width_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::addViewport(ref_cam, ZOrder, left, top, width);
					}
				}
				virtual EarthView::World::Graphic::CViewport* addViewport(EarthView::World::Graphic::CCamera* ref_cam, ev_int32 ZOrder, ev_real32 left, ev_real32 top)
				{
					if (this->_gRef != NULL && this->m_addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jint ZOrder_j = (jint) ZOrder;
						jfloat left_j = (jfloat) left;
						jfloat top_j = (jfloat) top;
						jmethodID __method = __gr->getMethod("addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_cam_j, ZOrder_j, left_j, top_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::addViewport(ref_cam, ZOrder, left, top);
					}
				}
				virtual EarthView::World::Graphic::CViewport* addViewport(EarthView::World::Graphic::CCamera* ref_cam, ev_int32 ZOrder, ev_real32 left)
				{
					if (this->_gRef != NULL && this->m_addViewport_CCamera_ev_int32_ev_real32_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jint ZOrder_j = (jint) ZOrder;
						jfloat left_j = (jfloat) left;
						jmethodID __method = __gr->getMethod("addViewport_CCamera_ev_int32_ev_real32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_cam_j, ZOrder_j, left_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::addViewport(ref_cam, ZOrder, left);
					}
				}
				virtual EarthView::World::Graphic::CViewport* addViewport(EarthView::World::Graphic::CCamera* ref_cam, ev_int32 ZOrder)
				{
					if (this->_gRef != NULL && this->m_addViewport_CCamera_ev_int32_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jint ZOrder_j = (jint) ZOrder;
						jmethodID __method = __gr->getMethod("addViewport_CCamera_ev_int32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_cam_j, ZOrder_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::addViewport(ref_cam, ZOrder);
					}
				}
				virtual EarthView::World::Graphic::CViewport* addViewport(EarthView::World::Graphic::CCamera* ref_cam)
				{
					if (this->_gRef != NULL && this->m_addViewport_CCamera_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jmethodID __method = __gr->getMethod("addViewport_CCamera_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_cam_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::addViewport(ref_cam);
					}
				}
				virtual ev_uint16 getNumViewports() const
				{
					if (this->_gRef != NULL && this->m_getNumViewports_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumViewports_void_callback");
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
						return this->CRenderTarget::getNumViewports();
					}
				}
				virtual EarthView::World::Graphic::CViewport* getViewport(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_getViewport_ev_uint16_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewport_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getViewport(index);
					}
				}
				virtual EarthView::World::Graphic::CViewport* getViewportByZOrder(ev_int32 ZOrder)
				{
					if (this->_gRef != NULL && this->m_getViewportByZOrder_ev_int32_callback != "" && this->isCustomExtend())
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
						jint ZOrder_j = (jint) ZOrder;
						jmethodID __method = __gr->getMethod("getViewportByZOrder_ev_int32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ZOrder_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CViewport *__values1 = (EarthView::World::Graphic::CViewport*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getViewportByZOrder(ZOrder);
					}
				}
				virtual bool hasViewportWithZOrder(ev_int32 ZOrder)
				{
					if (this->_gRef != NULL && this->m_hasViewportWithZOrder_ev_int32_callback != "" && this->isCustomExtend())
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
						jint ZOrder_j = (jint) ZOrder;
						jmethodID __method = __gr->getMethod("hasViewportWithZOrder_ev_int32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ZOrder_j);
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
						return this->CRenderTarget::hasViewportWithZOrder(ZOrder);
					}
				}
				virtual void removeViewport(ev_int32 ZOrder)
				{
					if (this->_gRef != NULL && this->m_removeViewport_ev_int32_callback != "" && this->isCustomExtend())
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
						jint ZOrder_j = (jint) ZOrder;
						jmethodID __method = __gr->getMethod("removeViewport_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , ZOrder_j);
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
						return this->CRenderTarget::removeViewport(ZOrder);
					}
				}
				virtual void removeAllViewports()
				{
					if (this->_gRef != NULL && this->m_removeAllViewports_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllViewports_void_callback");
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
						return this->CRenderTarget::removeAllViewports();
					}
				}
				virtual void getStatistics(ev_real32& lastFPS, ev_real32& avgFPS, ev_real32& bestFPS, ev_real32& worstFPS) const
				{
					if (this->_gRef != NULL && this->m_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
						jlong lastFPS_j = (jlong) &lastFPS;
						jlong avgFPS_j = (jlong) &avgFPS;
						jlong bestFPS_j = (jlong) &bestFPS;
						jlong worstFPS_j = (jlong) &worstFPS;
						jmethodID __method = __gr->getMethod("getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , lastFPS_j, avgFPS_j, bestFPS_j, worstFPS_j);
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
						return this->CRenderTarget::getStatistics(lastFPS, avgFPS, bestFPS, worstFPS);
					}
				}
				virtual const EarthView::World::Graphic::CRenderTarget::FrameStats& getStatistics() const
				{
					if (this->_gRef != NULL && this->m_getStatistics_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getStatistics_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CRenderTarget::FrameStats &__values1 = *(EarthView::World::Graphic::CRenderTarget::FrameStats*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getStatistics();
					}
				}
				virtual ev_real32 getLastFPS() const
				{
					if (this->_gRef != NULL && this->m_getLastFPS_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLastFPS_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getLastFPS();
					}
				}
				virtual ev_real32 getAverageFPS() const
				{
					if (this->_gRef != NULL && this->m_getAverageFPS_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAverageFPS_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getAverageFPS();
					}
				}
				virtual ev_real32 getBestFPS() const
				{
					if (this->_gRef != NULL && this->m_getBestFPS_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBestFPS_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getBestFPS();
					}
				}
				virtual ev_real32 getWorstFPS() const
				{
					if (this->_gRef != NULL && this->m_getWorstFPS_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorstFPS_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getWorstFPS();
					}
				}
				virtual ev_real32 getBestFrameTime() const
				{
					if (this->_gRef != NULL && this->m_getBestFrameTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBestFrameTime_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getBestFrameTime();
					}
				}
				virtual ev_real32 getWorstFrameTime() const
				{
					if (this->_gRef != NULL && this->m_getWorstFrameTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorstFrameTime_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getWorstFrameTime();
					}
				}
				virtual void resetStatistics()
				{
					if (this->_gRef != NULL && this->m_resetStatistics_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("resetStatistics_void_callback");
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
						return this->CRenderTarget::resetStatistics();
					}
				}
				virtual void getCustomAttribute(const EVString& name, void* pData)
				{
					if (this->_gRef != NULL && this->m_getCustomAttribute_EVString_void_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jmethodID __method = __gr->getMethod("getCustomAttribute_EVString_void_callback");
						__env->CallVoidMethod(__obj, __method , name_j, pData_j);
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
						return this->CRenderTarget::getCustomAttribute(name, pData);
					}
				}
				virtual void addListener(EarthView::World::Graphic::CRenderTargetListener* ref_listener)
				{
					if (this->_gRef != NULL && this->m_addListener_CRenderTargetListener_callback != "" && this->isCustomExtend())
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
						jlong ref_listener_j = (jlong) ref_listener;
						jmethodID __method = __gr->getMethod("addListener_CRenderTargetListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_listener_j);
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
						return this->CRenderTarget::addListener(ref_listener);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CRenderTargetListener* listener)
				{
					if (this->_gRef != NULL && this->m_removeListener_CRenderTargetListener_callback != "" && this->isCustomExtend())
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
						jlong listener_j = (jlong) listener;
						jmethodID __method = __gr->getMethod("removeListener_CRenderTargetListener_callback");
						__env->CallVoidMethod(__obj, __method , listener_j);
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
						return this->CRenderTarget::removeListener(listener);
					}
				}
				virtual void removeAllListeners()
				{
					if (this->_gRef != NULL && this->m_removeAllListeners_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllListeners_void_callback");
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
						return this->CRenderTarget::removeAllListeners();
					}
				}
				virtual void setPriority(ev_uchar priority)
				{
					if (this->_gRef != NULL && this->m_setPriority_ev_uchar_callback != "" && this->isCustomExtend())
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
						jshort priority_j = (jshort) priority;
						jmethodID __method = __gr->getMethod("setPriority_ev_uchar_callback");
						__env->CallVoidMethod(__obj, __method , priority_j);
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
						return this->CRenderTarget::setPriority(priority);
					}
				}
				virtual ev_uchar getPriority() const
				{
					if (this->_gRef != NULL && this->m_getPriority_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPriority_void_callback");
						jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uchar __values1 = (ev_uchar) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getPriority();
					}
				}
				virtual ev_bool isActive() const
				{
					if (this->_gRef != NULL && this->m_isActive_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isActive_void_callback");
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
						return this->CRenderTarget::isActive();
					}
				}
				virtual void setActive(ev_bool state)
				{
					if (this->_gRef != NULL && this->m_setActive_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean state_j = (jboolean) state;
						jmethodID __method = __gr->getMethod("setActive_ev_bool_callback");
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
						return this->CRenderTarget::setActive(state);
					}
				}
				virtual void setAutoUpdated(ev_bool autoupdate)
				{
					if (this->_gRef != NULL && this->m_setAutoUpdated_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean autoupdate_j = (jboolean) autoupdate;
						jmethodID __method = __gr->getMethod("setAutoUpdated_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , autoupdate_j);
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
						return this->CRenderTarget::setAutoUpdated(autoupdate);
					}
				}
				virtual ev_bool isAutoUpdated() const
				{
					if (this->_gRef != NULL && this->m_isAutoUpdated_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isAutoUpdated_void_callback");
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
						return this->CRenderTarget::isAutoUpdated();
					}
				}
				virtual void copyContentsToMemory(const EarthView::World::Graphic::CPixelBox& dst, EarthView::World::Graphic::CRenderTarget::FrameBuffer buffer)
				{
					if (this->_gRef != NULL && this->m_copyContentsToMemory_CPixelBox_FrameBuffer_callback != "" && this->isCustomExtend())
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
						jlong dst_j = (jlong) &dst;
						jint buffer_j = (jint) buffer;
						jmethodID __method = __gr->getMethod("copyContentsToMemory_CPixelBox_FrameBuffer_callback");
						__env->CallVoidMethod(__obj, __method , dst_j, buffer_j);
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
						return this->CRenderTarget::copyContentsToMemory(dst, buffer);
					}
				}
				virtual void copyContentsToMemory(const EarthView::World::Graphic::CPixelBox& dst)
				{
					if (this->_gRef != NULL && this->m_copyContentsToMemory_CPixelBox_callback != "" && this->isCustomExtend())
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
						jlong dst_j = (jlong) &dst;
						jmethodID __method = __gr->getMethod("copyContentsToMemory_CPixelBox_callback");
						__env->CallVoidMethod(__obj, __method , dst_j);
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
						return this->CRenderTarget::copyContentsToMemory(dst);
					}
				}
				virtual EarthView::World::Graphic::PixelFormat suggestPixelFormat() const
				{
					if (this->_gRef != NULL && this->m_suggestPixelFormat_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("suggestPixelFormat_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::PixelFormat __values1 = (EarthView::World::Graphic::PixelFormat) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::suggestPixelFormat();
					}
				}
				virtual EVString writeContentsToTimestampedFile(const EVString& filenamePrefix, const EVString& filenameSuffix)
				{
					if (this->_gRef != NULL && this->m_writeContentsToTimestampedFile_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filenamePrefix_wch = filenamePrefix;
						jstring filenamePrefix_j = __env->NewString((const jchar*)filenamePrefix_wch.getString(), filenamePrefix_wch.size());
						EarthView::World::Core::ev_wstring filenameSuffix_wch = filenameSuffix;
						jstring filenameSuffix_j = __env->NewString((const jchar*)filenameSuffix_wch.getString(), filenameSuffix_wch.size());
						jmethodID __method = __gr->getMethod("writeContentsToTimestampedFile_EVString_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , filenamePrefix_j, filenameSuffix_j);
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
						return this->CRenderTarget::writeContentsToTimestampedFile(filenamePrefix, filenameSuffix);
					}
				}
				virtual ev_bool requiresTextureFlipping() const
				{
					if (this->_gRef != NULL && this->m_requiresTextureFlipping_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("requiresTextureFlipping_void_callback");
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
						return this->CRenderTarget::requiresTextureFlipping();
					}
				}
				virtual ev_size_t getTriangleCount() const
				{
					if (this->_gRef != NULL && this->m_getTriangleCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTriangleCount_void_callback");
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
						return this->CRenderTarget::getTriangleCount();
					}
				}
				virtual ev_size_t getBatchCount() const
				{
					if (this->_gRef != NULL && this->m_getBatchCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBatchCount_void_callback");
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
						return this->CRenderTarget::getBatchCount();
					}
				}
				virtual ev_size_t getVertexCount() const
				{
					if (this->_gRef != NULL && this->m_getVertexCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVertexCount_void_callback");
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
						return this->CRenderTarget::getVertexCount();
					}
				}
				virtual void _notifyCameraRemoved(const EarthView::World::Graphic::CCamera* cam)
				{
					if (this->_gRef != NULL && this->m__notifyCameraRemoved_CCamera_callback != "" && this->isCustomExtend())
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
						jlong cam_j = (jlong) cam;
						jmethodID __method = __gr->getMethod("_notifyCameraRemoved_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , cam_j);
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
						return this->CRenderTarget::_notifyCameraRemoved(cam);
					}
				}
				virtual ev_bool isPrimary() const
				{
					if (this->_gRef != NULL && this->m_isPrimary_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isPrimary_void_callback");
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
						return this->CRenderTarget::isPrimary();
					}
				}
				virtual ev_bool isHardwareGammaEnabled() const
				{
					if (this->_gRef != NULL && this->m_isHardwareGammaEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isHardwareGammaEnabled_void_callback");
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
						return this->CRenderTarget::isHardwareGammaEnabled();
					}
				}
				virtual ev_uint32 getFSAA() const
				{
					if (this->_gRef != NULL && this->m_getFSAA_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFSAA_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::getFSAA();
					}
				}
				virtual EVString getFSAAHint() const
				{
					if (this->_gRef != NULL && this->m_getFSAAHint_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFSAAHint_void_callback");
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
						return this->CRenderTarget::getFSAAHint();
					}
				}
				virtual EarthView::World::Graphic::CRenderTarget::Impl* _getImpl()
				{
					if (this->_gRef != NULL && this->m__getImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_getImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CRenderTarget::Impl *__values1 = (EarthView::World::Graphic::CRenderTarget::Impl*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderTarget::_getImpl();
					}
				}
				virtual void _beginUpdate()
				{
					if (this->_gRef != NULL && this->m__beginUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_beginUpdate_void_callback");
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
						return this->CRenderTarget::_beginUpdate();
					}
				}
				virtual void _updateViewport(ev_int32 zorder, ev_bool updateStatistics)
				{
					if (this->_gRef != NULL && this->m__updateViewport_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
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
						jint zorder_j = (jint) zorder;
						jboolean updateStatistics_j = (jboolean) updateStatistics;
						jmethodID __method = __gr->getMethod("_updateViewport_ev_int32_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , zorder_j, updateStatistics_j);
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
						return this->CRenderTarget::_updateViewport(zorder, updateStatistics);
					}
				}
				virtual void _updateViewport(ev_int32 zorder)
				{
					if (this->_gRef != NULL && this->m__updateViewport_ev_int32_callback != "" && this->isCustomExtend())
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
						jint zorder_j = (jint) zorder;
						jmethodID __method = __gr->getMethod("_updateViewport_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , zorder_j);
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
						return this->CRenderTarget::_updateViewport(zorder);
					}
				}
				virtual void _updateViewport(EarthView::World::Graphic::CViewport* viewport, ev_bool updateStatistics)
				{
					if (this->_gRef != NULL && this->m__updateViewport_CViewport_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jboolean updateStatistics_j = (jboolean) updateStatistics;
						jmethodID __method = __gr->getMethod("_updateViewport_CViewport_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j, updateStatistics_j);
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
						return this->CRenderTarget::_updateViewport(viewport, updateStatistics);
					}
				}
				virtual void _updateViewport(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m__updateViewport_CViewport_callback != "" && this->isCustomExtend())
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
						jlong viewport_j = (jlong) viewport;
						jmethodID __method = __gr->getMethod("_updateViewport_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , viewport_j);
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
						return this->CRenderTarget::_updateViewport(viewport);
					}
				}
				virtual void _updateAutoUpdatedViewports(ev_bool updateStatistics)
				{
					if (this->_gRef != NULL && this->m__updateAutoUpdatedViewports_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean updateStatistics_j = (jboolean) updateStatistics;
						jmethodID __method = __gr->getMethod("_updateAutoUpdatedViewports_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , updateStatistics_j);
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
						return this->CRenderTarget::_updateAutoUpdatedViewports(updateStatistics);
					}
				}
				virtual void _updateAutoUpdatedViewports()
				{
					if (this->_gRef != NULL && this->m__updateAutoUpdatedViewports_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_updateAutoUpdatedViewports_void_callback");
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
						return this->CRenderTarget::_updateAutoUpdatedViewports();
					}
				}
				virtual void _endUpdate()
				{
					if (this->_gRef != NULL && this->m__endUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_endUpdate_void_callback");
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
						return this->CRenderTarget::_endUpdate();
					}
				}
				virtual void firePreUpdate()
				{
					if (this->_gRef != NULL && this->m_firePreUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("firePreUpdate_void_callback");
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
						return this->CRenderTarget::firePreUpdate();
					}
				}
				virtual void firePostUpdate()
				{
					if (this->_gRef != NULL && this->m_firePostUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("firePostUpdate_void_callback");
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
						return this->CRenderTarget::firePostUpdate();
					}
				}
				virtual void fireViewportPreUpdate(EarthView::World::Graphic::CViewport* vp)
				{
					if (this->_gRef != NULL && this->m_fireViewportPreUpdate_CViewport_callback != "" && this->isCustomExtend())
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
						jlong vp_j = (jlong) vp;
						jmethodID __method = __gr->getMethod("fireViewportPreUpdate_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , vp_j);
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
						return this->CRenderTarget::fireViewportPreUpdate(vp);
					}
				}
				virtual void fireViewportPostUpdate(EarthView::World::Graphic::CViewport* vp)
				{
					if (this->_gRef != NULL && this->m_fireViewportPostUpdate_CViewport_callback != "" && this->isCustomExtend())
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
						jlong vp_j = (jlong) vp;
						jmethodID __method = __gr->getMethod("fireViewportPostUpdate_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , vp_j);
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
						return this->CRenderTarget::fireViewportPostUpdate(vp);
					}
				}
				virtual void fireViewportAdded(EarthView::World::Graphic::CViewport* vp)
				{
					if (this->_gRef != NULL && this->m_fireViewportAdded_CViewport_callback != "" && this->isCustomExtend())
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
						jlong vp_j = (jlong) vp;
						jmethodID __method = __gr->getMethod("fireViewportAdded_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , vp_j);
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
						return this->CRenderTarget::fireViewportAdded(vp);
					}
				}
				virtual void fireViewportRemoved(EarthView::World::Graphic::CViewport* vp)
				{
					if (this->_gRef != NULL && this->m_fireViewportRemoved_CViewport_callback != "" && this->isCustomExtend())
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
						jlong vp_j = (jlong) vp;
						jmethodID __method = __gr->getMethod("fireViewportRemoved_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , vp_j);
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
						return this->CRenderTarget::fireViewportRemoved(vp);
					}
				}
				virtual void updateImpl()
				{
					if (this->_gRef != NULL && this->m_updateImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("updateImpl_void_callback");
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
						return this->CRenderTarget::updateImpl();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderTargetProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_RenderTarget_00024StatFlagsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CRenderTarget::SF_NONE,
					CRenderTarget::SF_FPS,
					CRenderTarget::SF_AVG_FPS,
					CRenderTarget::SF_BEST_FPS,
					CRenderTarget::SF_WORST_FPS,
					CRenderTarget::SF_TRIANGLE_COUNT,
					CRenderTarget::SF_ALL
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = new EarthView::World::Graphic::CRenderTarget::FrameStats();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1lastFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->lastFPS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1lastFPS_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->lastFPS = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1avgFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->avgFPS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1avgFPS_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->avgFPS = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1bestFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->bestFPS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1bestFPS_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->bestFPS = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1worstFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->worstFPS);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1worstFPS_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->worstFPS = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1bestFrameTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->bestFrameTime);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1bestFrameTime_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->bestFrameTime = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1worstFrameTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->worstFrameTime);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1worstFrameTime_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->worstFrameTime = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1triangleCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->triangleCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1triangleCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->triangleCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1batchCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->batchCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1batchCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->batchCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_get_1vertexCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->vertexCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameStats_set_1vertexCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderTarget::FrameStats *pObjectX = (EarthView::World::Graphic::CRenderTarget::FrameStats*)pObjXXXX;
				pObjectX->vertexCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_RenderTarget_00024FrameBufferHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CRenderTarget::FB_FRONT,
					CRenderTarget::FB_BACK,
					CRenderTarget::FB_AUTO
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					const EVString& __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				const EVString& __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_getMetrics_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j, jlong colourDepth_j)
			{
				ev_uint32 &width = *(ev_uint32*) width_j;
				ev_uint32 &height = *(ev_uint32*) height_j;
				ev_uint32 &colourDepth = *(ev_uint32*) colourDepth_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::getMetrics(width, height, colourDepth);
				}
				else
				{
					pObjectX->getMetrics(width, height, colourDepth);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getMetrics_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMetrics_ev_uint32_ev_uint32_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMetrics_ev_uint32_ev_uint32_ev_uint32_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_getMetrics_1ev_1uint32_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j, jlong height_j, jlong colourDepth_j)
			{
				ev_uint32 &width = *(ev_uint32*) width_j;
				ev_uint32 &height = *(ev_uint32*) height_j;
				ev_uint32 &colourDepth = *(ev_uint32*) colourDepth_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::getMetrics(width, height, colourDepth);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getColourDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getColourDepth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getColourDepth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getColourDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getColourDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getColourDepth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getColourDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getColourDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setDepthBufferPool_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poolId_j)
			{
				ev_uint16 poolId = (ev_uint16) poolId_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->setDepthBufferPool(poolId);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderTarget_getDepthBufferPool_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getDepthBufferPool();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getDepthBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CDepthBuffer* __values1 = pObjectX->getDepthBuffer();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_attachDepthBuffer_1CDepthBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_depthBuffer_j)
			{
				EarthView::World::Graphic::CDepthBuffer *ref_depthBuffer = (EarthView::World::Graphic::CDepthBuffer*) ref_depthBuffer_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::attachDepthBuffer(ref_depthBuffer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->attachDepthBuffer(ref_depthBuffer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1attachDepthBuffer_1CDepthBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachDepthBuffer_CDepthBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachDepthBuffer_CDepthBuffer_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_attachDepthBuffer_1CDepthBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_depthBuffer_j)
			{
				EarthView::World::Graphic::CDepthBuffer *ref_depthBuffer = (EarthView::World::Graphic::CDepthBuffer*) ref_depthBuffer_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::attachDepthBuffer(ref_depthBuffer);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_detachDepthBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::detachDepthBuffer();
				}
				else
				{
					pObjectX->detachDepthBuffer();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1detachDepthBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachDepthBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachDepthBuffer_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_detachDepthBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::detachDepthBuffer();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1detachDepthBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_detachDepthBuffer();
				}
				else
				{
					pObjectX->_detachDepthBuffer();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1detachDepthBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__detachDepthBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_detachDepthBuffer_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1detachDepthBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_detachDepthBuffer();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_update_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean swapBuffers_j)
			{
				ev_bool swapBuffers = (ev_bool) swapBuffers_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::update(swapBuffers);
				}
				else
				{
					pObjectX->update(swapBuffers);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1update_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_update_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean swapBuffers_j)
			{
				ev_bool swapBuffers = (ev_bool) swapBuffers_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::update(swapBuffers);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::update();
				}
				else
				{
					pObjectX->update();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::update();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_swapBuffers_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean waitForVSync_j)
			{
				ev_bool waitForVSync = (ev_bool) waitForVSync_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::swapBuffers(waitForVSync);
				}
				else
				{
					pObjectX->swapBuffers(waitForVSync);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1swapBuffers_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_swapBuffers_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"swapBuffers_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_swapBuffers_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean waitForVSync_j)
			{
				ev_bool waitForVSync = (ev_bool) waitForVSync_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::swapBuffers(waitForVSync);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_swapBuffers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::swapBuffers();
				}
				else
				{
					pObjectX->swapBuffers();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1swapBuffers_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_swapBuffers_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"swapBuffers_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_swapBuffers_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::swapBuffers();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j, jfloat top_j, jfloat width_j, jfloat height_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				ev_real32 top = (ev_real32) top_j;
				ev_real32 width = (ev_real32) width_j;
				ev_real32 height = (ev_real32) height_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left, top, width, height);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->addViewport(ref_cam, ZOrder, left, top, width, height);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_callback", "(JIFFFF)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j, jfloat top_j, jfloat width_j, jfloat height_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				ev_real32 top = (ev_real32) top_j;
				ev_real32 width = (ev_real32) width_j;
				ev_real32 height = (ev_real32) height_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left, top, width, height);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j, jfloat top_j, jfloat width_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				ev_real32 top = (ev_real32) top_j;
				ev_real32 width = (ev_real32) width_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left, top, width);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->addViewport(ref_cam, ZOrder, left, top, width);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addViewport_CCamera_ev_int32_ev_real32_ev_real32_ev_real32_callback", "(JIFFF)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j, jfloat top_j, jfloat width_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				ev_real32 top = (ev_real32) top_j;
				ev_real32 width = (ev_real32) width_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left, top, width);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j, jfloat top_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				ev_real32 top = (ev_real32) top_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left, top);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->addViewport(ref_cam, ZOrder, left, top);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addViewport_CCamera_ev_int32_ev_real32_ev_real32_callback", "(JIFF)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j, jfloat top_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				ev_real32 top = (ev_real32) top_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left, top);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->addViewport(ref_cam, ZOrder, left);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addViewport_1CCamera_1ev_1int32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addViewport_CCamera_ev_int32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addViewport_CCamera_ev_int32_ev_real32_callback", "(JIF)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j, jfloat left_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				ev_real32 left = (ev_real32) left_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder, left);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->addViewport(ref_cam, ZOrder);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addViewport_1CCamera_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addViewport_CCamera_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addViewport_CCamera_ev_int32_callback", "(JI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jint ZOrder_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam, ZOrder);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->addViewport(ref_cam);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addViewport_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addViewport_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addViewport_CCamera_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_addViewport_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::addViewport(ref_cam);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderTarget_getNumViewports_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getNumViewports();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumViewports();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getNumViewports_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumViewports_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumViewports_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderTarget_getNumViewports_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getNumViewports();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getViewport_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getViewport(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewport(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getViewport_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewport_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewport_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getViewport_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getViewport(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getViewportByZOrder_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ZOrder_j)
			{
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getViewportByZOrder(ZOrder);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CViewport* __values1 = pObjectX->getViewportByZOrder(ZOrder);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getViewportByZOrder_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewportByZOrder_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewportByZOrder_ev_int32_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getViewportByZOrder_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ZOrder_j)
			{
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CViewport* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getViewportByZOrder(ZOrder);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_hasViewportWithZOrder_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ZOrder_j)
			{
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::hasViewportWithZOrder(ZOrder);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->hasViewportWithZOrder(ZOrder);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1hasViewportWithZOrder_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasViewportWithZOrder_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasViewportWithZOrder_ev_int32_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_hasViewportWithZOrder_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ZOrder_j)
			{
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::hasViewportWithZOrder(ZOrder);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeViewport_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ZOrder_j)
			{
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::removeViewport(ZOrder);
				}
				else
				{
					pObjectX->removeViewport(ZOrder);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1removeViewport_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeViewport_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeViewport_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeViewport_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ZOrder_j)
			{
				ev_int32 ZOrder = (ev_int32) ZOrder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::removeViewport(ZOrder);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeAllViewports_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::removeAllViewports();
				}
				else
				{
					pObjectX->removeAllViewports();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1removeAllViewports_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllViewports_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllViewports_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeAllViewports_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::removeAllViewports();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_getStatistics_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lastFPS_j, jlong avgFPS_j, jlong bestFPS_j, jlong worstFPS_j)
			{
				ev_real32 &lastFPS = *(ev_real32*) lastFPS_j;
				ev_real32 &avgFPS = *(ev_real32*) avgFPS_j;
				ev_real32 &bestFPS = *(ev_real32*) bestFPS_j;
				ev_real32 &worstFPS = *(ev_real32*) worstFPS_j;
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::getStatistics(lastFPS, avgFPS, bestFPS, worstFPS);
				}
				else
				{
					pObjectX->getStatistics(lastFPS, avgFPS, bestFPS, worstFPS);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getStatistics_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStatistics_ev_real32_ev_real32_ev_real32_ev_real32_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_getStatistics_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lastFPS_j, jlong avgFPS_j, jlong bestFPS_j, jlong worstFPS_j)
			{
				ev_real32 &lastFPS = *(ev_real32*) lastFPS_j;
				ev_real32 &avgFPS = *(ev_real32*) avgFPS_j;
				ev_real32 &bestFPS = *(ev_real32*) bestFPS_j;
				ev_real32 &worstFPS = *(ev_real32*) worstFPS_j;
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::getStatistics(lastFPS, avgFPS, bestFPS, worstFPS);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getStatistics_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					const EarthView::World::Graphic::CRenderTarget::FrameStats& __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getStatistics();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CRenderTarget::FrameStats& __values1 = pObjectX->getStatistics();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getStatistics_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStatistics_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStatistics_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getStatistics_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				const EarthView::World::Graphic::CRenderTarget::FrameStats& __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getStatistics();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getLastFPS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getLastFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getLastFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getLastFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLastFPS_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLastFPS_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getLastFPS_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getLastFPS();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getAverageFPS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getAverageFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getAverageFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getAverageFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAverageFPS_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAverageFPS_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getAverageFPS_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getAverageFPS();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getBestFPS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getBestFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getBestFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getBestFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBestFPS_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBestFPS_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getBestFPS_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getBestFPS();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getWorstFPS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getWorstFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getWorstFPS();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getWorstFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorstFPS_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorstFPS_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getWorstFPS_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getWorstFPS();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getBestFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getBestFrameTime();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getBestFrameTime();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getBestFrameTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBestFrameTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBestFrameTime_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getBestFrameTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getBestFrameTime();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getWorstFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getWorstFrameTime();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getWorstFrameTime();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getWorstFrameTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorstFrameTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorstFrameTime_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_RenderTarget_getWorstFrameTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getWorstFrameTime();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_resetStatistics_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::resetStatistics();
				}
				else
				{
					pObjectX->resetStatistics();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1resetStatistics_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetStatistics_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetStatistics_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_resetStatistics_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::resetStatistics();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_getCustomAttribute_1EVString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong pData_j)
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
				void *pData = (void*) pData_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::getCustomAttribute(name, pData);
				}
				else
				{
					pObjectX->getCustomAttribute(name, pData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getCustomAttribute_1EVString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCustomAttribute_EVString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCustomAttribute_EVString_void_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_getCustomAttribute_1EVString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong pData_j)
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
				void *pData = (void*) pData_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::getCustomAttribute(name, pData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_addListener_1CRenderTargetListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CRenderTargetListener *ref_listener = (EarthView::World::Graphic::CRenderTargetListener*) ref_listener_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::addListener(ref_listener);
				}
				else
				{
					pObjectX->addListener(ref_listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1addListener_1CRenderTargetListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CRenderTargetListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CRenderTargetListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_addListener_1CRenderTargetListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CRenderTargetListener *ref_listener = (EarthView::World::Graphic::CRenderTargetListener*) ref_listener_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::addListener(ref_listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeListener_1CRenderTargetListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRenderTargetListener *listener = (EarthView::World::Graphic::CRenderTargetListener*) listener_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::removeListener(listener);
				}
				else
				{
					pObjectX->removeListener(listener);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1removeListener_1CRenderTargetListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CRenderTargetListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CRenderTargetListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeListener_1CRenderTargetListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CRenderTargetListener *listener = (EarthView::World::Graphic::CRenderTargetListener*) listener_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::removeListener(listener);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeAllListeners_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::removeAllListeners();
				}
				else
				{
					pObjectX->removeAllListeners();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1removeAllListeners_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllListeners_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllListeners_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_removeAllListeners_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::removeAllListeners();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setPriority_1ev_1uchar(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort priority_j)
			{
				ev_uchar priority = (ev_uchar) priority_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::setPriority(priority);
				}
				else
				{
					pObjectX->setPriority(priority);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1setPriority_1ev_1uchar(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPriority_ev_uchar_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPriority_ev_uchar_callback", "(S)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setPriority_1ev_1uchar_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort priority_j)
			{
				ev_uchar priority = (ev_uchar) priority_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::setPriority(priority);
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RenderTarget_getPriority_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_uchar __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getPriority();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				else
				{
					ev_uchar __values1 = pObjectX->getPriority();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getPriority_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPriority_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPriority_void_callback", "()S");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RenderTarget_getPriority_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uchar __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getPriority();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isActive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isActive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isActive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1isActive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isActive_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isActive_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isActive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isActive();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setActive_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
			{
				ev_bool state = (ev_bool) state_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::setActive(state);
				}
				else
				{
					pObjectX->setActive(state);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1setActive_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setActive_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setActive_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setActive_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
			{
				ev_bool state = (ev_bool) state_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::setActive(state);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setAutoUpdated_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoupdate_j)
			{
				ev_bool autoupdate = (ev_bool) autoupdate_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::setAutoUpdated(autoupdate);
				}
				else
				{
					pObjectX->setAutoUpdated(autoupdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1setAutoUpdated_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAutoUpdated_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAutoUpdated_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_setAutoUpdated_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoupdate_j)
			{
				ev_bool autoupdate = (ev_bool) autoupdate_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::setAutoUpdated(autoupdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isAutoUpdated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isAutoUpdated();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isAutoUpdated();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1isAutoUpdated_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isAutoUpdated_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isAutoUpdated_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isAutoUpdated_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isAutoUpdated();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_copyContentsToMemory_1CPixelBox_1FrameBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dst_j, jint buffer_j)
			{
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CRenderTarget::FrameBuffer buffer = (EarthView::World::Graphic::CRenderTarget::FrameBuffer) buffer_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::copyContentsToMemory(dst, buffer);
				}
				else
				{
					pObjectX->copyContentsToMemory(dst, buffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1copyContentsToMemory_1CPixelBox_1FrameBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyContentsToMemory_CPixelBox_FrameBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyContentsToMemory_CPixelBox_FrameBuffer_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_copyContentsToMemory_1CPixelBox_1FrameBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dst_j, jint buffer_j)
			{
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CRenderTarget::FrameBuffer buffer = (EarthView::World::Graphic::CRenderTarget::FrameBuffer) buffer_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::copyContentsToMemory(dst, buffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_copyContentsToMemory_1CPixelBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dst_j)
			{
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::copyContentsToMemory(dst);
				}
				else
				{
					pObjectX->copyContentsToMemory(dst);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1copyContentsToMemory_1CPixelBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyContentsToMemory_CPixelBox_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyContentsToMemory_CPixelBox_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_copyContentsToMemory_1CPixelBox_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dst_j)
			{
				const EarthView::World::Graphic::CPixelBox &dst = *(EarthView::World::Graphic::CPixelBox*) dst_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::copyContentsToMemory(dst);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderTarget_suggestPixelFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::suggestPixelFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->suggestPixelFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1suggestPixelFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_suggestPixelFormat_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"suggestPixelFormat_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderTarget_suggestPixelFormat_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::suggestPixelFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_writeContentsToFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->writeContentsToFile(filename);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderTarget_writeContentsToTimestampedFile_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filenamePrefix_j, jstring filenameSuffix_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filenamePrefix_ch = (const ev_char*)__env->GetStringUTFChars(filenamePrefix_j,JNI_FALSE);
				const EVString filenamePrefix = filenamePrefix_ch;
				__env->ReleaseStringUTFChars(filenamePrefix_j, (const char *)filenamePrefix_ch);
				#else
				const ev_wchar* filenamePrefix_ch = (const ev_wchar*)__env->GetStringChars(filenamePrefix_j,JNI_FALSE);
				const EVString filenamePrefix = filenamePrefix_ch;
				__env->ReleaseStringChars(filenamePrefix_j, (const jchar *)filenamePrefix_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filenameSuffix_ch = (const ev_char*)__env->GetStringUTFChars(filenameSuffix_j,JNI_FALSE);
				const EVString filenameSuffix = filenameSuffix_ch;
				__env->ReleaseStringUTFChars(filenameSuffix_j, (const char *)filenameSuffix_ch);
				#else
				const ev_wchar* filenameSuffix_ch = (const ev_wchar*)__env->GetStringChars(filenameSuffix_j,JNI_FALSE);
				const EVString filenameSuffix = filenameSuffix_ch;
				__env->ReleaseStringChars(filenameSuffix_j, (const jchar *)filenameSuffix_ch);
				#endif
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::writeContentsToTimestampedFile(filenamePrefix, filenameSuffix);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->writeContentsToTimestampedFile(filenamePrefix, filenameSuffix);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1writeContentsToTimestampedFile_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeContentsToTimestampedFile_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeContentsToTimestampedFile_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderTarget_writeContentsToTimestampedFile_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filenamePrefix_j, jstring filenameSuffix_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filenamePrefix_ch = (const ev_char*)__env->GetStringUTFChars(filenamePrefix_j,JNI_FALSE);
				const EVString filenamePrefix = filenamePrefix_ch;
				__env->ReleaseStringUTFChars(filenamePrefix_j, (const char *)filenamePrefix_ch);
				#else
				const ev_wchar* filenamePrefix_ch = (const ev_wchar*)__env->GetStringChars(filenamePrefix_j,JNI_FALSE);
				const EVString filenamePrefix = filenamePrefix_ch;
				__env->ReleaseStringChars(filenamePrefix_j, (const jchar *)filenamePrefix_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filenameSuffix_ch = (const ev_char*)__env->GetStringUTFChars(filenameSuffix_j,JNI_FALSE);
				const EVString filenameSuffix = filenameSuffix_ch;
				__env->ReleaseStringUTFChars(filenameSuffix_j, (const char *)filenameSuffix_ch);
				#else
				const ev_wchar* filenameSuffix_ch = (const ev_wchar*)__env->GetStringChars(filenameSuffix_j,JNI_FALSE);
				const EVString filenameSuffix = filenameSuffix_ch;
				__env->ReleaseStringChars(filenameSuffix_j, (const jchar *)filenameSuffix_ch);
				#endif
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::writeContentsToTimestampedFile(filenamePrefix, filenameSuffix);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_requiresTextureFlipping_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::requiresTextureFlipping();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->requiresTextureFlipping();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1requiresTextureFlipping_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_requiresTextureFlipping_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"requiresTextureFlipping_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_requiresTextureFlipping_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::requiresTextureFlipping();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getTriangleCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getTriangleCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getTriangleCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getTriangleCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTriangleCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTriangleCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getTriangleCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getTriangleCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getBatchCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getBatchCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getBatchCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getBatchCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBatchCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBatchCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getBatchCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getBatchCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getVertexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getVertexCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getVertexCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getVertexCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVertexCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVertexCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getVertexCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getVertexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1notifyCameraRemoved_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_notifyCameraRemoved(cam);
				}
				else
				{
					pObjectX->_notifyCameraRemoved(cam);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1notifyCameraRemoved_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyCameraRemoved_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyCameraRemoved_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1notifyCameraRemoved_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_notifyCameraRemoved(cam);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isPrimary_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isPrimary();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isPrimary();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1isPrimary_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPrimary_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPrimary_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isPrimary_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isPrimary();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isHardwareGammaEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isHardwareGammaEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isHardwareGammaEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1isHardwareGammaEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isHardwareGammaEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isHardwareGammaEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderTarget_isHardwareGammaEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::isHardwareGammaEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getFSAA_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getFSAA();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getFSAA();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getFSAA_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFSAA_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFSAA_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget_getFSAA_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getFSAA();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderTarget_getFSAAHint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getFSAAHint();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getFSAAHint();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1getFSAAHint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFSAAHint_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFSAAHint_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderTarget_getFSAAHint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::getFSAAHint();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget__1getImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					EarthView::World::Graphic::CRenderTarget::Impl* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::_getImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CRenderTarget::Impl* __values1 = pObjectX->_getImpl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1getImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTarget__1getImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget::Impl* __values1 = pObjectX->EarthView::World::Graphic::CRenderTarget::_getImpl();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1beginUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_beginUpdate();
				}
				else
				{
					pObjectX->_beginUpdate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1beginUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__beginUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_beginUpdate_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1beginUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_beginUpdate();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint zorder_j, jboolean updateStatistics_j)
			{
				ev_int32 zorder = (ev_int32) zorder_j;
				ev_bool updateStatistics = (ev_bool) updateStatistics_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(zorder, updateStatistics);
				}
				else
				{
					pObjectX->_updateViewport(zorder, updateStatistics);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1updateViewport_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateViewport_ev_int32_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateViewport_ev_int32_ev_bool_callback", "(IZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1ev_1int32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint zorder_j, jboolean updateStatistics_j)
			{
				ev_int32 zorder = (ev_int32) zorder_j;
				ev_bool updateStatistics = (ev_bool) updateStatistics_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(zorder, updateStatistics);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint zorder_j)
			{
				ev_int32 zorder = (ev_int32) zorder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(zorder);
				}
				else
				{
					pObjectX->_updateViewport(zorder);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1updateViewport_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateViewport_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateViewport_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint zorder_j)
			{
				ev_int32 zorder = (ev_int32) zorder_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(zorder);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1CViewport_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j, jboolean updateStatistics_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				ev_bool updateStatistics = (ev_bool) updateStatistics_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(viewport, updateStatistics);
				}
				else
				{
					pObjectX->_updateViewport(viewport, updateStatistics);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1updateViewport_1CViewport_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateViewport_CViewport_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateViewport_CViewport_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1CViewport_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j, jboolean updateStatistics_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				ev_bool updateStatistics = (ev_bool) updateStatistics_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(viewport, updateStatistics);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(viewport);
				}
				else
				{
					pObjectX->_updateViewport(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1updateViewport_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateViewport_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateViewport_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateViewport_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_updateViewport(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateAutoUpdatedViewports_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean updateStatistics_j)
			{
				ev_bool updateStatistics = (ev_bool) updateStatistics_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_updateAutoUpdatedViewports(updateStatistics);
				}
				else
				{
					pObjectX->_updateAutoUpdatedViewports(updateStatistics);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1updateAutoUpdatedViewports_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateAutoUpdatedViewports_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateAutoUpdatedViewports_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateAutoUpdatedViewports_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean updateStatistics_j)
			{
				ev_bool updateStatistics = (ev_bool) updateStatistics_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_updateAutoUpdatedViewports(updateStatistics);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateAutoUpdatedViewports_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_updateAutoUpdatedViewports();
				}
				else
				{
					pObjectX->_updateAutoUpdatedViewports();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1updateAutoUpdatedViewports_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__updateAutoUpdatedViewports_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_updateAutoUpdatedViewports_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1updateAutoUpdatedViewports_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_updateAutoUpdatedViewports();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1endUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::_endUpdate();
				}
				else
				{
					pObjectX->_endUpdate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1_1endUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__endUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_endUpdate_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget__1endUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::_endUpdate();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_firePreUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::firePreUpdate();
				}
				else
				{
					pObjectX->firePreUpdate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1firePreUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_firePreUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"firePreUpdate_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_firePreUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::firePreUpdate();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_firePostUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::firePostUpdate();
				}
				else
				{
					pObjectX->firePostUpdate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1firePostUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_firePostUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"firePostUpdate_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_firePostUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::firePostUpdate();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportPreUpdate_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportPreUpdate(vp);
				}
				else
				{
					pObjectX->fireViewportPreUpdate(vp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1fireViewportPreUpdate_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireViewportPreUpdate_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireViewportPreUpdate_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportPreUpdate_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportPreUpdate(vp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportPostUpdate_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportPostUpdate(vp);
				}
				else
				{
					pObjectX->fireViewportPostUpdate(vp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1fireViewportPostUpdate_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireViewportPostUpdate_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireViewportPostUpdate_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportPostUpdate_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportPostUpdate(vp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportAdded_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportAdded(vp);
				}
				else
				{
					pObjectX->fireViewportAdded(vp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1fireViewportAdded_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireViewportAdded_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireViewportAdded_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportAdded_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportAdded(vp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportRemoved_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportRemoved(vp);
				}
				else
				{
					pObjectX->fireViewportRemoved(vp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1fireViewportRemoved_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fireViewportRemoved_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fireViewportRemoved_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_fireViewportRemoved_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vp_j)
			{
				EarthView::World::Graphic::CViewport *vp = (EarthView::World::Graphic::CViewport*) vp_j;
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::fireViewportRemoved(vp);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_updateImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTarget::updateImpl();
				}
				else
				{
					pObjectX->updateImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_register_1updateImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetProxy *pObjectX = (JCRenderTargetProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTarget_updateImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderTarget *pObjectX = (EarthView::World::Graphic::CRenderTarget*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTarget::updateImpl();
			}
		}
	}
}
