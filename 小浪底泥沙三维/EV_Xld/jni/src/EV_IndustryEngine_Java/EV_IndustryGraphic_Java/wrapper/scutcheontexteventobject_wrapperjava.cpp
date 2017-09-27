/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/scutcheontexteventobject.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class JCScutcheonTextEventObjectProxy : public EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject
			{
			 private:
				EarthView::World::Core::ev_string m_onMouseDownEvent_CScutcheonTextEvent_callback;
				EarthView::World::Core::ev_string m_onMouseMoveEvent_CScutcheonTextEvent_callback;
				EarthView::World::Core::ev_string m_onMouseUpEvent_CScutcheonTextEvent_callback;
				EarthView::World::Core::ev_string m_onKeyDownEvent_CScutcheonTextEvent_callback;
				EarthView::World::Core::ev_string m_onKeyUpEvent_CScutcheonTextEvent_callback;
				EarthView::World::Core::ev_string m_onSelectedEvent_CScutcheonTextEvent_callback;
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCScutcheonTextEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CScutcheonTextEventObject(pList)
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
				void register_onMouseDownEvent_CScutcheonTextEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseDownEvent_CScutcheonTextEvent_callback = __method;
				}
				void register_onMouseMoveEvent_CScutcheonTextEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseMoveEvent_CScutcheonTextEvent_callback = __method;
				}
				void register_onMouseUpEvent_CScutcheonTextEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseUpEvent_CScutcheonTextEvent_callback = __method;
				}
				void register_onKeyDownEvent_CScutcheonTextEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onKeyDownEvent_CScutcheonTextEvent_callback = __method;
				}
				void register_onKeyUpEvent_CScutcheonTextEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onKeyUpEvent_CScutcheonTextEvent_callback = __method;
				}
				void register_onSelectedEvent_CScutcheonTextEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onSelectedEvent_CScutcheonTextEvent_callback = __method;
				}
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
				virtual bool onMouseDownEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseDownEvent_CScutcheonTextEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseDownEvent_CScutcheonTextEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CScutcheonTextEventObject::onMouseDownEvent(e);
					}
				}
				virtual bool onMouseMoveEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseMoveEvent_CScutcheonTextEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseMoveEvent_CScutcheonTextEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CScutcheonTextEventObject::onMouseMoveEvent(e);
					}
				}
				virtual bool onMouseUpEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseUpEvent_CScutcheonTextEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseUpEvent_CScutcheonTextEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CScutcheonTextEventObject::onMouseUpEvent(e);
					}
				}
				virtual bool onKeyDownEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if (this->_gRef != NULL && this->m_onKeyDownEvent_CScutcheonTextEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onKeyDownEvent_CScutcheonTextEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CScutcheonTextEventObject::onKeyDownEvent(e);
					}
				}
				virtual bool onKeyUpEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if (this->_gRef != NULL && this->m_onKeyUpEvent_CScutcheonTextEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onKeyUpEvent_CScutcheonTextEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CScutcheonTextEventObject::onKeyUpEvent(e);
					}
				}
				virtual bool onSelectedEvent(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if (this->_gRef != NULL && this->m_onSelectedEvent_CScutcheonTextEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onSelectedEvent_CScutcheonTextEvent_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
						return this->CScutcheonTextEventObject::onSelectedEvent(e);
					}
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
						return this->CScutcheonTextEventObject::onEvent(e);
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
						return this->CScutcheonTextEventObject::onTimerEvent(e);
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
						return this->CScutcheonTextEventObject::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScutcheonTextEventObjectProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onMouseDownEvent_1CScutcheonTextEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseDownEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onMouseDownEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onMouseDownEvent_1CScutcheonTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseDownEvent_CScutcheonTextEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDownEvent_CScutcheonTextEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onMouseDownEvent_1CScutcheonTextEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseDownEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onMouseMoveEvent_1CScutcheonTextEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseMoveEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onMouseMoveEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onMouseMoveEvent_1CScutcheonTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseMoveEvent_CScutcheonTextEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMoveEvent_CScutcheonTextEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onMouseMoveEvent_1CScutcheonTextEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseMoveEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onMouseUpEvent_1CScutcheonTextEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseUpEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onMouseUpEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onMouseUpEvent_1CScutcheonTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseUpEvent_CScutcheonTextEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUpEvent_CScutcheonTextEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onMouseUpEvent_1CScutcheonTextEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseUpEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onKeyDownEvent_1CScutcheonTextEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyDownEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onKeyDownEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onKeyDownEvent_1CScutcheonTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onKeyDownEvent_CScutcheonTextEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onKeyDownEvent_CScutcheonTextEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onKeyDownEvent_1CScutcheonTextEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyDownEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onKeyUpEvent_1CScutcheonTextEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyUpEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onKeyUpEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onKeyUpEvent_1CScutcheonTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onKeyUpEvent_CScutcheonTextEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onKeyUpEvent_CScutcheonTextEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onKeyUpEvent_1CScutcheonTextEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyUpEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onSelectedEvent_1CScutcheonTextEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onSelectedEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onSelectedEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onSelectedEvent_1CScutcheonTextEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onSelectedEvent_CScutcheonTextEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onSelectedEvent_CScutcheonTextEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onSelectedEvent_1CScutcheonTextEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onSelectedEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScutcheonTextEventObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScutcheonTextEventObject_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScutcheonTextEventObjectProxy *pObjectX = (JCScutcheonTextEventObjectProxy*) pObjXXXX;
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
