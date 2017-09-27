/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idisplay2d.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			class JIDisplay2DProxy : public EarthView::World::Display::IDisplay2D
			{
			 private:
				EarthView::World::Core::ev_string m_fixDevice_IPaintDevice_callback;
				EarthView::World::Core::ev_string m_getDevice_void_callback;
				EarthView::World::Core::ev_string m_unfixDevice_void_callback;
				EarthView::World::Core::ev_string m_getDisplayOptions_void_callback;
				EarthView::World::Core::ev_string m_getDisplayResolution_void_callback;
				EarthView::World::Core::ev_string m_setDisplayResolution_ev_int32_callback;
			public:
				JIDisplay2DProxy(EarthView::World::Core::CNameValuePairList *pList) : IDisplay2D(pList)
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
				void register_fixDevice_IPaintDevice_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fixDevice_IPaintDevice_callback = __method;
				}
				void register_getDevice_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDevice_void_callback = __method;
				}
				void register_unfixDevice_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unfixDevice_void_callback = __method;
				}
				void register_getDisplayOptions_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDisplayOptions_void_callback = __method;
				}
				void register_getDisplayResolution_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDisplayResolution_void_callback = __method;
				}
				void register_setDisplayResolution_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDisplayResolution_ev_int32_callback = __method;
				}
				virtual void fixDevice(EarthView::World::Display::IPaintDevice* ref_device)
				{
					if (this->_gRef != NULL && this->m_fixDevice_IPaintDevice_callback != "" && this->isCustomExtend())
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
						jlong ref_device_j = (jlong) ref_device;
						jmethodID __method = __gr->getMethod("fixDevice_IPaintDevice_callback");
						__env->CallVoidMethod(__obj, __method , ref_device_j);
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
						return this->IDisplay2D::fixDevice(ref_device);
					}
				}
				virtual EarthView::World::Display::IPaintDevice* getDevice() const
				{
					if (this->_gRef != NULL && this->m_getDevice_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDevice_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Display::IPaintDevice *__values1 = (EarthView::World::Display::IPaintDevice*) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplay2D::getDevice();
					}
				}
				virtual void unfixDevice()
				{
					if (this->_gRef != NULL && this->m_unfixDevice_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unfixDevice_void_callback");
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
						return this->IDisplay2D::unfixDevice();
					}
				}
				virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const
				{
					if (this->_gRef != NULL && this->m_getDisplayOptions_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDisplayOptions_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Display::IDisplayOptions *__values1 = (EarthView::World::Display::IDisplayOptions*) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplay2D::getDisplayOptions();
					}
				}
				virtual ev_int32 getDisplayResolution() const
				{
					if (this->_gRef != NULL && this->m_getDisplayResolution_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDisplayResolution_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->IDisplay2D::getDisplayResolution();
					}
				}
				virtual void setDisplayResolution(ev_int32 resolution)
				{
					if (this->_gRef != NULL && this->m_setDisplayResolution_ev_int32_callback != "" && this->isCustomExtend())
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
						jint resolution_j = (jint) resolution;
						jmethodID __method = __gr->getMethod("setDisplayResolution_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , resolution_j);
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
						return this->IDisplay2D::setDisplayResolution(resolution);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JIDisplay2DProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_fixDevice_1IPaintDevice(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_device_j)
			{
				EarthView::World::Display::IPaintDevice *ref_device = (EarthView::World::Display::IPaintDevice*) ref_device_j;
				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplay2DProxy))
				{
					pObjectX->EarthView::World::Display::IDisplay2D::fixDevice(ref_device);
				}
				else
				{
					pObjectX->fixDevice(ref_device);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_register_1fixDevice_1IPaintDevice(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplay2DProxy *pObjectX = (JIDisplay2DProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fixDevice_IPaintDevice_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fixDevice_IPaintDevice_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_fixDevice_1IPaintDevice_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_device_j)
			{
				EarthView::World::Display::IPaintDevice *ref_device = (EarthView::World::Display::IPaintDevice*) ref_device_j;
				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplay2D::fixDevice(ref_device);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Idisplay2d_getDevice_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplay2DProxy))
				{
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Display::IDisplay2D::getDevice();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->getDevice();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_register_1getDevice_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplay2DProxy *pObjectX = (JIDisplay2DProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDevice_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDevice_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Idisplay2d_getDevice_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Display::IDisplay2D::getDevice();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_unfixDevice_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplay2DProxy))
				{
					pObjectX->EarthView::World::Display::IDisplay2D::unfixDevice();
				}
				else
				{
					pObjectX->unfixDevice();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_register_1unfixDevice_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplay2DProxy *pObjectX = (JIDisplay2DProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unfixDevice_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unfixDevice_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_unfixDevice_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplay2D::unfixDevice();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Idisplay2d_getDisplayOptions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplay2DProxy))
				{
					EarthView::World::Display::IDisplayOptions* __values1 = pObjectX->EarthView::World::Display::IDisplay2D::getDisplayOptions();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Display::IDisplayOptions* __values1 = pObjectX->getDisplayOptions();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_register_1getDisplayOptions_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplay2DProxy *pObjectX = (JIDisplay2DProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDisplayOptions_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayOptions_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Idisplay2d_getDisplayOptions_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				EarthView::World::Display::IDisplayOptions* __values1 = pObjectX->EarthView::World::Display::IDisplay2D::getDisplayOptions();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Idisplay2d_getDisplayResolution_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplay2DProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::IDisplay2D::getDisplayResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getDisplayResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_register_1getDisplayResolution_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplay2DProxy *pObjectX = (JIDisplay2DProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDisplayResolution_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayResolution_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Idisplay2d_getDisplayResolution_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::IDisplay2D::getDisplayResolution();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_setDisplayResolution_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
			{
				ev_int32 resolution = (ev_int32) resolution_j;
				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIDisplay2DProxy))
				{
					pObjectX->EarthView::World::Display::IDisplay2D::setDisplayResolution(resolution);
				}
				else
				{
					pObjectX->setDisplayResolution(resolution);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_register_1setDisplayResolution_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIDisplay2DProxy *pObjectX = (JIDisplay2DProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDisplayResolution_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayResolution_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Idisplay2d_setDisplayResolution_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
			{
				ev_int32 resolution = (ev_int32) resolution_j;
				EarthView::World::Display::IDisplay2D *pObjectX = (EarthView::World::Display::IDisplay2D*) pObjXXXX;
				pObjectX->EarthView::World::Display::IDisplay2D::setDisplayResolution(resolution);
			}
		}
	}
}
