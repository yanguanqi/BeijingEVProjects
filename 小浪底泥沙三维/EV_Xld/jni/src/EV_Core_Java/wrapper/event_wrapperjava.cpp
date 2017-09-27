/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/event.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_Event_00024TypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CEvent::None,
					CEvent::Timer,
					CEvent::MouseButtonPress,
					CEvent::MouseButtonRelease,
					CEvent::MouseButtonDblClick,
					CEvent::MouseMove,
					CEvent::KeyPress,
					CEvent::KeyRelease,
					CEvent::FocusIn,
					CEvent::FocusOut,
					CEvent::Enter,
					CEvent::Leave,
					CEvent::Paint,
					CEvent::Move,
					CEvent::Resize,
					CEvent::Create,
					CEvent::Destroy,
					CEvent::Show,
					CEvent::Hide,
					CEvent::Close,
					CEvent::Quit,
					CEvent::ParentChange,
					CEvent::ParentAboutToChange,
					CEvent::WindowActivate,
					CEvent::WindowDeactivate,
					CEvent::WindowTitleChange,
					CEvent::WindowIconChange,
					CEvent::ApplicationWindowIconChange,
					CEvent::ApplicationFontChange,
					CEvent::ApplicationPaletteChange,
					CEvent::PaletteChange,
					CEvent::SocketAct,
					CEvent::DeferredDelete,
					CEvent::ChildAdded,
					CEvent::ChildRemoved,
					CEvent::LanguageChange,
					CEvent::FontChange,
					CEvent::EnabledChange,
					CEvent::ActivationChange,
					CEvent::StyleChange,
					CEvent::IconTextChange,
					CEvent::MouseTrackingChange,
					CEvent::WindowBlocked,
					CEvent::WindowUnblocked,
					CEvent::ToolTip,
					CEvent::ThreadChange,
					CEvent::WinEventAct,
					CEvent::ZeroTimerEvent,
					CEvent::SockAct,
					CEvent::UpdateRequest,
					CEvent::User,
					CEvent::MaxUser
				};
				jintArray array = __env->NewIntArray(52);
				__env->SetIntArrayRegion(array, 0, 52, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_Event_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CEvent *pObjectX = (EarthView::World::Core::CEvent*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->type();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Event_sender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CEvent *pObjectX = (EarthView::World::Core::CEvent*) pObjXXXX;
				EarthView::World::Core::CEventObject* __values1 = pObjectX->sender();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Event_posted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CEvent *pObjectX = (EarthView::World::Core::CEvent*) pObjXXXX;
				ev_bool __values1 = pObjectX->posted();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Event_setPosted_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean posted_j)
			{
				ev_bool posted = (ev_bool) posted_j;
				EarthView::World::Core::CEvent *pObjectX = (EarthView::World::Core::CEvent*) pObjXXXX;
				pObjectX->setPosted(posted);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_TimerEvent_timerID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CTimerEvent *pObjectX = (EarthView::World::Core::CTimerEvent*) pObjXXXX;
				ev_int32 __values1 = pObjectX->timerID();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_TimerEvent_receiver_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CTimerEvent *pObjectX = (EarthView::World::Core::CTimerEvent*) pObjXXXX;
				EarthView::World::Core::CEventObject* __values1 = pObjectX->receiver();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_EventPriorityHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					HighEventPriority,
					NormalEventPriority,
					LowEventPriority
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			class JCEventDispatcherProxy : public EarthView::World::Core::CEventDispatcher
			{
			 private:
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCEventDispatcherProxy(EarthView::World::Core::CNameValuePairList *pList) : CEventDispatcher(pList)
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
						return this->CEventDispatcher::onEvent(e);
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
						return this->CEventDispatcher::onTimerEvent(e);
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
						return this->CEventDispatcher::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEventDispatcherProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventDispatcher_sendEvent_1CEventObject_1CEvent(JNIEnv *__env , jclass __clazz, jlong receiver_j, jlong e_j)
			{
				EarthView::World::Core::CEventObject *receiver = (EarthView::World::Core::CEventObject*) receiver_j;
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				ev_bool __values1 = EarthView::World::Core::CEventDispatcher::sendEvent(receiver, e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventDispatcher_postEvent_1CEventObject_1CEvent_1ev_1int32(JNIEnv *__env , jclass __clazz, jlong receiver_j, jlong e_j, jint priority_j)
			{
				EarthView::World::Core::CEventObject *receiver = (EarthView::World::Core::CEventObject*) receiver_j;
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				ev_int32 priority = (ev_int32) priority_j;
				ev_bool __values1 = EarthView::World::Core::CEventDispatcher::postEvent(receiver, e, priority);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_removePostedEvents_1CEventObject(JNIEnv *__env , jclass __clazz, jlong receiver_j)
			{
				EarthView::World::Core::CEventObject *receiver = (EarthView::World::Core::CEventObject*) receiver_j;
				EarthView::World::Core::CEventDispatcher::removePostedEvents(receiver);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_removePostedEvents_1CEventObject_1int(JNIEnv *__env , jclass __clazz, jlong receiver_j, jint eventType_j)
			{
				EarthView::World::Core::CEventObject *receiver = (EarthView::World::Core::CEventObject*) receiver_j;
				int eventType = (int) eventType_j;
				EarthView::World::Core::CEventDispatcher::removePostedEvents(receiver, eventType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_processEvents_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CEventDispatcher::processEvents();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_removePostedTimerEvent_1CEventObject_1ev_1int32(JNIEnv *__env , jclass __clazz, jlong pObject_j, jint timerID_j)
			{
				EarthView::World::Core::CEventObject *pObject = (EarthView::World::Core::CEventObject*) pObject_j;
				ev_int32 timerID = (ev_int32) timerID_j;
				EarthView::World::Core::CEventDispatcher::removePostedTimerEvent(pObject, timerID);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventDispatcher_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CEventDispatcher *pObjectX = (EarthView::World::Core::CEventDispatcher*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEventDispatcherProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CEventDispatcher::onEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEventDispatcherProxy *pObjectX = (JCEventDispatcherProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_EventDispatcher_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::World::Core::CEventDispatcher *pObjectX = (EarthView::World::Core::CEventDispatcher*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CEventDispatcher::onEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEventDispatcherProxy *pObjectX = (JCEventDispatcherProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_EventDispatcher_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEventDispatcherProxy *pObjectX = (JCEventDispatcherProxy*) pObjXXXX;
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
		}
	}
}
