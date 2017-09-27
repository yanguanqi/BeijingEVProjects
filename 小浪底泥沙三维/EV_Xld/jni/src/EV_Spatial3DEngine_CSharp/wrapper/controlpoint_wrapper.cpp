/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/controlpoint.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPoint_formRollPitchYaw_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in const void* roll, _in const void* pitch, _in const void* yaw )
			{
				EarthView::World::Spatial3D::CControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CControlPoint*) pObjectXXXX;
				ptrNativeObject->formRollPitchYaw(*(EarthView::World::Spatial::Math::CRadian*)roll, *(EarthView::World::Spatial::Math::CRadian*)pitch, *(EarthView::World::Spatial::Math::CRadian*)yaw);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPoint_toRollPitchRaw_void_CRadian_CRadian_CRadian(void *pObjectXXXX, _in void* roll, _in void* pitch, _in void* yaw )
			{
				EarthView::World::Spatial3D::CControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CControlPoint*) pObjectXXXX;
				ptrNativeObject->toRollPitchRaw(*(EarthView::World::Spatial::Math::CRadian*)roll, *(EarthView::World::Spatial::Math::CRadian*)pitch, *(EarthView::World::Spatial::Math::CRadian*)yaw);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CControlPoint_mposition( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mposition;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CControlPoint_mposition( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CControlPoint*)pObjectXXXX)->mposition = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CControlPoint_mquaternion( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->mquaternion;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CControlPoint_mquaternion( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CControlPoint*)pObjectXXXX)->mquaternion = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CControlPoint_mscale( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mscale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CControlPoint_mscale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CControlPoint*)pObjectXXXX)->mscale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPoint_OperatorEquals_ev_bool_CControlPoint(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CControlPoint& objXXXX = *(EarthView::World::Spatial3D::CControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CControlPoint& objXXXX1 = *(EarthView::World::Spatial3D::CControlPoint*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPoint_OperatorNotEquals_ev_bool_CControlPoint(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CControlPoint& objXXXX = *(EarthView::World::Spatial3D::CControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CControlPoint& objXXXX1 = *(EarthView::World::Spatial3D::CControlPoint*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_mlatitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlatitude;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_mlatitude( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->mlatitude = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_mlongitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mlongitude;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_mlongitude( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->mlongitude = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_mheading( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mheading;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_mheading( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->mheading = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_mradius( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mradius;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_mradius( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->mradius = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_myaw( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->myaw;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_myaw( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->myaw = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_mpitch( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mpitch;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_mpitch( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->mpitch = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeControlPoint_mroll( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mroll;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeControlPoint_mroll( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeControlPoint*)pObjectXXXX)->mroll = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeControlPoint_transformToControlPoint_CControlPoint(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjectXXXX;
				EarthView::World::Spatial3D::CControlPoint objXXXX = ptrNativeObject->transformToControlPoint();
				EarthView::World::Spatial3D::CControlPoint *pXXXX = new EarthView::World::Spatial3D::CControlPoint(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeControlPoint_OperatorEquals_ev_bool_CGlobeControlPoint(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX1 = *(EarthView::World::Spatial3D::CGlobeControlPoint*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeControlPoint_OperatorNotEquals_ev_bool_CGlobeControlPoint(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX1 = *(EarthView::World::Spatial3D::CGlobeControlPoint*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPointMap_push_ev_bool_ev_real64_CControlPoint(void *pObjectXXXX, _in const ev_real64& key, _in void* val )
			{
				EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, *(EarthView::World::Spatial3D::CControlPoint*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPointMap_exist_ev_bool_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CControlPointMap_OperatorIndex_CControlPoint_ev_real64(void *pObjXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CControlPointMap& objYYYY = *(EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				EarthView::World::Spatial3D::CControlPoint& objXXXX = objYYYY[key];
				EarthView::World::Spatial3D::CControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CControlPointMap_get_CControlPoint_ev_real64(void *pObjectXXXX, _in ev_real64 key )
			{
				EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				EarthView::World::Spatial3D::CControlPoint& objXXXX = ptrNativeObject->get(key);
				EarthView::World::Spatial3D::CControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointMap_erase_void_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CControlPointMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPointMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPointMap_getKey_ev_bool_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 index, _inout ev_real64& key )
			{
				const EarthView::World::Spatial3D::CControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getKey(index, key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_push_ev_bool_ev_real64_CGlobeControlPoint(void *pObjectXXXX, _in const ev_real64& key, _in void* val )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, *(EarthView::World::Spatial3D::CGlobeControlPoint*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_exist_ev_bool_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_OperatorIndex_CGlobeControlPoint_ev_real64(void *pObjXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap& objYYYY = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = objYYYY[key];
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_get_CGlobeControlPoint_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = ptrNativeObject->get(key);
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_erase_void_ev_real64(void *pObjectXXXX, _in const ev_real64& key )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeControlPointMap_getKey_ev_bool_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 index, _inout ev_real64& key )
			{
				const EarthView::World::Spatial3D::CGlobeControlPointMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getKey(index, key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointPath_insertControlPoint_void_ev_real64_CControlPoint(void *pObjectXXXX, _in ev_real64 time, _in void* postion )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ptrNativeObject->insertControlPoint(time, *(EarthView::World::Spatial3D::CControlPoint*)postion);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CControlPointPath_count_int(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				int objXXXX = ptrNativeObject->count();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPointPath_end_ev_bool_CControlPoint(void *pObjectXXXX, _inout void* pos )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->end(*(EarthView::World::Spatial3D::CControlPoint*)pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CControlPointPath_endTime_ev_bool_ev_real64(void *pObjectXXXX, _inout ev_real64& time )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->endTime(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CControlPointPath_timeLength_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->timeLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointPath_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CControlPointPath_getControlPointMap_CControlPointMap(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CControlPointMap objXXXX = ptrNativeObject->getControlPointMap();
				EarthView::World::Spatial3D::CControlPointMap *pXXXX = new EarthView::World::Spatial3D::CControlPointMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointPath_toXml_void_EVString(void *pObjectXXXX, _in char* path )
			{
				EarthView::World::Core::ev_string path1 = path;
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ptrNativeObject->toXml(path1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointPath_setlocalCenter_void_CVector3(void *pObjectXXXX, _in const void* localCenter )
			{
				EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				ptrNativeObject->setlocalCenter(*(EarthView::World::Spatial::Math::CVector3*)localCenter);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CControlPointPath_getLocalCenter_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CControlPointPath* ptrNativeObject = (EarthView::World::Spatial3D::CControlPointPath*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getLocalCenter();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CControlPointPath_OperatorAssign_void_CControlPointPath(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Spatial3D::CControlPointPath& objXXXX = *((EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CControlPointPath*)rhs;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGeoInterpolation_interpolation_CGlobeControlPointMap_CGlobeControlPointMap(_in void* controlPoints )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap objXXXX = EarthView::World::Spatial3D::CGeoInterpolation::interpolation(*(EarthView::World::Spatial3D::CGlobeControlPointMap*)controlPoints);
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPointMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGeoInterpolation_calculateTangent_void_CVector3_CVector3_CVector3_CVector3(_in void* v1, _in void* v2, _inout void* tangent1, _inout void* tangent2 )
			{
				EarthView::World::Spatial3D::CGeoInterpolation::calculateTangent(*(EarthView::World::Spatial::Math::CVector3*)v1, *(EarthView::World::Spatial::Math::CVector3*)v2, *(EarthView::World::Spatial::Math::CVector3*)tangent1, *(EarthView::World::Spatial::Math::CVector3*)tangent2);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGeoInterpolation_getBezierCurve_CGlobeControlPointMap_CGlobeControlPoint_CGlobeControlPoint_CVector3_CVector3_ev_uint32(_in const void* pointA, _in const void* pointB, _in const void* controlPointA, _in const void* controlPointB, _in ev_uint32 smooth )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap objXXXX = EarthView::World::Spatial3D::CGeoInterpolation::getBezierCurve(*(EarthView::World::Spatial3D::CGlobeControlPoint*)pointA, *(EarthView::World::Spatial3D::CGlobeControlPoint*)pointB, *(EarthView::World::Spatial::Math::CVector3*)controlPointA, *(EarthView::World::Spatial::Math::CVector3*)controlPointB, smooth);
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPointMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGeoInterpolation_getBezierCurve_CGlobeControlPointMap_CGlobeControlPoint_CGlobeControlPoint_CVector3_CVector3(_in const void* pointA, _in const void* pointB, _in const void* controlPointA, _in const void* controlPointB )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap objXXXX = EarthView::World::Spatial3D::CGeoInterpolation::getBezierCurve(*(EarthView::World::Spatial3D::CGlobeControlPoint*)pointA, *(EarthView::World::Spatial3D::CGlobeControlPoint*)pointB, *(EarthView::World::Spatial::Math::CVector3*)controlPointA, *(EarthView::World::Spatial::Math::CVector3*)controlPointB);
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPointMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGeoInterpolation_bezierInterpolation_CGlobeControlPointMap_CGlobeControlPointMap(_in void* controlPoints )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap objXXXX = EarthView::World::Spatial3D::CGeoInterpolation::bezierInterpolation(*(EarthView::World::Spatial3D::CGlobeControlPointMap*)controlPoints);
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPointMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
