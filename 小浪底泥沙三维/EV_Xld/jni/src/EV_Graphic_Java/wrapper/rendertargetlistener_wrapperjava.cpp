/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendertargetlistener.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetEvent_get_1source_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderTargetEvent *pObjectX = (EarthView::World::Graphic::RenderTargetEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->source);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetEvent_set_1source_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderTargetEvent *pObjectX = (EarthView::World::Graphic::RenderTargetEvent*)pObjXXXX;
				pObjectX->source = (EarthView::World::Graphic::CRenderTarget*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderTargetViewportEvent_get_1source_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderTargetViewportEvent *pObjectX = (EarthView::World::Graphic::RenderTargetViewportEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->source);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetViewportEvent_set_1source_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderTargetViewportEvent *pObjectX = (EarthView::World::Graphic::RenderTargetViewportEvent*)pObjXXXX;
				pObjectX->source = (EarthView::World::Graphic::CViewport*) __values1_j;
			}
			class JCRenderTargetListenerProxy : public EarthView::World::Graphic::CRenderTargetListener
			{
			 private:
				EarthView::World::Core::ev_string m_preRenderTargetUpdate_RenderTargetEvent_callback;
				EarthView::World::Core::ev_string m_postRenderTargetUpdate_RenderTargetEvent_callback;
				EarthView::World::Core::ev_string m_preViewportUpdate_RenderTargetViewportEvent_callback;
				EarthView::World::Core::ev_string m_postViewportUpdate_RenderTargetViewportEvent_callback;
				EarthView::World::Core::ev_string m_viewportAdded_RenderTargetViewportEvent_callback;
				EarthView::World::Core::ev_string m_viewportRemoved_RenderTargetViewportEvent_callback;
			public:
				JCRenderTargetListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderTargetListener(pList)
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
				void register_preRenderTargetUpdate_RenderTargetEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRenderTargetUpdate_RenderTargetEvent_callback = __method;
				}
				void register_postRenderTargetUpdate_RenderTargetEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRenderTargetUpdate_RenderTargetEvent_callback = __method;
				}
				void register_preViewportUpdate_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preViewportUpdate_RenderTargetViewportEvent_callback = __method;
				}
				void register_postViewportUpdate_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postViewportUpdate_RenderTargetViewportEvent_callback = __method;
				}
				void register_viewportAdded_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportAdded_RenderTargetViewportEvent_callback = __method;
				}
				void register_viewportRemoved_RenderTargetViewportEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_viewportRemoved_RenderTargetViewportEvent_callback = __method;
				}
				virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if (this->_gRef != NULL && this->m_preRenderTargetUpdate_RenderTargetEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("preRenderTargetUpdate_RenderTargetEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CRenderTargetListener::preRenderTargetUpdate(evt);
					}
				}
				virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postRenderTargetUpdate_RenderTargetEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("postRenderTargetUpdate_RenderTargetEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CRenderTargetListener::postRenderTargetUpdate(evt);
					}
				}
				virtual void preViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_preViewportUpdate_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("preViewportUpdate_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CRenderTargetListener::preViewportUpdate(evt);
					}
				}
				virtual void postViewportUpdate(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_postViewportUpdate_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("postViewportUpdate_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CRenderTargetListener::postViewportUpdate(evt);
					}
				}
				virtual void viewportAdded(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_viewportAdded_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("viewportAdded_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CRenderTargetListener::viewportAdded(evt);
					}
				}
				virtual void viewportRemoved(const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if (this->_gRef != NULL && this->m_viewportRemoved_RenderTargetViewportEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong evt_j = (jlong) &evt;
						jmethodID __method = __gr->getMethod("viewportRemoved_RenderTargetViewportEvent_callback");
						__env->CallVoidMethod(__obj, __method , evt_j);
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
						return this->CRenderTargetListener::viewportRemoved(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderTargetListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_preRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTargetListener::preRenderTargetUpdate(evt);
				}
				else
				{
					pObjectX->preRenderTargetUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_register_1preRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetListenerProxy *pObjectX = (JCRenderTargetListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRenderTargetUpdate_RenderTargetEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRenderTargetUpdate_RenderTargetEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_preRenderTargetUpdate_1RenderTargetEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTargetListener::preRenderTargetUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_postRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTargetListener::postRenderTargetUpdate(evt);
				}
				else
				{
					pObjectX->postRenderTargetUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_register_1postRenderTargetUpdate_1RenderTargetEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetListenerProxy *pObjectX = (JCRenderTargetListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRenderTargetUpdate_RenderTargetEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRenderTargetUpdate_RenderTargetEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_postRenderTargetUpdate_1RenderTargetEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetEvent &evt = *(EarthView::World::Graphic::RenderTargetEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTargetListener::postRenderTargetUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_preViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTargetListener::preViewportUpdate(evt);
				}
				else
				{
					pObjectX->preViewportUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_register_1preViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetListenerProxy *pObjectX = (JCRenderTargetListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preViewportUpdate_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preViewportUpdate_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_preViewportUpdate_1RenderTargetViewportEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTargetListener::preViewportUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_postViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTargetListener::postViewportUpdate(evt);
				}
				else
				{
					pObjectX->postViewportUpdate(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_register_1postViewportUpdate_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetListenerProxy *pObjectX = (JCRenderTargetListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postViewportUpdate_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postViewportUpdate_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_postViewportUpdate_1RenderTargetViewportEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTargetListener::postViewportUpdate(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_viewportAdded_1RenderTargetViewportEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTargetListener::viewportAdded(evt);
				}
				else
				{
					pObjectX->viewportAdded(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_register_1viewportAdded_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetListenerProxy *pObjectX = (JCRenderTargetListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportAdded_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportAdded_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_viewportAdded_1RenderTargetViewportEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTargetListener::viewportAdded(evt);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_viewportRemoved_1RenderTargetViewportEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderTargetListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderTargetListener::viewportRemoved(evt);
				}
				else
				{
					pObjectX->viewportRemoved(evt);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_register_1viewportRemoved_1RenderTargetViewportEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderTargetListenerProxy *pObjectX = (JCRenderTargetListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_viewportRemoved_RenderTargetViewportEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"viewportRemoved_RenderTargetViewportEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderTargetListener_viewportRemoved_1RenderTargetViewportEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::RenderTargetViewportEvent &evt = *(EarthView::World::Graphic::RenderTargetViewportEvent*) evt_j;
				EarthView::World::Graphic::CRenderTargetListener *pObjectX = (EarthView::World::Graphic::CRenderTargetListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderTargetListener::viewportRemoved(evt);
			}
		}
	}
}
