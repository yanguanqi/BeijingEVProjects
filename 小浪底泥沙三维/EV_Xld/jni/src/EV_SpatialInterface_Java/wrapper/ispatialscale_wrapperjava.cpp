/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialscale.h"
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
			namespace Atlas
			{
				class JISpatialScaleProxy : public EarthView::World::Spatial::Atlas::ISpatialScale
				{
				 private:
					EarthView::World::Core::ev_string m_isActive_void_callback;
					EarthView::World::Core::ev_string m_setActive_ev_bool_callback;
					EarthView::World::Core::ev_string m_addSR_ISpatialReference_ev_real64_callback;
					EarthView::World::Core::ev_string m_removeSR_ev_uint32_callback;
					EarthView::World::Core::ev_string m_changeSR_ev_uint32_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_changeScale_ev_uint32_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSR_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getSR_ev_real64_callback;
					EarthView::World::Core::ev_string m_getScale_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getSRCount_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
				public:
					JISpatialScaleProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialScale(pList)
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
					void register_isActive_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isActive_void_callback = __method;
					}
					void register_setActive_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setActive_ev_bool_callback = __method;
					}
					void register_addSR_ISpatialReference_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addSR_ISpatialReference_ev_real64_callback = __method;
					}
					void register_removeSR_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeSR_ev_uint32_callback = __method;
					}
					void register_changeSR_ev_uint32_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_changeSR_ev_uint32_ISpatialReference_callback = __method;
					}
					void register_changeScale_ev_uint32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_changeScale_ev_uint32_ev_real64_callback = __method;
					}
					void register_getSR_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSR_ev_uint32_callback = __method;
					}
					void register_getSR_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSR_ev_real64_callback = __method;
					}
					void register_getScale_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getScale_ev_uint32_callback = __method;
					}
					void register_getSRCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSRCount_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					virtual ev_bool isActive() const
					{
						if (this->_gRef != NULL && this->m_isActive_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isActive_void_callback");
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
							return this->ISpatialScale::isActive();
						}
					}
					virtual void setActive(ev_bool active)
					{
						if (this->_gRef != NULL && this->m_setActive_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean active_j = (jboolean) active;
							jmethodID __method = __gr->getMethod("setActive_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , active_j);
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
							return this->ISpatialScale::setActive(active);
						}
					}
					virtual void addSR(const EarthView::World::Spatial::Geometry::ISpatialReference* sr, ev_real64 bottomScale)
					{
						if (this->_gRef != NULL && this->m_addSR_ISpatialReference_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble bottomScale_j = (jdouble) bottomScale;
							jmethodID __method = __gr->getMethod("addSR_ISpatialReference_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , sr_j, bottomScale_j);
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
							return this->ISpatialScale::addSR(sr, bottomScale);
						}
					}
					virtual void removeSR(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeSR_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("removeSR_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , index_j);
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
							return this->ISpatialScale::removeSR(index);
						}
					}
					virtual void changeSR(ev_uint32 index, const EarthView::World::Spatial::Geometry::ISpatialReference* dest)
					{
						if (this->_gRef != NULL && this->m_changeSR_ev_uint32_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jlong dest_j = (jlong) dest;
							jmethodID __method = __gr->getMethod("changeSR_ev_uint32_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , index_j, dest_j);
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
							return this->ISpatialScale::changeSR(index, dest);
						}
					}
					virtual void changeScale(ev_uint32 index, ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_changeScale_ev_uint32_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("changeScale_ev_uint32_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , index_j, scale_j);
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
							return this->ISpatialScale::changeScale(index, scale);
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSR(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getSR_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getSR_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialScale::getSR(index);
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSR(ev_real64 scale) const
					{
						if (this->_gRef != NULL && this->m_getSR_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSR_ev_real64_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , scale_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialScale::getSR(scale);
						}
					}
					virtual ev_real64 getScale(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getScale_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getScale_ev_uint32_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , index_j);
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
							return this->ISpatialScale::getScale(index);
						}
					}
					virtual ev_uint32 getSRCount() const
					{
						if (this->_gRef != NULL && this->m_getSRCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSRCount_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialScale::getSRCount();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->ISpatialScale::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialScale::toXmlElement();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISpatialScaleProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_isActive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::isActive();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isActive();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1isActive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isActive_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isActive_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_isActive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::isActive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_setActive_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean active_j)
				{
					ev_bool active = (ev_bool) active_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::setActive(active);
					}
					else
					{
						pObjectX->setActive(active);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1setActive_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setActive_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setActive_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_setActive_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean active_j)
				{
					ev_bool active = (ev_bool) active_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::setActive(active);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_addSR_1ISpatialReference_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j, jdouble bottomScale_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					ev_real64 bottomScale = (ev_real64) bottomScale_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::addSR(sr, bottomScale);
					}
					else
					{
						pObjectX->addSR(sr, bottomScale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1addSR_1ISpatialReference_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addSR_ISpatialReference_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addSR_ISpatialReference_ev_real64_callback", "(JD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_addSR_1ISpatialReference_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sr_j, jdouble bottomScale_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					ev_real64 bottomScale = (ev_real64) bottomScale_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::addSR(sr, bottomScale);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_removeSR_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::removeSR(index);
					}
					else
					{
						pObjectX->removeSR(index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1removeSR_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeSR_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeSR_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_removeSR_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::removeSR(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_changeSR_1ev_1uint32_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong dest_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *dest = (const EarthView::World::Spatial::Geometry::ISpatialReference*) dest_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::changeSR(index, dest);
					}
					else
					{
						pObjectX->changeSR(index, dest);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1changeSR_1ev_1uint32_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_changeSR_ev_uint32_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"changeSR_ev_uint32_ISpatialReference_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_changeSR_1ev_1uint32_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong dest_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *dest = (const EarthView::World::Spatial::Geometry::ISpatialReference*) dest_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::changeSR(index, dest);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_changeScale_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble scale_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::changeScale(index, scale);
					}
					else
					{
						pObjectX->changeScale(index, scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1changeScale_1ev_1uint32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_changeScale_ev_uint32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"changeScale_ev_uint32_ev_real64_callback", "(JD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_changeScale_1ev_1uint32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jdouble scale_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::changeScale(index, scale);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getSR_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSR(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1getSR_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSR_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSR_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getSR_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getSR_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(scale);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSR(scale);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1getSR_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSR_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSR_ev_real64_callback", "(D)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getSR_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(scale);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getScale_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getScale(index);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getScale(index);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1getScale_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getScale_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getScale_ev_uint32_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getScale_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getScale(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getSRCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getSRCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getSRCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1getSRCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSRCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSRCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_getSRCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::getSRCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					EVString __values1 = pObjectX->toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialScaleProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialScaleProxy *pObjectX = (JISpatialScaleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ispatialscale_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ISpatialScale *pObjectX = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::ISpatialScale::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
