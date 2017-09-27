/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueuelistener.h"
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
			class JCRenderQueueListenerProxy : public EarthView::World::Graphic::CRenderQueueListener
			{
			 private:
				EarthView::World::Core::ev_string m_preRenderQueues_void_callback;
				EarthView::World::Core::ev_string m_postRenderQueues_void_callback;
				EarthView::World::Core::ev_string m_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback;
			public:
				JCRenderQueueListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderQueueListener(pList)
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
				void register_preRenderQueues_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRenderQueues_void_callback = __method;
				}
				void register_postRenderQueues_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRenderQueues_void_callback = __method;
				}
				void register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback = __method;
				}
				void register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback = __method;
				}
				virtual void preRenderQueues()
				{
					if (this->_gRef != NULL && this->m_preRenderQueues_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("preRenderQueues_void_callback");
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
						return this->CRenderQueueListener::preRenderQueues();
					}
				}
				virtual void postRenderQueues()
				{
					if (this->_gRef != NULL && this->m_postRenderQueues_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("postRenderQueues_void_callback");
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
						return this->CRenderQueueListener::postRenderQueues();
					}
				}
				virtual void renderQueueStarted(EarthView::World::Graphic::CSceneManager* pSceneMgr, ev_uint8 queueGroupId, const EVString& invocation, ev_bool& skipThisInvocation)
				{
					if (this->_gRef != NULL && this->m_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pSceneMgr_j = (jlong) pSceneMgr;
						jshort queueGroupId_j = (jshort) queueGroupId;
						EarthView::World::Core::ev_wstring invocation_wch = invocation;
						jstring invocation_j = __env->NewString((const jchar*)invocation_wch.getString(), invocation_wch.size());
						jlong skipThisInvocation_j = (jlong) &skipThisInvocation;
						jmethodID __method = __gr->getMethod("renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pSceneMgr_j, queueGroupId_j, invocation_j, skipThisInvocation_j);
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
						return this->CRenderQueueListener::renderQueueStarted(pSceneMgr, queueGroupId, invocation, skipThisInvocation);
					}
				}
				virtual void renderQueueEnded(EarthView::World::Graphic::CSceneManager* pSceneMgr, ev_uint8 queueGroupId, const EVString& invocation, ev_bool& repeatThisInvocation)
				{
					if (this->_gRef != NULL && this->m_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pSceneMgr_j = (jlong) pSceneMgr;
						jshort queueGroupId_j = (jshort) queueGroupId;
						EarthView::World::Core::ev_wstring invocation_wch = invocation;
						jstring invocation_j = __env->NewString((const jchar*)invocation_wch.getString(), invocation_wch.size());
						jlong repeatThisInvocation_j = (jlong) &repeatThisInvocation;
						jmethodID __method = __gr->getMethod("renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , pSceneMgr_j, queueGroupId_j, invocation_j, repeatThisInvocation_j);
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
						return this->CRenderQueueListener::renderQueueEnded(pSceneMgr, queueGroupId, invocation, repeatThisInvocation);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderQueueListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_preRenderQueues_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueListener::preRenderQueues();
				}
				else
				{
					pObjectX->preRenderQueues();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_register_1preRenderQueues_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueListenerProxy *pObjectX = (JCRenderQueueListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRenderQueues_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRenderQueues_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_preRenderQueues_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueListener::preRenderQueues();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_postRenderQueues_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueListener::postRenderQueues();
				}
				else
				{
					pObjectX->postRenderQueues();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_register_1postRenderQueues_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueListenerProxy *pObjectX = (JCRenderQueueListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRenderQueues_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRenderQueues_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_postRenderQueues_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueListener::postRenderQueues();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_renderQueueStarted_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort queueGroupId_j, jstring invocation_j, jlong skipThisInvocation_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 queueGroupId = (ev_uint8) queueGroupId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &skipThisInvocation = *(ev_bool*) skipThisInvocation_j;
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueListener::renderQueueStarted(pSceneMgr, queueGroupId, invocation, skipThisInvocation);
				}
				else
				{
					pObjectX->renderQueueStarted(pSceneMgr, queueGroupId, invocation, skipThisInvocation);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_register_1renderQueueStarted_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueListenerProxy *pObjectX = (JCRenderQueueListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renderQueueStarted_CSceneManager_ev_uint8_EVString_ev_bool_callback", "(JSLjava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_renderQueueStarted_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort queueGroupId_j, jstring invocation_j, jlong skipThisInvocation_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 queueGroupId = (ev_uint8) queueGroupId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &skipThisInvocation = *(ev_bool*) skipThisInvocation_j;
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueListener::renderQueueStarted(pSceneMgr, queueGroupId, invocation, skipThisInvocation);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_renderQueueEnded_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort queueGroupId_j, jstring invocation_j, jlong repeatThisInvocation_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 queueGroupId = (ev_uint8) queueGroupId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &repeatThisInvocation = *(ev_bool*) repeatThisInvocation_j;
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderQueueListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderQueueListener::renderQueueEnded(pSceneMgr, queueGroupId, invocation, repeatThisInvocation);
				}
				else
				{
					pObjectX->renderQueueEnded(pSceneMgr, queueGroupId, invocation, repeatThisInvocation);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_register_1renderQueueEnded_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderQueueListenerProxy *pObjectX = (JCRenderQueueListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renderQueueEnded_CSceneManager_ev_uint8_EVString_ev_bool_callback", "(JSLjava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueListener_renderQueueEnded_1CSceneManager_1ev_1uint8_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j, jshort queueGroupId_j, jstring invocation_j, jlong repeatThisInvocation_j)
			{
				EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
				ev_uint8 queueGroupId = (ev_uint8) queueGroupId_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* invocation_ch = (const ev_char*)__env->GetStringUTFChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringUTFChars(invocation_j, (const char *)invocation_ch);
				#else
				const ev_wchar* invocation_ch = (const ev_wchar*)__env->GetStringChars(invocation_j,JNI_FALSE);
				const EVString invocation = invocation_ch;
				__env->ReleaseStringChars(invocation_j, (const jchar *)invocation_ch);
				#endif
				ev_bool &repeatThisInvocation = *(ev_bool*) repeatThisInvocation_j;
				EarthView::World::Graphic::CRenderQueueListener *pObjectX = (EarthView::World::Graphic::CRenderQueueListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderQueueListener::renderQueueEnded(pSceneMgr, queueGroupId, invocation, repeatThisInvocation);
			}
		}
	}
}
