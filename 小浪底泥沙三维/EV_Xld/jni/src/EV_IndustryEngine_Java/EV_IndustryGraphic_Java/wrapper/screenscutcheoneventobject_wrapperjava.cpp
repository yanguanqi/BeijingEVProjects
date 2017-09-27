/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheoneventobject.h"
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
			class JCScreenScutcheonEventObjectProxy : public EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject
			{
			 private:
				EarthView::World::Core::ev_string m_onMouseDownEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onMouseMoveEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onMouseUpEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onMouseWheelEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onKeyDownEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onKeyUpEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onSelectedEvent_CScreenScutcheonEvent_callback;
				EarthView::World::Core::ev_string m_onEvent_CEvent_callback;
				EarthView::World::Core::ev_string m_onTimerEvent_CTimerEvent_callback;
				EarthView::World::Core::ev_string m_onCustomEvent_CEvent_callback;
			public:
				JCScreenScutcheonEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenScutcheonEventObject(pList)
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
				void register_onMouseDownEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseDownEvent_CScreenScutcheonEvent_callback = __method;
				}
				void register_onMouseMoveEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseMoveEvent_CScreenScutcheonEvent_callback = __method;
				}
				void register_onMouseUpEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseUpEvent_CScreenScutcheonEvent_callback = __method;
				}
				void register_onMouseWheelEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onMouseWheelEvent_CScreenScutcheonEvent_callback = __method;
				}
				void register_onKeyDownEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onKeyDownEvent_CScreenScutcheonEvent_callback = __method;
				}
				void register_onKeyUpEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onKeyUpEvent_CScreenScutcheonEvent_callback = __method;
				}
				void register_onSelectedEvent_CScreenScutcheonEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_onSelectedEvent_CScreenScutcheonEvent_callback = __method;
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
				virtual bool onMouseDownEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseDownEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseDownEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onMouseDownEvent(e);
					}
				}
				virtual bool onMouseMoveEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseMoveEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseMoveEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onMouseMoveEvent(e);
					}
				}
				virtual bool onMouseUpEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseUpEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseUpEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onMouseUpEvent(e);
					}
				}
				virtual bool onMouseWheelEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onMouseWheelEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onMouseWheelEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onMouseWheelEvent(e);
					}
				}
				virtual bool onKeyDownEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onKeyDownEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onKeyDownEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onKeyDownEvent(e);
					}
				}
				virtual bool onKeyUpEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onKeyUpEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onKeyUpEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onKeyUpEvent(e);
					}
				}
				virtual bool onSelectedEvent(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if (this->_gRef != NULL && this->m_onSelectedEvent_CScreenScutcheonEvent_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("onSelectedEvent_CScreenScutcheonEvent_callback");
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
						return this->CScreenScutcheonEventObject::onSelectedEvent(e);
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
						return this->CScreenScutcheonEventObject::onEvent(e);
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
						return this->CScreenScutcheonEventObject::onTimerEvent(e);
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
						return this->CScreenScutcheonEventObject::onCustomEvent(e);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScreenScutcheonEventObjectProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseDownEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseDownEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onMouseDownEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseDownEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDownEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseDownEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseDownEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseMoveEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseMoveEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onMouseMoveEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseMoveEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMoveEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseMoveEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseMoveEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseUpEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseUpEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onMouseUpEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseUpEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUpEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseUpEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseUpEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseWheelEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseWheelEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->onMouseWheelEvent(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onMouseWheelEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onMouseWheelEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onMouseWheelEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onMouseWheelEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseWheelEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onKeyDownEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyDownEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onKeyDownEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onKeyDownEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onKeyDownEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onKeyDownEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyDownEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onKeyUpEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyUpEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onKeyUpEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onKeyUpEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onKeyUpEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onKeyUpEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyUpEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onSelectedEvent_1CScreenScutcheonEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onSelectedEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onSelectedEvent_1CScreenScutcheonEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_onSelectedEvent_CScreenScutcheonEvent_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"onSelectedEvent_CScreenScutcheonEvent_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onSelectedEvent_1CScreenScutcheonEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent *e = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onSelectedEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScreenScutcheonEventObjectProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onEvent(e);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_onEvent_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
			{
				EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onEvent(e);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onTimerEvent_1CTimerEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_ScreenScutcheonEventObject_register_1onCustomEvent_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScreenScutcheonEventObjectProxy *pObjectX = (JCScreenScutcheonEventObjectProxy*) pObjXXXX;
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
