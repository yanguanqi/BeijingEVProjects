/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/icachedbitmap.h"
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
			class JICachedBitmapProxy : public EarthView::World::Display::ICachedBitmap
			{
			 private:
				EarthView::World::Core::ev_string m_load_IBitmap_IPaintDevice_callback;
				EarthView::World::Core::ev_string m_render_ev_int32_ev_int32_callback;
				EarthView::World::Core::ev_string m_render_IPaintDevice_ev_int32_ev_int32_callback;
			public:
				JICachedBitmapProxy(EarthView::World::Core::CNameValuePairList *pList) : ICachedBitmap(pList)
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
			protected:
				C_DISABLE_COPY(JICachedBitmapProxy)
			public:
				void register_load_IBitmap_IPaintDevice_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_IBitmap_IPaintDevice_callback = __method;
				}
				void register_render_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_ev_int32_ev_int32_callback = __method;
				}
				void register_render_IPaintDevice_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_IPaintDevice_ev_int32_ev_int32_callback = __method;
				}
				virtual void load(EarthView::World::Display::IBitmap* bmp, EarthView::World::Display::IPaintDevice* ref_destDevice)
				{
					if (this->_gRef != NULL && this->m_load_IBitmap_IPaintDevice_callback != "" && this->isCustomExtend())
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
						jlong bmp_j = (jlong) bmp;
						jlong ref_destDevice_j = (jlong) ref_destDevice;
						jmethodID __method = __gr->getMethod("load_IBitmap_IPaintDevice_callback");
						__env->CallVoidMethod(__obj, __method , bmp_j, ref_destDevice_j);
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
						return this->ICachedBitmap::load(bmp, ref_destDevice);
					}
				}
				virtual void render(ev_int32 x, ev_int32 y)
				{
					if (this->_gRef != NULL && this->m_render_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
						jint x_j = (jint) x;
						jint y_j = (jint) y;
						jmethodID __method = __gr->getMethod("render_ev_int32_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j);
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
						return this->ICachedBitmap::render(x, y);
					}
				}
				virtual void render(EarthView::World::Display::IPaintDevice* destDevice, ev_int32 x, ev_int32 y)
				{
					if (this->_gRef != NULL && this->m_render_IPaintDevice_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
						jlong destDevice_j = (jlong) destDevice;
						jint x_j = (jint) x;
						jint y_j = (jint) y;
						jmethodID __method = __gr->getMethod("render_IPaintDevice_ev_int32_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , destDevice_j, x_j, y_j);
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
						return this->ICachedBitmap::render(destDevice, x, y);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JICachedBitmapProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_load_1IBitmap_1IPaintDevice(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jlong ref_destDevice_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				EarthView::World::Display::IPaintDevice *ref_destDevice = (EarthView::World::Display::IPaintDevice*) ref_destDevice_j;
				EarthView::World::Display::ICachedBitmap *pObjectX = (EarthView::World::Display::ICachedBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JICachedBitmapProxy))
				{
					pObjectX->EarthView::World::Display::ICachedBitmap::load(bmp, ref_destDevice);
				}
				else
				{
					pObjectX->load(bmp, ref_destDevice);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_register_1load_1IBitmap_1IPaintDevice(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JICachedBitmapProxy *pObjectX = (JICachedBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_IBitmap_IPaintDevice_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_IBitmap_IPaintDevice_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_load_1IBitmap_1IPaintDevice_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bmp_j, jlong ref_destDevice_j)
			{
				EarthView::World::Display::IBitmap *bmp = (EarthView::World::Display::IBitmap*) bmp_j;
				EarthView::World::Display::IPaintDevice *ref_destDevice = (EarthView::World::Display::IPaintDevice*) ref_destDevice_j;
				EarthView::World::Display::ICachedBitmap *pObjectX = (EarthView::World::Display::ICachedBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::ICachedBitmap::load(bmp, ref_destDevice);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_render_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
			{
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				EarthView::World::Display::ICachedBitmap *pObjectX = (EarthView::World::Display::ICachedBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JICachedBitmapProxy))
				{
					pObjectX->EarthView::World::Display::ICachedBitmap::render(x, y);
				}
				else
				{
					pObjectX->render(x, y);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_register_1render_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JICachedBitmapProxy *pObjectX = (JICachedBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_ev_int32_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_ev_int32_ev_int32_callback", "(II)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_render_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
			{
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				EarthView::World::Display::ICachedBitmap *pObjectX = (EarthView::World::Display::ICachedBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::ICachedBitmap::render(x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_render_1IPaintDevice_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jint x_j, jint y_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				EarthView::World::Display::ICachedBitmap *pObjectX = (EarthView::World::Display::ICachedBitmap*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JICachedBitmapProxy))
				{
					pObjectX->EarthView::World::Display::ICachedBitmap::render(destDevice, x, y);
				}
				else
				{
					pObjectX->render(destDevice, x, y);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_register_1render_1IPaintDevice_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JICachedBitmapProxy *pObjectX = (JICachedBitmapProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_IPaintDevice_ev_int32_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_IPaintDevice_ev_int32_ev_int32_callback", "(JII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Icachedbitmap_render_1IPaintDevice_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destDevice_j, jint x_j, jint y_j)
			{
				EarthView::World::Display::IPaintDevice *destDevice = (EarthView::World::Display::IPaintDevice*) destDevice_j;
				ev_int32 x = (ev_int32) x_j;
				ev_int32 y = (ev_int32) y_j;
				EarthView::World::Display::ICachedBitmap *pObjectX = (EarthView::World::Display::ICachedBitmap*) pObjXXXX;
				pObjectX->EarthView::World::Display::ICachedBitmap::render(destDevice, x, y);
			}
		}
	}
}
