/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/spheregeometryfactory.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_SphereGeometryFactory_createFromCircle_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble centerLon_j, jdouble centerLat_j, jdouble radius_j)
				{
					ev_real64 centerLon = (ev_real64) centerLon_j;
					ev_real64 centerLat = (ev_real64) centerLat_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Geometry::CSphereGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CSphereGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->createFromCircle(centerLon, centerLat, radius);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_SphereGeometryFactory_createFromEllipse_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble centerLon_j, jdouble centerLat_j, jdouble semiMajor_j, jdouble semiMinor_j, jdouble majorAzimuth_j)
				{
					ev_real64 centerLon = (ev_real64) centerLon_j;
					ev_real64 centerLat = (ev_real64) centerLat_j;
					ev_real64 semiMajor = (ev_real64) semiMajor_j;
					ev_real64 semiMinor = (ev_real64) semiMinor_j;
					ev_real64 majorAzimuth = (ev_real64) majorAzimuth_j;
					EarthView::World::Spatial::Geometry::CSphereGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CSphereGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->createFromEllipse(centerLon, centerLat, semiMajor, semiMinor, majorAzimuth);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_SphereGeometryFactory_createFromPoints_1CCoordinate_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong points_j, jlong nCount_j)
				{
					const EarthView::World::Spatial::Geometry::CCoordinate *points = (const EarthView::World::Spatial::Geometry::CCoordinate*) points_j;
					ev_uint32 nCount = (ev_uint32) nCount_j;
					EarthView::World::Spatial::Geometry::CSphereGeometryFactory *pObjectX = (EarthView::World::Spatial::Geometry::CSphereGeometryFactory*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->createFromPoints(points, nCount);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
