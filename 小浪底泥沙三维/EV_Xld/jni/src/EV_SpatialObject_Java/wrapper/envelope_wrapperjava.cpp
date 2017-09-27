/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/envelope.h"
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
			namespace Geometry
			{
				class JCEnvelopeProxy : public EarthView::World::Spatial::Geometry::CEnvelope
				{
				 private:
					EarthView::World::Core::ev_string m_getMinX_void_callback;
					EarthView::World::Core::ev_string m_getMaxX_void_callback;
					EarthView::World::Core::ev_string m_getMinY_void_callback;
					EarthView::World::Core::ev_string m_getMaxY_void_callback;
					EarthView::World::Core::ev_string m_getMinZ_void_callback;
					EarthView::World::Core::ev_string m_getMaxZ_void_callback;
					EarthView::World::Core::ev_string m_getWidth_void_callback;
					EarthView::World::Core::ev_string m_getHeight_void_callback;
					EarthView::World::Core::ev_string m_getDepth_void_callback;
					EarthView::World::Core::ev_string m_isBox_void_callback;
					EarthView::World::Core::ev_string m_isValid_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_setMinX_ev_real64_callback;
					EarthView::World::Core::ev_string m_setMaxX_ev_real64_callback;
					EarthView::World::Core::ev_string m_setMinY_ev_real64_callback;
					EarthView::World::Core::ev_string m_setMaxY_ev_real64_callback;
					EarthView::World::Core::ev_string m_setMinZ_ev_real64_callback;
					EarthView::World::Core::ev_string m_setMaxZ_ev_real64_callback;
					EarthView::World::Core::ev_string m_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_containsEnvelope_IEnvelope_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isIntersects_IEnvelope_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_expands_ev_bool_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_unions_IEnvelope_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_intersects_IEnvelope_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_ev_equals_IEnvelope_ev_real64_EVDimensionType_callback;
				public:
					JCEnvelopeProxy(EarthView::World::Core::CNameValuePairList *pList) : CEnvelope(pList)
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
					void register_getMinX_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinX_void_callback = __method;
					}
					void register_getMaxX_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxX_void_callback = __method;
					}
					void register_getMinY_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinY_void_callback = __method;
					}
					void register_getMaxY_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxY_void_callback = __method;
					}
					void register_getMinZ_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinZ_void_callback = __method;
					}
					void register_getMaxZ_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxZ_void_callback = __method;
					}
					void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWidth_void_callback = __method;
					}
					void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeight_void_callback = __method;
					}
					void register_getDepth_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDepth_void_callback = __method;
					}
					void register_isBox_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isBox_void_callback = __method;
					}
					void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isValid_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_setMinX_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMinX_ev_real64_callback = __method;
					}
					void register_setMaxX_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaxX_ev_real64_callback = __method;
					}
					void register_setMinY_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMinY_ev_real64_callback = __method;
					}
					void register_setMaxY_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaxY_ev_real64_callback = __method;
					}
					void register_setMinZ_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMinZ_ev_real64_callback = __method;
					}
					void register_setMaxZ_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaxZ_ev_real64_callback = __method;
					}
					void register_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback = __method;
					}
					void register_containsEnvelope_IEnvelope_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_containsEnvelope_IEnvelope_EVDimensionType_callback = __method;
					}
					void register_isIntersects_IEnvelope_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isIntersects_IEnvelope_EVDimensionType_callback = __method;
					}
					void register_expands_ev_bool_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_expands_ev_bool_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_unions_IEnvelope_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unions_IEnvelope_EVDimensionType_callback = __method;
					}
					void register_intersects_IEnvelope_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_intersects_IEnvelope_EVDimensionType_callback = __method;
					}
					void register_ev_equals_IEnvelope_ev_real64_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_equals_IEnvelope_ev_real64_EVDimensionType_callback = __method;
					}
					virtual ev_real64 getMinX() const
					{
						if (this->_gRef != NULL && this->m_getMinX_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinX_void_callback");
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
							return this->CEnvelope::getMinX();
						}
					}
					virtual ev_real64 getMinY() const
					{
						if (this->_gRef != NULL && this->m_getMinY_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinY_void_callback");
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
							return this->CEnvelope::getMinY();
						}
					}
					virtual ev_real64 getMinZ() const
					{
						if (this->_gRef != NULL && this->m_getMinZ_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinZ_void_callback");
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
							return this->CEnvelope::getMinZ();
						}
					}
					virtual ev_real64 getMaxX() const
					{
						if (this->_gRef != NULL && this->m_getMaxX_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxX_void_callback");
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
							return this->CEnvelope::getMaxX();
						}
					}
					virtual ev_real64 getMaxY() const
					{
						if (this->_gRef != NULL && this->m_getMaxY_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxY_void_callback");
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
							return this->CEnvelope::getMaxY();
						}
					}
					virtual ev_real64 getMaxZ() const
					{
						if (this->_gRef != NULL && this->m_getMaxZ_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxZ_void_callback");
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
							return this->CEnvelope::getMaxZ();
						}
					}
					virtual void setMinX(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setMinX_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMinX_ev_real64_callback");
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
							return this->CEnvelope::setMinX(value);
						}
					}
					virtual void setMinY(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setMinY_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMinY_ev_real64_callback");
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
							return this->CEnvelope::setMinY(value);
						}
					}
					virtual void setMinZ(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setMinZ_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMinZ_ev_real64_callback");
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
							return this->CEnvelope::setMinZ(value);
						}
					}
					virtual void setMaxX(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setMaxX_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMaxX_ev_real64_callback");
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
							return this->CEnvelope::setMaxX(value);
						}
					}
					virtual void setMaxY(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setMaxY_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMaxY_ev_real64_callback");
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
							return this->CEnvelope::setMaxY(value);
						}
					}
					virtual void setMaxZ(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setMaxZ_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setMaxZ_ev_real64_callback");
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
							return this->CEnvelope::setMaxZ(value);
						}
					}
					virtual ev_real64 getWidth() const
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
							return this->CEnvelope::getWidth();
						}
					}
					virtual ev_real64 getHeight() const
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
							return this->CEnvelope::getHeight();
						}
					}
					virtual ev_real64 getDepth() const
					{
						if (this->_gRef != NULL && this->m_getDepth_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDepth_void_callback");
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
							return this->CEnvelope::getDepth();
						}
					}
					virtual ev_bool isBox() const
					{
						if (this->_gRef != NULL && this->m_isBox_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isBox_void_callback");
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
							return this->CEnvelope::isBox();
						}
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
							return this->CEnvelope::isValid();
						}
					}
					virtual ev_bool containsCoordinate(ev_real64 x, ev_real64 y, ev_real64 z, EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if (this->_gRef != NULL && this->m_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jdouble x_j = (jdouble) x;
							jdouble y_j = (jdouble) y;
							jdouble z_j = (jdouble) z;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , x_j, y_j, z_j, type_j);
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
							return this->CEnvelope::containsCoordinate(x, y, z, type);
						}
					}
					virtual ev_bool containsEnvelope(const EarthView::World::Spatial::Geometry::IEnvelope& envelope, EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if (this->_gRef != NULL && this->m_containsEnvelope_IEnvelope_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong envelope_j = (jlong) &envelope;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("containsEnvelope_IEnvelope_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , envelope_j, type_j);
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
							return this->CEnvelope::containsEnvelope(envelope, type);
						}
					}
					virtual ev_bool isIntersects(const EarthView::World::Spatial::Geometry::IEnvelope& envelope, EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if (this->_gRef != NULL && this->m_isIntersects_IEnvelope_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong envelope_j = (jlong) &envelope;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("isIntersects_IEnvelope_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , envelope_j, type_j);
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
							return this->CEnvelope::isIntersects(envelope, type);
						}
					}
					virtual void expands(ev_bool isRadio, ev_real64 scaleX, ev_real64 scaleY, ev_real64 scaleZ)
					{
						if (this->_gRef != NULL && this->m_expands_ev_bool_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jboolean isRadio_j = (jboolean) isRadio;
							jdouble scaleX_j = (jdouble) scaleX;
							jdouble scaleY_j = (jdouble) scaleY;
							jdouble scaleZ_j = (jdouble) scaleZ;
							jmethodID __method = __gr->getMethod("expands_ev_bool_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , isRadio_j, scaleX_j, scaleY_j, scaleZ_j);
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
							return this->CEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
						}
					}
					virtual void unions(const EarthView::World::Spatial::Geometry::IEnvelope& envelope, EarthView::World::Spatial::Geometry::EVDimensionType type)
					{
						if (this->_gRef != NULL && this->m_unions_IEnvelope_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong envelope_j = (jlong) &envelope;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("unions_IEnvelope_EVDimensionType_callback");
							__env->CallVoidMethod(__obj, __method , envelope_j, type_j);
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
							return this->CEnvelope::unions(envelope, type);
						}
					}
					virtual void intersects(const EarthView::World::Spatial::Geometry::IEnvelope& envelope, EarthView::World::Spatial::Geometry::EVDimensionType type)
					{
						if (this->_gRef != NULL && this->m_intersects_IEnvelope_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong envelope_j = (jlong) &envelope;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("intersects_IEnvelope_EVDimensionType_callback");
							__env->CallVoidMethod(__obj, __method , envelope_j, type_j);
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
							return this->CEnvelope::intersects(envelope, type);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* clone() const
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CEnvelope::clone();
						}
					}
					virtual ev_bool equals(const EarthView::World::Spatial::Geometry::IEnvelope& envelope, ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType type) const
					{
						if (this->_gRef != NULL && this->m_ev_equals_IEnvelope_ev_real64_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong envelope_j = (jlong) &envelope;
							jdouble tolerance_j = (jdouble) tolerance;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("ev_equals_IEnvelope_ev_real64_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , envelope_j, tolerance_j, type_j);
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
							return this->CEnvelope::equals(envelope, tolerance, type);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEnvelopeProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMinX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getMinX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinX_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinX_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMinX_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMinX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMinY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getMinY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinY_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinY_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMinY_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMinY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMinZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMinZ();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinZ();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getMinZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinZ_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinZ_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMinZ_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMinZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMaxX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getMaxX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxX_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxX_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMaxX_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMaxX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMaxY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getMaxY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxY_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxY_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMaxY_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMaxY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMaxZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMaxZ();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxZ();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getMaxZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxZ_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxZ_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getMaxZ_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getMaxZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMinX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMinX(value);
					}
					else
					{
						pObjectX->setMinX(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1setMinX_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMinX_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMinX_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMinX_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMinX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMinY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMinY(value);
					}
					else
					{
						pObjectX->setMinY(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1setMinY_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMinY_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMinY_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMinY_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMinY(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMinZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMinZ(value);
					}
					else
					{
						pObjectX->setMinZ(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1setMinZ_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMinZ_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMinZ_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMinZ_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMinZ(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMaxX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMaxX(value);
					}
					else
					{
						pObjectX->setMaxX(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1setMaxX_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaxX_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaxX_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMaxX_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMaxX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMaxY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMaxY(value);
					}
					else
					{
						pObjectX->setMaxY(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1setMaxY_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaxY_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaxY_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMaxY_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMaxY(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMaxZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMaxZ(value);
					}
					else
					{
						pObjectX->setMaxZ(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1setMaxZ_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaxZ_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaxZ_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setMaxZ_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::setMaxZ(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getWidth();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getWidth();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWidth_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getHeight();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getHeight();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeight_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getDepth();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDepth();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1getDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDepth_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDepth_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::getDepth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_getCenter_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong z_j)
				{
					ev_real64 &x = *(ev_real64*) x_j;
					ev_real64 &y = *(ev_real64*) y_j;
					ev_real64 &z = *(ev_real64*) z_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->getCenter(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_setCenter_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->setCenter(x, y, z);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_isBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::isBox();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isBox();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1isBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isBox_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isBox_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_isBox_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::isBox();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::isValid();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_containsCoordinate_1ev_1real64_1ev_1real64_1ev_1real64_1EVDimensionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint type_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::containsCoordinate(x, y, z, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->containsCoordinate(x, y, z, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1containsCoordinate_1ev_1real64_1ev_1real64_1ev_1real64_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"containsCoordinate_ev_real64_ev_real64_ev_real64_EVDimensionType_callback", "(DDDI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_containsCoordinate_1ev_1real64_1ev_1real64_1ev_1real64_1EVDimensionType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jint type_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::containsCoordinate(x, y, z, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_containsEnvelope_1IEnvelope_1EVDimensionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::containsEnvelope(envelope, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->containsEnvelope(envelope, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1containsEnvelope_1IEnvelope_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_containsEnvelope_IEnvelope_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"containsEnvelope_IEnvelope_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_containsEnvelope_1IEnvelope_1EVDimensionType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::containsEnvelope(envelope, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_isIntersects_1IEnvelope_1EVDimensionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::isIntersects(envelope, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isIntersects(envelope, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1isIntersects_1IEnvelope_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isIntersects_IEnvelope_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isIntersects_IEnvelope_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_isIntersects_1IEnvelope_1EVDimensionType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::isIntersects(envelope, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_expands_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isRadio_j, jdouble scaleX_j, jdouble scaleY_j, jdouble scaleZ_j)
				{
					ev_bool isRadio = (ev_bool) isRadio_j;
					ev_real64 scaleX = (ev_real64) scaleX_j;
					ev_real64 scaleY = (ev_real64) scaleY_j;
					ev_real64 scaleZ = (ev_real64) scaleZ_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
					}
					else
					{
						pObjectX->expands(isRadio, scaleX, scaleY, scaleZ);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1expands_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_expands_ev_bool_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"expands_ev_bool_ev_real64_ev_real64_ev_real64_callback", "(ZDDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_expands_1ev_1bool_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isRadio_j, jdouble scaleX_j, jdouble scaleY_j, jdouble scaleZ_j)
				{
					ev_bool isRadio = (ev_bool) isRadio_j;
					ev_real64 scaleX = (ev_real64) scaleX_j;
					ev_real64 scaleY = (ev_real64) scaleY_j;
					ev_real64 scaleZ = (ev_real64) scaleZ_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::expands(isRadio, scaleX, scaleY, scaleZ);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_unions_1IEnvelope_1EVDimensionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::unions(envelope, type);
					}
					else
					{
						pObjectX->unions(envelope, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1unions_1IEnvelope_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unions_IEnvelope_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unions_IEnvelope_EVDimensionType_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_unions_1IEnvelope_1EVDimensionType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::unions(envelope, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_intersects_1IEnvelope_1EVDimensionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::intersects(envelope, type);
					}
					else
					{
						pObjectX->intersects(envelope, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1intersects_1IEnvelope_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_intersects_IEnvelope_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"intersects_IEnvelope_EVDimensionType_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_intersects_1IEnvelope_1EVDimensionType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::intersects(envelope, type);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Envelope_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Envelope_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Envelope_clone2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->clone2();
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_ev_1equals_1IEnvelope_1ev_1real64_1EVDimensionType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jdouble tolerance_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					ev_real64 tolerance = (ev_real64) tolerance_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEnvelopeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::equals(envelope, tolerance, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equals(envelope, tolerance, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Envelope_register_1ev_1equals_1IEnvelope_1ev_1real64_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEnvelopeProxy *pObjectX = (JCEnvelopeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_equals_IEnvelope_ev_real64_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_equals_IEnvelope_ev_real64_EVDimensionType_callback", "(JDI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Envelope_ev_1equals_1IEnvelope_1ev_1real64_1EVDimensionType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong envelope_j, jdouble tolerance_j, jint type_j)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope &envelope = *(EarthView::World::Spatial::Geometry::IEnvelope*) envelope_j;
					ev_real64 tolerance = (ev_real64) tolerance_j;
					EarthView::World::Spatial::Geometry::EVDimensionType type = (EarthView::World::Spatial::Geometry::EVDimensionType) type_j;
					const 					EarthView::World::Spatial::Geometry::CEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CEnvelope::equals(envelope, tolerance, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Envelope_OperatorAssign_1CEnvelope(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong envelope_j )
				{
					EarthView::World::Spatial::Geometry::CEnvelope& pObjectX = *(EarthView::World::Spatial::Geometry::CEnvelope*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CEnvelope &envelope = *(EarthView::World::Spatial::Geometry::CEnvelope*) envelope_j;
					pObjectX = envelope;
					EarthView::World::Spatial::Geometry::CEnvelope& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
