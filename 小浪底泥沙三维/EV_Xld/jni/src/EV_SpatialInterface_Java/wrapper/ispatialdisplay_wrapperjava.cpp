/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialdisplay.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class JISpatialDisplayProxy : public EarthView::World::Spatial::Display::ISpatialDisplay
				{
				 private:
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_getSpatialTransformer_void_callback;
					EarthView::World::Core::ev_string m_isCancelled_void_callback;
					EarthView::World::Core::ev_string m_start_void_callback;
					EarthView::World::Core::ev_string m_cancel_void_callback;
					EarthView::World::Core::ev_string m_fixDevice_IPaintDevice_callback;
					EarthView::World::Core::ev_string m_getDevice_void_callback;
					EarthView::World::Core::ev_string m_unfixDevice_void_callback;
					EarthView::World::Core::ev_string m_getDisplayOptions_void_callback;
					EarthView::World::Core::ev_string m_getDisplayResolution_void_callback;
					EarthView::World::Core::ev_string m_setDisplayResolution_ev_int32_callback;
				public:
					JISpatialDisplayProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialDisplay(pList)
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
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_getSpatialTransformer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialTransformer_void_callback = __method;
					}
					void register_isCancelled_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isCancelled_void_callback = __method;
					}
					void register_start_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_start_void_callback = __method;
					}
					void register_cancel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_cancel_void_callback = __method;
					}
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
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (const EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialDisplay::getSpatialReference();
						}
					}
					virtual void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jlong ref_sr_j = (jlong) ref_sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , ref_sr_j);
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
							return this->ISpatialDisplay::setSpatialReference(ref_sr);
						}
					}
					virtual EarthView::World::Spatial::Display::ISpatialTransformer* getSpatialTransformer() const
					{
						if (this->_gRef != NULL && this->m_getSpatialTransformer_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialTransformer_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISpatialTransformer *__values1 = (EarthView::World::Spatial::Display::ISpatialTransformer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialDisplay::getSpatialTransformer();
						}
					}
					virtual ev_bool isCancelled() const
					{
						if (this->_gRef != NULL && this->m_isCancelled_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isCancelled_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
							return this->ISpatialDisplay::isCancelled();
						}
					}
					virtual void start()
					{
						if (this->_gRef != NULL && this->m_start_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("start_void_callback");
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
							return this->ISpatialDisplay::start();
						}
					}
					virtual void cancel()
					{
						if (this->_gRef != NULL && this->m_cancel_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("cancel_void_callback");
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
							return this->ISpatialDisplay::cancel();
						}
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
							return this->ISpatialDisplay::fixDevice(ref_device);
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
							return this->ISpatialDisplay::getDevice();
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
							return this->ISpatialDisplay::unfixDevice();
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
							return this->ISpatialDisplay::getDisplayOptions();
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
							return this->ISpatialDisplay::getDisplayResolution();
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
							return this->ISpatialDisplay::setDisplayResolution(resolution);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISpatialDisplayProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::setSpatialReference(ref_sr);
					}
					else
					{
						pObjectX->setSpatialReference(ref_sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_ISpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::setSpatialReference(ref_sr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getSpatialTransformer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						EarthView::World::Spatial::Display::ISpatialTransformer* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialTransformer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISpatialTransformer* __values1 = pObjectX->getSpatialTransformer();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1getSpatialTransformer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialTransformer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialTransformer_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getSpatialTransformer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					EarthView::World::Spatial::Display::ISpatialTransformer* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialTransformer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_isCancelled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::isCancelled();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isCancelled();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1isCancelled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isCancelled_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isCancelled_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_isCancelled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::isCancelled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_start_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::start();
					}
					else
					{
						pObjectX->start();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1start_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_start_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"start_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_start_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::start();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_cancel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::cancel();
					}
					else
					{
						pObjectX->cancel();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1cancel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_cancel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"cancel_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_cancel_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::cancel();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_fixDevice_1IPaintDevice(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_device_j)
				{
					EarthView::World::Display::IPaintDevice *ref_device = (EarthView::World::Display::IPaintDevice*) ref_device_j;
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::fixDevice(ref_device);
					}
					else
					{
						pObjectX->fixDevice(ref_device);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1fixDevice_1IPaintDevice(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_fixDevice_1IPaintDevice_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_device_j)
				{
					EarthView::World::Display::IPaintDevice *ref_device = (EarthView::World::Display::IPaintDevice*) ref_device_j;
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::fixDevice(ref_device);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getDevice_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getDevice();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1getDevice_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getDevice_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					EarthView::World::Display::IPaintDevice* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getDevice();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_unfixDevice_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::unfixDevice();
					}
					else
					{
						pObjectX->unfixDevice();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1unfixDevice_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_unfixDevice_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::unfixDevice();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getDisplayOptions_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						EarthView::World::Display::IDisplayOptions* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayOptions();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1getDisplayOptions_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getDisplayOptions_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					EarthView::World::Display::IDisplayOptions* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayOptions();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getDisplayResolution_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayResolution();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1getDisplayResolution_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_getDisplayResolution_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_setDisplayResolution_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
				{
					ev_int32 resolution = (ev_int32) resolution_j;
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialDisplayProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::setDisplayResolution(resolution);
					}
					else
					{
						pObjectX->setDisplayResolution(resolution);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_register_1setDisplayResolution_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialDisplayProxy *pObjectX = (JISpatialDisplayProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialdisplay_setDisplayResolution_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
				{
					ev_int32 resolution = (ev_int32) resolution_j;
					EarthView::World::Spatial::Display::ISpatialDisplay *pObjectX = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialDisplay::setDisplayResolution(resolution);
				}
			}
		}
	}
}
