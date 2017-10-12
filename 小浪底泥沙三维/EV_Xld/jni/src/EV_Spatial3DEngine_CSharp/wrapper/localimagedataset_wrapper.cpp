/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/localimagedataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CImageCacheReader_readTileByType_MemoryDataStreamPtr_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in int tilemode, _in const char* layerName, _in const ev_int32 tilelevel, _in const ev_int32 row, _in const ev_int32 col, _in const ev_int32 type )
			{
				EarthView::World::Core::ev_string layerName1 = layerName;
				EarthView::World::Spatial3D::CImageCacheReader* ptrNativeObject = (EarthView::World::Spatial3D::CImageCacheReader*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->readTileByType((EarthView::World::Spatial::EVTileModeType)tilemode, layerName1, tilelevel, row, col, type);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CImageCacheReader_readTile_MemoryDataStreamPtr_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in int tilemode, _in const char* layerPath, _in const ev_int32 tilelevel, _in const ev_int32 row, _in const ev_int32 col, _out ev_int32& type )
			{
				EarthView::World::Core::ev_string layerPath1 = layerPath;
				EarthView::World::Spatial3D::CImageCacheReader* ptrNativeObject = (EarthView::World::Spatial3D::CImageCacheReader*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->readTile((EarthView::World::Spatial::EVTileModeType)tilemode, layerPath1, tilelevel, row, col, type);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CImageCacheReader_readTile_ev_bool_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_MemoryDataStreamPtr(void *pObjectXXXX, _in int tilemode, _in const char* layerPath, _in const ev_int32 tilelevel, _in const ev_int32 row, _in const ev_int32 col, _out ev_int32& tileType, _out void* dataValue, _out void* property )
			{
				EarthView::World::Core::ev_string layerPath1 = layerPath;
				EarthView::World::Spatial3D::CImageCacheReader* ptrNativeObject = (EarthView::World::Spatial3D::CImageCacheReader*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->readTile((EarthView::World::Spatial::EVTileModeType)tilemode, layerPath1, tilelevel, row, col, tileType, *(EarthView::World::Core::MemoryDataStreamPtr*)dataValue, *(EarthView::World::Core::MemoryDataStreamPtr*)property);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CImageCacheReader_readTileInfo_ev_bool_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_MemoryDataStreamPtr(void *pObjectXXXX, _in int tilemode, _in const char* layerPath, _in const ev_int32 tilelevel, _in const ev_int32 row, _in const ev_int32 col, _out ev_bool& isLastest, _out void* updateTime, _out void* dateTime, _out void* property )
			{
				EarthView::World::Core::ev_string layerPath1 = layerPath;
				EarthView::World::Spatial3D::CImageCacheReader* ptrNativeObject = (EarthView::World::Spatial3D::CImageCacheReader*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->readTileInfo((EarthView::World::Spatial::EVTileModeType)tilemode, layerPath1, tilelevel, row, col, isLastest, *(EarthView::World::Core::CCoreTime*)updateTime, *(EarthView::World::Core::CCoreTime*)dateTime, *(EarthView::World::Core::MemoryDataStreamPtr*)property);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CImageCacheReader*  _stdcall EarthView_World_Spatial3D_CImageCacheReader_getSinglePtr_CImageCacheReader( )
			{
				EarthView::World::Spatial3D::CImageCacheReader* objXXXX = EarthView::World::Spatial3D::CImageCacheReader::getSinglePtr();
				return objXXXX;
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback)(_in char*& style, _in char*& format, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in ev_bool getoriginformat, _in ev_bool gettime, _out void* tileInfo);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback)(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in char*& fieldname, _out void* serverresult);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback)(_in ev_int32 level, _in ev_uint32 tilerow, _in ev_uint32 tilecol, _in ev_int32 x, _in ev_int32 y, _in char*& infoformat, _out void* serverresult);
			typedef const EarthView::World::Spatial::CWMTSServerInfo*  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback)(_inout char*& value);
			typedef const EarthView::World::Spatial::CEVWMTSLayerInfo*  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CLocalImageDatasetProxy : public EarthView::World::Spatial3D::CLocalImageDataset
			{
			private:
				EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CLocalImageDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CLocalImageDataset(pList)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType(EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString(EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString(EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 getTile(_in const EVString& style, _in const EVString& format, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in ev_bool getoriginformat, _in ev_bool gettime, _out EarthView::World::Spatial::CEVTileInfo& tileInfo)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback != NULL && this->isCustomExtend())
					{
						char* style_Char = style.makeBuffer();
						char* format_Char = format.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback(style_Char, format_Char, level, row, col, getoriginformat, gettime, &tileInfo);
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getTile(style, format, level, row, col, getoriginformat, gettime, tileInfo);
				}
				virtual ev_int32 getTileProperty(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const EVString& fieldname, _out EarthView::World::Spatial::CMemoryStreamResult& serverresult)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback != NULL && this->isCustomExtend())
					{
						char* fieldname_Char = fieldname.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback(level, row, col, fieldname_Char, &serverresult);
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getTileProperty(level, row, col, fieldname, serverresult);
				}
				virtual ev_int32 getFeatureInfo(_in ev_int32 level, _in ev_uint32 tilerow, _in ev_uint32 tilecol, _in ev_int32 x, _in ev_int32 y, _in const EVString& infoformat, _out EarthView::World::Spatial::CMemoryStreamResult& serverresult)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback != NULL && this->isCustomExtend())
					{
						char* infoformat_Char = infoformat.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback(level, tilerow, tilecol, x, y, infoformat_Char, &serverresult);
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getFeatureInfo(level, tilerow, tilecol, x, y, infoformat, serverresult);
				}
				virtual const EarthView::World::Spatial::CWMTSServerInfo* getOGCWMTSCapabilitiesRef()
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CWMTSServerInfo* returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getOGCWMTSCapabilitiesRef();
				}
				virtual ev_int32 getEVWMTSCapabilities(_inout EVString& value)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback(value_Char);
						value = value_Char;
						if(value_Char != NULL){ delete[] value_Char;value_Char = NULL;}
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getEVWMTSCapabilities(value);
				}
				virtual const EarthView::World::Spatial::CEVWMTSLayerInfo* getLayerInfoRef() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CEVWMTSLayerInfo* returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getLayerInfoRef();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::EVSSCCacheDataType getCacheDataType()
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::EVSSCCacheDataType returnValue = (EarthView::World::Spatial::EVSSCCacheDataType)m_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getCacheDataType();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getDescription();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CLocalImageDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CLocalImageDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalImageDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CLocalImageDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CLocalImageDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(void *pObjectXXXX, _in const char* style, _in const char* format, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in ev_bool getoriginformat, _in ev_bool gettime, _out void* tileInfo )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getTile(style1, format1, level, row, col, getoriginformat, gettime, *(EarthView::World::Spatial::CEVTileInfo*)tileInfo);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getTile(style1, format1, level, row, col, getoriginformat, gettime, *(EarthView::World::Spatial::CEVTileInfo*)tileInfo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo_NoVirtual(void *pObjectXXXX, _in const char* style, _in const char* format, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in ev_bool getoriginformat, _in ev_bool gettime, _out void* tileInfo )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getTile(style1, format1, level, row, col, getoriginformat, gettime, *(EarthView::World::Spatial::CEVTileInfo*)tileInfo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* fieldname, _out void* serverresult )
			{
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getTileProperty(level, row, col, fieldname1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getTileProperty(level, row, col, fieldname1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* fieldname, _out void* serverresult )
			{
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getTileProperty(level, row, col, fieldname1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 tilerow, _in ev_uint32 tilecol, _in ev_int32 x, _in ev_int32 y, _in const char* infoformat, _out void* serverresult )
			{
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getFeatureInfo(level, tilerow, tilecol, x, y, infoformat1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(level, tilerow, tilecol, x, y, infoformat1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 tilerow, _in ev_uint32 tilecol, _in ev_int32 x, _in ev_int32 y, _in const char* infoformat, _out void* serverresult )
			{
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getFeatureInfo(level, tilerow, tilecol, x, y, infoformat1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getOGCWMTSCapabilitiesRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getOGCWMTSCapabilitiesRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getOGCWMTSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getEVWMTSCapabilities(value1);
					value=value1.makeBuffer();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEVWMTSCapabilities(value1);
					value=value1.makeBuffer();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getEVWMTSCapabilities_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getEVWMTSCapabilities(value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMTSLayerInfo*  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CEVWMTSLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getLayerInfoRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CEVWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMTSLayerInfo*  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getLayerInfoRef_CEVWMTSLayerInfo_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWMTSLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getCacheDataType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->getCacheDataType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CLocalImageDataset_getCacheDataType_EVSSCCacheDataType_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CLocalImageDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalImageDataset::getCacheDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CLocalImageDatasetProxy* ptr = dynamic_cast<CLocalImageDatasetProxy*>((EarthView::World::Spatial3D::CLocalImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalImageDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
		}
	}
}
