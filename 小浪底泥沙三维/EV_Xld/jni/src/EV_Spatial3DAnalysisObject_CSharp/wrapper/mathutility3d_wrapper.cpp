/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/mathutility3d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMathUtility3DProxy : public EarthView::World::Spatial3D::Analysis::CMathUtility3D
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback;
				public:
					CMathUtility3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CMathUtility3D(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitudeListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMathUtility3D::getAltitudeListener();
					}
					virtual void setAltitudeListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMathUtility3D::setAltitudeListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMathUtility3DProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					if (dynamic_cast<CMathUtility3DProxy*>((EarthView::World::Spatial3D::Analysis::CMathUtility3D*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMathUtility3D::getAltitudeListener();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* objXXXX = ptrNativeObject->getAltitudeListener();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_Callback* pCallback )
				{
					CMathUtility3DProxy* ptr = dynamic_cast<CMathUtility3DProxy*>((EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getAltitudeListener_CAltitude3DListener_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMathUtility3D::getAltitudeListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					if (dynamic_cast<CMathUtility3DProxy*>((EarthView::World::Spatial3D::Analysis::CMathUtility3D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMathUtility3D::setAltitudeListener(ref_pListener);
					else
						ptrNativeObject->setAltitudeListener(ref_pListener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMathUtility3DProxy* ptr = dynamic_cast<CMathUtility3DProxy*>((EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_setAltitudeListener_void_CAltitude3DListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CMathUtility3D::setAltitudeListener(ref_pListener);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getNeedStop_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_setNeedStop_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->setNeedStop(value);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getProgressV_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getProgressV();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getProgressM_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getProgressM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_setProgressV_void_ev_int32_ev_int32(void *pObjectXXXX, _in const ev_int32& progressV, _in const ev_int32& progressM )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->setProgressV(progressV, progressM);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_sphericalToCartesian_CVector3_ev_real32_ev_real32_ev_real32(_in ev_real32 latitude, _in ev_real32 longitude, _in ev_real32 radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_sphericalToCartesian_CVector3_ev_real64_ev_real64_ev_real64(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::sphericalToCartesian(latitude, longitude, radius);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_mod_ev_int32_ev_int32_ev_int32(_in ev_int32 i, _in ev_int32 n )
				{
					ev_int32 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::mod(i, n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_calculateInsertNum_void_CVector3_CVector3_ev_real64_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* pointA, _in const void* pointB, _in ev_real64 givenInterval, _out ev_uint32& givenInsertNum, _out ev_uint32& suggestInsertNum )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->calculateInsertNum(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB, givenInterval, givenInsertNum, suggestInsertNum);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_isDeasil_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB, _in ev_real64 latC, _in ev_real64 lonC )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isDeasil(latA, lonA, latB, lonB, latC, lonC);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_isInPolygon_ev_bool_VertexList_CVector3(_in void* inList, _in void* node )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isInPolygon(*(EarthView::World::Spatial::Math::VertexList*)inList, *(EarthView::World::Spatial::Math::CVector3*)node);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_isDiagonal_ev_bool_VertexList_ev_int32_ev_int32(_inout void* list, _in ev_int32 i0, _in ev_int32 i1 )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isDiagonal(*(EarthView::World::Spatial::Math::VertexList*)list, i0, i1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_isTriangulable_ev_bool_VertexList(_inout void* pointList )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::isTriangulable(*(EarthView::World::Spatial::Math::VertexList*)pointList);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_getEffectAddPoint_ev_int32_VertexList_CVector3_ev_bool(_inout void* pointList, _in const void* point, _in ev_bool isMoved )
				{
					ev_int32 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::getEffectAddPoint(*(EarthView::World::Spatial::Math::VertexList*)pointList, *(EarthView::World::Spatial::Math::CVector3*)point, isMoved);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_calculateIntersection_ev_bool_CVector3_CVector3_CVector3_CVector3(_in const void* node0, _in const void* node1, _in const void* node2, _in const void* node3 )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::calculateIntersection(*(EarthView::World::Spatial::Math::CVector3*)node0, *(EarthView::World::Spatial::Math::CVector3*)node1, *(EarthView::World::Spatial::Math::CVector3*)node2, *(EarthView::World::Spatial::Math::CVector3*)node3);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterGeoPositionWithoutAltitude_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real32 f, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::calcuInterGeoPositionWithoutAltitude(f, latA, lonA, latB, lonB);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterWorldPositionWithoutAltitude_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real32 f, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::calcuInterWorldPositionWithoutAltitude(f, latA, lonA, latB, lonB);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_calcuInterGeoPosition_CVector3_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real32 f, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->calcuInterGeoPosition(f, latA, lonA, latB, lonB);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_azimuth_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::azimuth(latA, lonA, latB, lonB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::approxAngularDistance(latA, lonA, latB, lonB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_lineStraightMeasure_ev_real64_CVector3_CVector3(_in const void* pointStart, _in const void* pointEnd )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::lineStraightMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointStart, *(EarthView::World::Spatial::Math::CVector3*)pointEnd);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_lineProjectMeasure_ev_real64_CVector3_CVector3(_in const void* point0, _in const void* point1 )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::lineProjectMeasure(*(EarthView::World::Spatial::Math::CVector3*)point0, *(EarthView::World::Spatial::Math::CVector3*)point1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_geoLineDistanceMeasure_ev_real64_CVector3_CVector3(void *pObjectXXXX, _in const void* pointA, _in const void* pointB )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->geoLineDistanceMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_geoLineDistanceMeasure_ev_real64_CVector3_CVector3_ev_int32(void *pObjectXXXX, _in const void* pointA, _in const void* pointB, _in ev_int32 number )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->geoLineDistanceMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB, number);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangulate_ev_bool_VertexList_VertexList(_in const void* nodeList, _inout void* pointList )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::triangulate(*(EarthView::World::Spatial::Math::VertexList*)nodeList, *(EarthView::World::Spatial::Math::VertexList*)pointList);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitTriangle2GeoPosition_void_ev_int32_VertexList_ev_bool_VertexList_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 num, _in const void* nodeList, _in ev_bool isGetAlti, _out void* outPoints, _out ev_int32& maxAltiIndex, _out ev_int32& minAltiIndex )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitTriangle2GeoPosition(num, *(EarthView::World::Spatial::Math::VertexList*)nodeList, isGetAlti, *(EarthView::World::Spatial::Math::VertexList*)outPoints, maxAltiIndex, minAltiIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitTriang2Indices_void_ev_int32_IntVector(void *pObjectXXXX, _in ev_int32 num, _out void* indices )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitTriang2Indices(num, *(EarthView::World::Core::IntVector*)indices);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangleAreaMeasure_ev_real64_CVector3_CVector3_CVector3(_in const void* pointA, _in const void* pointB, _in const void* pointC )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::triangleAreaMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB, *(EarthView::World::Spatial::Math::CVector3*)pointC);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_triangleProjectMeasure_ev_real64_CVector3_CVector3_CVector3(_in const void* pointA, _in const void* pointB, _in const void* pointC )
				{
					ev_real64 objXXXX = EarthView::World::Spatial3D::Analysis::CMathUtility3D::triangleProjectMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB, *(EarthView::World::Spatial::Math::CVector3*)pointC);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_spiltTriangleSurfaceMeasure_ev_real64_CVector3_CVector3_CVector3_ev_int32(void *pObjectXXXX, _in const void* pointA, _in const void* pointB, _in const void* pointC, _in const ev_int32 insertNum )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->spiltTriangleSurfaceMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB, *(EarthView::World::Spatial::Math::CVector3*)pointC, insertNum);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_spiltTriangleProjectMeasure_ev_real64_CVector3_CVector3_CVector3_ev_int32(void *pObjectXXXX, _in const void* pointA, _in const void* pointB, _in const void* pointC, _in const ev_int32 insertNum )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->spiltTriangleProjectMeasure(*(EarthView::World::Spatial::Math::CVector3*)pointA, *(EarthView::World::Spatial::Math::CVector3*)pointB, *(EarthView::World::Spatial::Math::CVector3*)pointC, insertNum);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_polygonSurfaceMeasure_ev_real64_VertexList(void *pObjectXXXX, _inout void* pointList )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->polygonSurfaceMeasure(*(EarthView::World::Spatial::Math::VertexList*)pointList);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitLine2GeoPosition_void_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(void *pObjectXXXX, _in ev_int32 number, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB, _in ev_bool isGetAlti, _out void* outPoints )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitLine2GeoPosition(number, latA, lonA, latB, lonB, isGetAlti, *(EarthView::World::Spatial::Math::VertexList*)outPoints);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitLine2WorldPosition_void_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(void *pObjectXXXX, _in ev_int32 number, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB, _in ev_bool isGetAlti, _out void* outPoints )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitLine2WorldPosition(number, latA, lonA, latB, lonB, isGetAlti, *(EarthView::World::Spatial::Math::VertexList*)outPoints);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitPolylineGeoPosition_void_VertexList_ev_int32_ev_bool_VertexList(void *pObjectXXXX, _in const void* inpoints, _in ev_int32 insertNum, _in ev_bool isGetAlti, _out void* outPoints )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitPolylineGeoPosition(*(EarthView::World::Spatial::Math::VertexList*)inpoints, insertNum, isGetAlti, *(EarthView::World::Spatial::Math::VertexList*)outPoints);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitPolylineWorPosition_void_VertexList_ev_int32_ev_bool_VertexList(void *pObjectXXXX, _in const void* inpoints, _in ev_int32 insertNum, _in ev_bool isGetAlti, _out void* outPoints )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitPolylineWorPosition(*(EarthView::World::Spatial::Math::VertexList*)inpoints, insertNum, isGetAlti, *(EarthView::World::Spatial::Math::VertexList*)outPoints);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitCircle2GeoPosition_void_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(void *pObjectXXXX, _in ev_real64 lati, _in ev_real64 longi, _in ev_real64 radius, _in ev_int32 insertNum, _out void* outPoints )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitCircle2GeoPosition(lati, longi, radius, insertNum, *(EarthView::World::Spatial::Math::VertexList*)outPoints);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMathUtility3D_splitCircle2WorldPosition_void_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(void *pObjectXXXX, _in ev_real64 lati, _in ev_real64 longi, _in ev_real64 radius, _in ev_int32 insertNum, _out void* outPoints )
				{
					EarthView::World::Spatial3D::Analysis::CMathUtility3D* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMathUtility3D*) pObjectXXXX;
					ptrNativeObject->splitCircle2WorldPosition(lati, longi, radius, insertNum, *(EarthView::World::Spatial::Math::VertexList*)outPoints);
				}
			}
		}
	}
}
