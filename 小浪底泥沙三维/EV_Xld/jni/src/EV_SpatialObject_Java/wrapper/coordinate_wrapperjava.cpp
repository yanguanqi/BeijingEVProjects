/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/coordinate.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geometry_EVCoordinateTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CT_UNKNOWN,
						CT_XY,
						CT_XYZ,
						CT_XYM,
						CT_XYZM
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				class JCCoordinateProxy : public EarthView::World::Spatial::Geometry::CCoordinate
				{
				 private:
					EarthView::World::Core::ev_string m_distance_CCoordinate_callback;
					EarthView::World::Core::ev_string m_distanceOnPlane_CCoordinate_callback;
					EarthView::World::Core::ev_string m_distanceXY_CCoordinate_callback;
					EarthView::World::Core::ev_string m_ev_equals_CCoordinate_ev_real64_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_clone2_void_callback;
					EarthView::World::Core::ev_string m_ev_toString_EVCoordinateType_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_offset_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_mirror_CCoordinate_CCoordinate_callback;
					EarthView::World::Core::ev_string m_mirror2_CCoordinate_CCoordinate_callback;
				public:
					JCCoordinateProxy(EarthView::World::Core::CNameValuePairList *pList) : CCoordinate(pList)
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
					void register_distance_CCoordinate_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_distance_CCoordinate_callback = __method;
					}
					void register_distanceOnPlane_CCoordinate_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_distanceOnPlane_CCoordinate_callback = __method;
					}
					void register_distanceXY_CCoordinate_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_distanceXY_CCoordinate_callback = __method;
					}
					void register_ev_equals_CCoordinate_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_equals_CCoordinate_ev_real64_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_clone2_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clone2_void_callback = __method;
					}
					void register_ev_toString_EVCoordinateType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_toString_EVCoordinateType_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_offset_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_offset_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_mirror_CCoordinate_CCoordinate_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mirror_CCoordinate_CCoordinate_callback = __method;
					}
					void register_mirror2_CCoordinate_CCoordinate_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mirror2_CCoordinate_CCoordinate_callback = __method;
					}
					virtual ev_real64 distance(const EarthView::World::Spatial::Geometry::CCoordinate& coord) const
					{
						if (this->_gRef != NULL && this->m_distance_CCoordinate_callback != "" && this->isCustomExtend())
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
							jlong coord_j = (jlong) &coord;
							jmethodID __method = __gr->getMethod("distance_CCoordinate_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , coord_j);
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
							return this->CCoordinate::distance(coord);
						}
					}
					virtual ev_real64 distanceOnPlane(const EarthView::World::Spatial::Geometry::CCoordinate& coord) const
					{
						if (this->_gRef != NULL && this->m_distanceOnPlane_CCoordinate_callback != "" && this->isCustomExtend())
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
							jlong coord_j = (jlong) &coord;
							jmethodID __method = __gr->getMethod("distanceOnPlane_CCoordinate_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , coord_j);
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
							return this->CCoordinate::distanceOnPlane(coord);
						}
					}
					virtual ev_real64 distanceXY(const EarthView::World::Spatial::Geometry::CCoordinate& coord) const
					{
						if (this->_gRef != NULL && this->m_distanceXY_CCoordinate_callback != "" && this->isCustomExtend())
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
							jlong coord_j = (jlong) &coord;
							jmethodID __method = __gr->getMethod("distanceXY_CCoordinate_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , coord_j);
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
							return this->CCoordinate::distanceXY(coord);
						}
					}
					virtual ev_bool equals(const EarthView::World::Spatial::Geometry::CCoordinate& coord, ev_real64 tolerance) const
					{
						if (this->_gRef != NULL && this->m_ev_equals_CCoordinate_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong coord_j = (jlong) &coord;
							jdouble tolerance_j = (jdouble) tolerance;
							jmethodID __method = __gr->getMethod("ev_equals_CCoordinate_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , coord_j, tolerance_j);
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
							return this->CCoordinate::equals(coord, tolerance);
						}
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate* clone() const
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
							EarthView::World::Spatial::Geometry::CCoordinate *__values1 = (EarthView::World::Spatial::Geometry::CCoordinate*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CCoordinate::clone();
						}
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate clone2() const
					{
						if (this->_gRef != NULL && this->m_clone2_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clone2_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::CCoordinate __values1 = *(EarthView::World::Spatial::Geometry::CCoordinate*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCoordinate::clone2();
						}
					}
					virtual EVString toString(EarthView::World::Spatial::Geometry::EVCoordinateType type) const
					{
						if (this->_gRef != NULL && this->m_ev_toString_EVCoordinateType_callback != "" && this->isCustomExtend())
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
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("ev_toString_EVCoordinateType_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , type_j);
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
							return this->CCoordinate::toString(type);
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->CCoordinate::toStream(stream);
						}
					}
					virtual void offset(ev_real64 x, ev_real64 y, ev_real64 z)
					{
						if (this->_gRef != NULL && this->m_offset_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("offset_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , x_j, y_j, z_j);
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
							return this->CCoordinate::offset(x, y, z);
						}
					}
					virtual void rotate(ev_real64 xRef, ev_real64 yRef, ev_real64 zRef, ev_real64 xAngle, ev_real64 yAngle, ev_real64 zAngle)
					{
						if (this->_gRef != NULL && this->m_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble xRef_j = (jdouble) xRef;
							jdouble yRef_j = (jdouble) yRef;
							jdouble zRef_j = (jdouble) zRef;
							jdouble xAngle_j = (jdouble) xAngle;
							jdouble yAngle_j = (jdouble) yAngle;
							jdouble zAngle_j = (jdouble) zAngle;
							jmethodID __method = __gr->getMethod("rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , xRef_j, yRef_j, zRef_j, xAngle_j, yAngle_j, zAngle_j);
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
							return this->CCoordinate::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
						}
					}
					virtual void scale(ev_real64 xRef, ev_real64 yRef, ev_real64 zRef, ev_real64 x, ev_real64 y, ev_real64 z)
					{
						if (this->_gRef != NULL && this->m_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble xRef_j = (jdouble) xRef;
							jdouble yRef_j = (jdouble) yRef;
							jdouble zRef_j = (jdouble) zRef;
							jdouble x_j = (jdouble) x;
							jdouble y_j = (jdouble) y;
							jdouble z_j = (jdouble) z;
							jmethodID __method = __gr->getMethod("scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , xRef_j, yRef_j, zRef_j, x_j, y_j, z_j);
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
							return this->CCoordinate::scale(xRef, yRef, zRef, x, y, z);
						}
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate* mirror(const EarthView::World::Spatial::Geometry::CCoordinate* coord1, const EarthView::World::Spatial::Geometry::CCoordinate* coord2) const
					{
						if (this->_gRef != NULL && this->m_mirror_CCoordinate_CCoordinate_callback != "" && this->isCustomExtend())
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
							jlong coord1_j = (jlong) coord1;
							jlong coord2_j = (jlong) coord2;
							jmethodID __method = __gr->getMethod("mirror_CCoordinate_CCoordinate_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , coord1_j, coord2_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::CCoordinate *__values1 = (EarthView::World::Spatial::Geometry::CCoordinate*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CCoordinate::mirror(coord1, coord2);
						}
					}
					virtual EarthView::World::Spatial::Geometry::CCoordinate mirror2(const EarthView::World::Spatial::Geometry::CCoordinate& coord1, const EarthView::World::Spatial::Geometry::CCoordinate& coord2) const
					{
						if (this->_gRef != NULL && this->m_mirror2_CCoordinate_CCoordinate_callback != "" && this->isCustomExtend())
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
							jlong coord1_j = (jlong) &coord1;
							jlong coord2_j = (jlong) &coord2;
							jmethodID __method = __gr->getMethod("mirror2_CCoordinate_CCoordinate_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , coord1_j, coord2_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::CCoordinate __values1 = *(EarthView::World::Spatial::Geometry::CCoordinate*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCoordinate::mirror2(coord1, coord2);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCoordinateProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_OperatorAssign_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong obj_j )
				{
					EarthView::World::Spatial::Geometry::CCoordinate& pObjectX = *(EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CCoordinate &obj = *(EarthView::World::Spatial::Geometry::CCoordinate*) obj_j;
					pObjectX = obj;
					EarthView::World::Spatial::Geometry::CCoordinate& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_getX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_setX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->setX(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_getY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_setY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->setY(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_getZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_setZ_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->setZ(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_getM_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getM();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_setM_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->setM(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_distance_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::distance(coord);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->distance(coord);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1distance_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_distance_CCoordinate_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"distance_CCoordinate_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_distance_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::distance(coord);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_distanceOnPlane_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::distanceOnPlane(coord);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->distanceOnPlane(coord);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1distanceOnPlane_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_distanceOnPlane_CCoordinate_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"distanceOnPlane_CCoordinate_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_distanceOnPlane_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::distanceOnPlane(coord);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_distanceXY_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::distanceXY(coord);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->distanceXY(coord);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1distanceXY_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_distanceXY_CCoordinate_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"distanceXY_CCoordinate_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_distanceXY_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::distanceXY(coord);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_ev_1equals_1CCoordinate_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j, jdouble tolerance_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					ev_real64 tolerance = (ev_real64) tolerance_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::equals(coord, tolerance);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equals(coord, tolerance);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1ev_1equals_1CCoordinate_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_equals_CCoordinate_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_equals_CCoordinate_ev_real64_callback", "(JD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_ev_1equals_1CCoordinate_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord_j, jdouble tolerance_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord_j;
					ev_real64 tolerance = (ev_real64) tolerance_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::equals(coord, tolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						EarthView::World::Spatial::Geometry::CCoordinate* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_clone2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::clone2();
						EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->clone2();
						EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1clone2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clone2_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clone2_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_clone2_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::clone2();
					EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_ev_1toString_1EVCoordinateType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVCoordinateType type = (EarthView::World::Spatial::Geometry::EVCoordinateType) type_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::toString(type);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toString(type);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1ev_1toString_1EVCoordinateType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_toString_EVCoordinateType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_toString_EVCoordinateType_callback", "(I)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_ev_1toString_1EVCoordinateType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVCoordinateType type = (EarthView::World::Spatial::Geometry::EVCoordinateType) type_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::toString(type);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_offset_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::offset(x, y, z);
					}
					else
					{
						pObjectX->offset(x, y, z);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1offset_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_offset_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"offset_ev_real64_ev_real64_ev_real64_callback", "(DDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_offset_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::offset(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_rotate_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xRef_j, jdouble yRef_j, jdouble zRef_j, jdouble xAngle_j, jdouble yAngle_j, jdouble zAngle_j)
				{
					ev_real64 xRef = (ev_real64) xRef_j;
					ev_real64 yRef = (ev_real64) yRef_j;
					ev_real64 zRef = (ev_real64) zRef_j;
					ev_real64 xAngle = (ev_real64) xAngle_j;
					ev_real64 yAngle = (ev_real64) yAngle_j;
					ev_real64 zAngle = (ev_real64) zAngle_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
					else
					{
						pObjectX->rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1rotate_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDDDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_rotate_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xRef_j, jdouble yRef_j, jdouble zRef_j, jdouble xAngle_j, jdouble yAngle_j, jdouble zAngle_j)
				{
					ev_real64 xRef = (ev_real64) xRef_j;
					ev_real64 yRef = (ev_real64) yRef_j;
					ev_real64 zRef = (ev_real64) zRef_j;
					ev_real64 xAngle = (ev_real64) xAngle_j;
					ev_real64 yAngle = (ev_real64) yAngle_j;
					ev_real64 zAngle = (ev_real64) zAngle_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_scale_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xRef_j, jdouble yRef_j, jdouble zRef_j, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 xRef = (ev_real64) xRef_j;
					ev_real64 yRef = (ev_real64) yRef_j;
					ev_real64 zRef = (ev_real64) zRef_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::scale(xRef, yRef, zRef, x, y, z);
					}
					else
					{
						pObjectX->scale(xRef, yRef, zRef, x, y, z);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1scale_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDDDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_scale_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xRef_j, jdouble yRef_j, jdouble zRef_j, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					ev_real64 xRef = (ev_real64) xRef_j;
					ev_real64 yRef = (ev_real64) yRef_j;
					ev_real64 zRef = (ev_real64) zRef_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 z = (ev_real64) z_j;
					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::scale(xRef, yRef, zRef, x, y, z);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_mirror_1CCoordinate_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord1_j, jlong coord2_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate *coord1 = (const EarthView::World::Spatial::Geometry::CCoordinate*) coord1_j;
					const EarthView::World::Spatial::Geometry::CCoordinate *coord2 = (const EarthView::World::Spatial::Geometry::CCoordinate*) coord2_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						EarthView::World::Spatial::Geometry::CCoordinate* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::mirror(coord1, coord2);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate* __values1 = pObjectX->mirror(coord1, coord2);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1mirror_1CCoordinate_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mirror_CCoordinate_CCoordinate_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mirror_CCoordinate_CCoordinate_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_mirror_1CCoordinate_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord1_j, jlong coord2_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate *coord1 = (const EarthView::World::Spatial::Geometry::CCoordinate*) coord1_j;
					const EarthView::World::Spatial::Geometry::CCoordinate *coord2 = (const EarthView::World::Spatial::Geometry::CCoordinate*) coord2_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::mirror(coord1, coord2);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_mirror2_1CCoordinate_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord1_j, jlong coord2_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord1 = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord1_j;
					const EarthView::World::Spatial::Geometry::CCoordinate &coord2 = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord2_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCoordinateProxy))
					{
						EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::mirror2(coord1, coord2);
						EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->mirror2(coord1, coord2);
						EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_register_1mirror2_1CCoordinate_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCoordinateProxy *pObjectX = (JCCoordinateProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mirror2_CCoordinate_CCoordinate_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mirror2_CCoordinate_CCoordinate_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_Coordinate_mirror2_1CCoordinate_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong coord1_j, jlong coord2_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate &coord1 = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord1_j;
					const EarthView::World::Spatial::Geometry::CCoordinate &coord2 = *(EarthView::World::Spatial::Geometry::CCoordinate*) coord2_j;
					const 					EarthView::World::Spatial::Geometry::CCoordinate *pObjectX = (EarthView::World::Spatial::Geometry::CCoordinate*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCoordinate __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCoordinate::mirror2(coord1, coord2);
					EarthView::World::Spatial::Geometry::CCoordinate *returnvalues = new EarthView::World::Spatial::Geometry::CCoordinate(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
