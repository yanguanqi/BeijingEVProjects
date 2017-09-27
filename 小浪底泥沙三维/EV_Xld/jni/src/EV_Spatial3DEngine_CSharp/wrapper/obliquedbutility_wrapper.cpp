/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquedbutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
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
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_EVID( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EVID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_EVID( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->EVID = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_EntityName( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EntityName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_EntityName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->EntityName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ObqFullFilePath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->ObqFullFilePath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ObqFullFilePath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->ObqFullFilePath = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Lon( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->Lon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Lon( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->Lon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Lat( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->Lat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Lat( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->Lat = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Alt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->Alt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Alt( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->Alt = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_WorldBounds( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->WorldBounds;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_WorldBounds( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->WorldBounds = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Instance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->Instance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_Instance( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->Instance = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ScaleX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->ScaleX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ScaleX( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->ScaleX = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ScaleY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->ScaleY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ScaleY( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->ScaleY = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ScaleZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->ScaleZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_ScaleZ( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->ScaleZ = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationW( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->OrientationW;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationW( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->OrientationW = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->OrientationX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationX( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->OrientationX = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->OrientationY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationY( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->OrientationY = value;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->OrientationZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQRecordInfo_OrientationZ( void *pObjectXXXX, Real  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)pObjectXXXX)->OrientationZ = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_push_back_void_OBQRecordInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_push_front_void_OBQRecordInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->push_front(*(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_pop_front_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->pop_front();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_front_OBQRecordInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_back_OBQRecordInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_at_OBQRecordInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_insert_void_ev_uint32_OBQRecordInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_OBQRecordInfoList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mVersion( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mVersion;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mVersion( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mVersion = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mSrs( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mSrs;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mSrs( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mSrs = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mLatitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLatitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mLatitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mLatitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mLongitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLongitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mLongitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mLongitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldScalex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldScalex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldScalex( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldScalex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldScaley( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldScaley;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldScaley( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldScaley = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldScalez( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldScalez;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldScalez( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldScalez = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRotx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldRotx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRotx( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldRotx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRoty( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldRoty;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRoty( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldRoty = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRotz( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldRotz;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRotz( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldRotz = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRotw( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mWorldRotw;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mWorldRotw( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mWorldRotw = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mXmin( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mXmin;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mXmin( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mXmin = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mXmax( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mXmax;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mXmax( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mXmax = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mYmin( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mYmin;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mYmin( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mYmin = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mYmax( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mYmax;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mYmax( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mYmax = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mZmin( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mZmin;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mZmin( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mZmin = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mZmax( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mZmax;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mZmax( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mZmax = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mDataType( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQDataType objXXXX = ptrNativeObject->mDataType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mDataType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mDataType = (EarthView::World::Spatial3D::ModelManager::OBQDataType)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mPosx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPosx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mPosx( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mPosx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mPosy( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPosy;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mPosy( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mPosy = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mPosz( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mPosz;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mPosz( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mPosz = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mScalex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mScalex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mScalex( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mScalex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mScaley( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mScaley;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mScaley( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mScaley = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mScalez( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mScalez;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mScalez( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mScalez = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRotw( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRotw;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRotw( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mRotw = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRotx( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRotx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRotx( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mRotx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRoty( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRoty;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRoty( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mRoty = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRotz( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRotz;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRotz( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mRotz = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mMaxLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->mMaxLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mMaxLevel( void *pObjectXXXX, ev_uint8  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mMaxLevel = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRecordList( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList &objXXXX = ptrNativeObject->mRecordList;
					EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQMetaInfo_mRecordList( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)pObjectXXXX)->mRecordList = *(EarthView::World::Spatial3D::ModelManager::OBQRecordInfoList*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mPointNumberPerSide( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mPointNumberPerSide;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mPointNumberPerSide( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mPointNumberPerSide = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mLevelCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->mLevelCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mLevelCount( void *pObjectXXXX, ev_uint8  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mLevelCount = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mDataType( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQDemType objXXXX = ptrNativeObject->mDataType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mDataType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mDataType = (EarthView::World::Spatial3D::ModelManager::OBQDemType)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mZeroTileWidth( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mZeroTileWidth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mZeroTileWidth( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mZeroTileWidth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartQuadLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->mStartQuadLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartQuadLevel( void *pObjectXXXX, ev_uint8  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mStartQuadLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mZeroLevelRowCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mZeroLevelRowCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mZeroLevelRowCount( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mZeroLevelRowCount = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mZeroLevelColCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mZeroLevelColCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mZeroLevelColCount( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mZeroLevelColCount = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mStartX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartX( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mStartX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mStartY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartY( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mStartY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mStartZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mStartZ( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mStartZ = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mEndX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mEndX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mEndX( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mEndX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mEndY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mEndY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mEndY( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mEndY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mEndZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mEndZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQDemMetaInfo_mEndZ( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)pObjectXXXX)->mEndZ = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mMetaInfo( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo &objXXXX = ptrNativeObject->mMetaInfo;
					EarthView::World::Spatial3D::ModelManager::OBQMetaInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mMetaInfo( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mMetaInfo = *(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mDemMetaInfo( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo &objXXXX = ptrNativeObject->mDemMetaInfo;
					EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mDemMetaInfo( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mDemMetaInfo = *(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mTopTileNames( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Core::CStringArray &objXXXX = ptrNativeObject->mTopTileNames;
					EarthView::World::Core::CStringArray *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mTopTileNames( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mTopTileNames = *(EarthView::World::Core::CStringArray*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mTopIndexVec( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector &objXXXX = ptrNativeObject->mTopIndexVec;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mTopIndexVec( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mTopIndexVec = *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mMapLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Core::IntPairVector &objXXXX = ptrNativeObject->mMapLevel;
					EarthView::World::Core::IntPairVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mMapLevel( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mMapLevel = *(EarthView::World::Core::IntPairVector*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mSharedMaterialStream( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr &objXXXX = ptrNativeObject->mSharedMaterialStream;
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mSharedMaterialStream( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mSharedMaterialStream = *(EarthView::World::Core::MemoryDataStreamPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_OBQInitData_mSharedTextureStreamVec( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::OBQInitData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::OBQInitData*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamVector &objXXXX = ptrNativeObject->mSharedTextureStreamVec;
					EarthView::World::Core::MemoryDataStreamVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_OBQInitData_mSharedTextureStreamVec( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::OBQInitData*)pObjectXXXX)->mSharedTextureStreamVec = *(EarthView::World::Core::MemoryDataStreamVector*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_insertMetaDataInfo_ev_bool_OBQMetaInfo(void *pObjectXXXX, _in const void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readMetaDataInfo_ev_bool_OBQMetaInfo(void *pObjectXXXX, _out void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_updateMetaDataInfo_ev_bool_OBQMetaInfo(void *pObjectXXXX, _in const void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_insertDemMetaDataInfo_ev_bool_OBQDemMetaInfo(void *pObjectXXXX, _in const void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertDemMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readDemMetaDataInfo_ev_bool_OBQDemMetaInfo(void *pObjectXXXX, _out void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readDemMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_updateDemMetaDataInfo_ev_bool_OBQDemMetaInfo(void *pObjectXXXX, _in const void* info )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateDemMetaDataInfo(*(EarthView::World::Spatial3D::ModelManager::OBQDemMetaInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_insertTileLod_ev_bool_EVString_LodIndex(void *pObjectXXXX, _in const char* tileName, _in EarthView::World::Spatial3D::ModelManager::LodIndex* pLodNode )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertTileLod(tileName1, pLodNode);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_updateTileLodBound_ev_bool_EVString_ev_uint32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in const char* tileName, _in ev_uint32 id, _in ev_real32 xmin, _in ev_real32 xmax, _in ev_real32 ymin, _in ev_real32 ymax, _in ev_real32 zmin, _in ev_real32 zmax )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateTileLodBound(tileName1, id, xmin, xmax, ymin, ymax, zmin, zmax);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_updateTileLodBound_ev_bool_EVString_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in const char* tileName, _in const char* meshName, _in ev_real32 xmin, _in ev_real32 xmax, _in ev_real32 ymin, _in ev_real32 ymax, _in ev_real32 zmin, _in ev_real32 zmax )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateTileLodBound(tileName1, meshName1, xmin, xmax, ymin, ymax, zmin, zmax);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readAllTileName_CStringArray(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->readAllTileName();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readAllTileNameAndTopTileLod_ev_bool_CStringArray_LodIndexVector(void *pObjectXXXX, _out void* tileNames, _out void* lodVec )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readAllTileNameAndTopTileLod(*(EarthView::World::Core::CStringArray*)tileNames, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)lodVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readTileLod_LodIndex_EVString(void *pObjectXXXX, _in const char* tileName )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->readTileLod(tileName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readChildLod_LodIndexVector_EVString_ev_uint32(void *pObjectXXXX, _in const char* tileName, _in ev_uint32 parentID )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector objXXXX = ptrNativeObject->readChildLod(tileName1, parentID);
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pXXXX = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readChildLod_LodIndexVector_EVString_EVString(void *pObjectXXXX, _in const char* tileName, _in const char* modelPath )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Core::ev_string modelPath1 = modelPath;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector objXXXX = ptrNativeObject->readChildLod(tileName1, modelPath1);
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pXXXX = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readLodByID_LodIndex_EVString_ev_uint32(void *pObjectXXXX, _in const char* tileName, _in ev_uint32 id )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->readLodByID(tileName1, id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_updateMetaDataInfo_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 altitude )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMetaDataInfo(altitude);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_insertAllTopLod_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertAllTopLod();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_createTopLodTable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createTopLodTable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_insertTopLod_ev_bool_EVString_LodIndex_ev_bool(void *pObjectXXXX, _in const char* tileName, _in EarthView::World::Spatial3D::ModelManager::LodIndex* pLodIndex, _in ev_bool haveTopTileIndexTab )
				{
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertTopLod(tileName1, pLodIndex, haveTopTileIndexTab);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readAllTopLod_LodIndexVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndexVector objXXXX = ptrNativeObject->readAllTopLod();
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pXXXX = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_dropAllLodTab_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->dropAllLodTab();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_insertLevelMap_ev_bool_IntPairVector(void *pObjectXXXX, _inout void* mapLevel )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insertLevelMap(*(EarthView::World::Core::IntPairVector*)mapLevel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_readLevelMap_ev_bool_IntPairVector(void *pObjectXXXX, _inout void* mapLevel )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readLevelMap(*(EarthView::World::Core::IntPairVector*)mapLevel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_getDBFile_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDBFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_getSqlDatabase_CSqlDatabase(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDatabase objXXXX = ptrNativeObject->getSqlDatabase();
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = new EarthView::World::Core::Database::CSqlDatabase(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_baseInfoToStream_ev_bool_OBQInitData_MemoryDataStreamPtr(_in const void* initData, _out void* stream )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::baseInfoToStream(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData, *(EarthView::World::Core::MemoryDataStreamPtr*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_streamToBaseInfo_ev_bool_MemoryDataStreamPtr_OBQInitData(_in const void* stream, _out void* initData )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::streamToBaseInfo(*(EarthView::World::Core::MemoryDataStreamPtr*)stream, *(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_obqPublishFileToInfo_ev_bool_EVString_ev_int32_CStringArray_CStringArray(_in const char* filePath, _out ev_int32& version, _out void* rootNames, _out void* modelNames )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::obqPublishFileToInfo(filePath1, version, *(EarthView::World::Core::CStringArray*)rootNames, *(EarthView::World::Core::CStringArray*)modelNames);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_obqPublishInfoToFile_ev_bool_EVString_ev_int32_CStringArray_CStringArray(_in const char* filePath, _in ev_int32 version, _in void* rootNames, _in void* modelNames )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					ev_bool objXXXX = EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::obqPublishInfoToFile(filePath1, version, *(EarthView::World::Core::CStringArray*)rootNames, *(EarthView::World::Core::CStringArray*)modelNames);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CObliqueDBUtility_setDataType_void_EVDataType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility*) pObjectXXXX;
					ptrNativeObject->setDataType((EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility::EVDataType)type);
				}
			}
		}
	}
}
