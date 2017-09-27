/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geodesicmeasure.h"
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
				class JCGeodesicMeasureProxy : public EarthView::World::Spatial::Geometry::CGeodesicMeasure
				{
				 private:
					EarthView::World::Core::ev_string m_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback;
					EarthView::World::Core::ev_string m_polylineMeasure_CPolyline_ev_real64_callback;
					EarthView::World::Core::ev_string m_polygonMeasure_CPolygon_ev_real64_ev_real64_callback;
				public:
					JCGeodesicMeasureProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeodesicMeasure(pList)
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
					void register_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback = __method;
					}
					void register_polylineMeasure_CPolyline_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_polylineMeasure_CPolyline_ev_real64_callback = __method;
					}
					void register_polygonMeasure_CPolygon_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_polygonMeasure_CPolygon_ev_real64_ev_real64_callback = __method;
					}
					virtual ev_real64 distanceMeasure(ev_real64 longitude1, ev_real64 latitude1, ev_real64 longitude2, ev_real64 latitude2, EarthView::World::Spatial::Geometry::CPolyline* polyline, ev_uint32 count)
					{
						if (this->_gRef != NULL && this->m_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback != "" && this->isCustomExtend())
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
							jdouble longitude1_j = (jdouble) longitude1;
							jdouble latitude1_j = (jdouble) latitude1;
							jdouble longitude2_j = (jdouble) longitude2;
							jdouble latitude2_j = (jdouble) latitude2;
							jlong polyline_j = (jlong) polyline;
							jlong count_j = (jlong) count;
							jmethodID __method = __gr->getMethod("distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , longitude1_j, latitude1_j, longitude2_j, latitude2_j, polyline_j, count_j);
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
							return this->CGeodesicMeasure::distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
						}
					}
					virtual void polylineMeasure(EarthView::World::Spatial::Geometry::CPolyline* polyline, ev_real64& distance)
					{
						if (this->_gRef != NULL && this->m_polylineMeasure_CPolyline_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong polyline_j = (jlong) polyline;
							jlong distance_j = (jlong) &distance;
							jmethodID __method = __gr->getMethod("polylineMeasure_CPolyline_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , polyline_j, distance_j);
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
							return this->CGeodesicMeasure::polylineMeasure(polyline, distance);
						}
					}
					virtual void polygonMeasure(EarthView::World::Spatial::Geometry::CPolygon* polygon, ev_real64& area, ev_real64& periMeter)
					{
						if (this->_gRef != NULL && this->m_polygonMeasure_CPolygon_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jlong polygon_j = (jlong) polygon;
							jlong area_j = (jlong) &area;
							jlong periMeter_j = (jlong) &periMeter;
							jmethodID __method = __gr->getMethod("polygonMeasure_CPolygon_ev_real64_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , polygon_j, area_j, periMeter_j);
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
							return this->CGeodesicMeasure::polygonMeasure(polygon, area, periMeter);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCGeodesicMeasureProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_distanceMeasure_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1CPolyline_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble longitude1_j, jdouble latitude1_j, jdouble longitude2_j, jdouble latitude2_j, jlong polyline_j, jlong count_j)
				{
					ev_real64 longitude1 = (ev_real64) longitude1_j;
					ev_real64 latitude1 = (ev_real64) latitude1_j;
					ev_real64 longitude2 = (ev_real64) longitude2_j;
					ev_real64 latitude2 = (ev_real64) latitude2_j;
					EarthView::World::Spatial::Geometry::CPolyline *polyline = (EarthView::World::Spatial::Geometry::CPolyline*) polyline_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Geometry::CGeodesicMeasure *pObjectX = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeodesicMeasureProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CGeodesicMeasure::distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_register_1distanceMeasure_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1CPolyline_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeodesicMeasureProxy *pObjectX = (JCGeodesicMeasureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_callback", "(DDDDJJ)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_distanceMeasure_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1CPolyline_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble longitude1_j, jdouble latitude1_j, jdouble longitude2_j, jdouble latitude2_j, jlong polyline_j, jlong count_j)
				{
					ev_real64 longitude1 = (ev_real64) longitude1_j;
					ev_real64 latitude1 = (ev_real64) latitude1_j;
					ev_real64 longitude2 = (ev_real64) longitude2_j;
					ev_real64 latitude2 = (ev_real64) latitude2_j;
					EarthView::World::Spatial::Geometry::CPolyline *polyline = (EarthView::World::Spatial::Geometry::CPolyline*) polyline_j;
					ev_uint32 count = (ev_uint32) count_j;
					EarthView::World::Spatial::Geometry::CGeodesicMeasure *pObjectX = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Geometry::CGeodesicMeasure::distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_polylineMeasure_1CPolyline_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polyline_j, jlong distance_j)
				{
					EarthView::World::Spatial::Geometry::CPolyline *polyline = (EarthView::World::Spatial::Geometry::CPolyline*) polyline_j;
					ev_real64 &distance = *(ev_real64*) distance_j;
					EarthView::World::Spatial::Geometry::CGeodesicMeasure *pObjectX = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeodesicMeasureProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polylineMeasure(polyline, distance);
					}
					else
					{
						pObjectX->polylineMeasure(polyline, distance);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_register_1polylineMeasure_1CPolyline_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeodesicMeasureProxy *pObjectX = (JCGeodesicMeasureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_polylineMeasure_CPolyline_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"polylineMeasure_CPolyline_ev_real64_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_polylineMeasure_1CPolyline_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polyline_j, jlong distance_j)
				{
					EarthView::World::Spatial::Geometry::CPolyline *polyline = (EarthView::World::Spatial::Geometry::CPolyline*) polyline_j;
					ev_real64 &distance = *(ev_real64*) distance_j;
					EarthView::World::Spatial::Geometry::CGeodesicMeasure *pObjectX = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polylineMeasure(polyline, distance);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_polygonMeasure_1CPolygon_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polygon_j, jlong area_j, jlong periMeter_j)
				{
					EarthView::World::Spatial::Geometry::CPolygon *polygon = (EarthView::World::Spatial::Geometry::CPolygon*) polygon_j;
					ev_real64 &area = *(ev_real64*) area_j;
					ev_real64 &periMeter = *(ev_real64*) periMeter_j;
					EarthView::World::Spatial::Geometry::CGeodesicMeasure *pObjectX = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCGeodesicMeasureProxy))
					{
						pObjectX->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polygonMeasure(polygon, area, periMeter);
					}
					else
					{
						pObjectX->polygonMeasure(polygon, area, periMeter);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_register_1polygonMeasure_1CPolygon_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCGeodesicMeasureProxy *pObjectX = (JCGeodesicMeasureProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_polygonMeasure_CPolygon_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"polygonMeasure_CPolygon_ev_real64_ev_real64_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_GeodesicMeasure_polygonMeasure_1CPolygon_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polygon_j, jlong area_j, jlong periMeter_j)
				{
					EarthView::World::Spatial::Geometry::CPolygon *polygon = (EarthView::World::Spatial::Geometry::CPolygon*) polygon_j;
					ev_real64 &area = *(ev_real64*) area_j;
					ev_real64 &periMeter = *(ev_real64*) periMeter_j;
					EarthView::World::Spatial::Geometry::CGeodesicMeasure *pObjectX = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polygonMeasure(polygon, area, periMeter);
				}
			}
		}
	}
}
