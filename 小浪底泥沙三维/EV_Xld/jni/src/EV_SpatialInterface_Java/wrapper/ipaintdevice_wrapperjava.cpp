/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipaintdevice.h"
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
			class JIPaintDeviceProxy : public EarthView::World::Display::IPaintDevice
			{
			 private:
				EarthView::World::Core::ev_string m_getDC_void_callback;
				EarthView::World::Core::ev_string m_releaseDC_void_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_fill_IColor_callback;
				EarthView::World::Core::ev_string m_fill_ev_int32_callback;
				EarthView::World::Core::ev_string m_getResolution_void_callback;
			public:
				JIPaintDeviceProxy(EarthView::World::Core::CNameValuePairList *pList) : IPaintDevice(pList)
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
				void register_getDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDC_void_callback = __method;
				}
				void register_releaseDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseDC_void_callback = __method;
				}
				void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWidth_void_callback = __method;
				}
				void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeight_void_callback = __method;
				}
				void register_fill_IColor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fill_IColor_callback = __method;
				}
				void register_fill_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fill_ev_int32_callback = __method;
				}
				void register_getResolution_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getResolution_void_callback = __method;
				}
				virtual ev_int64 getDC()
				{
					if (this->_gRef != NULL && this->m_getDC_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDC_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int64 __values1 = (ev_int64) __values1_j;
						return __values1;
					}
					else
					{
						return this->IPaintDevice::getDC();
					}
				}
				virtual void releaseDC()
				{
					if (this->_gRef != NULL && this->m_releaseDC_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("releaseDC_void_callback");
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
						return this->IPaintDevice::releaseDC();
					}
				}
				virtual ev_int32 getWidth() const
				{
					if (this->_gRef != NULL && this->m_getWidth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWidth_void_callback");
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
						return this->IPaintDevice::getWidth();
					}
				}
				virtual ev_int32 getHeight() const
				{
					if (this->_gRef != NULL && this->m_getHeight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHeight_void_callback");
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
						return this->IPaintDevice::getHeight();
					}
				}
				virtual void fill(const EarthView::World::Spatial::Display::IColor* color)
				{
					if (this->_gRef != NULL && this->m_fill_IColor_callback != "" && this->isCustomExtend())
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
						jlong color_j = (jlong) color;
						jmethodID __method = __gr->getMethod("fill_IColor_callback");
						__env->CallVoidMethod(__obj, __method , color_j);
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
						return this->IPaintDevice::fill(color);
					}
				}
				virtual void fill(ev_int32 color)
				{
					if (this->_gRef != NULL && this->m_fill_ev_int32_callback != "" && this->isCustomExtend())
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
						jint color_j = (jint) color;
						jmethodID __method = __gr->getMethod("fill_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , color_j);
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
						return this->IPaintDevice::fill(color);
					}
				}
				virtual ev_int32 getResolution() const
				{
					if (this->_gRef != NULL && this->m_getResolution_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getResolution_void_callback");
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
						return this->IPaintDevice::getResolution();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JIPaintDeviceProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Ipaintdevice_getDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1getDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDC_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Ipaintdevice_getDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getDC();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_releaseDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					pObjectX->EarthView::World::Display::IPaintDevice::releaseDC();
				}
				else
				{
					pObjectX->releaseDC();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1releaseDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseDC_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_releaseDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				pObjectX->EarthView::World::Display::IPaintDevice::releaseDC();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Ipaintdevice_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Ipaintdevice_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Ipaintdevice_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Ipaintdevice_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_fill_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					pObjectX->EarthView::World::Display::IPaintDevice::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1fill_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fill_IColor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fill_IColor_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_fill_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				pObjectX->EarthView::World::Display::IPaintDevice::fill(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_fill_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					pObjectX->EarthView::World::Display::IPaintDevice::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1fill_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fill_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fill_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_fill_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				pObjectX->EarthView::World::Display::IPaintDevice::fill(color);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Ipaintdevice_getResolution_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JIPaintDeviceProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Ipaintdevice_register_1getResolution_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JIPaintDeviceProxy *pObjectX = (JIPaintDeviceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getResolution_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getResolution_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Ipaintdevice_getResolution_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::IPaintDevice *pObjectX = (EarthView::World::Display::IPaintDevice*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::IPaintDevice::getResolution();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
		}
	}
}
