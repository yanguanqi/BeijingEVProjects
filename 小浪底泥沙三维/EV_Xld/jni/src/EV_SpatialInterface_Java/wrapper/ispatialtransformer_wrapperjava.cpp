/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialtransformer.h"
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
				class JISpatialTransformerProxy : public EarthView::World::Spatial::Display::ISpatialTransformer
				{
				 private:
					EarthView::World::Core::ev_string m_isValid_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_getDataExtent_void_callback;
					EarthView::World::Core::ev_string m_getGeographicDataExtent_void_callback;
					EarthView::World::Core::ev_string m_setDataExtent_IEnvelope_callback;
					EarthView::World::Core::ev_string m_getDeviceExtent_void_callback;
					EarthView::World::Core::ev_string m_setDeviceExtent_IEnvelope_callback;
					EarthView::World::Core::ev_string m_getRotation_void_callback;
					EarthView::World::Core::ev_string m_rotate_ev_real64_callback;
					EarthView::World::Core::ev_string m_rotateAt_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getCurrentScale_void_callback;
					EarthView::World::Core::ev_string m_setCurrentScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_setCurrentScale_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getCenter_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getGeographicCenter_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_setCenter_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_translate_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_reset_void_callback;
					EarthView::World::Core::ev_string m_toDevicePoints_ev_real64_ev_real64_ev_uint32_callback;
					EarthView::World::Core::ev_string m_toMapPoints_ev_real64_ev_real64_ev_uint32_callback;
					EarthView::World::Core::ev_string m_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback;
					EarthView::World::Core::ev_string m_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback;
					EarthView::World::Core::ev_string m_toDeviceLength_ev_real64_int_callback;
					EarthView::World::Core::ev_string m_toMapLength_ev_real64_int_callback;
					EarthView::World::Core::ev_string m_toMapRect_IEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_toDeviceRect_IEnvelope_IEnvelope_callback;
					EarthView::World::Core::ev_string m_transform_ISpatialReference_ISpatialReference_IEnvelope_callback;
					EarthView::World::Core::ev_string m_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback;
					EarthView::World::Core::ev_string m_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback;
				public:
					JISpatialTransformerProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialTransformer(pList)
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
					void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isValid_void_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_getDataExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataExtent_void_callback = __method;
					}
					void register_getGeographicDataExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeographicDataExtent_void_callback = __method;
					}
					void register_setDataExtent_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDataExtent_IEnvelope_callback = __method;
					}
					void register_getDeviceExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDeviceExtent_void_callback = __method;
					}
					void register_setDeviceExtent_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDeviceExtent_IEnvelope_callback = __method;
					}
					void register_getRotation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRotation_void_callback = __method;
					}
					void register_rotate_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rotate_ev_real64_callback = __method;
					}
					void register_rotateAt_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rotateAt_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getCurrentScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCurrentScale_void_callback = __method;
					}
					void register_setCurrentScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCurrentScale_ev_real64_callback = __method;
					}
					void register_setCurrentScale_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCurrentScale_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getCenter_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCenter_ev_real64_ev_real64_callback = __method;
					}
					void register_getGeographicCenter_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeographicCenter_ev_real64_ev_real64_callback = __method;
					}
					void register_setCenter_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCenter_ev_real64_ev_real64_callback = __method;
					}
					void register_translate_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_translate_ev_real64_ev_real64_callback = __method;
					}
					void register_reset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_reset_void_callback = __method;
					}
					void register_toDevicePoints_ev_real64_ev_real64_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toDevicePoints_ev_real64_ev_real64_ev_uint32_callback = __method;
					}
					void register_toMapPoints_ev_real64_ev_real64_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toMapPoints_ev_real64_ev_real64_ev_uint32_callback = __method;
					}
					void register_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback = __method;
					}
					void register_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback = __method;
					}
					void register_toDeviceLength_ev_real64_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toDeviceLength_ev_real64_int_callback = __method;
					}
					void register_toMapLength_ev_real64_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toMapLength_ev_real64_int_callback = __method;
					}
					void register_toMapRect_IEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toMapRect_IEnvelope_IEnvelope_callback = __method;
					}
					void register_toDeviceRect_IEnvelope_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toDeviceRect_IEnvelope_IEnvelope_callback = __method;
					}
					void register_transform_ISpatialReference_ISpatialReference_IEnvelope_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_transform_ISpatialReference_ISpatialReference_IEnvelope_callback = __method;
					}
					void register_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback = __method;
					}
					void register_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback = __method;
					}
					virtual ev_bool isValid() const
					{
						if (this->_gRef != NULL && this->m_isValid_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isValid_void_callback");
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
							return this->ISpatialTransformer::isValid();
						}
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
							return this->ISpatialTransformer::getSpatialReference();
						}
					}
					virtual void setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference* sr)
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
							jlong sr_j = (jlong) sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , sr_j);
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
							return this->ISpatialTransformer::setSpatialReference(sr);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDataExtent()
					{
						if (this->_gRef != NULL && this->m_getDataExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialTransformer::getDataExtent();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getGeographicDataExtent()
					{
						if (this->_gRef != NULL && this->m_getGeographicDataExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGeographicDataExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialTransformer::getGeographicDataExtent();
						}
					}
					virtual void setDataExtent(const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if (this->_gRef != NULL && this->m_setDataExtent_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong extent_j = (jlong) extent;
							jmethodID __method = __gr->getMethod("setDataExtent_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , extent_j);
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
							return this->ISpatialTransformer::setDataExtent(extent);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getDeviceExtent()
					{
						if (this->_gRef != NULL && this->m_getDeviceExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDeviceExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialTransformer::getDeviceExtent();
						}
					}
					virtual void setDeviceExtent(const EarthView::World::Spatial::Geometry::IEnvelope* extent)
					{
						if (this->_gRef != NULL && this->m_setDeviceExtent_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong extent_j = (jlong) extent;
							jmethodID __method = __gr->getMethod("setDeviceExtent_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , extent_j);
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
							return this->ISpatialTransformer::setDeviceExtent(extent);
						}
					}
					virtual ev_real64 getRotation() const
					{
						if (this->_gRef != NULL && this->m_getRotation_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getRotation_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialTransformer::getRotation();
						}
					}
					virtual void rotate(ev_real64 angle)
					{
						if (this->_gRef != NULL && this->m_rotate_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble angle_j = (jdouble) angle;
							jmethodID __method = __gr->getMethod("rotate_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , angle_j);
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
							return this->ISpatialTransformer::rotate(angle);
						}
					}
					virtual void rotateAt(ev_real64 angle, ev_real64 x, ev_real64 y)
					{
						if (this->_gRef != NULL && this->m_rotateAt_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble angle_j = (jdouble) angle;
							jdouble x_j = (jdouble) x;
							jdouble y_j = (jdouble) y;
							jmethodID __method = __gr->getMethod("rotateAt_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , angle_j, x_j, y_j);
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
							return this->ISpatialTransformer::rotateAt(angle, x, y);
						}
					}
					virtual ev_real64 getCurrentScale()
					{
						if (this->_gRef != NULL && this->m_getCurrentScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCurrentScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialTransformer::getCurrentScale();
						}
					}
					virtual void setCurrentScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setCurrentScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setCurrentScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->ISpatialTransformer::setCurrentScale(scale);
						}
					}
					virtual void setCurrentScale(ev_real64 scale, ev_real64 x, ev_real64 y)
					{
						if (this->_gRef != NULL && this->m_setCurrentScale_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble scale_j = (jdouble) scale;
							jdouble x_j = (jdouble) x;
							jdouble y_j = (jdouble) y;
							jmethodID __method = __gr->getMethod("setCurrentScale_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j, x_j, y_j);
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
							return this->ISpatialTransformer::setCurrentScale(scale, x, y);
						}
					}
					virtual void getCenter(ev_real64* cx, ev_real64* cy)
					{
						if (this->_gRef != NULL && this->m_getCenter_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong cx_j = (jlong) cx;
							jlong cy_j = (jlong) cy;
							jmethodID __method = __gr->getMethod("getCenter_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , cx_j, cy_j);
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
							return this->ISpatialTransformer::getCenter(cx, cy);
						}
					}
					virtual void getGeographicCenter(ev_real64* cx, ev_real64* cy)
					{
						if (this->_gRef != NULL && this->m_getGeographicCenter_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong cx_j = (jlong) cx;
							jlong cy_j = (jlong) cy;
							jmethodID __method = __gr->getMethod("getGeographicCenter_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , cx_j, cy_j);
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
							return this->ISpatialTransformer::getGeographicCenter(cx, cy);
						}
					}
					virtual void setCenter(ev_real64 cx, ev_real64 cy)
					{
						if (this->_gRef != NULL && this->m_setCenter_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble cx_j = (jdouble) cx;
							jdouble cy_j = (jdouble) cy;
							jmethodID __method = __gr->getMethod("setCenter_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , cx_j, cy_j);
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
							return this->ISpatialTransformer::setCenter(cx, cy);
						}
					}
					virtual void translate(ev_real64 offsetX, ev_real64 offsetY)
					{
						if (this->_gRef != NULL && this->m_translate_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble offsetX_j = (jdouble) offsetX;
							jdouble offsetY_j = (jdouble) offsetY;
							jmethodID __method = __gr->getMethod("translate_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , offsetX_j, offsetY_j);
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
							return this->ISpatialTransformer::translate(offsetX, offsetY);
						}
					}
					virtual void reset()
					{
						if (this->_gRef != NULL && this->m_reset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("reset_void_callback");
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
							return this->ISpatialTransformer::reset();
						}
					}
					virtual void toDevicePoints(ev_real64* x, ev_real64* y, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_toDevicePoints_ev_real64_ev_real64_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong x_j = (jlong) x;
							jlong y_j = (jlong) y;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("toDevicePoints_ev_real64_ev_real64_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, count_j);
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
							return this->ISpatialTransformer::toDevicePoints(x, y, count);
						}
					}
					virtual void toMapPoints(ev_real64* x, ev_real64* y, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_toMapPoints_ev_real64_ev_real64_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong x_j = (jlong) x;
							jlong y_j = (jlong) y;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("toMapPoints_ev_real64_ev_real64_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, count_j);
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
							return this->ISpatialTransformer::toMapPoints(x, y, count);
						}
					}
					virtual void geographicToDevicePoints(ev_real64* x, ev_real64* y, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong x_j = (jlong) x;
							jlong y_j = (jlong) y;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, count_j);
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
							return this->ISpatialTransformer::geographicToDevicePoints(x, y, count);
						}
					}
					virtual void deviceToGeographicPoints(ev_real64* x, ev_real64* y, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong x_j = (jlong) x;
							jlong y_j = (jlong) y;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, count_j);
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
							return this->ISpatialTransformer::deviceToGeographicPoints(x, y, count);
						}
					}
					virtual void toDeviceLength(ev_real64* len, int count)
					{
						if (this->_gRef != NULL && this->m_toDeviceLength_ev_real64_int_callback != "" && this->isCustomExtend())
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
							jlong len_j = (jlong) len;
							jint count_j = (jint) count;
							jmethodID __method = __gr->getMethod("toDeviceLength_ev_real64_int_callback");
							__env->CallVoidMethod(__obj, __method , len_j, count_j);
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
							return this->ISpatialTransformer::toDeviceLength(len, count);
						}
					}
					virtual void toMapLength(ev_real64* len, int count)
					{
						if (this->_gRef != NULL && this->m_toMapLength_ev_real64_int_callback != "" && this->isCustomExtend())
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
							jlong len_j = (jlong) len;
							jint count_j = (jint) count;
							jmethodID __method = __gr->getMethod("toMapLength_ev_real64_int_callback");
							__env->CallVoidMethod(__obj, __method , len_j, count_j);
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
							return this->ISpatialTransformer::toMapLength(len, count);
						}
					}
					virtual void toMapRect(const EarthView::World::Spatial::Geometry::IEnvelope* devRect, EarthView::World::Spatial::Geometry::IEnvelope* mapRect)
					{
						if (this->_gRef != NULL && this->m_toMapRect_IEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong devRect_j = (jlong) devRect;
							jlong mapRect_j = (jlong) mapRect;
							jmethodID __method = __gr->getMethod("toMapRect_IEnvelope_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , devRect_j, mapRect_j);
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
							return this->ISpatialTransformer::toMapRect(devRect, mapRect);
						}
					}
					virtual void toDeviceRect(const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, EarthView::World::Spatial::Geometry::IEnvelope* devRect)
					{
						if (this->_gRef != NULL && this->m_toDeviceRect_IEnvelope_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong mapRect_j = (jlong) mapRect;
							jlong devRect_j = (jlong) devRect;
							jmethodID __method = __gr->getMethod("toDeviceRect_IEnvelope_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , mapRect_j, devRect_j);
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
							return this->ISpatialTransformer::toDeviceRect(mapRect, devRect);
						}
					}
					virtual void transform(const EarthView::World::Spatial::Geometry::ISpatialReference* src, const EarthView::World::Spatial::Geometry::ISpatialReference* dest, EarthView::World::Spatial::Geometry::IEnvelope* enve)
					{
						if (this->_gRef != NULL && this->m_transform_ISpatialReference_ISpatialReference_IEnvelope_callback != "" && this->isCustomExtend())
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
							jlong src_j = (jlong) src;
							jlong dest_j = (jlong) dest;
							jlong enve_j = (jlong) enve;
							jmethodID __method = __gr->getMethod("transform_ISpatialReference_ISpatialReference_IEnvelope_callback");
							__env->CallVoidMethod(__obj, __method , src_j, dest_j, enve_j);
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
							return this->ISpatialTransformer::transform(src, dest, enve);
						}
					}
					virtual void transform(const EarthView::World::Spatial::Geometry::ISpatialReference* src, const EarthView::World::Spatial::Geometry::ISpatialReference* dest, ev_real64* x, ev_real64* y, ev_int32 count)
					{
						if (this->_gRef != NULL && this->m_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback != "" && this->isCustomExtend())
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
							jlong src_j = (jlong) src;
							jlong dest_j = (jlong) dest;
							jlong x_j = (jlong) x;
							jlong y_j = (jlong) y;
							jint count_j = (jint) count;
							jmethodID __method = __gr->getMethod("transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , src_j, dest_j, x_j, y_j, count_j);
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
							return this->ISpatialTransformer::transform(src, dest, x, y, count);
						}
					}
					virtual void transform(const EarthView::World::Spatial::Geometry::ISpatialReference* src, ev_int32 nCount, ev_real64* pdfX, ev_real64* pdfY, ev_bool pForwardFlag)
					{
						if (this->_gRef != NULL && this->m_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong src_j = (jlong) src;
							jint nCount_j = (jint) nCount;
							jlong pdfX_j = (jlong) pdfX;
							jlong pdfY_j = (jlong) pdfY;
							jboolean pForwardFlag_j = (jboolean) pForwardFlag;
							jmethodID __method = __gr->getMethod("transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , src_j, nCount_j, pdfX_j, pdfY_j, pForwardFlag_j);
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
							return this->ISpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISpatialTransformerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isValid_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isValid_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getSpatialReference();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setSpatialReference(sr);
					}
					else
					{
						pObjectX->setSpatialReference(sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setSpatialReference(sr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getDataExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getDataExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getDataExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getDataExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getDataExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getDataExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getGeographicDataExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicDataExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getGeographicDataExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getGeographicDataExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeographicDataExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeographicDataExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getGeographicDataExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicDataExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setDataExtent_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extent_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *extent = (const EarthView::World::Spatial::Geometry::IEnvelope*) extent_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setDataExtent(extent);
					}
					else
					{
						pObjectX->setDataExtent(extent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1setDataExtent_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDataExtent_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDataExtent_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setDataExtent_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extent_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *extent = (const EarthView::World::Spatial::Geometry::IEnvelope*) extent_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setDataExtent(extent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getDeviceExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getDeviceExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getDeviceExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getDeviceExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDeviceExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDeviceExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getDeviceExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getDeviceExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setDeviceExtent_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extent_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *extent = (const EarthView::World::Spatial::Geometry::IEnvelope*) extent_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setDeviceExtent(extent);
					}
					else
					{
						pObjectX->setDeviceExtent(extent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1setDeviceExtent_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDeviceExtent_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDeviceExtent_IEnvelope_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setDeviceExtent_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong extent_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *extent = (const EarthView::World::Spatial::Geometry::IEnvelope*) extent_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setDeviceExtent(extent);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getRotation();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getRotation();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getRotation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRotation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRotation_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getRotation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getRotation();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_rotate_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::rotate(angle);
					}
					else
					{
						pObjectX->rotate(angle);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1rotate_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rotate_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rotate_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_rotate_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::rotate(angle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_rotateAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::rotateAt(angle, x, y);
					}
					else
					{
						pObjectX->rotateAt(angle, x, y);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1rotateAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rotateAt_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rotateAt_ev_real64_ev_real64_ev_real64_callback", "(DDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_rotateAt_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::rotateAt(angle, x, y);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getCurrentScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getCurrentScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getCurrentScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getCurrentScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCurrentScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getCurrentScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getCurrentScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setCurrentScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale);
					}
					else
					{
						pObjectX->setCurrentScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1setCurrentScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCurrentScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setCurrentScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setCurrentScale_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale, x, y);
					}
					else
					{
						pObjectX->setCurrentScale(scale, x, y);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1setCurrentScale_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCurrentScale_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentScale_ev_real64_ev_real64_ev_real64_callback", "(DDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setCurrentScale_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setCurrentScale(scale, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getCenter(cx, cy);
					}
					else
					{
						pObjectX->getCenter(cx, cy);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getCenter_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCenter_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCenter_ev_real64_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getCenter_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getGeographicCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicCenter(cx, cy);
					}
					else
					{
						pObjectX->getGeographicCenter(cx, cy);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1getGeographicCenter_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeographicCenter_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeographicCenter_ev_real64_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_getGeographicCenter_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cx_j, jlong cy_j)
				{
					ev_real64 *cx = (ev_real64*) cx_j;
					ev_real64 *cy = (ev_real64*) cy_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::getGeographicCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setCenter(cx, cy);
					}
					else
					{
						pObjectX->setCenter(cx, cy);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1setCenter_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCenter_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCenter_ev_real64_ev_real64_callback", "(DD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_setCenter_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble cx_j, jdouble cy_j)
				{
					ev_real64 cx = (ev_real64) cx_j;
					ev_real64 cy = (ev_real64) cy_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::setCenter(cx, cy);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_translate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offsetX_j, jdouble offsetY_j)
				{
					ev_real64 offsetX = (ev_real64) offsetX_j;
					ev_real64 offsetY = (ev_real64) offsetY_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::translate(offsetX, offsetY);
					}
					else
					{
						pObjectX->translate(offsetX, offsetY);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1translate_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_translate_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"translate_ev_real64_ev_real64_callback", "(DD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_translate_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offsetX_j, jdouble offsetY_j)
				{
					ev_real64 offsetX = (ev_real64) offsetX_j;
					ev_real64 offsetY = (ev_real64) offsetY_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::translate(offsetX, offsetY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::reset();
					}
					else
					{
						pObjectX->reset();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_reset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"reset_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_reset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::reset();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toDevicePoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toDevicePoints(x, y, count);
					}
					else
					{
						pObjectX->toDevicePoints(x, y, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1toDevicePoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toDevicePoints_ev_real64_ev_real64_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toDevicePoints_ev_real64_ev_real64_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toDevicePoints_1ev_1real64_1ev_1real64_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toDevicePoints(x, y, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toMapPoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toMapPoints(x, y, count);
					}
					else
					{
						pObjectX->toMapPoints(x, y, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1toMapPoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toMapPoints_ev_real64_ev_real64_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toMapPoints_ev_real64_ev_real64_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toMapPoints_1ev_1real64_1ev_1real64_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toMapPoints(x, y, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_geographicToDevicePoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::geographicToDevicePoints(x, y, count);
					}
					else
					{
						pObjectX->geographicToDevicePoints(x, y, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1geographicToDevicePoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"geographicToDevicePoints_ev_real64_ev_real64_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_geographicToDevicePoints_1ev_1real64_1ev_1real64_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::geographicToDevicePoints(x, y, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_deviceToGeographicPoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::deviceToGeographicPoints(x, y, count);
					}
					else
					{
						pObjectX->deviceToGeographicPoints(x, y, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1deviceToGeographicPoints_1ev_1real64_1ev_1real64_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deviceToGeographicPoints_ev_real64_ev_real64_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_deviceToGeographicPoints_1ev_1real64_1ev_1real64_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::deviceToGeographicPoints(x, y, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toDeviceLength_1ev_1real64_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong len_j, jint count_j)
				{
					ev_real64 *len = (ev_real64*) len_j;
					int count = (int) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceLength(len, count);
					}
					else
					{
						pObjectX->toDeviceLength(len, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1toDeviceLength_1ev_1real64_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toDeviceLength_ev_real64_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toDeviceLength_ev_real64_int_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toDeviceLength_1ev_1real64_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong len_j, jint count_j)
				{
					ev_real64 *len = (ev_real64*) len_j;
					int count = (int) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceLength(len, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toMapLength_1ev_1real64_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong len_j, jint count_j)
				{
					ev_real64 *len = (ev_real64*) len_j;
					int count = (int) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toMapLength(len, count);
					}
					else
					{
						pObjectX->toMapLength(len, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1toMapLength_1ev_1real64_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toMapLength_ev_real64_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toMapLength_ev_real64_int_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toMapLength_1ev_1real64_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong len_j, jint count_j)
				{
					ev_real64 *len = (ev_real64*) len_j;
					int count = (int) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toMapLength(len, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toMapRect_1IEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong devRect_j, jlong mapRect_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *devRect = (const EarthView::World::Spatial::Geometry::IEnvelope*) devRect_j;
					EarthView::World::Spatial::Geometry::IEnvelope *mapRect = (EarthView::World::Spatial::Geometry::IEnvelope*) mapRect_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toMapRect(devRect, mapRect);
					}
					else
					{
						pObjectX->toMapRect(devRect, mapRect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1toMapRect_1IEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toMapRect_IEnvelope_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toMapRect_IEnvelope_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toMapRect_1IEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong devRect_j, jlong mapRect_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *devRect = (const EarthView::World::Spatial::Geometry::IEnvelope*) devRect_j;
					EarthView::World::Spatial::Geometry::IEnvelope *mapRect = (EarthView::World::Spatial::Geometry::IEnvelope*) mapRect_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toMapRect(devRect, mapRect);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toDeviceRect_1IEnvelope_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mapRect_j, jlong devRect_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *mapRect = (const EarthView::World::Spatial::Geometry::IEnvelope*) mapRect_j;
					EarthView::World::Spatial::Geometry::IEnvelope *devRect = (EarthView::World::Spatial::Geometry::IEnvelope*) devRect_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceRect(mapRect, devRect);
					}
					else
					{
						pObjectX->toDeviceRect(mapRect, devRect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1toDeviceRect_1IEnvelope_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toDeviceRect_IEnvelope_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toDeviceRect_IEnvelope_IEnvelope_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_toDeviceRect_1IEnvelope_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mapRect_j, jlong devRect_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope *mapRect = (const EarthView::World::Spatial::Geometry::IEnvelope*) mapRect_j;
					EarthView::World::Spatial::Geometry::IEnvelope *devRect = (EarthView::World::Spatial::Geometry::IEnvelope*) devRect_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::toDeviceRect(mapRect, devRect);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_transform_1ISpatialReference_1ISpatialReference_1IEnvelope(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong enve_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *src = (const EarthView::World::Spatial::Geometry::ISpatialReference*) src_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *dest = (const EarthView::World::Spatial::Geometry::ISpatialReference*) dest_j;
					EarthView::World::Spatial::Geometry::IEnvelope *enve = (EarthView::World::Spatial::Geometry::IEnvelope*) enve_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, enve);
					}
					else
					{
						pObjectX->transform(src, dest, enve);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1transform_1ISpatialReference_1ISpatialReference_1IEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_transform_ISpatialReference_ISpatialReference_IEnvelope_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"transform_ISpatialReference_ISpatialReference_IEnvelope_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_transform_1ISpatialReference_1ISpatialReference_1IEnvelope_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong enve_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *src = (const EarthView::World::Spatial::Geometry::ISpatialReference*) src_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *dest = (const EarthView::World::Spatial::Geometry::ISpatialReference*) dest_j;
					EarthView::World::Spatial::Geometry::IEnvelope *enve = (EarthView::World::Spatial::Geometry::IEnvelope*) enve_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, enve);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_transform_1ISpatialReference_1ISpatialReference_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong x_j, jlong y_j, jint count_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *src = (const EarthView::World::Spatial::Geometry::ISpatialReference*) src_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *dest = (const EarthView::World::Spatial::Geometry::ISpatialReference*) dest_j;
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_int32 count = (ev_int32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, x, y, count);
					}
					else
					{
						pObjectX->transform(src, dest, x, y, count);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1transform_1ISpatialReference_1ISpatialReference_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"transform_ISpatialReference_ISpatialReference_ev_real64_ev_real64_ev_int32_callback", "(JJJJI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_transform_1ISpatialReference_1ISpatialReference_1ev_1real64_1ev_1real64_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jlong dest_j, jlong x_j, jlong y_j, jint count_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *src = (const EarthView::World::Spatial::Geometry::ISpatialReference*) src_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *dest = (const EarthView::World::Spatial::Geometry::ISpatialReference*) dest_j;
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_int32 count = (ev_int32) count_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, dest, x, y, count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_transform_1ISpatialReference_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jboolean pForwardFlag_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *src = (const EarthView::World::Spatial::Geometry::ISpatialReference*) src_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_bool pForwardFlag = (ev_bool) pForwardFlag_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialTransformerProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
					}
					else
					{
						pObjectX->transform(src, nCount, pdfX, pdfY, pForwardFlag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_register_1transform_1ISpatialReference_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialTransformerProxy *pObjectX = (JISpatialTransformerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"transform_ISpatialReference_ev_int32_ev_real64_ev_real64_ev_bool_callback", "(JIJJZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Ispatialtransformer_transform_1ISpatialReference_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jint nCount_j, jlong pdfX_j, jlong pdfY_j, jboolean pForwardFlag_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *src = (const EarthView::World::Spatial::Geometry::ISpatialReference*) src_j;
					ev_int32 nCount = (ev_int32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_bool pForwardFlag = (ev_bool) pForwardFlag_j;
					EarthView::World::Spatial::Display::ISpatialTransformer *pObjectX = (EarthView::World::Spatial::Display::ISpatialTransformer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::ISpatialTransformer::transform(src, nCount, pdfX, pdfY, pForwardFlag);
				}
			}
		}
	}
}
