/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/mathutility.h"
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
			namespace Math
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_sphericalToCartesian_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble longitude_j, jdouble radius_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_sphericalToCartesian_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong latitude_j, jlong longitude_j, jdouble radius_j)
				{
					const EarthView::World::Spatial::Math::CDegree &latitude = *(EarthView::World::Spatial::Math::CDegree*) latitude_j;
					const EarthView::World::Spatial::Math::CDegree &longitude = *(EarthView::World::Spatial::Math::CDegree*) longitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_sphericalToCartesian_1CRadian_1CRadian_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong latitude_j, jlong longitude_j, jdouble radius_j)
				{
					const EarthView::World::Spatial::Math::CRadian &latitude = *(EarthView::World::Spatial::Math::CRadian*) latitude_j;
					const EarthView::World::Spatial::Math::CRadian &longitude = *(EarthView::World::Spatial::Math::CRadian*) longitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_cartesianToSpherical_1CVector3(JNIEnv *__env , jclass __clazz, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMathUtility::cartesianToSpherical(v);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_sphericalDistance_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::sphericalDistance(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_Azimuth_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::Azimuth(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_getRotationAngleAxis_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j, jlong frkAngle_j, jlong raxis_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 &frkAngle = *(ev_real64*) frkAngle_j;
					EarthView::World::Spatial::Math::CVector3 &raxis = *(EarthView::World::Spatial::Math::CVector3*) raxis_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::getRotationAngleAxis(latA, lonA, latB, lonB, frkAngle, raxis);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_getInterpolaterLatitudeLongitude_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j, jdouble ratio_j, jlong latitude_j, jlong longitude_j)
				{
					ev_real64 latA = (ev_real64) latA_j;
					ev_real64 lonA = (ev_real64) lonA_j;
					ev_real64 latB = (ev_real64) latB_j;
					ev_real64 lonB = (ev_real64) lonB_j;
					ev_real64 ratio = (ev_real64) ratio_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::getInterpolaterLatitudeLongitude(latA, lonA, latB, lonB, ratio, latitude, longitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_getInterpolaterLatitudeLongitude_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree(JNIEnv *__env , jclass __clazz, jlong latA_j, jlong lonA_j, jlong latB_j, jlong lonB_j, jdouble ratio_j, jlong latitude_j, jlong longitude_j)
				{
					const EarthView::World::Spatial::Math::CDegree &latA = *(EarthView::World::Spatial::Math::CDegree*) latA_j;
					const EarthView::World::Spatial::Math::CDegree &lonA = *(EarthView::World::Spatial::Math::CDegree*) lonA_j;
					const EarthView::World::Spatial::Math::CDegree &latB = *(EarthView::World::Spatial::Math::CDegree*) latB_j;
					const EarthView::World::Spatial::Math::CDegree &lonB = *(EarthView::World::Spatial::Math::CDegree*) lonB_j;
					ev_real64 ratio = (ev_real64) ratio_j;
					EarthView::World::Spatial::Math::CDegree &latitude = *(EarthView::World::Spatial::Math::CDegree*) latitude_j;
					EarthView::World::Spatial::Math::CDegree &longitude = *(EarthView::World::Spatial::Math::CDegree*) longitude_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::getInterpolaterLatitudeLongitude(latA, lonA, latB, lonB, ratio, latitude, longitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_getRotationAngleAxis_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CVector3(JNIEnv *__env , jclass __clazz, jlong latA_j, jlong lonA_j, jlong latB_j, jlong lonB_j, jlong frkAngle_j, jlong raxis_j)
				{
					const EarthView::World::Spatial::Math::CDegree &latA = *(EarthView::World::Spatial::Math::CDegree*) latA_j;
					const EarthView::World::Spatial::Math::CDegree &lonA = *(EarthView::World::Spatial::Math::CDegree*) lonA_j;
					const EarthView::World::Spatial::Math::CDegree &latB = *(EarthView::World::Spatial::Math::CDegree*) latB_j;
					const EarthView::World::Spatial::Math::CDegree &lonB = *(EarthView::World::Spatial::Math::CDegree*) lonB_j;
					ev_real64 &frkAngle = *(ev_real64*) frkAngle_j;
					EarthView::World::Spatial::Math::CVector3 &raxis = *(EarthView::World::Spatial::Math::CVector3*) raxis_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::getRotationAngleAxis(latA, lonA, latB, lonB, frkAngle, raxis);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_unProject_1CVector3_1CMatrix4_1CMatrix4_1CMatrix4_1CVector3(JNIEnv *__env , jclass __clazz, jlong scenePoint_j, jlong modelViewMatrix_j, jlong projectMatrix_j, jlong viewportMatrix_j, jlong worldPoint_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &scenePoint = *(EarthView::World::Spatial::Math::CVector3*) scenePoint_j;
					const EarthView::World::Spatial::Math::CMatrix4 &modelViewMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) modelViewMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &projectMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) projectMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &viewportMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) viewportMatrix_j;
					EarthView::World::Spatial::Math::CVector3 &worldPoint = *(EarthView::World::Spatial::Math::CVector3*) worldPoint_j;
					EarthView::World::Spatial::Math::CMathUtility::unProject(scenePoint, modelViewMatrix, projectMatrix, viewportMatrix, worldPoint);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1bool_1CMatrix4_1CMatrix4_1CMatrix4_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jint screenX_j, jint screenY_j, jdouble worldradius_j, jboolean isOutside_j, jlong modelViewMatrix_j, jlong projectMatrix_j, jlong viewportMatrix_j, jlong latitude_j, jlong longitude_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_real64 worldradius = (ev_real64) worldradius_j;
					ev_bool isOutside = (ev_bool) isOutside_j;
					const EarthView::World::Spatial::Math::CMatrix4 &modelViewMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) modelViewMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &projectMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) projectMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &viewportMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) viewportMatrix_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::pickingRayIntersection(screenX, screenY, worldradius, isOutside, modelViewMatrix, projectMatrix, viewportMatrix, latitude, longitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_pickingRayIntersection_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1bool_1CMatrix4_1CMatrix4_1CMatrix4_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jint screenX_j, jint screenY_j, jdouble worldradius_j, jboolean isOutside_j, jlong modelViewMatrix_j, jlong projectMatrix_j, jlong viewportMatrix_j, jlong pointA_j, jlong pointB_j)
				{
					ev_int32 screenX = (ev_int32) screenX_j;
					ev_int32 screenY = (ev_int32) screenY_j;
					ev_real64 worldradius = (ev_real64) worldradius_j;
					ev_bool isOutside = (ev_bool) isOutside_j;
					const EarthView::World::Spatial::Math::CMatrix4 &modelViewMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) modelViewMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &projectMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) projectMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &viewportMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) viewportMatrix_j;
					EarthView::World::Spatial::Math::CVector3 &pointA = *(EarthView::World::Spatial::Math::CVector3*) pointA_j;
					EarthView::World::Spatial::Math::CVector3 &pointB = *(EarthView::World::Spatial::Math::CVector3*) pointB_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::pickingRayIntersection(screenX, screenY, worldradius, isOutside, modelViewMatrix, projectMatrix, viewportMatrix, pointA, pointB);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_pickingRayIntersection_1CVector3_1CVector3_1ev_1real64_1CVector3(JNIEnv *__env , jclass __clazz, jlong lookVector_j, jlong observerPostion_j, jdouble worldradius_j, jlong intersectionPostion_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &lookVector = *(EarthView::World::Spatial::Math::CVector3*) lookVector_j;
					const EarthView::World::Spatial::Math::CVector3 &observerPostion = *(EarthView::World::Spatial::Math::CVector3*) observerPostion_j;
					ev_real64 worldradius = (ev_real64) worldradius_j;
					EarthView::World::Spatial::Math::CVector3 &intersectionPostion = *(EarthView::World::Spatial::Math::CVector3*) intersectionPostion_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::pickingRayIntersection(lookVector, observerPostion, worldradius, intersectionPostion);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_MathUtility_pickingRayWithLookDirIntersection_1CVector3_1CVector3_1ev_1real64_1CVector3(JNIEnv *__env , jclass __clazz, jlong lookVector_j, jlong observerPostion_j, jdouble worldradius_j, jlong intersectionPostion_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &lookVector = *(EarthView::World::Spatial::Math::CVector3*) lookVector_j;
					const EarthView::World::Spatial::Math::CVector3 &observerPostion = *(EarthView::World::Spatial::Math::CVector3*) observerPostion_j;
					ev_real64 worldradius = (ev_real64) worldradius_j;
					EarthView::World::Spatial::Math::CVector3 &intersectionPostion = *(EarthView::World::Spatial::Math::CVector3*) intersectionPostion_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMathUtility::pickingRayWithLookDirIntersection(lookVector, observerPostion, worldradius, intersectionPostion);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_computeWorldMatrix_1ev_1real64_1ev_1real64_1ev_1real64_1CQuaternion_1CVector3(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble longitude_j, jdouble height_j, jlong quaternion_j, jlong scale_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 height = (ev_real64) height_j;
					const EarthView::World::Spatial::Math::CQuaternion &quaternion = *(EarthView::World::Spatial::Math::CQuaternion*) quaternion_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMathUtility::computeWorldMatrix(latitude, longitude, height, quaternion, scale);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_decomputeWorldMatrix_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1CQuaternion_1CVector3(JNIEnv *__env , jclass __clazz, jlong mat4_j, jlong latitude_j, jlong longitude_j, jlong height_j, jlong quaternion_j, jlong scale_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &height = *(ev_real64*) height_j;
					EarthView::World::Spatial::Math::CQuaternion &quaternion = *(EarthView::World::Spatial::Math::CQuaternion*) quaternion_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CMathUtility::decomputeWorldMatrix(mat4, latitude, longitude, height, quaternion, scale);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_computeWorldMatrix_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real32_1ev_1real32_1ev_1real32_1CVector3(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble longitude_j, jdouble height_j, jfloat rotationXDegree_j, jfloat rotationYDegree_j, jfloat rotationZDegree_j, jlong scale_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 height = (ev_real64) height_j;
					ev_real32 rotationXDegree = (ev_real32) rotationXDegree_j;
					ev_real32 rotationYDegree = (ev_real32) rotationYDegree_j;
					ev_real32 rotationZDegree = (ev_real32) rotationZDegree_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMathUtility::computeWorldMatrix(latitude, longitude, height, rotationXDegree, rotationYDegree, rotationZDegree, scale);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_decomputeWorldMatrix_1CMatrix4_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real32_1ev_1real32_1ev_1real32_1CVector3(JNIEnv *__env , jclass __clazz, jlong mat4_j, jlong latitude_j, jlong longitude_j, jlong height_j, jlong rotationXDegree_j, jlong rotationYDegree_j, jlong rotationZDegree_j, jlong scale_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &mat4 = *(EarthView::World::Spatial::Math::CMatrix4*) mat4_j;
					ev_real64 &latitude = *(ev_real64*) latitude_j;
					ev_real64 &longitude = *(ev_real64*) longitude_j;
					ev_real64 &height = *(ev_real64*) height_j;
					ev_real32 &rotationXDegree = *(ev_real32*) rotationXDegree_j;
					ev_real32 &rotationYDegree = *(ev_real32*) rotationYDegree_j;
					ev_real32 &rotationZDegree = *(ev_real32*) rotationZDegree_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CMathUtility::decomputeWorldMatrix(mat4, latitude, longitude, height, rotationXDegree, rotationYDegree, rotationZDegree, scale);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_computeWorldMatrix_1CVector3_1CQuaternion_1CVector3(JNIEnv *__env , jclass __clazz, jlong postion_j, jlong quaternion_j, jlong scale_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &postion = *(EarthView::World::Spatial::Math::CVector3*) postion_j;
					const EarthView::World::Spatial::Math::CQuaternion &quaternion = *(EarthView::World::Spatial::Math::CQuaternion*) quaternion_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMathUtility::computeWorldMatrix(postion, quaternion, scale);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_latitudeDegreeToMercator_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble degree_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::latitudeDegreeToMercator(degree);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_longitudeDegreeToMercator_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble degree_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::longitudeDegreeToMercator(degree);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_mercatorToLatitudeDegree_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble radian_j)
				{
					ev_real64 radian = (ev_real64) radian_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::mercatorToLatitudeDegree(radian);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_mercatorToLongitudeDegree_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble radian_j)
				{
					ev_real64 radian = (ev_real64) radian_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::mercatorToLongitudeDegree(radian);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_getColFromLongitude_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble longitude_j, jdouble tileSize_j)
				{
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 tileSize = (ev_real64) tileSize_j;
					ev_int64 __values1 = EarthView::World::Spatial::Math::CMathUtility::getColFromLongitude(longitude, tileSize);
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_getRowFromLatitude_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble latitude_j, jdouble tileSize_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 tileSize = (ev_real64) tileSize_j;
					ev_int64 __values1 = EarthView::World::Spatial::Math::CMathUtility::getRowFromLatitude(latitude, tileSize);
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_MathUtility_computeAxisMatrix_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong latitude_j, jlong longitude_j, jdouble radius_j)
				{
					const EarthView::World::Spatial::Math::CDegree &latitude = *(EarthView::World::Spatial::Math::CDegree*) latitude_j;
					const EarthView::World::Spatial::Math::CDegree &longitude = *(EarthView::World::Spatial::Math::CDegree*) longitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = EarthView::World::Spatial::Math::CMathUtility::computeAxisMatrix(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_computeCameraTilt_1CVector3_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong target_j, jlong observer_j, jlong upVector_j, jlong localCenter_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const EarthView::World::Spatial::Math::CVector3 &observer = *(EarthView::World::Spatial::Math::CVector3*) observer_j;
					const EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
					const EarthView::World::Spatial::Math::CVector3 localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::computeCameraTilt(target, observer, upVector, localCenter);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_MathUtility_computeCameraHeading_1CVector3_1CVector3_1ev_1real64_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong up_j, jlong look_j, jdouble tiltRadious_j, jlong target_j, jlong localCenter_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &up = *(EarthView::World::Spatial::Math::CVector3*) up_j;
					const EarthView::World::Spatial::Math::CVector3 &look = *(EarthView::World::Spatial::Math::CVector3*) look_j;
					ev_real64 tiltRadious = (ev_real64) tiltRadious_j;
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const EarthView::World::Spatial::Math::CVector3 localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMathUtility::computeCameraHeading(up, look, tiltRadious, target, localCenter);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_adjustTarget_1CVector3_1CVector3_1CVector3_1CVector3_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong oldTarget_j, jlong observer_j, jlong target_j, jlong localCenter_j, jdouble worldradius_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &oldTarget = *(EarthView::World::Spatial::Math::CVector3*) oldTarget_j;
					const EarthView::World::Spatial::Math::CVector3 &observer = *(EarthView::World::Spatial::Math::CVector3*) observer_j;
					EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const EarthView::World::Spatial::Math::CVector3 localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
					ev_real64 worldradius = (ev_real64) worldradius_j;
					EarthView::World::Spatial::Math::CMathUtility::adjustTarget(oldTarget, observer, target, localCenter, worldradius);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_transformKMLCameraTag_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong cameraLatitude_j, jlong cameraLongitude_j, jdouble radius_j, jlong heading_j, jlong tilt_j, jlong roll_j, jlong target_j, jlong observer_j, jlong upVector_j)
				{
					const EarthView::World::Spatial::Math::CDegree &cameraLatitude = *(EarthView::World::Spatial::Math::CDegree*) cameraLatitude_j;
					const EarthView::World::Spatial::Math::CDegree &cameraLongitude = *(EarthView::World::Spatial::Math::CDegree*) cameraLongitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					const EarthView::World::Spatial::Math::CDegree &roll = *(EarthView::World::Spatial::Math::CDegree*) roll_j;
					EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					EarthView::World::Spatial::Math::CVector3 &observer = *(EarthView::World::Spatial::Math::CVector3*) observer_j;
					EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
					EarthView::World::Spatial::Math::CMathUtility::transformKMLCameraTag(cameraLatitude, cameraLongitude, radius, heading, tilt, roll, target, observer, upVector);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_transformKMLLookAtTag_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1ev_1real64_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong targetLatitude_j, jlong targetLongitude_j, jdouble radius_j, jlong heading_j, jlong tilt_j, jdouble range_j, jlong target_j, jlong observer_j, jlong upVector_j)
				{
					const EarthView::World::Spatial::Math::CDegree &targetLatitude = *(EarthView::World::Spatial::Math::CDegree*) targetLatitude_j;
					const EarthView::World::Spatial::Math::CDegree &targetLongitude = *(EarthView::World::Spatial::Math::CDegree*) targetLongitude_j;
					ev_real64 radius = (ev_real64) radius_j;
					const EarthView::World::Spatial::Math::CDegree &heading = *(EarthView::World::Spatial::Math::CDegree*) heading_j;
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					ev_real64 range = (ev_real64) range_j;
					EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					EarthView::World::Spatial::Math::CVector3 &observer = *(EarthView::World::Spatial::Math::CVector3*) observer_j;
					EarthView::World::Spatial::Math::CVector3 &upVector = *(EarthView::World::Spatial::Math::CVector3*) upVector_j;
					EarthView::World::Spatial::Math::CMathUtility::transformKMLLookAtTag(targetLatitude, targetLongitude, radius, heading, tilt, range, target, observer, upVector);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_transformToCameraPostion_1CVector3_1CVector3_1CVector3_1double_1double_1double_1double_1double_1double_1double(JNIEnv *__env , jclass __clazz, jlong target_j, jlong observer_j, jlong up_j, jdouble worldradius_j, jlong latitude_j, jlong longitude_j, jlong heading_j, jlong tilt_j, jlong altitude_j, jlong moditifAltitude_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const EarthView::World::Spatial::Math::CVector3 &observer = *(EarthView::World::Spatial::Math::CVector3*) observer_j;
					const EarthView::World::Spatial::Math::CVector3 &up = *(EarthView::World::Spatial::Math::CVector3*) up_j;
					const double worldradius = (double) worldradius_j;
					double &latitude = *(double*) latitude_j;
					double &longitude = *(double*) longitude_j;
					double &heading = *(double*) heading_j;
					double &tilt = *(double*) tilt_j;
					double &altitude = *(double*) altitude_j;
					double &moditifAltitude = *(double*) moditifAltitude_j;
					EarthView::World::Spatial::Math::CMathUtility::transformToCameraPostion(target, observer, up, worldradius, latitude, longitude, heading, tilt, altitude, moditifAltitude);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_MathUtility_transformToCameraPostion_1CVector3_1CVector3_1CVector3_1double_1double_1double_1double_1double_1double_1double_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong target_j, jlong observer_j, jlong up_j, jdouble worldradius_j, jlong latitude_j, jlong longitude_j, jlong heading_j, jlong tilt_j, jlong altitude_j, jlong moditifAltitude_j, jlong distance_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &target = *(EarthView::World::Spatial::Math::CVector3*) target_j;
					const EarthView::World::Spatial::Math::CVector3 &observer = *(EarthView::World::Spatial::Math::CVector3*) observer_j;
					const EarthView::World::Spatial::Math::CVector3 &up = *(EarthView::World::Spatial::Math::CVector3*) up_j;
					const double worldradius = (double) worldradius_j;
					double &latitude = *(double*) latitude_j;
					double &longitude = *(double*) longitude_j;
					double &heading = *(double*) heading_j;
					double &tilt = *(double*) tilt_j;
					double &altitude = *(double*) altitude_j;
					double &moditifAltitude = *(double*) moditifAltitude_j;
					ev_real64 &distance = *(ev_real64*) distance_j;
					EarthView::World::Spatial::Math::CMathUtility::transformToCameraPostion(target, observer, up, worldradius, latitude, longitude, heading, tilt, altitude, moditifAltitude, distance);
				}
			}
		}
	}
}
