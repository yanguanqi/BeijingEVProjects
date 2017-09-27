/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/framelistener.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FrameEvent_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Graphic::FrameEvent *pObjectX = new EarthView::World::Graphic::FrameEvent();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameEvent_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FrameEvent *pObjectX = (EarthView::World::Graphic::FrameEvent*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameEvent_get_1timeSinceLastEvent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FrameEvent *pObjectX = (EarthView::World::Graphic::FrameEvent*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->timeSinceLastEvent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameEvent_set_1timeSinceLastEvent_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::FrameEvent *pObjectX = (EarthView::World::Graphic::FrameEvent*)pObjXXXX;
				pObjectX->timeSinceLastEvent = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameEvent_get_1timeSinceLastFrame_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::FrameEvent *pObjectX = (EarthView::World::Graphic::FrameEvent*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->timeSinceLastFrame);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameEvent_set_1timeSinceLastFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::FrameEvent *pObjectX = (EarthView::World::Graphic::FrameEvent*)pObjXXXX;
				pObjectX->timeSinceLastFrame = (Real)__values1_j;
			}
			class JCFrameListenerProxy : public EarthView::World::Graphic::CFrameListener
			{
			 private:
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCFrameListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrameListener(pList)
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
				void register_frameStarted_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameStarted_FrameEvent_callback = __method;
				}
				void register_frameRenderingQueued_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameRenderingQueued_FrameEvent_callback = __method;
				}
				void register_frameEnded_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameEnded_FrameEvent_callback = __method;
				}
				virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameStarted_FrameEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("frameStarted_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CFrameListener::frameStarted(evt);
					}
				}
				virtual ev_bool frameRenderingQueued(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameRenderingQueued_FrameEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("frameRenderingQueued_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CFrameListener::frameRenderingQueued(evt);
					}
				}
				virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent& evt)
				{
					if (this->_gRef != NULL && this->m_frameEnded_FrameEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("frameEnded_FrameEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , evt_j);
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
						return this->CFrameListener::frameEnded(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFrameListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameListener_frameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameListener *pObjectX = (EarthView::World::Graphic::CFrameListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameListener::frameStarted(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameStarted(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameListener_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameListenerProxy *pObjectX = (JCFrameListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameStarted_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameStarted_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameListener_frameStarted_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameListener *pObjectX = (EarthView::World::Graphic::CFrameListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameListener::frameStarted(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameListener_frameRenderingQueued_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameListener *pObjectX = (EarthView::World::Graphic::CFrameListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameListener::frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameRenderingQueued(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameListener_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameListenerProxy *pObjectX = (JCFrameListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameRenderingQueued_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameRenderingQueued_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameListener_frameRenderingQueued_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameListener *pObjectX = (EarthView::World::Graphic::CFrameListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameListener::frameRenderingQueued(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameListener_frameEnded_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameListener *pObjectX = (EarthView::World::Graphic::CFrameListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameListener::frameEnded(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->frameEnded(evt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameListener_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameListenerProxy *pObjectX = (JCFrameListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_frameEnded_FrameEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"frameEnded_FrameEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameListener_frameEnded_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameListener *pObjectX = (EarthView::World::Graphic::CFrameListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameListener::frameEnded(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
