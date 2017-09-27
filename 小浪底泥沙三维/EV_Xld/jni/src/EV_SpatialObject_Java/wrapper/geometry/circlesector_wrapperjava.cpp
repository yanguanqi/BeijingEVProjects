/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/circlesector.h"
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
				class JCCircleSectorProxy : public EarthView::World::Spatial::Geometry::CCircleSector
				{
				 private:
					EarthView::World::Core::ev_string m_addExteriorRing_CCurveRing_callback;
					EarthView::World::Core::ev_string m_addInteriorRing_CCurveRing_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeExteriorRing_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeInteriorRing_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_clearAllRing_void_callback;
					EarthView::World::Core::ev_string m_clearInteriorRing_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getArea_void_callback;
					EarthView::World::Core::ev_string m_isDirty_void_callback;
					EarthView::World::Core::ev_string m_setDirty_ev_bool_callback;
					EarthView::World::Core::ev_string m_update_void_callback;
					EarthView::World::Core::ev_string m_resample_ev_real64_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_mirror_IGeometry_callback;
					EarthView::World::Core::ev_string m_split_IGeometry_callback;
					EarthView::World::Core::ev_string m_clip_IGeometry_callback;
					EarthView::World::Core::ev_string m_smooth_ev_real64_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback;
					EarthView::World::Core::ev_string m_snapToSegment_IGeometry_ev_real64_callback;
					EarthView::World::Core::ev_string m_movePointTo_IGeometry_IGeometry_callback;
					EarthView::World::Core::ev_string m_addPointTo_IGeometry_callback;
					EarthView::World::Core::ev_string m_deletePoint_IGeometry_callback;
					EarthView::World::Core::ev_string m_getEnvelopeRef_void_callback;
					EarthView::World::Core::ev_string m_getSpatialReferenceRef_void_callback;
					EarthView::World::Core::ev_string m_getGeometryType_void_callback;
					EarthView::World::Core::ev_string m_getWKBGeometryType_void_callback;
					EarthView::World::Core::ev_string m_isValid_void_callback;
					EarthView::World::Core::ev_string m_isEmpty_void_callback;
					EarthView::World::Core::ev_string m_isSimple_void_callback;
					EarthView::World::Core::ev_string m_simplify_void_callback;
					EarthView::World::Core::ev_string m_getBoundary_void_callback;
					EarthView::World::Core::ev_string m_makeZ_ev_real64_callback;
					EarthView::World::Core::ev_string m_makeM_ev_real64_callback;
					EarthView::World::Core::ev_string m_setSpatialReferenceRef_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_isContains_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isEquals_IGeometry_ev_real64_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isDisjoin_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isIntersects_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isWithin_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isTouches_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isCrosses_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_isRelates_IGeometry_EVString_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_buffer_ev_real64_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_convexHull_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_difference_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_distance_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_intersects_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_overlaps_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_symDifference_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_unions_IGeometry_EVDimensionType_callback;
					EarthView::World::Core::ev_string m_toWKB_CDataStream_callback;
					EarthView::World::Core::ev_string m_toWKT_EVString_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_translate_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_projects_ISpatialReference_ev_real64_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getInteriorPoint_IGeometry_callback;
				public:
					JCCircleSectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCircleSector(pList)
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
					void register_addExteriorRing_CCurveRing_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addExteriorRing_CCurveRing_callback = __method;
					}
					void register_addInteriorRing_CCurveRing_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addInteriorRing_CCurveRing_ev_uint32_callback = __method;
					}
					void register_removeExteriorRing_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeExteriorRing_ev_uint32_callback = __method;
					}
					void register_removeInteriorRing_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeInteriorRing_ev_uint32_ev_uint32_callback = __method;
					}
					void register_clearAllRing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearAllRing_void_callback = __method;
					}
					void register_clearInteriorRing_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearInteriorRing_ev_uint32_callback = __method;
					}
					void register_getArea_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getArea_void_callback = __method;
					}
					void register_isDirty_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDirty_void_callback = __method;
					}
					void register_setDirty_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDirty_ev_bool_callback = __method;
					}
					void register_update_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_void_callback = __method;
					}
					void register_resample_ev_real64_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resample_ev_real64_EVDimensionType_callback = __method;
					}
					void register_mirror_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mirror_IGeometry_callback = __method;
					}
					void register_split_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_split_IGeometry_callback = __method;
					}
					void register_clip_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clip_IGeometry_callback = __method;
					}
					void register_smooth_ev_real64_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_smooth_ev_real64_EVDimensionType_callback = __method;
					}
					void register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback = __method;
					}
					void register_snapToSegment_IGeometry_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_snapToSegment_IGeometry_ev_real64_callback = __method;
					}
					void register_movePointTo_IGeometry_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_movePointTo_IGeometry_IGeometry_callback = __method;
					}
					void register_addPointTo_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addPointTo_IGeometry_callback = __method;
					}
					void register_deletePoint_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deletePoint_IGeometry_callback = __method;
					}
					void register_getEnvelopeRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnvelopeRef_void_callback = __method;
					}
					void register_getSpatialReferenceRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReferenceRef_void_callback = __method;
					}
					void register_getGeometryType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGeometryType_void_callback = __method;
					}
					void register_getWKBGeometryType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWKBGeometryType_void_callback = __method;
					}
					void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isValid_void_callback = __method;
					}
					void register_isEmpty_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEmpty_void_callback = __method;
					}
					void register_isSimple_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSimple_void_callback = __method;
					}
					void register_simplify_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_simplify_void_callback = __method;
					}
					void register_getBoundary_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBoundary_void_callback = __method;
					}
					void register_makeZ_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_makeZ_ev_real64_callback = __method;
					}
					void register_makeM_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_makeM_ev_real64_callback = __method;
					}
					void register_setSpatialReferenceRef_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReferenceRef_ISpatialReference_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_isContains_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isContains_IGeometry_EVDimensionType_callback = __method;
					}
					void register_isEquals_IGeometry_ev_real64_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEquals_IGeometry_ev_real64_EVDimensionType_callback = __method;
					}
					void register_isDisjoin_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDisjoin_IGeometry_EVDimensionType_callback = __method;
					}
					void register_isIntersects_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isIntersects_IGeometry_EVDimensionType_callback = __method;
					}
					void register_isWithin_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isWithin_IGeometry_EVDimensionType_callback = __method;
					}
					void register_isTouches_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isTouches_IGeometry_EVDimensionType_callback = __method;
					}
					void register_isCrosses_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isCrosses_IGeometry_EVDimensionType_callback = __method;
					}
					void register_isRelates_IGeometry_EVString_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isRelates_IGeometry_EVString_EVDimensionType_callback = __method;
					}
					void register_buffer_ev_real64_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_buffer_ev_real64_EVDimensionType_callback = __method;
					}
					void register_convexHull_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_convexHull_EVDimensionType_callback = __method;
					}
					void register_difference_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_difference_IGeometry_EVDimensionType_callback = __method;
					}
					void register_distance_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_distance_IGeometry_EVDimensionType_callback = __method;
					}
					void register_intersects_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_intersects_IGeometry_EVDimensionType_callback = __method;
					}
					void register_overlaps_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_overlaps_IGeometry_EVDimensionType_callback = __method;
					}
					void register_symDifference_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_symDifference_IGeometry_EVDimensionType_callback = __method;
					}
					void register_unions_IGeometry_EVDimensionType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unions_IGeometry_EVDimensionType_callback = __method;
					}
					void register_toWKB_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toWKB_CDataStream_callback = __method;
					}
					void register_toWKT_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toWKT_EVString_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_translate_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_translate_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_rotate_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_scale_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_projects_ISpatialReference_ev_real64_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_projects_ISpatialReference_ev_real64_ev_uint32_callback = __method;
					}
					void register_getInteriorPoint_IGeometry_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getInteriorPoint_IGeometry_callback = __method;
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clone() const
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
							EarthView::World::Spatial::Geometry::IGeometry *__values1 = (EarthView::World::Spatial::Geometry::IGeometry*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CCircleSector::clone();
						}
					}
					virtual ev_real64 getArea() const
					{
						if (this->_gRef != NULL && this->m_getArea_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getArea_void_callback");
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
							return this->CCircleSector::getArea();
						}
					}
					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing& path)
					{
						if (this->_gRef != NULL && this->m_addExteriorRing_CCurveRing_callback != "" && this->isCustomExtend())
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
							jlong path_j = (jlong) &path;
							jmethodID __method = __gr->getMethod("addExteriorRing_CCurveRing_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , path_j);
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
							return this->CCircleSector::addExteriorRing(path);
						}
					}
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing& path, ev_uint32 exteriorIndex)
					{
						if (this->_gRef != NULL && this->m_addInteriorRing_CCurveRing_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong path_j = (jlong) &path;
							jlong exteriorIndex_j = (jlong) exteriorIndex;
							jmethodID __method = __gr->getMethod("addInteriorRing_CCurveRing_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , path_j, exteriorIndex_j);
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
							return this->CCircleSector::addInteriorRing(path, exteriorIndex);
						}
					}
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex)
					{
						if (this->_gRef != NULL && this->m_removeExteriorRing_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong exteriorIndex_j = (jlong) exteriorIndex;
							jmethodID __method = __gr->getMethod("removeExteriorRing_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , exteriorIndex_j);
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
							return this->CCircleSector::removeExteriorRing(exteriorIndex);
						}
					}
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex)
					{
						if (this->_gRef != NULL && this->m_removeInteriorRing_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong exteriorIndex_j = (jlong) exteriorIndex;
							jlong interiorIndex_j = (jlong) interiorIndex;
							jmethodID __method = __gr->getMethod("removeInteriorRing_ev_uint32_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , exteriorIndex_j, interiorIndex_j);
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
							return this->CCircleSector::removeInteriorRing(exteriorIndex, interiorIndex);
						}
					}
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex)
					{
						if (this->_gRef != NULL && this->m_clearInteriorRing_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong exteriorIndex_j = (jlong) exteriorIndex;
							jmethodID __method = __gr->getMethod("clearInteriorRing_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , exteriorIndex_j);
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
							return this->CCircleSector::clearInteriorRing(exteriorIndex);
						}
					}
					virtual ev_uint32 clearAllRing()
					{
						if (this->_gRef != NULL && this->m_clearAllRing_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearAllRing_void_callback");
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
							return this->CCircleSector::clearAllRing();
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
							return this->CCircleSector::isValid();
						}
					}
					virtual ev_bool isEmpty() const
					{
						if (this->_gRef != NULL && this->m_isEmpty_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isEmpty_void_callback");
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
							return this->CCircleSector::isEmpty();
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const
					{
						if (this->_gRef != NULL && this->m_getBoundary_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getBoundary_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
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
							return this->CCircleSector::getBoundary();
						}
					}
					virtual void makeZ(ev_real64 z)
					{
						if (this->_gRef != NULL && this->m_makeZ_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble z_j = (jdouble) z;
							jmethodID __method = __gr->getMethod("makeZ_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , z_j);
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
							return this->CCircleSector::makeZ(z);
						}
					}
					virtual void makeM(ev_real64 m)
					{
						if (this->_gRef != NULL && this->m_makeM_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble m_j = (jdouble) m;
							jmethodID __method = __gr->getMethod("makeM_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , m_j);
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
							return this->CCircleSector::makeM(m);
						}
					}
					virtual ev_bool isEquals(const EarthView::World::Spatial::Geometry::IGeometry* geom, ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isEquals_IGeometry_ev_real64_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jdouble tolerance_j = (jdouble) tolerance;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isEquals_IGeometry_ev_real64_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, tolerance_j, dimension_j);
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
							return this->CCircleSector::isEquals(geom, tolerance, dimension);
						}
					}
					virtual void translate(ev_real64 x, ev_real64 y, ev_real64 z)
					{
						if (this->_gRef != NULL && this->m_translate_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("translate_ev_real64_ev_real64_ev_real64_callback");
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
							return this->CCircleSector::translate(x, y, z);
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
							return this->CCircleSector::rotate(xRef, yRef, zRef, xAngle, yAngle, zAngle);
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
							return this->CCircleSector::scale(xRef, yRef, zRef, x, y, z);
						}
					}
					virtual void projects(const EarthView::World::Spatial::Geometry::ISpatialReference* sr, ev_real64* sevenParam, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_projects_ISpatialReference_ev_real64_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong sevenParam_j = (jlong) sevenParam;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("projects_ISpatialReference_ev_real64_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , sr_j, sevenParam_j, count_j);
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
							return this->CCircleSector::projects(sr, sevenParam, count);
						}
					}
					virtual void setSpatialReferenceRef(const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if (this->_gRef != NULL && this->m_setSpatialReferenceRef_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("setSpatialReferenceRef_ISpatialReference_callback");
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
							return this->CCircleSector::setSpatialReferenceRef(ref_sr);
						}
					}
					virtual void update()
					{
						if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("update_void_callback");
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
							return this->CCircleSector::update();
						}
					}
					virtual ev_bool isSimple() const
					{
						if (this->_gRef != NULL && this->m_isSimple_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isSimple_void_callback");
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
							return this->CCircleSector::isSimple();
						}
					}
					virtual void simplify()
					{
						if (this->_gRef != NULL && this->m_simplify_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("simplify_void_callback");
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
							return this->CCircleSector::simplify();
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* mirror(const EarthView::World::Spatial::Geometry::IGeometry* line) const
					{
						if (this->_gRef != NULL && this->m_mirror_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong line_j = (jlong) line;
							jmethodID __method = __gr->getMethod("mirror_IGeometry_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , line_j);
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
							return this->CCircleSector::mirror(line);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* split(const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const
					{
						if (this->_gRef != NULL && this->m_split_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong pSplitGeom_j = (jlong) pSplitGeom;
							jmethodID __method = __gr->getMethod("split_IGeometry_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pSplitGeom_j);
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
							return this->CCircleSector::split(pSplitGeom);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* clip(const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const
					{
						if (this->_gRef != NULL && this->m_clip_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong clipRegion_j = (jlong) clipRegion;
							jmethodID __method = __gr->getMethod("clip_IGeometry_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , clipRegion_j);
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
							return this->CCircleSector::clip(clipRegion);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* smooth(ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_smooth_ev_real64_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jdouble tolerance_j = (jdouble) tolerance;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("smooth_ev_real64_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , tolerance_j, dimension_j);
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
							return this->CCircleSector::smooth(tolerance, dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(const EarthView::World::Spatial::Geometry::IGeometry* point, ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVGeometrySnapType& snap) const
					{
						if (this->_gRef != NULL && this->m_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback != "" && this->isCustomExtend())
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
							jlong point_j = (jlong) point;
							jdouble tolerance_j = (jdouble) tolerance;
							jlong snap_j = (jlong) &snap;
							jmethodID __method = __gr->getMethod("snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , point_j, tolerance_j, snap_j);
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
							return this->CCircleSector::snapToPoint(point, tolerance, snap);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(const EarthView::World::Spatial::Geometry::IGeometry* point, ev_real64 tolerance) const
					{
						if (this->_gRef != NULL && this->m_snapToSegment_IGeometry_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong point_j = (jlong) point;
							jdouble tolerance_j = (jdouble) tolerance;
							jmethodID __method = __gr->getMethod("snapToSegment_IGeometry_ev_real64_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , point_j, tolerance_j);
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
							return this->CCircleSector::snapToSegment(point, tolerance);
						}
					}
					virtual ev_bool movePointTo(const EarthView::World::Spatial::Geometry::IGeometry* frmPoint, const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint)
					{
						if (this->_gRef != NULL && this->m_movePointTo_IGeometry_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong frmPoint_j = (jlong) frmPoint;
							jlong cpy_toPoint_j = (jlong) cpy_toPoint;
							jmethodID __method = __gr->getMethod("movePointTo_IGeometry_IGeometry_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , frmPoint_j, cpy_toPoint_j);
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
							return this->CCircleSector::movePointTo(frmPoint, cpy_toPoint);
						}
					}
					virtual ev_bool addPointTo(const EarthView::World::Spatial::Geometry::IGeometry* cpy_point)
					{
						if (this->_gRef != NULL && this->m_addPointTo_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong cpy_point_j = (jlong) cpy_point;
							jmethodID __method = __gr->getMethod("addPointTo_IGeometry_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , cpy_point_j);
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
							return this->CCircleSector::addPointTo(cpy_point);
						}
					}
					virtual ev_bool deletePoint(const EarthView::World::Spatial::Geometry::IGeometry* point)
					{
						if (this->_gRef != NULL && this->m_deletePoint_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong point_j = (jlong) point;
							jmethodID __method = __gr->getMethod("deletePoint_IGeometry_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , point_j);
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
							return this->CCircleSector::deletePoint(point);
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if (this->_gRef != NULL && this->m_getEnvelopeRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getEnvelopeRef_void_callback");
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
							return this->CCircleSector::getEnvelopeRef();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReferenceRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialReferenceRef_void_callback");
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
							return this->CCircleSector::getSpatialReferenceRef();
						}
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if (this->_gRef != NULL && this->m_getGeometryType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getGeometryType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::EVGeometryType __values1 = (EarthView::World::Spatial::Geometry::EVGeometryType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCircleSector::getGeometryType();
						}
					}
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const
					{
						if (this->_gRef != NULL && this->m_getWKBGeometryType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getWKBGeometryType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::EVWKBGeometryType __values1 = (EarthView::World::Spatial::Geometry::EVWKBGeometryType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CCircleSector::getWKBGeometryType();
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* buffer(ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_buffer_ev_real64_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jdouble tolerance_j = (jdouble) tolerance;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("buffer_ev_real64_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , tolerance_j, dimension_j);
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
							return this->CCircleSector::buffer(tolerance, dimension);
						}
					}
					virtual ev_bool isContains(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isContains_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isContains_IGeometry_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::isContains(geom, dimension);
						}
					}
					virtual ev_bool isDisjoin(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isDisjoin_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isDisjoin_IGeometry_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::isDisjoin(geom, dimension);
						}
					}
					virtual ev_bool isIntersects(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isIntersects_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isIntersects_IGeometry_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::isIntersects(geom, dimension);
						}
					}
					virtual ev_bool isWithin(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isWithin_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isWithin_IGeometry_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::isWithin(geom, dimension);
						}
					}
					virtual ev_bool isTouches(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isTouches_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isTouches_IGeometry_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::isTouches(geom, dimension);
						}
					}
					virtual ev_bool isCrosses(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isCrosses_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isCrosses_IGeometry_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::isCrosses(geom, dimension);
						}
					}
					virtual ev_bool isRelates(const EarthView::World::Spatial::Geometry::IGeometry* geom, EVString relateMatrix, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_isRelates_IGeometry_EVString_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							EarthView::World::Core::ev_wstring relateMatrix_wch = relateMatrix;
							jstring relateMatrix_j = __env->NewString((const jchar*)relateMatrix_wch.getString(), relateMatrix_wch.size());
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("isRelates_IGeometry_EVString_EVDimensionType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geom_j, relateMatrix_j, dimension_j);
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
							return this->CCircleSector::isRelates(geom, relateMatrix, dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* convexHull(EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_convexHull_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("convexHull_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , dimension_j);
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
							return this->CCircleSector::convexHull(dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* difference(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_difference_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("difference_IGeometry_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::difference(geom, dimension);
						}
					}
					virtual ev_real64 distance(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_distance_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("distance_IGeometry_EVDimensionType_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::distance(geom, dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* intersects(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_intersects_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("intersects_IGeometry_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::intersects(geom, dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* overlaps(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_overlaps_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("overlaps_IGeometry_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::overlaps(geom, dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* symDifference(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_symDifference_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("symDifference_IGeometry_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::symDifference(geom, dimension);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* unions(const EarthView::World::Spatial::Geometry::IGeometry* geom, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_unions_IGeometry_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jlong geom_j = (jlong) geom;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("unions_IGeometry_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , geom_j, dimension_j);
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
							return this->CCircleSector::unions(geom, dimension);
						}
					}
					virtual void toWKB(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toWKB_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toWKB_CDataStream_callback");
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
							return this->CCircleSector::toWKB(stream);
						}
					}
					virtual void toWKT(EVString& wkt) const
					{
						if (this->_gRef != NULL && this->m_toWKT_EVString_callback != "" && this->isCustomExtend())
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
							jlong wkt_j = (jlong) &wkt;
							jmethodID __method = __gr->getMethod("toWKT_EVString_callback");
							__env->CallVoidMethod(__obj, __method , wkt_j);
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
							return this->CCircleSector::toWKT(wkt);
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
							return this->CCircleSector::toStream(stream);
						}
					}
					virtual ev_bool isDirty() const
					{
						if (this->_gRef != NULL && this->m_isDirty_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isDirty_void_callback");
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
							return this->CCircleSector::isDirty();
						}
					}
					virtual void setDirty(ev_bool dirty)
					{
						if (this->_gRef != NULL && this->m_setDirty_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean dirty_j = (jboolean) dirty;
							jmethodID __method = __gr->getMethod("setDirty_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , dirty_j);
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
							return this->CCircleSector::setDirty(dirty);
						}
					}
					virtual EarthView::World::Spatial::Geometry::IGeometry* resample(ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const
					{
						if (this->_gRef != NULL && this->m_resample_ev_real64_EVDimensionType_callback != "" && this->isCustomExtend())
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
							jdouble tolerance_j = (jdouble) tolerance;
							jint dimension_j = (jint) dimension;
							jmethodID __method = __gr->getMethod("resample_ev_real64_EVDimensionType_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , tolerance_j, dimension_j);
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
							return this->CCircleSector::resample(tolerance, dimension);
						}
					}
					virtual ev_bool getInteriorPoint(EarthView::World::Spatial::Geometry::IGeometry* point) const
					{
						if (this->_gRef != NULL && this->m_getInteriorPoint_IGeometry_callback != "" && this->isCustomExtend())
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
							jlong point_j = (jlong) point;
							jmethodID __method = __gr->getMethod("getInteriorPoint_IGeometry_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , point_j);
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
							return this->CCircleSector::getInteriorPoint(point);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCCircleSectorProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_setCircleSectorRing_1CCircleSectorRing(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ring_j)
				{
					const EarthView::World::Spatial::Geometry::CCircleSectorRing &ring = *(EarthView::World::Spatial::Geometry::CCircleSectorRing*) ring_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					pObjectX->setCircleSectorRing(ring);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getCircleSectorRingRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CCircleSectorRing* __values1 = pObjectX->getCircleSectorRingRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getCircleSectorRing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCircleSectorRing __values1 = pObjectX->getCircleSectorRing();
					EarthView::World::Spatial::Geometry::CCircleSectorRing *returnvalues = new EarthView::World::Spatial::Geometry::CCircleSectorRing(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getArcLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getArcLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getCircumference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCircumference();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getFromPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getFromPoint();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getFromPoint2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint __values1 = pObjectX->getFromPoint2();
					EarthView::World::Spatial::Geometry::CPoint *returnvalues = new EarthView::World::Spatial::Geometry::CPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getToPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getToPoint();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getToPoint2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint __values1 = pObjectX->getToPoint2();
					EarthView::World::Spatial::Geometry::CPoint *returnvalues = new EarthView::World::Spatial::Geometry::CPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getCenterPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getCenterPoint();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getCenterPoint2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint __values1 = pObjectX->getCenterPoint2();
					EarthView::World::Spatial::Geometry::CPoint *returnvalues = new EarthView::World::Spatial::Geometry::CPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getFromAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFromAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getToAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getToAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getCenterAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_setCircleSector_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong firstPoint_j, jlong secondPoint_j, jlong thirdPoint_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &firstPoint = *(EarthView::World::Spatial::Geometry::CPoint*) firstPoint_j;
					const EarthView::World::Spatial::Geometry::CPoint &secondPoint = *(EarthView::World::Spatial::Geometry::CPoint*) secondPoint_j;
					const EarthView::World::Spatial::Geometry::CPoint &thirdPoint = *(EarthView::World::Spatial::Geometry::CPoint*) thirdPoint_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					pObjectX->setCircleSector(firstPoint, secondPoint, thirdPoint);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_setCircleSector_1CPoint_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong centerPoint_j, jdouble radius_j, jdouble fromAngle_j, jdouble sweepAngle_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &centerPoint = *(EarthView::World::Spatial::Geometry::CPoint*) centerPoint_j;
					ev_real64 radius = (ev_real64) radius_j;
					ev_real64 fromAngle = (ev_real64) fromAngle_j;
					ev_real64 sweepAngle = (ev_real64) sweepAngle_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					pObjectX->setCircleSector(centerPoint, radius, fromAngle, sweepAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_setCircleSector_1CPoint_1CPoint_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong centerPoint_j, jlong fromPoint_j, jdouble sweepAngle_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint &centerPoint = *(EarthView::World::Spatial::Geometry::CPoint*) centerPoint_j;
					const EarthView::World::Spatial::Geometry::CPoint &fromPoint = *(EarthView::World::Spatial::Geometry::CPoint*) fromPoint_j;
					ev_real64 sweepAngle = (ev_real64) sweepAngle_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					pObjectX->setCircleSector(centerPoint, fromPoint, sweepAngle);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getArea_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::getArea();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getArea();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getArea_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getArea_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getArea_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_getArea_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::getArea();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_addExteriorRing_1CCurveRing(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong path_j)
				{
					const EarthView::World::Spatial::Geometry::CCurveRing &path = *(EarthView::World::Spatial::Geometry::CCurveRing*) path_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::addExteriorRing(path);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addExteriorRing(path);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1addExteriorRing_1CCurveRing(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addExteriorRing_CCurveRing_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addExteriorRing_CCurveRing_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_addExteriorRing_1CCurveRing_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong path_j)
				{
					const EarthView::World::Spatial::Geometry::CCurveRing &path = *(EarthView::World::Spatial::Geometry::CCurveRing*) path_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::addExteriorRing(path);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_addInteriorRing_1CCurveRing_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong path_j, jlong exteriorIndex_j)
				{
					const EarthView::World::Spatial::Geometry::CCurveRing &path = *(EarthView::World::Spatial::Geometry::CCurveRing*) path_j;
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::addInteriorRing(path, exteriorIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addInteriorRing(path, exteriorIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1addInteriorRing_1CCurveRing_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addInteriorRing_CCurveRing_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addInteriorRing_CCurveRing_ev_uint32_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_addInteriorRing_1CCurveRing_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong path_j, jlong exteriorIndex_j)
				{
					const EarthView::World::Spatial::Geometry::CCurveRing &path = *(EarthView::World::Spatial::Geometry::CCurveRing*) path_j;
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::addInteriorRing(path, exteriorIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_removeExteriorRing_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong exteriorIndex_j)
				{
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::removeExteriorRing(exteriorIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeExteriorRing(exteriorIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1removeExteriorRing_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeExteriorRing_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeExteriorRing_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_removeExteriorRing_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong exteriorIndex_j)
				{
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::removeExteriorRing(exteriorIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_removeInteriorRing_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong exteriorIndex_j, jlong interiorIndex_j)
				{
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					ev_uint32 interiorIndex = (ev_uint32) interiorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::removeInteriorRing(exteriorIndex, interiorIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->removeInteriorRing(exteriorIndex, interiorIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1removeInteriorRing_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeInteriorRing_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeInteriorRing_ev_uint32_ev_uint32_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_removeInteriorRing_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong exteriorIndex_j, jlong interiorIndex_j)
				{
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					ev_uint32 interiorIndex = (ev_uint32) interiorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::removeInteriorRing(exteriorIndex, interiorIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_clearInteriorRing_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong exteriorIndex_j)
				{
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::clearInteriorRing(exteriorIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->clearInteriorRing(exteriorIndex);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1clearInteriorRing_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearInteriorRing_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearInteriorRing_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_clearInteriorRing_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong exteriorIndex_j)
				{
					ev_uint32 exteriorIndex = (ev_uint32) exteriorIndex_j;
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::clearInteriorRing(exteriorIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_clearAllRing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCCircleSectorProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::clearAllRing();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->clearAllRing();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1clearAllRing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearAllRing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearAllRing_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_clearAllRing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CCircleSector::clearAllRing();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_clone2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CCircleSector *pObjectX = (EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CCircleSector __values1 = pObjectX->clone2();
					EarthView::World::Spatial::Geometry::CCircleSector *returnvalues = new EarthView::World::Spatial::Geometry::CCircleSector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_OperatorAssign_1CCircleSector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong obj_j )
				{
					EarthView::World::Spatial::Geometry::CCircleSector& pObjectX = *(EarthView::World::Spatial::Geometry::CCircleSector*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CCircleSector &obj = *(EarthView::World::Spatial::Geometry::CCircleSector*) obj_j;
					pObjectX = obj;
					EarthView::World::Spatial::Geometry::CCircleSector& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDirty_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDirty_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1setDirty_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDirty_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDirty_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1resample_1ev_1real64_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resample_ev_real64_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resample_ev_real64_EVDimensionType_callback", "(DI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1mirror_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mirror_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mirror_IGeometry_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1split_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_split_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"split_IGeometry_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1clip_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clip_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clip_IGeometry_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1smooth_1ev_1real64_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_smooth_ev_real64_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"smooth_ev_real64_EVDimensionType_callback", "(DI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1snapToPoint_1IGeometry_1ev_1real64_1EVGeometrySnapType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"snapToPoint_IGeometry_ev_real64_EVGeometrySnapType_callback", "(JDJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1snapToSegment_1IGeometry_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_snapToSegment_IGeometry_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"snapToSegment_IGeometry_ev_real64_callback", "(JD)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1movePointTo_1IGeometry_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_movePointTo_IGeometry_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"movePointTo_IGeometry_IGeometry_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1addPointTo_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addPointTo_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addPointTo_IGeometry_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1deletePoint_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deletePoint_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deletePoint_IGeometry_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getEnvelopeRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnvelopeRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnvelopeRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getSpatialReferenceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReferenceRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReferenceRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGeometryType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGeometryType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getWKBGeometryType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWKBGeometryType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWKBGeometryType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isEmpty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isEmpty_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isEmpty_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isSimple_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSimple_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSimple_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1simplify_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_simplify_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"simplify_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getBoundary_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBoundary_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBoundary_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1makeZ_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_makeZ_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"makeZ_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1makeM_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_makeM_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"makeM_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1setSpatialReferenceRef_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReferenceRef_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReferenceRef_ISpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isContains_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isContains_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isContains_IGeometry_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isEquals_1IGeometry_1ev_1real64_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isEquals_IGeometry_ev_real64_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isEquals_IGeometry_ev_real64_EVDimensionType_callback", "(JDI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isDisjoin_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDisjoin_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDisjoin_IGeometry_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isIntersects_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isIntersects_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isIntersects_IGeometry_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isWithin_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isWithin_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isWithin_IGeometry_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isTouches_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isTouches_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isTouches_IGeometry_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isCrosses_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isCrosses_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isCrosses_IGeometry_EVDimensionType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1isRelates_1IGeometry_1EVString_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isRelates_IGeometry_EVString_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isRelates_IGeometry_EVString_EVDimensionType_callback", "(JLjava/lang/String;I)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1buffer_1ev_1real64_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_buffer_ev_real64_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"buffer_ev_real64_EVDimensionType_callback", "(DI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1convexHull_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_convexHull_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"convexHull_EVDimensionType_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1difference_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_difference_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"difference_IGeometry_EVDimensionType_callback", "(JI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1distance_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_distance_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"distance_IGeometry_EVDimensionType_callback", "(JI)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1intersects_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_intersects_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"intersects_IGeometry_EVDimensionType_callback", "(JI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1overlaps_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_overlaps_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"overlaps_IGeometry_EVDimensionType_callback", "(JI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1symDifference_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_symDifference_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"symDifference_IGeometry_EVDimensionType_callback", "(JI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1unions_1IGeometry_1EVDimensionType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unions_IGeometry_EVDimensionType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unions_IGeometry_EVDimensionType_callback", "(JI)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1toWKB_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toWKB_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toWKB_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1toWKT_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toWKT_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toWKT_EVString_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1translate_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_translate_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"translate_ev_real64_ev_real64_ev_real64_callback", "(DDD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1rotate_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1scale_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1projects_1ISpatialReference_1ev_1real64_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_projects_ISpatialReference_ev_real64_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"projects_ISpatialReference_ev_real64_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_CircleSector_register_1getInteriorPoint_1IGeometry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCCircleSectorProxy *pObjectX = (JCCircleSectorProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getInteriorPoint_IGeometry_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getInteriorPoint_IGeometry_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
