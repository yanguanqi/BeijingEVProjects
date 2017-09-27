/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dcalculator/spatialcalculator.h"
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
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_intersect_ev_bool_CRay_CViewport_CMatrix4_CVertexData_CIndexData_OperationType_CullingMode_CVector3(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _in const EarthView::World::Graphic::CVertexData* vData, _in const EarthView::World::Graphic::CIndexData* iData, _in int ot, _in int mode, _inout void* point )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::intersect(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, vData, iData, (EarthView::World::Graphic::CRenderOperation::OperationType)ot, (EarthView::World::Graphic::CullingMode)mode, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_CRadian_CRadian_Real(_in const void* latitude, _in const void* longitude, _in Real radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(*(EarthView::World::Spatial::Math::CRadian*)latitude, *(EarthView::World::Spatial::Math::CRadian*)longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalToCartesian_CVector3_CDegree_CDegree_Real(_in const void* latitude, _in const void* longitude, _in Real radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalToCartesian(*(EarthView::World::Spatial::Math::CDegree*)latitude, *(EarthView::World::Spatial::Math::CDegree*)longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_cartesianToSpherical_CVector3_CVector3(_in const void* v )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::cartesianToSpherical(*(EarthView::World::Spatial::Math::CVector3*)v);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::sphericalDistance(latA, lonA, latB, lonB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_distance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 altA, _in ev_real64 latB, _in ev_real64 lonB, _in ev_real64 altB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::distance(latA, lonA, altA, latB, lonB, altB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_getRotationAngleAxis_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB, _inout ev_real64& frkAngle, _inout void* raxis )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::getRotationAngleAxis(latA, lonA, latB, lonB, frkAngle, *(EarthView::World::Spatial::Math::CVector3*)raxis);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const ev_real64& in_x, _in const ev_real64& in_y, _in const ev_real64& in_z, _inout ev_real64& latitude, _inout ev_real64& longitude, _inout ev_real64& radius )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::ProjCoordinateToGeoCoordinate(sr, in_x, in_y, in_z, latitude, longitude, radius);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_real64_ev_real64_ev_real64(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _inout ev_real64& x, _inout ev_real64& y, _inout ev_real64& z )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::ProjCoordinateToGeoCoordinate(sr, x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_ProjCoordinateToGeoCoordinate_void_ISpatialReference_ev_uint32_ev_real64_ev_real64_ev_real64(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_uint32 nCount, _inout ev_real64* pdfX, _inout ev_real64* pdfY, _inout ev_real64* pdfZ )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::ProjCoordinateToGeoCoordinate(sr, nCount, pdfX, pdfY, pdfZ);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_geoCoordinateToProjCoordinate_void_CVector3_CVector3_ISpatialReference(_in const void* srcCoordinate, _inout void* resCoordinate, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::geoCoordinateToProjCoordinate(*(EarthView::World::Spatial::Math::CVector3*)srcCoordinate, *(EarthView::World::Spatial::Math::CVector3*)resCoordinate, sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_coordinateToCartesian_void_ISpatialReference_CVector3_CVector3(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* srcCoordinate, _inout void* resCoordinate )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::coordinateToCartesian(sr, *(EarthView::World::Spatial::Math::CVector3*)srcCoordinate, *(EarthView::World::Spatial::Math::CVector3*)resCoordinate);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_cartensionToCoordinate_void_ISpatialReference_CVector3_CVector3(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* srcCoordinate, _inout void* resCoordinate )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::cartensionToCoordinate(sr, *(EarthView::World::Spatial::Math::CVector3*)srcCoordinate, *(EarthView::World::Spatial::Math::CVector3*)resCoordinate);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_calculateIntersection_ev_bool_CVector3_CVector3_CVector3_CVector3(_in void* node0, _in void* node1, _in void* node2, _in void* node3 )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::calculateIntersection(*(EarthView::World::Spatial::Math::CVector3*)node0, *(EarthView::World::Spatial::Math::CVector3*)node1, *(EarthView::World::Spatial::Math::CVector3*)node2, *(EarthView::World::Spatial::Math::CVector3*)node3);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::approxAngularDistance(latA, lonA, latB, lonB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_interpolate_ev_real64_CVector3_VertexList_ev_int32(_in const void* point, _in const void* arry, _in ev_int32 power )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::interpolate(*(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Spatial::Math::VertexList*)arry, power);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_composeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* scaleInLocal, _in const void* orientInLocal )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::composeWorldMatrix(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scaleInLocal, *(EarthView::World::Spatial::Math::CQuaternion*)orientInLocal);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(_in const void* worldMatrix, _inout ev_real64& lat, _inout ev_real64& lon, _inout ev_real64& alt, _inout void* scaleInLocal, _inout void* orientInLocal )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::decomposeWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scaleInLocal, *(EarthView::World::Spatial::Math::CQuaternion*)orientInLocal);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_composeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(_in ev_real64 lat, _in ev_real64 lon, _in ev_real64 alt, _in const void* scaleInLocal, _in const void* orientInLocal, _in int axisUpType )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::composeWorldMatrix(lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scaleInLocal, *(EarthView::World::Spatial::Math::CQuaternion*)orientInLocal, (EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType)axisUpType);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(_in const void* worldMatrix, _inout ev_real64& lat, _inout ev_real64& lon, _inout ev_real64& alt, _inout void* scaleInLocal, _inout void* orientInLocal, _in int axisUpType )
				{
					EarthView::World::Spatial3D::Utility::CSpatialCalculator::decomposeWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scaleInLocal, *(EarthView::World::Spatial::Math::CQuaternion*)orientInLocal, (EarthView::World::Spatial3D::Utility::CSpatialCalculator::EVAxisUpType)axisUpType);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_visibleDistance_Real_CVector3(_in const void* vCamera )
				{
					Real objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::visibleDistance(*(EarthView::World::Spatial::Math::CVector3*)vCamera);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_envelope2Box_CAxisAlignedBox_ISpatialReference_IEnvelope_ev_real64_ev_real64_ev_real64(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope, _in ev_real64 minz, _in ev_real64 maxz, _in ev_real64 ex )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::envelope2Box(sr, pEnvelope, minz, maxz, ex);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_envelope2Box_CAxisAlignedBox_ISpatialReference_IEnvelope_ev_real64_ev_real64(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope, _in ev_real64 minz, _in ev_real64 maxz )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::envelope2Box(sr, pEnvelope, minz, maxz);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_upwardsHorizon_ev_bool_CVector3_CVector3(_in const void* vCamera, _in const void* vPoint )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::upwardsHorizon(*(EarthView::World::Spatial::Math::CVector3*)vCamera, *(EarthView::World::Spatial::Math::CVector3*)vPoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Utility_CSpatialCalculator_getGeometryCenter_ev_bool_IGeometry_CVector3(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry, _inout void* center )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Utility::CSpatialCalculator::getGeometryCenter(geometry, *(EarthView::World::Spatial::Math::CVector3*)center);
					return objXXXX;
				}
			}
		}
	}
}
