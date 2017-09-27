/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/predefinedcontrollers.h"
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
			class JCFrameTimeControllerValueProxy : public EarthView::World::Graphic::CFrameTimeControllerValue
			{
			 private:
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
				EarthView::World::Core::ev_string m_getListenerPtr_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
			public:
				JCFrameTimeControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrameTimeControllerValue(pList)
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
				void register_frameEnded_FrameEvent_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_frameEnded_FrameEvent_callback = __method;
				}
				void register_getListenerPtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListenerPtr_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				virtual Real getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CFrameTimeControllerValue::getValue();
					}
				}
				virtual void setValue(Real value)
				{
					if (this->_gRef != NULL && this->m_setValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CFrameTimeControllerValue::setValue(value);
					}
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
						return this->CFrameTimeControllerValue::frameStarted(evt);
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
						return this->CFrameTimeControllerValue::frameEnded(evt);
					}
				}
				virtual EarthView::World::Graphic::CFrameListener* getListenerPtr()
				{
					if (this->_gRef != NULL && this->m_getListenerPtr_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getListenerPtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CFrameListener *__values1 = (EarthView::World::Graphic::CFrameListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CFrameTimeControllerValue::getListenerPtr();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFrameTimeControllerValueProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameTimeControllerValueProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameTimeControllerValueProxy *pObjectX = (JCFrameTimeControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::getValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameTimeControllerValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::setValue(value);
				}
				else
				{
					pObjectX->setValue(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameTimeControllerValueProxy *pObjectX = (JCFrameTimeControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::setValue(value);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getTimeFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->getTimeFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_setTimeFactor_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble tf_j)
			{
				Real tf = (Real) tf_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				pObjectX->setTimeFactor(tf);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getFrameDelay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->getFrameDelay();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_setFrameDelay_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble fd_j)
			{
				Real fd = (Real) fd_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				pObjectX->setFrameDelay(fd);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getElapsedTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->getElapsedTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_setElapsedTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble elapsedTime_j)
			{
				Real elapsedTime = (Real) elapsedTime_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				pObjectX->setElapsedTime(elapsedTime);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_frameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameTimeControllerValueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::frameStarted(evt);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameTimeControllerValueProxy *pObjectX = (JCFrameTimeControllerValueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_frameStarted_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::frameStarted(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCInternalFrameListenerProxy : public EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener
			{
			 private:
				EarthView::World::Core::ev_string m_frameStarted_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameRenderingQueued_FrameEvent_callback;
				EarthView::World::Core::ev_string m_frameEnded_FrameEvent_callback;
			public:
				JCInternalFrameListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CInternalFrameListener(pList)
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
						return this->CInternalFrameListener::frameEnded(evt);
					}
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
						return this->CInternalFrameListener::frameStarted(evt);
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
						return this->CInternalFrameListener::frameRenderingQueued(evt);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCInternalFrameListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_frameEnded_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCInternalFrameListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameEnded(evt);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCInternalFrameListenerProxy *pObjectX = (JCInternalFrameListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_frameEnded_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameEnded(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_frameStarted_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCInternalFrameListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameStarted(evt);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_register_1frameStarted_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCInternalFrameListenerProxy *pObjectX = (JCInternalFrameListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_frameStarted_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameStarted(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_00024InternalFrameListener_register_1frameRenderingQueued_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCInternalFrameListenerProxy *pObjectX = (JCInternalFrameListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_frameEnded_1FrameEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameTimeControllerValueProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::frameEnded(evt);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_register_1frameEnded_1FrameEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameTimeControllerValueProxy *pObjectX = (JCFrameTimeControllerValueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_frameEnded_1FrameEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j)
			{
				const EarthView::World::Graphic::FrameEvent &evt = *(EarthView::World::Graphic::FrameEvent*) evt_j;
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::frameEnded(evt);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getListenerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFrameTimeControllerValueProxy))
				{
					EarthView::World::Graphic::CFrameListener* __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::getListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CFrameListener* __values1 = pObjectX->getListenerPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_register_1getListenerPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFrameTimeControllerValueProxy *pObjectX = (JCFrameTimeControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListenerPtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListenerPtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FrameTimeControllerValue_getListenerPtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CFrameTimeControllerValue *pObjectX = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjXXXX;
				EarthView::World::Graphic::CFrameListener* __values1 = pObjectX->EarthView::World::Graphic::CFrameTimeControllerValue::getListenerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCTextureFrameControllerValueProxy : public EarthView::World::Graphic::CTextureFrameControllerValue
			{
			 private:
				EarthView::World::Core::ev_string m_getValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
			public:
				JCTextureFrameControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureFrameControllerValue(pList)
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
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				virtual Real getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTextureFrameControllerValue::getValue();
					}
				}
				virtual void setValue(Real value)
				{
					if (this->_gRef != NULL && this->m_setValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CTextureFrameControllerValue::setValue(value);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTextureFrameControllerValueProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureFrameControllerValue_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureFrameControllerValue *pObjectX = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureFrameControllerValueProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CTextureFrameControllerValue::getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureFrameControllerValue_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureFrameControllerValueProxy *pObjectX = (JCTextureFrameControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TextureFrameControllerValue_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTextureFrameControllerValue *pObjectX = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CTextureFrameControllerValue::getValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureFrameControllerValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTextureFrameControllerValue *pObjectX = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureFrameControllerValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CTextureFrameControllerValue::setValue(value);
				}
				else
				{
					pObjectX->setValue(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureFrameControllerValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureFrameControllerValueProxy *pObjectX = (JCTextureFrameControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TextureFrameControllerValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTextureFrameControllerValue *pObjectX = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTextureFrameControllerValue::setValue(value);
			}
			class JCTexCoordModifierControllerValueProxy : public EarthView::World::Graphic::CTexCoordModifierControllerValue
			{
			 private:
				EarthView::World::Core::ev_string m_getValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
			public:
				JCTexCoordModifierControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CTexCoordModifierControllerValue(pList)
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
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				virtual Real getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexCoordModifierControllerValue::getValue();
					}
				}
				virtual void setValue(Real value)
				{
					if (this->_gRef != NULL && this->m_setValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CTexCoordModifierControllerValue::setValue(value);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTexCoordModifierControllerValueProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TexCoordModifierControllerValue_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexCoordModifierControllerValue *pObjectX = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTexCoordModifierControllerValueProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CTexCoordModifierControllerValue::getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TexCoordModifierControllerValue_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTexCoordModifierControllerValueProxy *pObjectX = (JCTexCoordModifierControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TexCoordModifierControllerValue_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexCoordModifierControllerValue *pObjectX = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CTexCoordModifierControllerValue::getValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TexCoordModifierControllerValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTexCoordModifierControllerValue *pObjectX = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTexCoordModifierControllerValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexCoordModifierControllerValue::setValue(value);
				}
				else
				{
					pObjectX->setValue(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TexCoordModifierControllerValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTexCoordModifierControllerValueProxy *pObjectX = (JCTexCoordModifierControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TexCoordModifierControllerValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CTexCoordModifierControllerValue *pObjectX = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexCoordModifierControllerValue::setValue(value);
			}
			class JCFloatGpuParameterControllerValueProxy : public EarthView::World::Graphic::CFloatGpuParameterControllerValue
			{
			 private:
				EarthView::World::Core::ev_string m_getValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
			public:
				JCFloatGpuParameterControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CFloatGpuParameterControllerValue(pList)
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
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				virtual Real getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CFloatGpuParameterControllerValue::getValue();
					}
				}
				virtual void setValue(Real value)
				{
					if (this->_gRef != NULL && this->m_setValue_Real_callback != "" && this->isCustomExtend())
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
						jdouble value_j = (jdouble) value;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CFloatGpuParameterControllerValue::setValue(value);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFloatGpuParameterControllerValueProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FloatGpuParameterControllerValue_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFloatGpuParameterControllerValue *pObjectX = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFloatGpuParameterControllerValueProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CFloatGpuParameterControllerValue::getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatGpuParameterControllerValue_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFloatGpuParameterControllerValueProxy *pObjectX = (JCFloatGpuParameterControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_FloatGpuParameterControllerValue_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFloatGpuParameterControllerValue *pObjectX = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CFloatGpuParameterControllerValue::getValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatGpuParameterControllerValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CFloatGpuParameterControllerValue *pObjectX = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFloatGpuParameterControllerValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CFloatGpuParameterControllerValue::setValue(value);
				}
				else
				{
					pObjectX->setValue(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatGpuParameterControllerValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFloatGpuParameterControllerValueProxy *pObjectX = (JCFloatGpuParameterControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FloatGpuParameterControllerValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CFloatGpuParameterControllerValue *pObjectX = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFloatGpuParameterControllerValue::setValue(value);
			}
			class JCPassthroughControllerFunctionProxy : public EarthView::World::Graphic::CPassthroughControllerFunction
			{
			 private:
				EarthView::World::Core::ev_string m_calculate_Real_callback;
			public:
				JCPassthroughControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CPassthroughControllerFunction(pList)
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
				void register_calculate_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculate_Real_callback = __method;
				}
				virtual Real calculate(Real source)
				{
					if (this->_gRef != NULL && this->m_calculate_Real_callback != "" && this->isCustomExtend())
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
						jdouble source_j = (jdouble) source;
						jmethodID __method = __gr->getMethod("calculate_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , source_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPassthroughControllerFunction::calculate(source);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPassthroughControllerFunctionProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_PassthroughControllerFunction_calculate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CPassthroughControllerFunction *pObjectX = (EarthView::World::Graphic::CPassthroughControllerFunction*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPassthroughControllerFunctionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CPassthroughControllerFunction::calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PassthroughControllerFunction_register_1calculate_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPassthroughControllerFunctionProxy *pObjectX = (JCPassthroughControllerFunctionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculate_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculate_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_PassthroughControllerFunction_calculate_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CPassthroughControllerFunction *pObjectX = (EarthView::World::Graphic::CPassthroughControllerFunction*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CPassthroughControllerFunction::calculate(source);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			class JCAnimationControllerFunctionProxy : public EarthView::World::Graphic::CAnimationControllerFunction
			{
			 private:
				EarthView::World::Core::ev_string m_calculate_Real_callback;
			public:
				JCAnimationControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationControllerFunction(pList)
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
				void register_calculate_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculate_Real_callback = __method;
				}
				virtual Real calculate(Real source)
				{
					if (this->_gRef != NULL && this->m_calculate_Real_callback != "" && this->isCustomExtend())
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
						jdouble source_j = (jdouble) source;
						jmethodID __method = __gr->getMethod("calculate_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , source_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationControllerFunction::calculate(source);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimationControllerFunctionProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationControllerFunction_calculate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CAnimationControllerFunction *pObjectX = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationControllerFunctionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationControllerFunction::calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationControllerFunction_register_1calculate_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationControllerFunctionProxy *pObjectX = (JCAnimationControllerFunctionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculate_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculate_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationControllerFunction_calculate_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CAnimationControllerFunction *pObjectX = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationControllerFunction::calculate(source);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationControllerFunction_setTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeVal_j)
			{
				Real timeVal = (Real) timeVal_j;
				EarthView::World::Graphic::CAnimationControllerFunction *pObjectX = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjXXXX;
				pObjectX->setTime(timeVal);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationControllerFunction_setSequenceTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble seqVal_j)
			{
				Real seqVal = (Real) seqVal_j;
				EarthView::World::Graphic::CAnimationControllerFunction *pObjectX = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjXXXX;
				pObjectX->setSequenceTime(seqVal);
			}
			class JCScaleControllerFunctionProxy : public EarthView::World::Graphic::CScaleControllerFunction
			{
			 private:
				EarthView::World::Core::ev_string m_calculate_Real_callback;
			public:
				JCScaleControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CScaleControllerFunction(pList)
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
				void register_calculate_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculate_Real_callback = __method;
				}
				virtual Real calculate(Real source)
				{
					if (this->_gRef != NULL && this->m_calculate_Real_callback != "" && this->isCustomExtend())
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
						jdouble source_j = (jdouble) source;
						jmethodID __method = __gr->getMethod("calculate_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , source_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScaleControllerFunction::calculate(source);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScaleControllerFunctionProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ScaleControllerFunction_calculate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CScaleControllerFunction *pObjectX = (EarthView::World::Graphic::CScaleControllerFunction*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScaleControllerFunctionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CScaleControllerFunction::calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScaleControllerFunction_register_1calculate_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScaleControllerFunctionProxy *pObjectX = (JCScaleControllerFunctionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculate_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculate_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ScaleControllerFunction_calculate_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CScaleControllerFunction *pObjectX = (EarthView::World::Graphic::CScaleControllerFunction*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CScaleControllerFunction::calculate(source);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			class JCWaveformControllerFunctionProxy : public EarthView::World::Graphic::CWaveformControllerFunction
			{
			 private:
				EarthView::World::Core::ev_string m_calculate_Real_callback;
			public:
				JCWaveformControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CWaveformControllerFunction(pList)
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
				void register_calculate_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculate_Real_callback = __method;
				}
				virtual Real calculate(Real source)
				{
					if (this->_gRef != NULL && this->m_calculate_Real_callback != "" && this->isCustomExtend())
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
						jdouble source_j = (jdouble) source;
						jmethodID __method = __gr->getMethod("calculate_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , source_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CWaveformControllerFunction::calculate(source);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCWaveformControllerFunctionProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_WaveformControllerFunction_calculate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CWaveformControllerFunction *pObjectX = (EarthView::World::Graphic::CWaveformControllerFunction*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCWaveformControllerFunctionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CWaveformControllerFunction::calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->calculate(source);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_WaveformControllerFunction_register_1calculate_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCWaveformControllerFunctionProxy *pObjectX = (JCWaveformControllerFunctionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculate_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculate_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_WaveformControllerFunction_calculate_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble source_j)
			{
				Real source = (Real) source_j;
				EarthView::World::Graphic::CWaveformControllerFunction *pObjectX = (EarthView::World::Graphic::CWaveformControllerFunction*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CWaveformControllerFunction::calculate(source);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
		}
	}
}
