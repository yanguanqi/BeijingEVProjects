/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/globeflypath.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_push_ev_bool_ev_int32_ev_real64(void *pObjectXXXX, _in const ev_int32& key, _in ev_real64& val )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_exist_ev_bool_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_OperatorIndex_ev_real64_ev_int32(void *pObjXXXX, _in const ev_int32& key )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap& objYYYY = *(EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				ev_real64& objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_get_ev_real64_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ev_real64& objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_erase_void_ev_int32(void *pObjectXXXX, _in const ev_int32& key )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CAngleDistanceMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CAngleDistanceMap* ptrNativeObject = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CTimeRatePair_mfirst( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRatePair* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePair*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mfirst;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTimeRatePair_mfirst( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CTimeRatePair*)pObjectXXXX)->mfirst = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CTimeRatePair_msecond( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRatePair* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePair*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->msecond;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CTimeRatePair_msecond( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CTimeRatePair*)pObjectXXXX)->msecond = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_push_back_void_CTimeRatePair(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::CTimeRatePair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_front_CTimeRatePair(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::CTimeRatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_back_CTimeRatePair(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::CTimeRatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_insert_void_ev_uint32_CTimeRatePair(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::CTimeRatePair*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_OperatorIndex_CTimeRatePair_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CTimeRatePairList& objYYYY = *(EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& objXXXX = objYYYY[n];
				EarthView::World::Spatial3D::CTimeRatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_at_CTimeRatePair_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Spatial3D::CTimeRatePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CTimeRatePairList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRatePairList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRatePairList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_push_back_void_ev_real64(void *pObjectXXXX, _in ev_real64& t )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Spatial3D_CTimeRateList_front_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ev_real64& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Spatial3D_CTimeRateList_back_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ev_real64& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_insert_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 pos, _in ev_real64& t )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CTimeRateList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Spatial3D_CTimeRateList_OperatorIndex_ev_real64_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CTimeRateList& objYYYY = *(EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_real64& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Spatial3D_CTimeRateList_at_ev_real64_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ev_real64& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CTimeRateList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CTimeRateList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CTimeRateList* ptrNativeObject = (EarthView::World::Spatial3D::CTimeRateList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mDstAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mDstAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mDstAltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mDstAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mAltitudeChanged( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mAltitudeChanged;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mAltitudeChanged( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mAltitudeChanged = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mobserveDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mobserveDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mobserveDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mobserveDistance = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mtilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->mtilt;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mtilt( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mtilt = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mspeed( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mspeed;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mspeed( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mspeed = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_misFile( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->misFile;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_misFile( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->misFile = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mismodelWithEffect( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mismodelWithEffect;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mismodelWithEffect( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mismodelWithEffect = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mmodelFile( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mmodelFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mmodelFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mmodelFile = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mdataSourceName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mdataSourceName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mdataSourceName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mdataSourceName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mentityDatasetName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mentityDatasetName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mentityDatasetName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mentityDatasetName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mentityName( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mentityName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mentityName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mentityName = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mentityId( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				int objXXXX = ptrNativeObject->mentityId;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mentityId( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mentityId = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mmodelChanged( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mmodelChanged;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mmodelChanged( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mmodelChanged = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mmodelScale( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mmodelScale;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mmodelScale( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mmodelScale = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mpreRotationX( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mpreRotationX;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mpreRotationX( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mpreRotationX = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mpreRotationY( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mpreRotationY;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mpreRotationY( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mpreRotationY = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mpreRotationZ( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mpreRotationZ;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mpreRotationZ( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mpreRotationZ = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mlineColor( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mlineColor;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mlineColor( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mlineColor = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mlineColorChanged( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mlineColorChanged;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mlineColorChanged( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mlineColorChanged = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mlockHeading( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mlockHeading;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mlockHeading( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mlockHeading = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mlockTilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mlockTilt;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mlockTilt( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mlockTilt = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mlockObserveDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mlockObserveDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mlockObserveDistance( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mlockObserveDistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mrenderRoute( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mrenderRoute;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mrenderRoute( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mrenderRoute = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_msmoothRoute( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->msmoothRoute;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_msmoothRoute( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->msmoothRoute = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_msmoothRouteChanged( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->msmoothRouteChanged;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_msmoothRouteChanged( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->msmoothRouteChanged = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mrenderModel( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mrenderModel;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mrenderModel( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mrenderModel = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mflyMode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EarthView::World::Spatial3D::FlyMode objXXXX = ptrNativeObject->mflyMode;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mflyMode( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mflyMode = (EarthView::World::Spatial3D::FlyMode)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_CFLyParam_mAltitudeMode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFLyParam* ptrNativeObject = (EarthView::World::Spatial3D::CFLyParam*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->mAltitudeMode;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFLyParam_mAltitudeMode( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Spatial3D::CFLyParam*)pObjectXXXX)->mAltitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_start_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 time )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->start(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_end_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->end();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getControlPointCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getControlPointCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_addControlPoint_void_CGlobeControlPoint(void *pObjectXXXX, _in const void* point )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->addControlPoint(*(EarthView::World::Spatial3D::CGlobeControlPoint*)point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_removeControlPoint_void_int(void *pObjectXXXX, _in int index )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->removeControlPoint(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getName_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_setLoopMode_void_ev_bool(void *pObjectXXXX, _in ev_bool loop )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->setLoopMode(loop);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getLoopMode_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLoopMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getRadious_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getRadious();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_setRadious_void_ev_real64(void *pObjectXXXX, _in ev_real64 radius )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->setRadious(radius);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_toXml_void_EVString(void *pObjectXXXX, _in const char* path )
			{
				EarthView::World::Core::ev_string path1 = path;
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->toXml(path1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_toXml_CXmlElement(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXml();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_fromXml_void_EVString(void *pObjectXXXX, _in char* path )
			{
				EarthView::World::Core::ev_string path1 = path;
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->fromXml(path1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_fromXml_void_CXmlElement(void *pObjectXXXX, _inout void* xmlElement )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->fromXml(*(EarthView::World::Core::CXmlElement*)xmlElement);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getFlyParam_CFLyParam(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam& objXXXX = ptrNativeObject->getFlyParam();
				EarthView::World::Spatial3D::CFLyParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getControlPoint_CGlobeControlPointMap(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap& objXXXX = ptrNativeObject->getControlPoint();
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getFlyControlPoint_CGlobeControlPointMap(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap& objXXXX = ptrNativeObject->getFlyControlPoint();
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getAngleDistance_CAngleDistanceMap(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CAngleDistanceMap objXXXX = ptrNativeObject->getAngleDistance();
				EarthView::World::Spatial3D::CAngleDistanceMap *pXXXX = new EarthView::World::Spatial3D::CAngleDistanceMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getRealAngleDistance_CAngleDistanceMap(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CAngleDistanceMap objXXXX = ptrNativeObject->getRealAngleDistance();
				EarthView::World::Spatial3D::CAngleDistanceMap *pXXXX = new EarthView::World::Spatial3D::CAngleDistanceMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getTimeRateList_CTimeRatePairList(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CTimeRatePairList objXXXX = ptrNativeObject->getTimeRateList();
				EarthView::World::Spatial3D::CTimeRatePairList *pXXXX = new EarthView::World::Spatial3D::CTimeRatePairList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_smoothRouteLine_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->smoothRouteLine();
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_needToSlowDown_bool_ev_real64(void *pObjectXXXX, _in ev_real64 timeRate )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->needToSlowDown(timeRate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_findCureControlPoint_ev_bool_int(void *pObjectXXXX, _in int number )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->findCureControlPoint(number);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_computeAngleDistance_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->computeAngleDistance();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_computeRealAngleDistance_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->computeRealAngleDistance();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getInterpolaterdControlPoint_CGlobeControlPoint_ev_real64(void *pObjectXXXX, _in ev_real64 time )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint objXXXX = ptrNativeObject->getInterpolaterdControlPoint(time);
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = new EarthView::World::Spatial3D::CGlobeControlPoint(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_ComputerHead_CRadian_CGlobeControlPoint_CGlobeControlPoint(void *pObjectXXXX, _in void* point1, _in void* point2 )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian objXXXX = ptrNativeObject->ComputerHead(*(EarthView::World::Spatial3D::CGlobeControlPoint*)point1, *(EarthView::World::Spatial3D::CGlobeControlPoint*)point2);
				EarthView::World::Spatial::Math::CRadian *pXXXX = new EarthView::World::Spatial::Math::CRadian(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getVelocity_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getVelocity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_setVelocity_void_ev_real64(void *pObjectXXXX, _in ev_real64 velocity )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ptrNativeObject->setVelocity(velocity);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CGlobeFlyPath_getAngleVelocity_ev_real64(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getAngleVelocity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mname( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mname;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mname( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mname = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mcontrolPoint( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap &objXXXX = ptrNativeObject->mcontrolPoint;
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mcontrolPoint( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mcontrolPoint = *(EarthView::World::Spatial3D::CGlobeControlPointMap*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mflyControlPoint( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap &objXXXX = ptrNativeObject->mflyControlPoint;
				EarthView::World::Spatial3D::CGlobeControlPointMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mflyControlPoint( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mflyControlPoint = *(EarthView::World::Spatial3D::CGlobeControlPointMap*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mLastControlPoint( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint &objXXXX = ptrNativeObject->mLastControlPoint;
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mLastControlPoint( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mLastControlPoint = *(EarthView::World::Spatial3D::CGlobeControlPoint*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mangleDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CAngleDistanceMap &objXXXX = ptrNativeObject->mangleDistance;
				EarthView::World::Spatial3D::CAngleDistanceMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mangleDistance( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mangleDistance = *(EarthView::World::Spatial3D::CAngleDistanceMap*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mrealAngleDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CAngleDistanceMap &objXXXX = ptrNativeObject->mrealAngleDistance;
				EarthView::World::Spatial3D::CAngleDistanceMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mrealAngleDistance( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mrealAngleDistance = *(EarthView::World::Spatial3D::CAngleDistanceMap*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mloopMode( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPath::LOOPMODE objXXXX = ptrNativeObject->mloopMode;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mloopMode( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mloopMode = (EarthView::World::Spatial3D::CGlobeFlyPath::LOOPMODE)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mbezierStartPostion( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mbezierStartPostion;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mbezierStartPostion( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mbezierStartPostion = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mbezierSmoothScale( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mbezierSmoothScale;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mbezierSmoothScale( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mbezierSmoothScale = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mangularVelocity( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mangularVelocity;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mangularVelocity( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mangularVelocity = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mradious( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mradious;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mradious( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mradious = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_misRun( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->misRun;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_misRun( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->misRun = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mstartTime( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mstartTime;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mstartTime( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mstartTime = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mflyParam( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam &objXXXX = ptrNativeObject->mflyParam;
				EarthView::World::Spatial3D::CFLyParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mflyParam( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mflyParam = *(EarthView::World::Spatial3D::CFLyParam*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mcontrolPointMap( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CControlPointMap &objXXXX = ptrNativeObject->mcontrolPointMap;
				EarthView::World::Spatial3D::CControlPointMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mcontrolPointMap( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mcontrolPointMap = *(EarthView::World::Spatial3D::CControlPointMap*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mtotalAngleDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mtotalAngleDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mtotalAngleDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mtotalAngleDistance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mrrealTotalAngleDistance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mrrealTotalAngleDistance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mrrealTotalAngleDistance( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mrrealTotalAngleDistance = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mtimeRateList( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CTimeRateList &objXXXX = ptrNativeObject->mtimeRateList;
				EarthView::World::Spatial3D::CTimeRateList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mtimeRateList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mtimeRateList = *(EarthView::World::Spatial3D::CTimeRateList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CGlobeFlyPath_mtimeRatePairList( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPath* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjectXXXX;
				EarthView::World::Spatial3D::CTimeRatePairList &objXXXX = ptrNativeObject->mtimeRatePairList;
				EarthView::World::Spatial3D::CTimeRatePairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CGlobeFlyPath_mtimeRatePairList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CGlobeFlyPath*)pObjectXXXX)->mtimeRatePairList = *(EarthView::World::Spatial3D::CTimeRatePairList*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeFlyPath*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathPtr_get_CGlobeFlyPath(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeFlyPathPtr* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathPtr*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPath* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathPtr_setGlobeFlyPath_void_CGlobeFlyPath(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeFlyPath* rep )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathPtr* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathPtr*) pObjectXXXX;
				ptrNativeObject->setGlobeFlyPath(rep);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathPtr_OperatorAssign_CGlobeFlyPathPtr_CGlobeFlyPathPtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = *((EarthView::World::Spatial3D::CGlobeFlyPathPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*)r;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_push_ev_bool_EVString_CGlobeFlyPathPtr(void *pObjectXXXX, _in const char* key, _in void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_OperatorIndex_CGlobeFlyPathPtr_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathMap& objYYYY = *(EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = objYYYY[key];
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_get_CGlobeFlyPathPtr_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = ptrNativeObject->get(key1);
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeFlyPathMap* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_push_back_void_CGlobeFlyPathPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::CGlobeFlyPathPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_front_CGlobeFlyPathPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_back_CGlobeFlyPathPtr(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_insert_void_ev_uint32_CGlobeFlyPathPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_OperatorIndex_CGlobeFlyPathPtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector& objYYYY = *(EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = objYYYY[n];
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_at_CGlobeFlyPathPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeFlyPathVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
