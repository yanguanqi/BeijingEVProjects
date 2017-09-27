/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/editingcircle.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				class JCEditingCircleProxy : public EarthView::World::Spatial2D::Controls::CEditingCircle
				{
				 private:
					EarthView::World::Core::ev_string m_newObject_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getGeometry_void_callback;
					EarthView::World::Core::ev_string m_getPointCount_void_callback;
					EarthView::World::Core::ev_string m_getPoint_ev_int32_ev_bool_callback;
					EarthView::World::Core::ev_string m_indexForPoint_CPoint_callback;
					EarthView::World::Core::ev_string m_makeSample_CPoint_CPoint_callback;
					EarthView::World::Core::ev_string m_isFine_void_callback;
					EarthView::World::Core::ev_string m_isExcellent_void_callback;
					EarthView::World::Core::ev_string m_getFirstPoint_ev_bool_callback;
					EarthView::World::Core::ev_string m_getLastPoint_ev_bool_callback;
					EarthView::World::Core::ev_string m_getCenterPoint_ev_bool_callback;
					EarthView::World::Core::ev_string m_setCenterPoint_CPoint_callback;
					EarthView::World::Core::ev_string m_getCentralAngle_ev_bool_callback;
					EarthView::World::Core::ev_string m_setCentralAngle_ev_real64_callback;
					EarthView::World::Core::ev_string m_getStartAngle_ev_bool_callback;
					EarthView::World::Core::ev_string m_setStartAngle_ev_real64_callback;
					EarthView::World::Core::ev_string m_getRotateAngle_ev_bool_callback;
					EarthView::World::Core::ev_string m_getRadius_ev_bool_callback;
					EarthView::World::Core::ev_string m_setRadius_ev_real64_callback;
				public:
					JCEditingCircleProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingCircle(pList)
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
					void register_newObject_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_newObject_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getGeometry_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeometry_void_callback = __method;
					}
					void register_getPointCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPointCount_void_callback = __method;
					}
					void register_getPoint_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPoint_ev_int32_ev_bool_callback = __method;
					}
					void register_indexForPoint_CPoint_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_indexForPoint_CPoint_callback = __method;
					}
					void register_makeSample_CPoint_CPoint_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_makeSample_CPoint_CPoint_callback = __method;
					}
					void register_isFine_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isFine_void_callback = __method;
					}
					void register_isExcellent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isExcellent_void_callback = __method;
					}
					void register_getFirstPoint_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFirstPoint_ev_bool_callback = __method;
					}
					void register_getLastPoint_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLastPoint_ev_bool_callback = __method;
					}
					void register_getCenterPoint_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCenterPoint_ev_bool_callback = __method;
					}
					void register_setCenterPoint_CPoint_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCenterPoint_CPoint_callback = __method;
					}
					void register_getCentralAngle_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCentralAngle_ev_bool_callback = __method;
					}
					void register_setCentralAngle_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCentralAngle_ev_real64_callback = __method;
					}
					void register_getStartAngle_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStartAngle_ev_bool_callback = __method;
					}
					void register_setStartAngle_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setStartAngle_ev_real64_callback = __method;
					}
					void register_getRotateAngle_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRotateAngle_ev_bool_callback = __method;
					}
					void register_getRadius_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRadius_ev_bool_callback = __method;
					}
					void register_setRadius_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRadius_ev_real64_callback = __method;
					}
					virtual EarthView::World::Spatial2D::Controls::CEditingObject* newObject() const
					{
						if (this->_gRef != NULL && this->m_newObject_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("newObject_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Controls::CEditingObject *__values1 = (EarthView::World::Spatial2D::Controls::CEditingObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::newObject();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getName();
						}
					}
					virtual EarthView::World::Spatial2D::Controls::EditingObjectType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::Controls::EditingObjectType __values1 = (EarthView::World::Spatial2D::Controls::EditingObjectType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getType();
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* makeSample(const EarthView::World::Spatial::Geometry::CPoint& from, const EarthView::World::Spatial::Geometry::CPoint& to) const
					{
						if (this->_gRef != NULL && this->m_makeSample_CPoint_CPoint_callback != "" && this->isCustomExtend())
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
							jlong from_j = (jlong) &from;
							jlong to_j = (jlong) &to;
							jmethodID __method = __gr->getMethod("makeSample_CPoint_CPoint_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , from_j, to_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::IGeometry *__values1 = (EarthView::World::Spatial::Geometry::IGeometry*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CEditingCircle::makeSample(from, to);
						}
					}
					virtual ev_bool isFine() const
					{
						if (this->_gRef != NULL && this->m_isFine_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isFine_void_callback");
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
							return this->CEditingCircle::isFine();
						}
					}
					virtual ev_bool isExcellent() const
					{
						if (this->_gRef != NULL && this->m_isExcellent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isExcellent_void_callback");
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
							return this->CEditingCircle::isExcellent();
						}
					}
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getCenterPoint_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong ok_j = (jlong) &ok;
							jmethodID __method = __gr->getMethod("getCenterPoint_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ok_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::CPoint __values1 = *(EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getCenterPoint(ok);
						}
					}
					virtual void setCenterPoint(EarthView::World::Spatial::Geometry::CPoint& point)
					{
						if (this->_gRef != NULL && this->m_setCenterPoint_CPoint_callback != "" && this->isCustomExtend())
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
							jlong point_j = (jlong) &point;
							jmethodID __method = __gr->getMethod("setCenterPoint_CPoint_callback");
							__env->CallVoidMethod(__obj, __method , point_j);
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
							return this->CEditingCircle::setCenterPoint(point);
						}
					}
					virtual ev_real64 getRadius(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getRadius_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong ok_j = (jlong) &ok;
							jmethodID __method = __gr->getMethod("getRadius_ev_bool_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , ok_j);
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
							return this->CEditingCircle::getRadius(ok);
						}
					}
					virtual void setRadius(ev_real64 radius)
					{
						if (this->_gRef != NULL && this->m_setRadius_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble radius_j = (jdouble) radius;
							jmethodID __method = __gr->getMethod("setRadius_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , radius_j);
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
							return this->CEditingCircle::setRadius(radius);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const
					{
						if (this->_gRef != NULL && this->m_getGeometry_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGeometry_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IGeometry *__values1 = (const EarthView::World::Spatial::Geometry::IGeometry*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getGeometry();
						}
					}
					virtual ev_int32 getPointCount() const
					{
						if (this->_gRef != NULL && this->m_getPointCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getPointCount_void_callback");
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
							return this->CEditingCircle::getPointCount();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getPoint(ev_int32 index, ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getPoint_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
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
							jint index_j = (jint) index;
							jboolean ok_j = (jboolean) ok;
							jmethodID __method = __gr->getMethod("getPoint_ev_int32_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j, ok_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::CPoint &__values1 = *(const EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getPoint(index, ok);
						}
					}
					virtual ev_int32 indexForPoint(const EarthView::World::Spatial::Geometry::CPoint& pnt) const
					{
						if (this->_gRef != NULL && this->m_indexForPoint_CPoint_callback != "" && this->isCustomExtend())
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
							jlong pnt_j = (jlong) &pnt;
							jmethodID __method = __gr->getMethod("indexForPoint_CPoint_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , pnt_j);
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
							return this->CEditingCircle::indexForPoint(pnt);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getFirstPoint(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getFirstPoint_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean ok_j = (jboolean) ok;
							jmethodID __method = __gr->getMethod("getFirstPoint_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ok_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::CPoint &__values1 = *(const EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getFirstPoint(ok);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::CPoint& getLastPoint(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getLastPoint_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean ok_j = (jboolean) ok;
							jmethodID __method = __gr->getMethod("getLastPoint_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ok_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::CPoint &__values1 = *(const EarthView::World::Spatial::Geometry::CPoint*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CEditingCircle::getLastPoint(ok);
						}
					}
					virtual ev_real64 getCentralAngle(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getCentralAngle_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong ok_j = (jlong) &ok;
							jmethodID __method = __gr->getMethod("getCentralAngle_ev_bool_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , ok_j);
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
							return this->CEditingCircle::getCentralAngle(ok);
						}
					}
					virtual void setCentralAngle(ev_real64 angle)
					{
						if (this->_gRef != NULL && this->m_setCentralAngle_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setCentralAngle_ev_real64_callback");
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
							return this->CEditingCircle::setCentralAngle(angle);
						}
					}
					virtual ev_real64 getStartAngle(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getStartAngle_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong ok_j = (jlong) &ok;
							jmethodID __method = __gr->getMethod("getStartAngle_ev_bool_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , ok_j);
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
							return this->CEditingCircle::getStartAngle(ok);
						}
					}
					virtual void setStartAngle(ev_real64 angle)
					{
						if (this->_gRef != NULL && this->m_setStartAngle_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setStartAngle_ev_real64_callback");
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
							return this->CEditingCircle::setStartAngle(angle);
						}
					}
					virtual ev_real64 getRotateAngle(ev_bool& ok) const
					{
						if (this->_gRef != NULL && this->m_getRotateAngle_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong ok_j = (jlong) &ok;
							jmethodID __method = __gr->getMethod("getRotateAngle_ev_bool_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , ok_j);
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
							return this->CEditingCircle::getRotateAngle(ok);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEditingCircleProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_newObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::newObject();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->newObject();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1newObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_newObject_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"newObject_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_newObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::newObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::Controls::EditingObjectType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_makeSample_1CPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong from_j, jlong to_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &from = *(EarthView::World::Spatial::Geometry::CPoint*) from_j;
					const EarthView::World::Spatial::Geometry::CPoint &to = *(EarthView::World::Spatial::Geometry::CPoint*) to_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::makeSample(from, to);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->makeSample(from, to);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1makeSample_1CPoint_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_makeSample_CPoint_CPoint_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"makeSample_CPoint_CPoint_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_makeSample_1CPoint_1CPoint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong from_j, jlong to_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &from = *(EarthView::World::Spatial::Geometry::CPoint*) from_j;
					const EarthView::World::Spatial::Geometry::CPoint &to = *(EarthView::World::Spatial::Geometry::CPoint*) to_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::makeSample(from, to);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_isFine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::isFine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isFine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1isFine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isFine_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isFine_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_isFine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::isFine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_isExcellent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::isExcellent();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isExcellent();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1isExcellent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isExcellent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isExcellent_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_isExcellent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::isExcellent();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getCenterPoint_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
				{
					ev_bool &ok = *(ev_bool*) ok_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						EarthView::World::Spatial::Geometry::CPoint __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getCenterPoint(ok);
						EarthView::World::Spatial::Geometry::CPoint *returnvalues = new EarthView::World::Spatial::Geometry::CPoint(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CPoint __values1 = pObjectX->getCenterPoint(ok);
						EarthView::World::Spatial::Geometry::CPoint *returnvalues = new EarthView::World::Spatial::Geometry::CPoint(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getCenterPoint_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCenterPoint_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCenterPoint_ev_bool_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getCenterPoint_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
				{
					ev_bool &ok = *(ev_bool*) ok_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getCenterPoint(ok);
					EarthView::World::Spatial::Geometry::CPoint *returnvalues = new EarthView::World::Spatial::Geometry::CPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_setCenterPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					EarthView::World::Spatial::Geometry::CPoint &point = *(EarthView::World::Spatial::Geometry::CPoint*) point_j;
					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::setCenterPoint(point);
					}
					else
					{
						pObjectX->setCenterPoint(point);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1setCenterPoint_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCenterPoint_CPoint_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCenterPoint_CPoint_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_setCenterPoint_1CPoint_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					EarthView::World::Spatial::Geometry::CPoint &point = *(EarthView::World::Spatial::Geometry::CPoint*) point_j;
					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::setCenterPoint(point);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getRadius_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
				{
					ev_bool &ok = *(ev_bool*) ok_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getRadius(ok);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getRadius(ok);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getRadius_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRadius_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRadius_ev_bool_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_getRadius_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ok_j)
				{
					ev_bool &ok = *(ev_bool*) ok_j;
					const 					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::getRadius(ok);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_setRadius_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
				{
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEditingCircleProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::setRadius(radius);
					}
					else
					{
						pObjectX->setRadius(radius);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1setRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRadius_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRadius_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_setRadius_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
				{
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial2D::Controls::CEditingCircle *pObjectX = (EarthView::World::Spatial2D::Controls::CEditingCircle*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEditingCircle::setRadius(radius);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getGeometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeometry_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeometry_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getPointCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPointCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPointCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getPoint_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPoint_ev_int32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPoint_ev_int32_ev_bool_callback", "(IZ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1indexForPoint_1CPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_indexForPoint_CPoint_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"indexForPoint_CPoint_callback", "(J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getFirstPoint_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFirstPoint_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFirstPoint_ev_bool_callback", "(Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getLastPoint_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLastPoint_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLastPoint_ev_bool_callback", "(Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getCentralAngle_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCentralAngle_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCentralAngle_ev_bool_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1setCentralAngle_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCentralAngle_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCentralAngle_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getStartAngle_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStartAngle_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStartAngle_ev_bool_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1setStartAngle_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setStartAngle_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setStartAngle_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EditingCircle_register_1getRotateAngle_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEditingCircleProxy *pObjectX = (JCEditingCircleProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRotateAngle_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRotateAngle_ev_bool_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
