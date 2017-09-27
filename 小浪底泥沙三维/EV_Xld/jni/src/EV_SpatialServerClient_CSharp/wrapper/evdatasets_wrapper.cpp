/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evdatasets.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVWMTSDatasetProxy : public EarthView::World::Spatial::CEVWMTSDataset
			{
			private:
				EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVWMTSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMTSDataset(pList)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString(EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString(EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::getDescription();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVWMTSDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMTSDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getTile_ev_int32_EVString_EVString_ev_int32_ev_uint32_ev_uint32_ev_bool_ev_bool_CEVTileInfo(void *pObjectXXXX, _in const char* style, _in const char* format, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in ev_bool getoriginformat, _in ev_bool gettime, _out void* tileInfo )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTile(style1, format1, level, row, col, getoriginformat, gettime, *(EarthView::World::Spatial::CEVTileInfo*)tileInfo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getTileProperty_ev_int32_ev_int32_ev_uint32_ev_uint32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* fieldname, _out void* serverresult )
			{
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTileProperty(level, row, col, fieldname1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getFeatureInfo_ev_int32_ev_int32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 tilerow, _in ev_uint32 tilecol, _in ev_int32 x, _in ev_int32 y, _in const char* infoformat, _out void* serverresult )
			{
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(level, tilerow, tilecol, x, y, infoformat1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getOGCWMTSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getEVWMTSCapabilities_ev_int32_EVString(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEVWMTSCapabilities(value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getLayerInfoRef_CEVWMTSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				if (dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMTSDataset::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CEVWMTSDataset_getCacheDataType_EVSSCCacheDataType(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX;
				EarthView::World::Spatial::EVSSCCacheDataType objXXXX = ptrNativeObject->getCacheDataType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_getName_EVString_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMTSDatasetProxy* ptr = dynamic_cast<CEVWMTSDatasetProxy*>((EarthView::World::Spatial::CEVWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMTSDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVWFSDatasetProxy : public EarthView::World::Spatial::CEVWFSDataset
			{
			private:
				EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVWFSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWFSDataset(pList)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_getName_EVString(EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString(EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVWFSDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVWFSDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWFSDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVWFSDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWFSDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSDataset_getQueryAttribute_ev_int32_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(void *pObjectXXXX, _in const char* layer, _in const EarthView::World::Spatial::CServerSearchCondition* condition, _in ev_int32 startrecord, _in ev_int32 recordcount, _out void* recordset )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getQueryAttribute(layer1, condition, startrecord, recordcount, *(EarthView::World::Spatial::CServerSet*)recordset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSDataset_getLayerAttributeValue_ev_int32_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(void *pObjectXXXX, _in const char* querylayers, _in ev_uint32 featurecount, _in ev_real64 x, _in ev_real64 y, _in const char* fieldname, _out void* queryresult )
			{
				EarthView::World::Core::ev_string querylayers1 = querylayers;
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerAttributeValue(querylayers1, featurecount, x, y, fieldname1, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSDataset_getUniqueFieldValue_ev_int32_EVString_EVString_CServerQueryResults(void *pObjectXXXX, _in const char* querylayer, _in const char* fieldname, _out void* queryresult )
			{
				EarthView::World::Core::ev_string querylayer1 = querylayer;
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getUniqueFieldValue(querylayer1, fieldname1, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSDataset_getLayerFeature_ev_int32_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(void *pObjectXXXX, _in const char* layer, _in ev_bool hasgeometry, _in ev_bool hasattribute, _in const char* attributenames, _inout void* feature )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Core::ev_string attributenames1 = attributenames;
				EarthView::World::Spatial::CEVWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerFeature(layer1, hasgeometry, hasattribute, attributenames1, *(EarthView::World::Spatial::CEVWebFeature*)feature);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWFSDataset_getSearchGeometry_ev_int32_EVString_CServerSearchCondition_CGeometryList(void *pObjectXXXX, _in const char* layer, _in const EarthView::World::Spatial::CServerSearchCondition* condition, _out void* geometrylist )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSearchGeometry(layer1, condition, *(EarthView::World::Spatial::CGeometryList*)geometrylist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_getName_EVString_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWFSDatasetProxy* ptr = dynamic_cast<CEVWFSDatasetProxy*>((EarthView::World::Spatial::CEVWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWFSDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVWMSDatasetProxy : public EarthView::World::Spatial::CEVWMSDataset
			{
			private:
				EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVWMSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSDataset(pList)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_getName_EVString(EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString(EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::hasSubDataset();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::getDescription();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::getDataVersion();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVWMSDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVWMSDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVWMSDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSDataset_getMap_ev_int32_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVSSCImageType_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* layers, _in const char* styles, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in int format, _in ev_bool transparent, _in ev_int32 red, _in ev_int32 green, _in ev_int32 blue, _in const char* time, _in const char* elevation, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Core::ev_string time1 = time;
				EarthView::World::Core::ev_string elevation1 = elevation;
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMap(layers1, styles1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, (EarthView::World::Spatial::EVSSCImageType)format, transparent, red, green, blue, time1, elevation1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSDataset_getFeatureInfo_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_int32_ev_int32_EVString(void *pObjectXXXX, _in const char* layers, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 featurecount, _in ev_int32 x, _in ev_int32 y, _out char*& value )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(layers1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, featurecount, x, y, value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSDataset_getLayerLegend_ev_int32_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(void *pObjectXXXX, _in const char* layer, _in ev_uint32 legendwidth, _in ev_uint32 legendheight, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerLegend(layer1, legendwidth, legendheight, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSServerInfo*  _stdcall EarthView_World_Spatial_CEVWMSDataset_getOGCWMSCapabilitiesRef_CWMSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSServerInfo* objXXXX = ptrNativeObject->getOGCWMSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSDataset_getEVWMSCapabilities_ev_int32_EVString(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEVWMSCapabilities(value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMSDataset_isMapLayerDataset_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isMapLayerDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVWMSDataset_getLayerInfoRef_IDataMetaInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				if (dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSDataset::hasSubDataset();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasSubDataset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVWMSDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSDataset::hasSubDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVWMSDataset_getSubDatasetCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSubDatasetCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWMSDataset*  _stdcall EarthView_World_Spatial_CEVWMSDataset_openSubDataset_CEVWMSDataset_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				EarthView::World::Spatial::CEVWMSDataset* objXXXX = ptrNativeObject->openSubDataset(index);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWMSDataset*  _stdcall EarthView_World_Spatial_CEVWMSDataset_openSubDataset_CEVWMSDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				EarthView::World::Spatial::CEVWMSDataset* objXXXX = ptrNativeObject->openSubDataset(datasetname1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMSDataset*  _stdcall EarthView_World_Spatial_CEVWMSDataset_getParentDatasetRef_CEVWMSDataset(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWMSDataset* objXXXX = ptrNativeObject->getParentDatasetRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				if (dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVWMSDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVWMSDataset::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_getName_EVString_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSDatasetProxy* ptr = dynamic_cast<CEVWMSDatasetProxy*>((EarthView::World::Spatial::CEVWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVGeoCodeDatasetProxy : public EarthView::World::Spatial::CEVGeoCodeDataset
			{
			private:
				EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVGeoCodeDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeoCodeDataset(pList)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString(EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString(EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVGeoCodeDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeoCodeDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getGeoCodeFile_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* dataName, _out void* serverresult )
			{
				EarthView::World::Core::ev_string dataName1 = dataName;
				EarthView::World::Spatial::CEVGeoCodeDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getGeoCodeFile(dataName1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_queryPlacename_ev_int32_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(void *pObjectXXXX, _in const char* namefield, _in const char* keyword, _in ev_bool blurquery, _in ev_int32 limitcount, _out void* resultlist )
			{
				EarthView::World::Core::ev_string namefield1 = namefield;
				EarthView::World::Core::ev_string keyword1 = keyword;
				EarthView::World::Spatial::CEVGeoCodeDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->queryPlacename(namefield1, keyword1, blurquery, limitcount, *(EarthView::World::Spatial::CPlaceNameList*)resultlist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVGeoCodeLayerInfo*  _stdcall EarthView_World_Spatial_CEVGeoCodeDataset_getLayerInfoRef_CEVGeoCodeLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVGeoCodeDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVGeoCodeLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVGeoCodeDatasetProxy* ptr = dynamic_cast<CEVGeoCodeDatasetProxy*>((EarthView::World::Spatial::CEVGeoCodeDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeoCodeDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVDEMDatasetProxy : public EarthView::World::Spatial::CEVDEMDataset
			{
			private:
				EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVDEMDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVDEMDataset(pList)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_getName_EVString(EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString(EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::getDescription();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVDEMDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVDEMDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVDEMDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVDEMDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVDEMDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVDEMDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out void* serverresult )
			{
				EarthView::World::Spatial::CEVDEMDataset* ptrNativeObject = (EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDEMFile(level, row, col, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVDEMLayerInfo*  _stdcall EarthView_World_Spatial_CEVDEMDataset_getLayerInfoRef_CEVDEMLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMDataset* ptrNativeObject = (EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVDEMLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMDataset* ptrNativeObject = (EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX;
				if (dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVDEMDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVDEMDataset* ptrNativeObject = (EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVDEMDataset::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_getName_EVString_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVDEMDatasetProxy* ptr = dynamic_cast<CEVDEMDatasetProxy*>((EarthView::World::Spatial::CEVDEMDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVDEMDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVKMLDatasetProxy : public EarthView::World::Spatial::CEVKMLDataset
			{
			private:
				EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVKMLDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVKMLDataset(pList)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_getName_EVString(EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString(EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVKMLDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVKMLDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVKMLDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVKMLDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVKMLDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVKMLDataset_getKMLFile_ev_int32_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* dataName, _out void* serverresult )
			{
				EarthView::World::Core::ev_string dataName1 = dataName;
				EarthView::World::Spatial::CEVKMLDataset* ptrNativeObject = (EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getKMLFile(dataName1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVKMLLayerInfo*  _stdcall EarthView_World_Spatial_CEVKMLDataset_getLayerInfoRef_CEVKMLLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVKMLDataset* ptrNativeObject = (EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVKMLLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_getName_EVString_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVKMLDatasetProxy* ptr = dynamic_cast<CEVKMLDatasetProxy*>((EarthView::World::Spatial::CEVKMLDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVKMLDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef int  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class IWebOBQDatasetProxy : public EarthView::World::Spatial::IWebOBQDataset
			{
			private:
				EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback;
				EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback;
				EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				IWebOBQDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : IWebOBQDataset(pList)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString(EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType(EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getName_EVString(EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString(EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString(EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool(EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool(EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EVString getGUID()
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getGUID();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getDescription();
				}
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::readInitData(streamPackage);
				}
				virtual ev_int32 readTileData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::readTileData(url, streamPackage);
				}
				virtual ev_int32 readDem(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::readDem(url, streamPackage);
				}
				virtual ev_int32 readTileMeshData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::readTileMeshData(url, streamPackage);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getName();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->IWebOBQDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->IWebOBQDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(IWebOBQDatasetProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::getGUID();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getGUID();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_IWebOBQDataset_getGUID_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::getGUID();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::getDataVersion();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_IWebOBQDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::getDataVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_IWebOBQDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readInitData_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				if (dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_IWebOBQDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::IWebOBQDataset* ptrNativeObject = (EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::IWebOBQDataset::readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getName_EVString_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				IWebOBQDatasetProxy* ptr = dynamic_cast<IWebOBQDatasetProxy*>((EarthView::World::Spatial::IWebOBQDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IWebOBQDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef int  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWebSmart3DDatasetProxy : public EarthView::World::Spatial::CWebSmart3DDataset
			{
			private:
				EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWebSmart3DDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebSmart3DDataset(pList)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString(EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType(EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString(EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString(EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::readInitData(streamPackage);
				}
				virtual ev_int32 readTileData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::readTileData(url, streamPackage);
				}
				virtual ev_int32 readDem(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::readDem(url, streamPackage);
				}
				virtual ev_int32 readTileMeshData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::readTileMeshData(url, streamPackage);
				}
				virtual EVString getGUID()
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getGUID();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getDescription();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getName();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWebSmart3DDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWebSmart3DDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readInitData_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebSmart3DDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebSmart3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebSmart3DDataset::readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getGUID_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebSmart3DDatasetProxy* ptr = dynamic_cast<CWebSmart3DDatasetProxy*>((EarthView::World::Spatial::CWebSmart3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebSmart3DDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef int  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWebMeshXDatasetProxy : public EarthView::World::Spatial::CWebMeshXDataset
			{
			private:
				EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWebMeshXDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebMeshXDataset(pList)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString(EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType(EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString(EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString(EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::readInitData(streamPackage);
				}
				virtual ev_int32 readTileData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::readTileData(url, streamPackage);
				}
				virtual ev_int32 readDem(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::readDem(url, streamPackage);
				}
				virtual ev_int32 readTileMeshData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::readTileMeshData(url, streamPackage);
				}
				virtual EVString getGUID()
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getGUID();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getDescription();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getName();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWebMeshXDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWebMeshXDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readInitData_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXDataset::readTileMeshData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getGUID_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getName_EVString_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebMeshXDatasetProxy* ptr = dynamic_cast<CWebMeshXDatasetProxy*>((EarthView::World::Spatial::CWebMeshXDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback)(_in char*& servicename, _out void* metadata);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback)(_in char*& servicename, _out void* fields);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback)(_in char*& servicename, _in void* filter, _out void* featurevector);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef int  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWebMeshXGDatasetProxy : public EarthView::World::Spatial::CWebMeshXGDataset
			{
			private:
				EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWebMeshXGDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebMeshXGDataset(pList)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields(EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector(EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString(EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType(EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString(EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString(EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::readInitData(streamPackage);
				}
				virtual ev_int32 readTileData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::readTileData(url, streamPackage);
				}
				virtual ev_int32 readDem(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::readDem(url, streamPackage);
				}
				virtual ev_int32 getWFSMetaData(_in const EVString& servicename, _out EarthView::World::Spatial::GeoDataset::CDataMetaInfo& metadata)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback != NULL && this->isCustomExtend())
					{
						char* servicename_Char = servicename.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback(servicename_Char, &metadata);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getWFSMetaData(servicename, metadata);
				}
				virtual ev_int32 getFields(_in const EVString& servicename, _out EarthView::World::Spatial::GeoDataset::CFields& fields)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback != NULL && this->isCustomExtend())
					{
						char* servicename_Char = servicename.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback(servicename_Char, &fields);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getFields(servicename, fields);
				}
				virtual ev_int32 getFeatures(_in const EVString& servicename, _in EarthView::World::Spatial::GeoDataset::CQueryFilter& filter, _out EarthView::World::Spatial::Download::ModelFeatureVector& featurevector)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback != NULL && this->isCustomExtend())
					{
						char* servicename_Char = servicename.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback(servicename_Char, &filter, &featurevector);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getFeatures(servicename, filter, featurevector);
				}
				virtual EVString getGUID()
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getGUID();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getDescription();
				}
				virtual ev_int32 readTileMeshData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::readTileMeshData(url, streamPackage);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getName();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWebMeshXGDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWebMeshXGDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readInitData_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(void *pObjectXXXX, _in const char* servicename, _out void* metadata )
			{
				EarthView::World::Core::ev_string servicename1 = servicename;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::getWFSMetaData(servicename1, *(EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)metadata);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getWFSMetaData(servicename1, *(EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)metadata);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getWFSMetaData_ev_int32_EVString_CDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* metadata )
			{
				EarthView::World::Core::ev_string servicename1 = servicename;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::getWFSMetaData(servicename1, *(EarthView::World::Spatial::GeoDataset::CDataMetaInfo*)metadata);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields(void *pObjectXXXX, _in const char* servicename, _out void* fields )
			{
				EarthView::World::Core::ev_string servicename1 = servicename;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::getFields(servicename1, *(EarthView::World::Spatial::GeoDataset::CFields*)fields);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getFields(servicename1, *(EarthView::World::Spatial::GeoDataset::CFields*)fields);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getFields_ev_int32_EVString_CFields_NoVirtual(void *pObjectXXXX, _in const char* servicename, _out void* fields )
			{
				EarthView::World::Core::ev_string servicename1 = servicename;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::getFields(servicename1, *(EarthView::World::Spatial::GeoDataset::CFields*)fields);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector(void *pObjectXXXX, _in const char* servicename, _in void* filter, _out void* featurevector )
			{
				EarthView::World::Core::ev_string servicename1 = servicename;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				if (dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::getFeatures(servicename1, *(EarthView::World::Spatial::GeoDataset::CQueryFilter*)filter, *(EarthView::World::Spatial::Download::ModelFeatureVector*)featurevector);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getFeatures(servicename1, *(EarthView::World::Spatial::GeoDataset::CQueryFilter*)filter, *(EarthView::World::Spatial::Download::ModelFeatureVector*)featurevector);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebMeshXGDataset_getFeatures_ev_int32_EVString_CQueryFilter_ModelFeatureVector_NoVirtual(void *pObjectXXXX, _in const char* servicename, _in void* filter, _out void* featurevector )
			{
				EarthView::World::Core::ev_string servicename1 = servicename;
				EarthView::World::Spatial::CWebMeshXGDataset* ptrNativeObject = (EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebMeshXGDataset::getFeatures(servicename1, *(EarthView::World::Spatial::GeoDataset::CQueryFilter*)filter, *(EarthView::World::Spatial::Download::ModelFeatureVector*)featurevector);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getGUID_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebMeshXGDatasetProxy* ptr = dynamic_cast<CWebMeshXGDatasetProxy*>((EarthView::World::Spatial::CWebMeshXGDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebMeshXGDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback)(_in ev_int32 type, _out void* featurevector);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& url, _out void* streamPackage);
			typedef int  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWebLasDatasetProxy : public EarthView::World::Spatial::CWebLasDataset
			{
			private:
				EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback* m_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback;
				EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback* m_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback;
				EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWebLasDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebLasDataset(pList)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector(EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString(EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType(EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getName_EVString(EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString(EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool(EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool(EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 readInitData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->CWebLasDataset::readInitData(streamPackage);
				}
				virtual ev_int32 readTileData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebLasDataset::readTileData(url, streamPackage);
				}
				virtual ev_int32 readDem(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebLasDataset::readDem(url, streamPackage);
				}
				virtual ev_int32 getFeatures(_in ev_int32 type, _out EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback(type, &featurevector);
						return returnValue;
					}
					else
						return this->CWebLasDataset::getFeatures(type, featurevector);
				}
				virtual EVString getGUID()
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getGUID();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getDescription();
				}
				virtual ev_int32 readTileMeshData(_in const EVString& url, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* url_Char = url.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback(url_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebLasDataset::readTileMeshData(url, streamPackage);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getName();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWebLasDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWebLasDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebLasDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWebLasDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWebLasDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				if (dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_readInitData_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::readInitData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				if (dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_readTileData_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::readTileData(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				if (dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_readDem_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* url, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::readDem(url1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector(void *pObjectXXXX, _in ev_int32 type, _out void* featurevector )
			{
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				if (dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::getFeatures(type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getFeatures(type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebLasDataset_getFeatures_ev_int32_ev_int32_EVLasFeatureVector_NoVirtual(void *pObjectXXXX, _in ev_int32 type, _out void* featurevector )
			{
				EarthView::World::Spatial::CWebLasDataset* ptrNativeObject = (EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebLasDataset::getFeatures(type, *(EarthView::World::Spatial::Download::EVLasFeatureVector*)featurevector);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getGUID_EVString_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getGUID_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_readTileMeshData_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getName_EVString_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getDescription_EVString_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebLasDatasetProxy* ptr = dynamic_cast<CWebLasDatasetProxy*>((EarthView::World::Spatial::CWebLasDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebLasDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback)(_out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& nodecode, _out void* streamPackage);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback)(_in char*& nodecode, _out void* streamPackage);
			typedef int  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWebVector3DDatasetProxy : public EarthView::World::Spatial::CWebVector3DDataset
			{
			private:
				EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWebVector3DDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebVector3DDataset(pList)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr(EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType(EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString(EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString(EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 readMetaData(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::readMetaData(streamPackage);
				}
				virtual ev_int32 readLayerInfo(_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback(&streamPackage);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::readLayerInfo(streamPackage);
				}
				virtual ev_int32 readOctreeNodes(_in const EVString& nodecode, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* nodecode_Char = nodecode.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback(nodecode_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::readOctreeNodes(nodecode, streamPackage);
				}
				virtual ev_int32 readOctreeObjects(_in const EVString& nodecode, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* nodecode_Char = nodecode.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback(nodecode_Char, &streamPackage);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::readOctreeObjects(nodecode, streamPackage);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWebVector3DDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWebVector3DDatasetProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVVector3DMetaInfo*  _stdcall EarthView_World_Spatial_CWebVector3DDataset_getMetaInfoRef_CEVVector3DMetaInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVVector3DMetaInfo* objXXXX = ptrNativeObject->getMetaInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readMetaData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readMetaData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readMetaData_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readMetaData(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readLayerInfo(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readLayerInfo(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readLayerInfo_ev_int32_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _out void* streamPackage )
			{
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readLayerInfo(*(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* nodecode, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readOctreeNodes(nodecode1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readOctreeNodes(nodecode1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readOctreeNodes_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* nodecode, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readOctreeNodes(nodecode1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* nodecode, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				if (dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readOctreeObjects(nodecode1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->readOctreeObjects(nodecode1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWebVector3DDataset_readOctreeObjects_ev_int32_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* nodecode, _out void* streamPackage )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial::CWebVector3DDataset* ptrNativeObject = (EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebVector3DDataset::readOctreeObjects(nodecode1, *(EarthView::World::Core::MemoryDataStreamPtr*)streamPackage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_getName_EVString_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebVector3DDatasetProxy* ptr = dynamic_cast<CWebVector3DDatasetProxy*>((EarthView::World::Spatial::CWebVector3DDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebVector3DDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback)(_in ev_int32 entityid, _out void* entityObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback)(_in ev_int32 entityid, _out void* entityObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback)(_in ev_int32 entityid, _out void* meshObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback)(_in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback)(_in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback)(_in ev_int32 entityid, _out void* origTexture);
			typedef const EarthView::World::Spatial::CEVModelLayerInfo*  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback)(_in char*& datasetTableName);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback)(_in char*& datasetTableName);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback)(_in ev_int32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback)(_in ev_uint32 entID);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVBaseModelDatasetProxy : public EarthView::World::Spatial::CEVBaseModelDataset
			{
			private:
				EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVBaseModelDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVBaseModelDataset(pList)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo(EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString(EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString(EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32(EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32(EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString(EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString(EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 getEntityObject(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerEntityObject& entityObject)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback(entityid, &entityObject);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getEntityObject(entityid, entityObject);
				}
				virtual ev_int32 getTemplateEntityObject(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerTemplateEntityObject& entityObject)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback(entityid, &entityObject);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getTemplateEntityObject(entityid, entityObject);
				}
				virtual ev_int32 getMesh(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerMeshObject& meshObject)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback(entityid, &meshObject);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getMesh(entityid, meshObject);
				}
				virtual ev_int32 getResource(_in ev_int32 entityid, _in ev_bool needorigtexture, _out EarthView::World::Spatial::CServerResourceObject& resourceObject)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback(entityid, needorigtexture, &resourceObject);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getResource(entityid, needorigtexture, resourceObject);
				}
				virtual ev_int32 getResourceByID(_in ev_int32 entityid, _in ev_int32 resid, _out EarthView::World::Spatial::CServerResourceObject& resourceObject)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback(entityid, resid, &resourceObject);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getResourceByID(entityid, resid, resourceObject);
				}
				virtual ev_int32 getOrigTexture(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerOrigTexture& origTexture)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback(entityid, &origTexture);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getOrigTexture(entityid, origTexture);
				}
				virtual const EarthView::World::Spatial::CEVModelLayerInfo* getLayerInfoRef() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CEVModelLayerInfo* returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getLayerInfoRef();
				}
				virtual ev_uint32 getFeatureCount(_in const EVString& datasetTableName)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasetTableName_Char = datasetTableName.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback(datasetTableName_Char);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getFeatureCount(datasetTableName);
				}
				virtual ev_uint32 getAttrFeatureCount(_in const EVString& datasetTableName)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasetTableName_Char = datasetTableName.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback(datasetTableName_Char);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getAttrFeatureCount(datasetTableName);
				}
				virtual ev_uint32 getFeatureID(_in ev_int32 index)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getFeatureID(index);
				}
				virtual void clearFeature(_in ev_uint32 entID)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback(entID);
					}
					else
						return this->CEVBaseModelDataset::clearFeature(entID);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVBaseModelDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVBaseModelDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* meshObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* meshObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(void *pObjectXXXX, _in ev_int32 entityid, _out void* origTexture )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* origTexture )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVModelLayerInfo*  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getLayerInfoRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVModelLayerInfo*  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getLayerInfoRef_CEVModelLayerInfo_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getFeatureCount(datasetTableName1);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(datasetTableName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getFeatureCount_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getFeatureCount(datasetTableName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getAttrFeatureCount(datasetTableName1);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getAttrFeatureCount(datasetTableName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getAttrFeatureCount_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getAttrFeatureCount(datasetTableName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getFeatureID(index);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFeatureID(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_getFeatureID_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::getFeatureID(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 entID )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::clearFeature(entID);
				else
					ptrNativeObject->clearFeature(entID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVBaseModelDataset_clearFeature_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 entID )
			{
				EarthView::World::Spatial::CEVBaseModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVBaseModelDataset::clearFeature(entID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVBaseModelDatasetProxy* ptr = dynamic_cast<CEVBaseModelDatasetProxy*>((EarthView::World::Spatial::CEVBaseModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVBaseModelDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback)(_in ev_int32 entityid, _out void* entityObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback)(_in ev_int32 entityid, _out void* entityObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback)(_in ev_int32 entityid, _out void* meshObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback)(_in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback)(_in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback)(_in ev_int32 entityid, _out void* origTexture);
			typedef const EarthView::World::Spatial::CEVModelLayerInfo*  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback)(_in char*& datasetTableName);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback)(_in char*& datasetTableName);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback)(_in ev_int32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback)(_in ev_uint32 entID);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVModelDatasetProxy : public EarthView::World::Spatial::CEVModelDataset
			{
			private:
				EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* m_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback;
				EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* m_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback;
				EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* m_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback;
				EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* m_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback;
				EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* m_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback;
				EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* m_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback;
				EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* m_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback;
				EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVModelDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVModelDataset(pList)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo(EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString(EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString(EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32(EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32(EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getName_EVString(EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString(EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 getEntityObject(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerEntityObject& entityObject)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback(entityid, &entityObject);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getEntityObject(entityid, entityObject);
				}
				virtual ev_int32 getMesh(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerMeshObject& meshObject)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback(entityid, &meshObject);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getMesh(entityid, meshObject);
				}
				virtual ev_int32 getResource(_in ev_int32 entityid, _in ev_bool needorigtexture, _out EarthView::World::Spatial::CServerResourceObject& resourceObject)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback(entityid, needorigtexture, &resourceObject);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getResource(entityid, needorigtexture, resourceObject);
				}
				virtual ev_int32 getResourceByID(_in ev_int32 entityid, _in ev_int32 resid, _out EarthView::World::Spatial::CServerResourceObject& resourceObject)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback(entityid, resid, &resourceObject);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getResourceByID(entityid, resid, resourceObject);
				}
				virtual ev_int32 getOrigTexture(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerOrigTexture& origTexture)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback(entityid, &origTexture);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getOrigTexture(entityid, origTexture);
				}
				virtual const EarthView::World::Spatial::CEVModelLayerInfo* getLayerInfoRef() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CEVModelLayerInfo* returnValue = m_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getLayerInfoRef();
				}
				virtual ev_uint32 getFeatureCount(_in const EVString& datasetTableName)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasetTableName_Char = datasetTableName.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback(datasetTableName_Char);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getFeatureCount(datasetTableName);
				}
				virtual ev_uint32 getAttrFeatureCount(_in const EVString& datasetTableName)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasetTableName_Char = datasetTableName.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback(datasetTableName_Char);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getAttrFeatureCount(datasetTableName);
				}
				virtual ev_uint32 getFeatureID(_in ev_int32 index)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getFeatureID(index);
				}
				virtual void clearFeature(_in ev_uint32 entID)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback(entID);
					}
					else
						return this->CEVModelDataset::clearFeature(entID);
				}
				virtual ev_int32 getTemplateEntityObject(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerTemplateEntityObject& entityObject)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback(entityid, &entityObject);
						return returnValue;
					}
					else
						return this->CEVModelDataset::getTemplateEntityObject(entityid, entityObject);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVModelDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVModelDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVModelDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVModelDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* meshObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* meshObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getMesh(entityid, *(EarthView::World::Spatial::CServerMeshObject*)meshObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(void *pObjectXXXX, _in ev_int32 entityid, _out void* origTexture )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* origTexture )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getOrigTexture(entityid, *(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVModelLayerInfo*  _stdcall EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getLayerInfoRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVModelLayerInfo*  _stdcall EarthView_World_Spatial_CEVModelDataset_getLayerInfoRef_CEVModelLayerInfo_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVModelLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getFeatureCount(datasetTableName1);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(datasetTableName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelDataset_getFeatureCount_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getFeatureCount(datasetTableName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getAttrFeatureCount(datasetTableName1);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getAttrFeatureCount(datasetTableName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelDataset_getAttrFeatureCount_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getAttrFeatureCount(datasetTableName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getFeatureID(index);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFeatureID(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelDataset_getFeatureID_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::getFeatureID(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 entID )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::clearFeature(entID);
				else
					ptrNativeObject->clearFeature(entID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVModelDataset_clearFeature_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 entID )
			{
				EarthView::World::Spatial::CEVModelDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVModelDataset::clearFeature(entID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getName_EVString_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVModelDatasetProxy* ptr = dynamic_cast<CEVModelDatasetProxy*>((EarthView::World::Spatial::CEVModelDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback)(_in ev_int32 entityid, _out void* entityObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback)(_in ev_int32 entityid, _out void* entityObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback)(_in ev_int32 entityid, _out void* meshObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback)(_in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback)(_in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback)(_in ev_int32 entityid, _out void* origTexture);
			typedef const EarthView::World::Spatial::CEVModelLayerInfo*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback)(_in char*& datasetTableName);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback)(_in char*& datasetTableName);
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback)(_in ev_int32 index);
			typedef void  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback)(_in ev_uint32 entID);
			typedef int  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVModelTemplateDatasetProxy : public EarthView::World::Spatial::CEVModelTemplateDataset
			{
			private:
				EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVModelTemplateDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVModelTemplateDataset(pList)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo(EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString(EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString(EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32(EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32(EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString(EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString(EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_uint32 getFeatureCount(_in const EVString& datasetTableName)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasetTableName_Char = datasetTableName.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback(datasetTableName_Char);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getFeatureCount(datasetTableName);
				}
				virtual ev_int32 getTemplateEntityObject(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerTemplateEntityObject& entityObject)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback(entityid, &entityObject);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getTemplateEntityObject(entityid, entityObject);
				}
				virtual ev_int32 getResourceByID(_in ev_int32 entityid, _in ev_int32 resid, _out EarthView::World::Spatial::CServerResourceObject& resourceObject)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback(entityid, resid, &resourceObject);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getResourceByID(entityid, resid, resourceObject);
				}
				virtual ev_int32 getEntityObject(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerEntityObject& entityObject)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback(entityid, &entityObject);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getEntityObject(entityid, entityObject);
				}
				virtual ev_int32 getMesh(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerMeshObject& meshObject)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback(entityid, &meshObject);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getMesh(entityid, meshObject);
				}
				virtual ev_int32 getResource(_in ev_int32 entityid, _in ev_bool needorigtexture, _out EarthView::World::Spatial::CServerResourceObject& resourceObject)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback(entityid, needorigtexture, &resourceObject);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getResource(entityid, needorigtexture, resourceObject);
				}
				virtual ev_int32 getOrigTexture(_in ev_int32 entityid, _out EarthView::World::Spatial::CServerOrigTexture& origTexture)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback(entityid, &origTexture);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getOrigTexture(entityid, origTexture);
				}
				virtual const EarthView::World::Spatial::CEVModelLayerInfo* getLayerInfoRef() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CEVModelLayerInfo* returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getLayerInfoRef();
				}
				virtual ev_uint32 getAttrFeatureCount(_in const EVString& datasetTableName)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* datasetTableName_Char = datasetTableName.makeBuffer();
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback(datasetTableName_Char);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getAttrFeatureCount(datasetTableName);
				}
				virtual ev_uint32 getFeatureID(_in ev_int32 index)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback(index);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getFeatureID(index);
				}
				virtual void clearFeature(_in ev_uint32 entID)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback(entID);
					}
					else
						return this->CEVModelTemplateDataset::clearFeature(entID);
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVModelTemplateDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVModelTemplateDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVModelTemplateDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateDataset::getFeatureCount(datasetTableName1);
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(datasetTableName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureCount_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetTableName )
			{
				EarthView::World::Core::ev_string datasetTableName1 = datasetTableName;
				EarthView::World::Spatial::CEVModelTemplateDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateDataset::getFeatureCount(datasetTableName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVModelTemplateDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateDataset::getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
			{
				EarthView::World::Spatial::CEVModelTemplateDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateDataset::getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVModelTemplateDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX;
				if (dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateDataset::getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVModelTemplateDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject_NoVirtual(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
			{
				EarthView::World::Spatial::CEVModelTemplateDataset* ptrNativeObject = (EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVModelTemplateDataset::getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getMesh_ev_int32_ev_int32_CServerMeshObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getOrigTexture_ev_int32_ev_int32_CServerOrigTexture(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getLayerInfoRef_CEVModelLayerInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getAttrFeatureCount_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getFeatureID_ev_uint32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_clearFeature_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVModelTemplateDatasetProxy* ptr = dynamic_cast<CEVModelTemplateDatasetProxy*>((EarthView::World::Spatial::CEVModelTemplateDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVModelTemplateDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVWMSChartDatasetProxy : public EarthView::World::Spatial::CEVWMSChartDataset
			{
			private:
				EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVWMSChartDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSChartDataset(pList)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString(EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString(EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVWMSChartDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSChartDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getChart_ev_int32_EVString_EVString_EVString_EVString_ev_int32_ev_int32_EVString_EVString_EVString_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* layer, _in const char* srs, _in const char* bBox, _in const char* format, _in ev_int32 width, _in ev_int32 height, _in const char* displayMode, _in const char* colorMode, _in const char* symbolMode, _in const char* isobath, _in const char* annotationMode, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Core::ev_string srs1 = srs;
				EarthView::World::Core::ev_string bBox1 = bBox;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Core::ev_string displayMode1 = displayMode;
				EarthView::World::Core::ev_string colorMode1 = colorMode;
				EarthView::World::Core::ev_string symbolMode1 = symbolMode;
				EarthView::World::Core::ev_string isobath1 = isobath;
				EarthView::World::Core::ev_string annotationMode1 = annotationMode;
				EarthView::World::Spatial::CEVWMSChartDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getChart(layer1, srs1, bBox1, format1, width, height, displayMode1, colorMode1, symbolMode1, isobath1, annotationMode1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMSChartObjectInfo*  _stdcall EarthView_World_Spatial_CEVWMSChartDataset_getLayerInfoRef_CEVWMSChartObjectInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSChartDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWMSChartObjectInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSChartDatasetProxy* ptr = dynamic_cast<CEVWMSChartDatasetProxy*>((EarthView::World::Spatial::CEVWMSChartDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSChartDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVWMSImageDatasetProxy : public EarthView::World::Spatial::CEVWMSImageDataset
			{
			private:
				EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVWMSImageDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVWMSImageDataset(pList)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString(EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString(EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVWMSImageDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVWMSImageDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getWMSImage_ev_int32_EVString_EVString_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in char* imageName, _in char* bBOX, _in ev_int32 width, _in ev_int32 height, _in char* SRS, _in char* format, _out void* serverresult )
			{
				EarthView::World::Core::ev_string imageName1 = imageName;
				EarthView::World::Core::ev_string bBOX1 = bBOX;
				EarthView::World::Core::ev_string SRS1 = SRS;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CEVWMSImageDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getWMSImage(imageName1, bBOX1, width, height, SRS1, format1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVWMSImageInfo*  _stdcall EarthView_World_Spatial_CEVWMSImageDataset_getLayerInfoRef_CEVWMSImageInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVWMSImageDataset* ptrNativeObject = (EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVWMSImageInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVWMSImageDatasetProxy* ptr = dynamic_cast<CEVWMSImageDatasetProxy*>((EarthView::World::Spatial::CEVWMSImageDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVWMSImageDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CEVGeometryDatasetProxy : public EarthView::World::Spatial::CEVGeometryDataset
			{
			private:
				EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CEVGeometryDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVGeometryDataset(pList)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType(EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString(EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString(EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString(EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CEVGeometryDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CEVGeometryDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_buffer_ev_int32_CGeometryList_ev_real64_ev_bool_CGeometryList(void *pObjectXXXX, _in void* geometrylist, _in ev_real64 distance, _in ev_bool isunion, _out void* result_geometrylist )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->buffer(*(EarthView::World::Spatial::CGeometryList*)geometrylist, distance, isunion, *(EarthView::World::Spatial::CGeometryList*)result_geometrylist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_contains_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->contains(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_crosses_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->crosses(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_disjoint_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->disjoint(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_distance_ev_int32_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_real64& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->distance(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_intersects_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->intersects(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_overlaps_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->overlaps(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_touches_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->touches(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVGeometryDataset_within_ev_int32_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Spatial::CEVGeometryDataset* ptrNativeObject = (EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->within(geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_getName_EVString_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CEVGeometryDatasetProxy* ptr = dynamic_cast<CEVGeometryDatasetProxy*>((EarthView::World::Spatial::CEVGeometryDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVGeometryDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CMultiMedaServiceDatasetProxy : public EarthView::World::Spatial::CMultiMedaServiceDataset
			{
			private:
				EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CMultiMedaServiceDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CMultiMedaServiceDataset(pList)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType(EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString(EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString(EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString(EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CMultiMedaServiceDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CMultiMedaServiceDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getMediaFileLength_ev_int32_EVString_EVString_ev_int64(void *pObjectXXXX, _in const char* flename, _in const char* filetype, _inout ev_int64& fileLength )
			{
				EarthView::World::Core::ev_string flename1 = flename;
				EarthView::World::Core::ev_string filetype1 = filetype;
				EarthView::World::Spatial::CMultiMedaServiceDataset* ptrNativeObject = (EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMediaFileLength(flename1, filetype1, fileLength);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getMediaFile_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* flename, _in const char* filetype, _in void* fileData )
			{
				EarthView::World::Core::ev_string flename1 = flename;
				EarthView::World::Core::ev_string filetype1 = filetype;
				EarthView::World::Spatial::CMultiMedaServiceDataset* ptrNativeObject = (EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMediaFile(flename1, filetype1, *(EarthView::World::Core::MemoryDataStreamPtr*)fileData);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CMultiMedaServiceDataset_getMediaFileByOffset_ev_int32_EVString_EVString_ev_int64_ev_int64_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* flename, _in const char* filetype, _in ev_int64 offset, _in ev_int64 length, _in void* fileData )
			{
				EarthView::World::Core::ev_string flename1 = flename;
				EarthView::World::Core::ev_string filetype1 = filetype;
				EarthView::World::Spatial::CMultiMedaServiceDataset* ptrNativeObject = (EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMediaFileByOffset(flename1, filetype1, offset, length, *(EarthView::World::Core::MemoryDataStreamPtr*)fileData);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CMultiMedaServiceDatasetProxy* ptr = dynamic_cast<CMultiMedaServiceDatasetProxy*>((EarthView::World::Spatial::CMultiMedaServiceDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMultiMedaServiceDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
		}
	}
}
