/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlasxgdataset.h"
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
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditEvent_mpDataset( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->mpDataset;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditEvent_mpDataset( void *pObjectXXXX, EarthView::World::Spatial::GeoDataset::IDataset*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent*)pObjectXXXX)->mpDataset = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditEvent_mCacheID( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mCacheID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditEvent_mCacheID( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent*)pObjectXXXX)->mCacheID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditEvent_mRecordID( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mRecordID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditEvent_mRecordID( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditEvent*)pObjectXXXX)->mRecordID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_id( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->id;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_id( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->id = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_meshxfile( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->meshxfile;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_meshxfile( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->meshxfile = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_lat( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->lat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_lat( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->lat = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_lon( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->lon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_lon( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->lon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_alt( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->alt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_alt( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->alt = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_localScale( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->localScale;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_localScale( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->localScale = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_localOrientation( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->localOrientation;
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_localOrientation( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_mPropertyVal( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CPropertySet &objXXXX = ptrNativeObject->mPropertyVal;
					EarthView::World::Spatial::GeoDataset::CPropertySet *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_mPropertyVal( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->mPropertyVal = *(EarthView::World::Spatial::GeoDataset::CPropertySet*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_isInstance( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isInstance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingState_isInstance( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)pObjectXXXX)->isInstance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_push_ev_bool_ev_uint32_CEVLasxgEditingState(void *pObjectXXXX, _in const ev_uint32& key, _in void* val )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key, *(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_exist_ev_bool_ev_uint32(void *pObjectXXXX, _in const ev_uint32& key )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_OperatorIndex_CEVLasxgEditingState_ev_uint32(void *pObjXXXX, _in const ev_uint32& key )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState& objXXXX = objYYYY[key];
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_get_CEVLasxgEditingState_ev_uint32(void *pObjectXXXX, _in ev_uint32 key )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState& objXXXX = ptrNativeObject->get(key);
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_erase_void_ev_uint32(void *pObjectXXXX, _in const ev_uint32& key )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					ptrNativeObject->erase(key);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasxgEditingStateMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback)(_out void* initData);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback)(_in char*& filename, _in char*& tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& filename, _in char*& tileName, _out void* meshStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback)(_out void* info);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback)(_in ev_real64 altitude);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback)(_in const void* info);
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CEVLasXGDatasetProxy : public EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CEVLasXGDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLasXGDataset(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::getType();
					}
					virtual ev_int32 readInitData(_out EarthView::World::Spatial3D::ModelManager::OBQInitData& initData)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback(&initData);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::readInitData(initData);
					}
					virtual ev_int32 readTileData(_in const EVString& filename, _in const EVString& tileName, _in ev_uint32 lodID, _out EarthView::World::Spatial::MeshStream& meshStream, _out EarthView::World::Spatial3D::ModelManager::LodIndexVector& childIndexVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback != NULL && this->isCustomExtend())
						{
							char* filename_Char = filename.makeBuffer();
							char* tileName_Char = tileName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback(filename_Char, tileName_Char, lodID, &meshStream, &childIndexVec);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::readTileData(filename, tileName, lodID, meshStream, childIndexVec);
					}
					virtual ev_int32 readTileMeshData(_in const EVString& filename, _in const EVString& tileName, _out EarthView::World::Core::MemoryDataStreamPtr& meshStream)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* filename_Char = filename.makeBuffer();
							char* tileName_Char = tileName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(filename_Char, tileName_Char, &meshStream);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::readTileMeshData(filename, tileName, meshStream);
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::isEditing();
					}
					virtual ev_bool startEditing()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::startEditing();
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::stopEditing(isSave);
					}
					virtual ev_bool saveEditing()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::saveEditing();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::getDescription();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::getDataSourceRef();
					}
					virtual ev_bool readMetaDataInfo(_out EarthView::World::Spatial3D::ModelManager::OBQMetaInfo& info)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback(&info);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::readMetaDataInfo(info);
					}
					virtual ev_bool updateMetaDataInfo(_in ev_real64 altitude)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback(altitude);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::updateMetaDataInfo(altitude);
					}
					virtual ev_bool updateMetaDataInfo(_in const EarthView::World::Spatial3D::ModelManager::OBQMetaInfo& info)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback(&info);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::updateMetaDataInfo(info);
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::hasSubDataset();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::canEdit();
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CEVLasXGDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(CEVLasXGDatasetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getElevationMinMaxZ_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& elevationMinZ, _inout ev_real64& elevationMaxZ )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ptrNativeObject->getElevationMinMaxZ(elevationMinZ, elevationMaxZ);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData(void *pObjectXXXX, _out void* initData )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readInitData_ev_int32_OBQInitData_NoVirtual(void *pObjectXXXX, _out void* initData )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_NoVirtual(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _out void* meshStream )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _out void* meshStream )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_setRecordFeatureClass_void_IFeatureClass(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* fs )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ptrNativeObject->setRecordFeatureClass(fs);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getRecordFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getRecordFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::startEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::startEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::saveEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_saveEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset::saveEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_cancelEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->cancelEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_addObject_ev_bool_CEVLasxgEditingState(void *pObjectXXXX, _in const void* st )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addObject(*(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)st);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateObject_ev_bool_CEVLasxgEditingState(void *pObjectXXXX, _in const void* st )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateObject(*(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)st);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getObject_ev_bool_ev_uint32_CEVLasxgEditingState(void *pObjectXXXX, _in ev_uint32 id, _out void* st )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getObject(id, *(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)st);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_deleteObject_ev_bool_ev_uint32_CEVLasxgEditingState(void *pObjectXXXX, _in ev_uint32 id, _out void* st )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteObject(id, *(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)st);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getAddEditingStateMap_void_CEVLasxgEditingStateMap(void *pObjectXXXX, _out void* estm )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ptrNativeObject->getAddEditingStateMap(*(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingStateMap*)estm);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_findUpdateObject_ev_bool_ev_uint32_CEVLasxgEditingState(void *pObjectXXXX, _in ev_uint32 id, _out void* st )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->findUpdateObject(id, *(EarthView::World::Spatial3D::ModelManager::CEVLasxgEditingState*)st);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_findDeleteObject_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->findDeleteObject(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_readMetaDataInfo_ev_bool_OBQMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CEVLasXGDatasetProxy* ptr = dynamic_cast<CEVLasXGDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasXGDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasXGDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
