/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dcalculator/spatialcalculator.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Utility
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_00024EVAxisUpTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CSpatialCalculator::AUT_XAxisUP,
						CSpatialCalculator::AUT_YAxisUP,
						CSpatialCalculator::AUT_ZAxisUP
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_intersect_1CRay_1CViewport_1CMatrix4_1CVertexData_1CIndexData_1OperationType_1CullingMode_1CVector3(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jlong vData_j, jlong iData_j, jint ot_j, jint mode_j, jlong point_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
					const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
					const EarthView::World::Graphic::CVertexData *vData = (const EarthView::World::Graphic::CVertexData*) vData_j;
					const EarthView::World::Graphic::CIndexData *iData = (const EarthView::World::Graphic::CIndexData*) iData_j;
					EarthView::World::Graphic::CRenderOperation::OperationType ot = (EarthView::World::Graphic::CRenderOperation::OperationType) ot_j;
					EarthView::World::Graphic::CullingMode mode = (EarthView::World::Graphic::CullingMode) mode_j;
					EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::intersect(ray, viewport, worldMatrix, vData, iData, ot, mode, point);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_sphericalToCartesian_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble longitude_j, jdouble radius_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_sphericalToCartesian_1CRadian_1CRadian_1Real(JNIEnv *__env , jclass __clazz, jlong latitude_j, jlong longitude_j, jdouble radius_j)
				{
					const EarthView::World::Spatial::Math::CRadian &latitude = *(EarthView::World::Spatial::Math::CRadian*) latitude_j;
					const EarthView::World::Spatial::Math::CRadian &longitude = *(EarthView::World::Spatial::Math::CRadian*) longitude_j;
					Real radius = (Real) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_sphericalToCartesian_1CDegree_1CDegree_1Real(JNIEnv *__env , jclass __clazz, jlong latitude_j, jlong longitude_j, jdouble radius_j)
				{
					const EarthView::World::Spatial::Math::CDegree &latitude = *(EarthView::World::Spatial::Math::CDegree*) latitude_j;
					const EarthView::World::Spatial::Math::CDegree &longitude = *(EarthView::World::Spatial::Math::CDegree*) longitude_j;
					Real radius = (Real) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_cartesianToSpherical_1CVector3(JNIEnv *__env , jclass __clazz, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::cartesianToSpherical(v);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_sphericalDistance_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalDistance(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_distance_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble altA_j, jdouble latB_j, jdouble lonB_j, jdouble altB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 altA = (ev_real64) altA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 altB = (ev_real64) altB_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::distance(latA, lonA, altA, latB, lonB, altB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_getRotationAngleAxis_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j, jlong frkAngle_j, jlong raxis_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 &frkAngle = *(ev_real64*) frkAngle_j;
					EarthView::World::Spatial::Math::CVector3 &raxis = *(EarthView::World::Spatial::Math::CVector3*) raxis_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::getRotationAngleAxis(latA, lonA, latB, lonB, frkAngle, raxis);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_ProjCoordinateToGeoCoordinate_1ISpatialReference_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong sr_j, jdouble in_x_j, jdouble in_y_j, jdouble in_z_j, jlong latitude_j, jlong longitude_j, jlong radius_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const ev_real64 in_x = (const ev_real64) in_x_j;
					const ev_real64 in_y = (const ev_real64) in_y_j;
					const ev_real64 in_z = (const ev_real64) in_z_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &radius = *(ev_real64*) radius_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::ProjCoordinateToGeoCoordinate(sr, in_x, in_y, in_z, latitude, longitude, radius);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_ProjCoordinateToGeoCoordinate_1ISpatialReference_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong sr_j, jlong x_j, jlong y_j, jlong z_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					ev_real64 &x = *(ev_real64*) x_j;
					ev_real64 &y = *(ev_real64*) y_j;
					ev_real64 &z = *(ev_real64*) z_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::ProjCoordinateToGeoCoordinate(sr, x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_ProjCoordinateToGeoCoordinate_1ISpatialReference_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong sr_j, jlong nCount_j, jlong pdfX_j, jlong pdfY_j, jlong pdfZ_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					ev_uint32 nCount = (ev_uint32) nCount_j;
					ev_real64 *pdfX = (ev_real64*) pdfX_j;
					ev_real64 *pdfY = (ev_real64*) pdfY_j;
					ev_real64 *pdfZ = (ev_real64*) pdfZ_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::ProjCoordinateToGeoCoordinate(sr, nCount, pdfX, pdfY, pdfZ);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_geoCoordinateToProjCoordinate_1CVector3_1CVector3_1ISpatialReference(JNIEnv *__env , jclass __clazz, jlong srcCoordinate_j, jlong resCoordinate_j, jlong sr_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &srcCoordinate = *(EarthView::World::Spatial::Math::CVector3*) srcCoordinate_j;
					EarthView::World::Spatial::Math::CVector3 &resCoordinate = *(EarthView::World::Spatial::Math::CVector3*) resCoordinate_j;
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::geoCoordinateToProjCoordinate(srcCoordinate, resCoordinate, sr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_coordinateToCartesian_1ISpatialReference_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong sr_j, jlong srcCoordinate_j, jlong resCoordinate_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const EarthView::World::Spatial::Math::CVector3 &srcCoordinate = *(EarthView::World::Spatial::Math::CVector3*) srcCoordinate_j;
					EarthView::World::Spatial::Math::CVector3 &resCoordinate = *(EarthView::World::Spatial::Math::CVector3*) resCoordinate_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::coordinateToCartesian(sr, srcCoordinate, resCoordinate);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_cartensionToCoordinate_1ISpatialReference_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong sr_j, jlong srcCoordinate_j, jlong resCoordinate_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const EarthView::World::Spatial::Math::CVector3 &srcCoordinate = *(EarthView::World::Spatial::Math::CVector3*) srcCoordinate_j;
					EarthView::World::Spatial::Math::CVector3 &resCoordinate = *(EarthView::World::Spatial::Math::CVector3*) resCoordinate_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::cartensionToCoordinate(sr, srcCoordinate, resCoordinate);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_calculateIntersection_1CVector3_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong node0_j, jlong node1_j, jlong node2_j, jlong node3_j)
				{
					EarthView::World::Spatial::Math::CVector3 node0 = *(EarthView::World::Spatial::Math::CVector3*) node0_j;
					EarthView::World::Spatial::Math::CVector3 node1 = *(EarthView::World::Spatial::Math::CVector3*) node1_j;
					EarthView::World::Spatial::Math::CVector3 node2 = *(EarthView::World::Spatial::Math::CVector3*) node2_j;
					EarthView::World::Spatial::Math::CVector3 node3 = *(EarthView::World::Spatial::Math::CVector3*) node3_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::calculateIntersection(node0, node1, node2, node3);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_approxAngularDistance_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::approxAngularDistance(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_interpolate_1CVector3_1VertexList_1ev_1int32(JNIEnv *__env , jclass __clazz, jlong point_j, jlong arry_j, jint power_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					const EarthView::World::Spatial::Math::VertexList &arry = *(EarthView::World::Spatial::Math::VertexList*) arry_j;
					ev_int32 power = (ev_int32) power_j;
					ev_real64 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::interpolate(point, arry, power);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_composeWorldMatrix_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jclass __clazz, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong scaleInLocal_j, jlong orientInLocal_j)
				{
					ev_real64 lat = (ev_real64) lat_j;
					ev_real64 lon = (ev_real64) lon_j;
					ev_real64 alt = (ev_real64) alt_j;
					const EarthView::World::Spatial::Math::CVector3 &scaleInLocal = *(EarthView::World::Spatial::Math::CVector3*) scaleInLocal_j;
					const EarthView::World::Spatial::Math::CQuaternion &orientInLocal = *(EarthView::World::Spatial::Math::CQuaternion*) orientInLocal_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::composeWorldMatrix(lat, lon, alt, scaleInLocal, orientInLocal);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_decomposeWorldMatrix_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong worldMatrix_j, jlong lat_j, jlong lon_j, jlong alt_j, jlong scaleInLocal_j, jlong orientInLocal_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
					ev_real64 &lat = *(ev_real64*) lat_j;
					ev_real64 &lon = *(ev_real64*) lon_j;
					ev_real64 &alt = *(ev_real64*) alt_j;
					EarthView::World::Spatial::Math::CVector3 &scaleInLocal = *(EarthView::World::Spatial::Math::CVector3*) scaleInLocal_j;
					EarthView::World::Spatial::Math::CQuaternion &orientInLocal = *(EarthView::World::Spatial::Math::CQuaternion*) orientInLocal_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::decomposeWorldMatrix(worldMatrix, lat, lon, alt, scaleInLocal, orientInLocal);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_composeWorldMatrix_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1EVAxisUpType(JNIEnv *__env , jclass __clazz, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong scaleInLocal_j, jlong orientInLocal_j, jint axisUpType_j)
				{
					ev_real64 lat = (ev_real64) lat_j;
					ev_real64 lon = (ev_real64) lon_j;
					ev_real64 alt = (ev_real64) alt_j;
					const EarthView::World::Spatial::Math::CVector3 &scaleInLocal = *(EarthView::World::Spatial::Math::CVector3*) scaleInLocal_j;
					const EarthView::World::Spatial::Math::CQuaternion &orientInLocal = *(EarthView::World::Spatial::Math::CQuaternion*) orientInLocal_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType axisUpType = (EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType) axisUpType_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::composeWorldMatrix(lat, lon, alt, scaleInLocal, orientInLocal, axisUpType);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_decomposeWorldMatrix_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1EVAxisUpType(JNIEnv *__env , jclass __clazz, jlong worldMatrix_j, jlong lat_j, jlong lon_j, jlong alt_j, jlong scaleInLocal_j, jlong orientInLocal_j, jint axisUpType_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
					ev_real64 &lat = *(ev_real64*) lat_j;
					ev_real64 &lon = *(ev_real64*) lon_j;
					ev_real64 &alt = *(ev_real64*) alt_j;
					EarthView::World::Spatial::Math::CVector3 &scaleInLocal = *(EarthView::World::Spatial::Math::CVector3*) scaleInLocal_j;
					EarthView::World::Spatial::Math::CQuaternion &orientInLocal = *(EarthView::World::Spatial::Math::CQuaternion*) orientInLocal_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType axisUpType = (EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType) axisUpType_j;
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::decomposeWorldMatrix(worldMatrix, lat, lon, alt, scaleInLocal, orientInLocal, axisUpType);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_visibleDistance_1CVector3(JNIEnv *__env , jclass __clazz, jlong vCamera_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vCamera = *(EarthView::World::Spatial::Math::CVector3*) vCamera_j;
					Real __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::visibleDistance(vCamera);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_envelope2Box_1ISpatialReference_1IEnvelope_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong sr_j, jlong pEnvelope_j, jdouble minz_j, jdouble maxz_j, jdouble ex_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					ev_real64 minz = (ev_real64) minz_j;
					ev_real64 maxz = (ev_real64) maxz_j;
					ev_real64 ex = (ev_real64) ex_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::envelope2Box(sr, pEnvelope, minz, maxz, ex);
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_envelope2Box_1ISpatialReference_1IEnvelope_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong sr_j, jlong pEnvelope_j, jdouble minz_j, jdouble maxz_j)
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference *sr = (const EarthView::World::Spatial::Geometry::ISpatialReference*) sr_j;
					const EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope = (const EarthView::World::Spatial::Geometry::IEnvelope*) pEnvelope_j;
					ev_real64 minz = (ev_real64) minz_j;
					ev_real64 maxz = (ev_real64) maxz_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::envelope2Box(sr, pEnvelope, minz, maxz);
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_upwardsHorizon_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong vCamera_j, jlong vPoint_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vCamera = *(EarthView::World::Spatial::Math::CVector3*) vCamera_j;
					const EarthView::World::Spatial::Math::CVector3 &vPoint = *(EarthView::World::Spatial::Math::CVector3*) vPoint_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::upwardsHorizon(vCamera, vPoint);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_utility_SpatialCalculator_getGeometryCenter_1IGeometry_1CVector3(JNIEnv *__env , jclass __clazz, jlong geometry_j, jlong center_j)
				{
					const EarthView::World::Spatial::Geometry::IGeometry *geometry = (const EarthView::World::Spatial::Geometry::IGeometry*) geometry_j;
					EarthView::World::Spatial::Math::CVector3 &center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Utility::CSpatialCalculator::getGeometryCenter(geometry, center);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
