/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/viewport.h"
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
			class JCViewportProxy : public EarthView::World::Graphic::CViewport
			{
			 private:
				EarthView::World::Core::ev_string m_setRenderQueueInvocationSequenceName_EVString_callback;
				EarthView::World::Core::ev_string m_getRenderQueueInvocationSequenceName_void_callback;
			public:
				JCViewportProxy(EarthView::World::Core::CNameValuePairList *pList) : CViewport(pList)
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
				void register_setRenderQueueInvocationSequenceName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRenderQueueInvocationSequenceName_EVString_callback = __method;
				}
				void register_getRenderQueueInvocationSequenceName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderQueueInvocationSequenceName_void_callback = __method;
				}
				virtual void setRenderQueueInvocationSequenceName(const EVString& sequenceName)
				{
					if (this->_gRef != NULL && this->m_setRenderQueueInvocationSequenceName_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring sequenceName_wch = sequenceName;
						jstring sequenceName_j = __env->NewString((const jchar*)sequenceName_wch.getString(), sequenceName_wch.size());
						jmethodID __method = __gr->getMethod("setRenderQueueInvocationSequenceName_EVString_callback");
						__env->CallVoidMethod(__obj, __method , sequenceName_j);
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
						return this->CViewport::setRenderQueueInvocationSequenceName(sequenceName);
					}
				}
				virtual EVString getRenderQueueInvocationSequenceName() const
				{
					if (this->_gRef != NULL && this->m_getRenderQueueInvocationSequenceName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getRenderQueueInvocationSequenceName_void_callback");
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
						return this->CViewport::getRenderQueueInvocationSequenceName();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCViewportProxy);
			class JCViewportListenerProxy : public EarthView::World::Graphic::CViewport::CViewportListener
			{
			 private:
				EarthView::World::Core::ev_string m_viewportCameraChanged_CViewport_callback;
				EarthView::World::Core::ev_string m_viewportDimensionsChanged_CViewport_callback;
				EarthView::World::Core::ev_string m_viewportDestroyed_CViewport_callback;
			public:
				JCViewportListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CViewportListener(pList)
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
				void register_viewportCameraChanged_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportCameraChanged_CViewport_callback = __method;
				}
				void register_viewportDimensionsChanged_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportDimensionsChanged_CViewport_callback = __method;
				}
				void register_viewportDestroyed_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportDestroyed_CViewport_callback = __method;
				}
				virtual void viewportCameraChanged(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportCameraChanged_CViewport_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("viewportCameraChanged_CViewport_callback");
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
						return this->CViewportListener::viewportCameraChanged(viewport);
					}
				}
				virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportDimensionsChanged_CViewport_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("viewportDimensionsChanged_CViewport_callback");
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
						return this->CViewportListener::viewportDimensionsChanged(viewport);
					}
				}
				virtual void viewportDestroyed(EarthView::World::Graphic::CViewport* viewport)
				{
					if (this->_gRef != NULL && this->m_viewportDestroyed_CViewport_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("viewportDestroyed_CViewport_callback");
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
						return this->CViewportListener::viewportDestroyed(viewport);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCViewportListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_viewportCameraChanged_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CViewport::CViewportListener *pObjectX = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCViewportListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CViewport::CViewportListener::viewportCameraChanged(viewport);
				}
				else
				{
					pObjectX->viewportCameraChanged(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_register_1viewportCameraChanged_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCViewportListenerProxy *pObjectX = (JCViewportListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportCameraChanged_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportCameraChanged_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_viewportCameraChanged_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CViewport::CViewportListener *pObjectX = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CViewport::CViewportListener::viewportCameraChanged(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_viewportDimensionsChanged_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CViewport::CViewportListener *pObjectX = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCViewportListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CViewport::CViewportListener::viewportDimensionsChanged(viewport);
				}
				else
				{
					pObjectX->viewportDimensionsChanged(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_register_1viewportDimensionsChanged_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCViewportListenerProxy *pObjectX = (JCViewportListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportDimensionsChanged_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportDimensionsChanged_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_viewportDimensionsChanged_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CViewport::CViewportListener *pObjectX = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CViewport::CViewportListener::viewportDimensionsChanged(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_viewportDestroyed_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CViewport::CViewportListener *pObjectX = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCViewportListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CViewport::CViewportListener::viewportDestroyed(viewport);
				}
				else
				{
					pObjectX->viewportDestroyed(viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_register_1viewportDestroyed_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCViewportListenerProxy *pObjectX = (JCViewportListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportDestroyed_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportDestroyed_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_00024ViewportListener_viewportDestroyed_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong viewport_j)
			{
				EarthView::World::Graphic::CViewport *viewport = (EarthView::World::Graphic::CViewport*) viewport_j;
				EarthView::World::Graphic::CViewport::CViewportListener *pObjectX = (EarthView::World::Graphic::CViewport::CViewportListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CViewport::CViewportListener::viewportDestroyed(viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport__1updateDimensions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->_updateDimensions();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->update();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_clear_1ev_1uint32_1CColourValue_1Real_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j, jdouble depth_j, jint stencil_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real depth = (Real) depth_j;
				ev_uint16 stencil = (ev_uint16) stencil_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->clear(buffers, colour, depth, stencil);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_clear_1ev_1uint32_1CColourValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j, jdouble depth_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real depth = (Real) depth_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->clear(buffers, colour, depth);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_clear_1ev_1uint32_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j, jlong colour_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->clear(buffers, colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_clear_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffers_j)
			{
				ev_uint32 buffers = (ev_uint32) buffers_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->clear(buffers);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_getTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->getTarget();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_getCamera_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				EarthView::World::Graphic::CCamera* __values1 = pObjectX->getCamera();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setCamera_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j)
			{
				EarthView::World::Graphic::CCamera *ref_cam = (EarthView::World::Graphic::CCamera*) ref_cam_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setCamera(ref_cam);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getZOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getZOrder();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Viewport_getLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				Real __values1 = pObjectX->getLeft();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Viewport_getTop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				Real __values1 = pObjectX->getTop();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Viewport_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				Real __values1 = pObjectX->getWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Viewport_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				Real __values1 = pObjectX->getHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getActualLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getActualLeft();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getActualTop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getActualTop();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getActualWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getActualWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getActualHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getActualHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setDimensions_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j, jdouble width_j, jdouble height_j)
			{
				Real left = (Real) left_j;
				Real top = (Real) top_j;
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setDimensions(left, top, width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setOrientationMode_1OrientationMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint orientationMode_j, jboolean setDefault_j)
			{
				EarthView::World::Graphic::OrientationMode orientationMode = (EarthView::World::Graphic::OrientationMode) orientationMode_j;
				ev_bool setDefault = (ev_bool) setDefault_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setOrientationMode(orientationMode, setDefault);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setOrientationMode_1OrientationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint orientationMode_j)
			{
				EarthView::World::Graphic::OrientationMode orientationMode = (EarthView::World::Graphic::OrientationMode) orientationMode_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setOrientationMode(orientationMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getOrientationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				EarthView::World::Graphic::OrientationMode __values1 = pObjectX->getOrientationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setDefaultOrientationMode_1OrientationMode(JNIEnv *__env , jclass __clazz, jint orientationMode_j)
			{
				EarthView::World::Graphic::OrientationMode orientationMode = (EarthView::World::Graphic::OrientationMode) orientationMode_j;
				EarthView::World::Graphic::CViewport::setDefaultOrientationMode(orientationMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Viewport_getDefaultOrientationMode_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::OrientationMode __values1 = EarthView::World::Graphic::CViewport::getDefaultOrientationMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setBackgroundColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setBackgroundColour(colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_getBackgroundColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getBackgroundColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_calculateViewportProjectViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->calculateViewportProjectViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setDepthClear_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble depth_j)
			{
				Real depth = (Real) depth_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setDepthClear(depth);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Viewport_getDepthClear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				Real __values1 = pObjectX->getDepthClear();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setClearEveryFrame_1ev_1bool_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean clear_j, jlong buffers_j)
			{
				ev_bool clear = (ev_bool) clear_j;
				ev_uint32 buffers = (ev_uint32) buffers_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setClearEveryFrame(clear, buffers);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setClearEveryFrame_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean clear_j)
			{
				ev_bool clear = (ev_bool) clear_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setClearEveryFrame(clear);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Viewport_getClearEveryFrame_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_bool __values1 = pObjectX->getClearEveryFrame();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_getClearBuffers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getClearBuffers();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setAutoUpdated_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoupdate_j)
			{
				ev_bool autoupdate = (ev_bool) autoupdate_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setAutoUpdated(autoupdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Viewport_isAutoUpdated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_bool __values1 = pObjectX->isAutoUpdated();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setMaterialScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
				#else
				const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
				const EVString schemeName = schemeName_ch;
				__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
				#endif
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setMaterialScheme(schemeName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_getMaterialScheme_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				const EVString& __values1 = pObjectX->getMaterialScheme();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_getActualDimensions_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong left_j, jlong top_j, jlong width_j, jlong height_j)
			{
				ev_int32 &left = *(ev_int32*) left_j;
				ev_int32 &top = *(ev_int32*) top_j;
				ev_int32 &width = *(ev_int32*) width_j;
				ev_int32 &height = *(ev_int32*) height_j;
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->getActualDimensions(left, top, width, height);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Viewport__1isUpdated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_bool __values1 = pObjectX->_isUpdated();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport__1clearUpdatedFlag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->_clearUpdatedFlag();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport__1getNumRenderedFaces_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->_getNumRenderedFaces();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport__1getNumRenderedBatches_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->_getNumRenderedBatches();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport__1getNumRenderedVertices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->_getNumRenderedVertices();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setOverlaysEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setOverlaysEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Viewport_getOverlaysEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_bool __values1 = pObjectX->getOverlaysEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setSkiesEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setSkiesEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Viewport_getSkiesEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSkiesEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setShadowsEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setShadowsEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Viewport_getShadowsEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_bool __values1 = pObjectX->getShadowsEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setVisibilityMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->setVisibilityMask(mask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport_getVisibilityMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getVisibilityMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setRenderQueueInvocationSequenceName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sequenceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sequenceName_ch = (const ev_char*)__env->GetStringUTFChars(sequenceName_j,JNI_FALSE);
				const EVString sequenceName = sequenceName_ch;
				__env->ReleaseStringUTFChars(sequenceName_j, (const char *)sequenceName_ch);
				#else
				const ev_wchar* sequenceName_ch = (const ev_wchar*)__env->GetStringChars(sequenceName_j,JNI_FALSE);
				const EVString sequenceName = sequenceName_ch;
				__env->ReleaseStringChars(sequenceName_j, (const jchar *)sequenceName_ch);
				#endif
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCViewportProxy))
				{
					pObjectX->EarthView::World::Graphic::CViewport::setRenderQueueInvocationSequenceName(sequenceName);
				}
				else
				{
					pObjectX->setRenderQueueInvocationSequenceName(sequenceName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_register_1setRenderQueueInvocationSequenceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCViewportProxy *pObjectX = (JCViewportProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRenderQueueInvocationSequenceName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRenderQueueInvocationSequenceName_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_setRenderQueueInvocationSequenceName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sequenceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sequenceName_ch = (const ev_char*)__env->GetStringUTFChars(sequenceName_j,JNI_FALSE);
				const EVString sequenceName = sequenceName_ch;
				__env->ReleaseStringUTFChars(sequenceName_j, (const char *)sequenceName_ch);
				#else
				const ev_wchar* sequenceName_ch = (const ev_wchar*)__env->GetStringChars(sequenceName_j,JNI_FALSE);
				const EVString sequenceName = sequenceName_ch;
				__env->ReleaseStringChars(sequenceName_j, (const jchar *)sequenceName_ch);
				#endif
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CViewport::setRenderQueueInvocationSequenceName(sequenceName);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Viewport_getRenderQueueInvocationSequenceName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCViewportProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CViewport::getRenderQueueInvocationSequenceName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getRenderQueueInvocationSequenceName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_register_1getRenderQueueInvocationSequenceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCViewportProxy *pObjectX = (JCViewportProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderQueueInvocationSequenceName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderQueueInvocationSequenceName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Viewport_getRenderQueueInvocationSequenceName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CViewport::getRenderQueueInvocationSequenceName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Viewport__1getRenderQueueInvocationSequence_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* __values1 = pObjectX->_getRenderQueueInvocationSequence();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_pointOrientedToScreen_1CVector2_1ev_1int32_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j, jint orientationMode_j, jlong outv_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &v = *(EarthView::World::Spatial::Math::CVector2*) v_j;
				ev_int32 orientationMode = (ev_int32) orientationMode_j;
				EarthView::World::Spatial::Math::CVector2 &outv = *(EarthView::World::Spatial::Math::CVector2*) outv_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->pointOrientedToScreen(v, orientationMode, outv);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_pointOrientedToScreen_1Real_1Real_1ev_1int32_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble orientedX_j, jdouble orientedY_j, jint orientationMode_j, jlong screenX_j, jlong screenY_j)
			{
				Real orientedX = (Real) orientedX_j;
				Real orientedY = (Real) orientedY_j;
				ev_int32 orientationMode = (ev_int32) orientationMode_j;
				Real &screenX = *(Real*) screenX_j;
				Real &screenY = *(Real*) screenY_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->pointOrientedToScreen(orientedX, orientedY, orientationMode, screenX, screenY);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_addListener_1CViewportListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CViewport::CViewportListener *ref_l = (EarthView::World::Graphic::CViewport::CViewportListener*) ref_l_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->addListener(ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Viewport_removeListener_1CViewportListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong l_j)
			{
				EarthView::World::Graphic::CViewport::CViewportListener *l = (EarthView::World::Graphic::CViewport::CViewportListener*) l_j;
				EarthView::World::Graphic::CViewport *pObjectX = (EarthView::World::Graphic::CViewport*) pObjXXXX;
				pObjectX->removeListener(l);
			}
		}
	}
}
