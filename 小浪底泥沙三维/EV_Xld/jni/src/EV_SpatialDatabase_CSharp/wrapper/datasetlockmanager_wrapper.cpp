/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/datasetlockmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CDatasetLockManager*  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_getSingleton_CDatasetLockManager( )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* objXXXX = EarthView::World::Spatial::GeoDataset::CDatasetLockManager::getSingleton();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_releaseSingleton_void( )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_lockDataset_ev_bool_CSqlDatabase_EVString(void *pObjectXXXX, _inout void* db, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->lockDataset(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_lockDataset_ev_bool_IFileDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->lockDataset(pDataSource, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_unlockDataset_ev_bool_CSqlDatabase_EVString(void *pObjectXXXX, _inout void* db, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->unlockDataset(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_unlockDataset_ev_bool_CSqlDatabase(void *pObjectXXXX, _inout void* db )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->unlockDataset(*(EarthView::World::Core::Database::CSqlDatabase*)db);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_unlockDataset_ev_bool_IFileDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->unlockDataset(pDataSource, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_breakDatasetLock_ev_bool_CSqlDatabase_EVString(void *pObjectXXXX, _inout void* db, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->breakDatasetLock(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_isDatasetLocked_ev_bool_CSqlDatabase_EVString(void *pObjectXXXX, _inout void* db, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetLocked(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_isDatasetLocked_ev_bool_IFileDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetLocked(pDataSource, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_isDatasetLockedBySelf_ev_bool_CSqlDatabase_EVString(void *pObjectXXXX, _inout void* db, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetLockedBySelf(*(EarthView::World::Core::Database::CSqlDatabase*)db, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_isDatasetLockedBySelf_ev_bool_IFileDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetLockedBySelf(pDataSource, datasetname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_queryAllLockInfo_CDatasetLockInfoVector_CSqlDatabase(void *pObjectXXXX, _inout void* db )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector objXXXX = ptrNativeObject->queryAllLockInfo(*(EarthView::World::Core::Database::CSqlDatabase*)db);
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pXXXX = new EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockManager_lockerName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatasetLockManager* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->lockerName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mDatasetName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mDatasetName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mDatasetName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjectXXXX)->mDatasetName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mGuid( void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mGuid;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mGuid( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjectXXXX)->mGuid = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mTypeName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mTypeName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mTypeName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjectXXXX)->mTypeName = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mEVID( void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mEVID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mEVID( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjectXXXX)->mEVID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mType;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_GeoDataset_CDatasetLockInfo_mType( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjectXXXX)->mType = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_push_back_void_CDatasetLockInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_front_CDatasetLockInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_back_CDatasetLockInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_at_CDatasetLockInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_insert_void_ev_uint32_CDatasetLockInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDatasetLockInfoVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
			}
		}
	}
}
