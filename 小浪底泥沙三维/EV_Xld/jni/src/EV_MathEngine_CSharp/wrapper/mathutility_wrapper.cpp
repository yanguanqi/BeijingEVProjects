/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/mathutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_CDegree_CDegree_ev_real64(_in const void* latitude, _in const void* longitude, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_sphericalToCartesian_CVector3_CRadian_CRadian_ev_real64(_in const void* latitude, _in const void* longitude, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMathUtility::sphericalToCartesian(*(EarthView::World::Spatial::Math::CRadian*)latitude, *(EarthView::World::Spatial::Math::CRadian*)longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_cartesianToSpherical_CVector3_CVector3(_in const void* v )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial::Math::CMathUtility::cartesianToSpherical(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::sphericalDistance(latA, lonA, latB, lonB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_Azimuth_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::Azimuth(latA, lonA, latB, lonB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_getRotationAngleAxis_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB, _inout ev_real64& frkAngle, _inout void* raxis )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::getRotationAngleAxis(latA, lonA, latB, lonB, frkAngle, *(EarthView::World::Spatial::Math::CVector3*)raxis);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_getInterpolaterLatitudeLongitude_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB, _in ev_real64 ratio, _inout ev_real64& latitude, _inout ev_real64& longitude )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::getInterpolaterLatitudeLongitude(latA, lonA, latB, lonB, ratio, latitude, longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_getInterpolaterLatitudeLongitude_ev_bool_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree(_in const void* latA, _in const void* lonA, _in const void* latB, _in const void* lonB, _in ev_real64 ratio, _inout void* latitude, _inout void* longitude )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::getInterpolaterLatitudeLongitude(*(EarthView::World::Spatial::Math::CDegree*)latA, *(EarthView::World::Spatial::Math::CDegree*)lonA, *(EarthView::World::Spatial::Math::CDegree*)latB, *(EarthView::World::Spatial::Math::CDegree*)lonB, ratio, *(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_getRotationAngleAxis_ev_bool_CDegree_CDegree_CDegree_CDegree_ev_real64_CVector3(_in const void* latA, _in const void* lonA, _in const void* latB, _in const void* lonB, _inout ev_real64& frkAngle, _inout void* raxis )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::getRotationAngleAxis(*(EarthView::World::Spatial::Math::CDegree*)latA, *(EarthView::World::Spatial::Math::CDegree*)lonA, *(EarthView::World::Spatial::Math::CDegree*)latB, *(EarthView::World::Spatial::Math::CDegree*)lonB, frkAngle, *(EarthView::World::Spatial::Math::CVector3*)raxis);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_unProject_void_CVector3_CMatrix4_CMatrix4_CMatrix4_CVector3(_in const void* scenePoint, _in const void* modelViewMatrix, _in const void* projectMatrix, _in const void* viewportMatrix, _inout void* worldPoint )
				{
					EarthView::World::Spatial::Math::CMathUtility::unProject(*(EarthView::World::Spatial::Math::CVector3*)scenePoint, *(EarthView::World::Spatial::Math::CMatrix4*)modelViewMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)projectMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)viewportMatrix, *(EarthView::World::Spatial::Math::CVector3*)worldPoint);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_ev_real64_ev_real64(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_real64 worldradius, _in ev_bool isOutside, _in const void* modelViewMatrix, _in const void* projectMatrix, _in const void* viewportMatrix, _inout ev_real64& latitude, _inout ev_real64& longitude )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::pickingRayIntersection(screenX, screenY, worldradius, isOutside, *(EarthView::World::Spatial::Math::CMatrix4*)modelViewMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)projectMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)viewportMatrix, latitude, longitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_CVector3_CVector3(_in ev_int32 screenX, _in ev_int32 screenY, _in ev_real64 worldradius, _in ev_bool isOutside, _in const void* modelViewMatrix, _in const void* projectMatrix, _in const void* viewportMatrix, _inout void* pointA, _inout void* pointB )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::pickingRayIntersection(screenX, screenY, worldradius, isOutside, *(EarthView::World::Spatial::Math::CMatrix4*)modelViewMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)projectMatrix, *(EarthView::World::Spatial::Math::CMatrix4*)viewportMatrix, *(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_pickingRayIntersection_ev_bool_CVector3_CVector3_ev_real64_CVector3(_in const void* lookVector, _in const void* observerPostion, _in ev_real64 worldradius, _inout void* intersectionPostion )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::pickingRayIntersection(*(EarthView::World::Spatial::Math::CVector3*)lookVector, *(EarthView::World::Spatial::Math::CVector3*)observerPostion, worldradius, *(EarthView::World::Spatial::Math::CVector3*)intersectionPostion);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Math_CMathUtility_pickingRayWithLookDirIntersection_ev_bool_CVector3_CVector3_ev_real64_CVector3(_in const void* lookVector, _in const void* observerPostion, _in ev_real64 worldradius, _inout void* intersectionPostion )
				{
					ev_bool objXXXX = EarthView::World::Spatial::Math::CMathUtility::pickingRayWithLookDirIntersection(*(EarthView::World::Spatial::Math::CVector3*)lookVector, *(EarthView::World::Spatial::Math::CVector3*)observerPostion, worldradius, *(EarthView::World::Spatial::Math::CVector3*)intersectionPostion);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 height, _in const void* quaternion, _in const void* scale )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMathUtility::computeWorldMatrix(latitude, longitude, height, *(EarthView::World::Spatial::Math::CQuaternion*)quaternion, *(EarthView::World::Spatial::Math::CVector3*)scale);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_decomputeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(_in const void* mat4, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& height, _out void* quaternion, _out void* scale )
				{
					EarthView::World::Spatial::Math::CMathUtility::decomputeWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat4, latitude, longitude, height, *(EarthView::World::Spatial::Math::CQuaternion*)quaternion, *(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 height, _in ev_real32 rotationXDegree, _in ev_real32 rotationYDegree, _in ev_real32 rotationZDegree, _in const void* scale )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMathUtility::computeWorldMatrix(latitude, longitude, height, rotationXDegree, rotationYDegree, rotationZDegree, *(EarthView::World::Spatial::Math::CVector3*)scale);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_decomputeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(_in const void* mat4, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& height, _out ev_real32& rotationXDegree, _out ev_real32& rotationYDegree, _out ev_real32& rotationZDegree, _out void* scale )
				{
					EarthView::World::Spatial::Math::CMathUtility::decomputeWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat4, latitude, longitude, height, rotationXDegree, rotationYDegree, rotationZDegree, *(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_computeWorldMatrix_CMatrix4_CVector3_CQuaternion_CVector3(_in const void* postion, _in const void* quaternion, _in const void* scale )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial::Math::CMathUtility::computeWorldMatrix(*(EarthView::World::Spatial::Math::CVector3*)postion, *(EarthView::World::Spatial::Math::CQuaternion*)quaternion, *(EarthView::World::Spatial::Math::CVector3*)scale);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_latitudeDegreeToMercator_ev_real64_ev_real64(_in ev_real64 degree )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::latitudeDegreeToMercator(degree);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_longitudeDegreeToMercator_ev_real64_ev_real64(_in ev_real64 degree )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::longitudeDegreeToMercator(degree);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_mercatorToLatitudeDegree_ev_real64_ev_real64(_in ev_real64 radian )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::mercatorToLatitudeDegree(radian);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_mercatorToLongitudeDegree_ev_real64_ev_real64(_in ev_real64 radian )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::mercatorToLongitudeDegree(radian);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Spatial_Math_CMathUtility_getColFromLongitude_ev_int64_ev_real64_ev_real64(_in ev_real64 longitude, _in ev_real64 tileSize )
				{
					ev_int64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::getColFromLongitude(longitude, tileSize);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Spatial_Math_CMathUtility_getRowFromLatitude_ev_int64_ev_real64_ev_real64(_in ev_real64 latitude, _in ev_real64 tileSize )
				{
					ev_int64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::getRowFromLatitude(latitude, tileSize);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Math_CMathUtility_computeAxisMatrix_CMatrix3_CDegree_CDegree_ev_real64(_in const void* latitude, _in const void* longitude, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Math::CMatrix3 objXXXX = EarthView::World::Spatial::Math::CMathUtility::computeAxisMatrix(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, radius);
					EarthView::World::Spatial::Math::CMatrix3 *pXXXX = new EarthView::World::Spatial::Math::CMatrix3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_computeCameraTilt_ev_real64_CVector3_CVector3_CVector3_CVector3(_in const void* target, _in const void* observer, _in const void* upVector, _in const void* localCenter )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::computeCameraTilt(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)upVector, *(EarthView::World::Spatial::Math::CVector3*)localCenter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Math_CMathUtility_computeCameraHeading_ev_real64_CVector3_CVector3_ev_real64_CVector3_CVector3(_in const void* up, _in const void* look, _in ev_real64 tiltRadious, _in const void* target, _in const void* localCenter )
				{
					ev_real64 objXXXX = EarthView::World::Spatial::Math::CMathUtility::computeCameraHeading(*(EarthView::World::Spatial::Math::CVector3*)up, *(EarthView::World::Spatial::Math::CVector3*)look, tiltRadious, *(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)localCenter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_adjustTarget_void_CVector3_CVector3_CVector3_CVector3_ev_real64(_in const void* oldTarget, _in const void* observer, _inout void* target, _in const void* localCenter, _in ev_real64 worldradius )
				{
					EarthView::World::Spatial::Math::CMathUtility::adjustTarget(*(EarthView::World::Spatial::Math::CVector3*)oldTarget, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)localCenter, worldradius);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_transformKMLCameraTag_void_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_CVector3_CVector3_CVector3(_in const void* cameraLatitude, _in const void* cameraLongitude, _in ev_real64 radius, _in const void* heading, _in const void* tilt, _in const void* roll, _inout void* target, _inout void* observer, _inout void* upVector )
				{
					EarthView::World::Spatial::Math::CMathUtility::transformKMLCameraTag(*(EarthView::World::Spatial::Math::CDegree*)cameraLatitude, *(EarthView::World::Spatial::Math::CDegree*)cameraLongitude, radius, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, *(EarthView::World::Spatial::Math::CDegree*)roll, *(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)upVector);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_transformKMLLookAtTag_void_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64_CVector3_CVector3_CVector3(_in const void* targetLatitude, _in const void* targetLongitude, _in ev_real64 radius, _in const void* heading, _in const void* tilt, _in ev_real64 range, _inout void* target, _inout void* observer, _inout void* upVector )
				{
					EarthView::World::Spatial::Math::CMathUtility::transformKMLLookAtTag(*(EarthView::World::Spatial::Math::CDegree*)targetLatitude, *(EarthView::World::Spatial::Math::CDegree*)targetLongitude, radius, *(EarthView::World::Spatial::Math::CDegree*)heading, *(EarthView::World::Spatial::Math::CDegree*)tilt, range, *(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)upVector);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_transformToCameraPostion_void_CVector3_CVector3_CVector3_double_double_double_double_double_double_double(_in const void* target, _in const void* observer, _in const void* up, _in const double worldradius, _inout double& latitude, _inout double& longitude, _inout double& heading, _inout double& tilt, _inout double& altitude, _inout double& moditifAltitude )
				{
					EarthView::World::Spatial::Math::CMathUtility::transformToCameraPostion(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)up, worldradius, latitude, longitude, heading, tilt, altitude, moditifAltitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Math_CMathUtility_transformToCameraPostion_void_CVector3_CVector3_CVector3_double_double_double_double_double_double_double_ev_real64(_in const void* target, _in const void* observer, _in const void* up, _in const double worldradius, _inout double& latitude, _inout double& longitude, _inout double& heading, _inout double& tilt, _inout double& altitude, _inout double& moditifAltitude, _inout ev_real64& distance )
				{
					EarthView::World::Spatial::Math::CMathUtility::transformToCameraPostion(*(EarthView::World::Spatial::Math::CVector3*)target, *(EarthView::World::Spatial::Math::CVector3*)observer, *(EarthView::World::Spatial::Math::CVector3*)up, worldradius, latitude, longitude, heading, tilt, altitude, moditifAltitude, distance);
				}
			}
		}
	}
}
