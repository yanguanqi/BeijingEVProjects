/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/object.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class JCEventObjectProxy : public EarthView::World::Core::CEventObject
			{
			 private:
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEventObject(pList)
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
				void register_onEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onEvent_CEvent_callback = __method;
				}
				void register_onTimerEvent_CTimerEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onTimerEvent_CTimerEvent_callback = __method;
				}
				void register_onCustomEvent_CEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onCustomEvent_CEvent_callback = __method;
				}
				virtual ev_bool onEvent(EarthView::World::Core::CEvent* e)
				{
					if (this->_gRef != NULL && this->m_onEvent_CEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onEvent_CEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CEventObject::onEvent(e);
					}
				}
				virtual void onTimerEvent(EarthView::World::Core::CTimerEvent* e)
				{
					if (this->_gRef != NULL && this->m_onTimerEvent_CTimerEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onTimerEvent_CTimerEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEventObject::onTimerEvent(e);
					}
				}
				virtual void onCustomEvent(EarthView::World::Core::CEvent* e)
				{
					if (this->_gRef != NULL && this->m_onCustomEvent_CEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong e_j = (jlong) e;
						jmethodID __method = __gr->getMethod("onCustomEvent_CEvent_callback");
						__env->CallVoidMethod(__obj, __method , e_j);
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
						return this->CEventObject::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEventObjectProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_EventObject_startTimer_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint interval_j)
			{
				ev_int32 interval = (ev_int32) interval_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				ev_int32 __values1 = pObjectX->startTimer(interval);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventObject_killTimer_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
			{
				ev_int32 id = (ev_int32) id_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->killTimer(id);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventObject_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEventObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CEventObject::onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->onEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEventObjectProxy *pObjectX = (JCEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onEvent_CEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onEvent_CEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventObject_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CEventObject::onEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_onTimerEvent_1CTimerEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CTimerEvent *e = (EarthView::World::Core::CTimerEvent*) e_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEventObjectProxy))
				{
					pObjectX->EarthView::World::Core::CEventObject::onTimerEvent(e);
				}
				else
				{
					pObjectX->onTimerEvent(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEventObjectProxy *pObjectX = (JCEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onTimerEvent_CTimerEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onTimerEvent_CTimerEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_onTimerEvent_1CTimerEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CTimerEvent *e = (EarthView::World::Core::CTimerEvent*) e_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Core::CEventObject::onTimerEvent(e);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_onCustomEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEventObjectProxy))
				{
					pObjectX->EarthView::World::Core::CEventObject::onCustomEvent(e);
				}
				else
				{
					pObjectX->onCustomEvent(e);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEventObjectProxy *pObjectX = (JCEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onCustomEvent_CEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onCustomEvent_CEvent_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventObject_onCustomEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CEventObject *pObjectX = (EarthView::World::Core::CEventObject*) pObjXXXX;
				pObjectX->EarthView::World::Core::CEventObject::onCustomEvent(e);
			}
		}
	}
}
