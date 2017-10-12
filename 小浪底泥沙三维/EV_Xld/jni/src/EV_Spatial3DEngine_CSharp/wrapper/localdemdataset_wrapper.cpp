/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/localdemdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CDemCacheReader_readTileInfo_ev_bool_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_CCoreTime(void *pObjectXXXX, _in const char* datasetname, _in const ev_int32 tilelevel, _in const ev_int32 tilerow, _in const ev_int32 tilecol, _out ev_bool& isLastest, _out void* updateTime, _out void* dateTime, _out void* downTime )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial3D::CDemCacheReader* ptrNativeObject = (EarthView::World::Spatial3D::CDemCacheReader*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->readTileInfo(datasetname1, tilelevel, tilerow, tilecol, isLastest, *(EarthView::World::Core::CCoreTime*)updateTime, *(EarthView::World::Core::CCoreTime*)dateTime, *(EarthView::World::Core::CCoreTime*)downTime);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CDemCacheReader_readTile_MemoryDataStreamPtr_EVString_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in const char* datasetname, _in const ev_int32 tilelevel, _in const ev_int32 tilerow, _in const ev_int32 tilecol, _in const ev_int32 tileType )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial3D::CDemCacheReader* ptrNativeObject = (EarthView::World::Spatial3D::CDemCacheReader*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->readTile(datasetname1, tilelevel, tilerow, tilecol, tileType);
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback)(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out void* serverresult);
			typedef const EarthView::World::Spatial::CEVDEMLayerInfo*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CLocalDemDatasetProxy : public EarthView::World::Spatial3D::CLocalDemDataset
			{
			private:
				EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CLocalDemDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CLocalDemDataset(pList)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo(EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType(EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString(EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString(EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_int32 getDEMFile(_in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out EarthView::World::Spatial::CMemoryStreamResult& serverresult)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback(level, row, col, &serverresult);
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getDEMFile(level, row, col, serverresult);
				}
				virtual const EarthView::World::Spatial::CEVDEMLayerInfo* getLayerInfoRef() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::CEVDEMLayerInfo* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getLayerInfoRef();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getDescription();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CLocalDemDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CLocalDemDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CLocalDemDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CLocalDemDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CLocalDemDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out void* serverresult )
			{
				EarthView::World::Spatial3D::CLocalDemDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataset::getDEMFile(level, row, col, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getDEMFile(level, row, col, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getDEMFile_ev_int32_ev_int32_ev_int32_ev_int32_CMemoryStreamResult_NoVirtual(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out void* serverresult )
			{
				EarthView::World::Spatial3D::CLocalDemDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataset::getDEMFile(level, row, col, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVDEMLayerInfo*  _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::CEVDEMLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataset::getLayerInfoRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::CEVDEMLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVDEMLayerInfo*  _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getLayerInfoRef_CEVDEMLayerInfo_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CEVDEMLayerInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataset::getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX;
				if (dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CLocalDemDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CLocalDemDataset* ptrNativeObject = (EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CLocalDemDataset::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CLocalDemDatasetProxy* ptr = dynamic_cast<CLocalDemDatasetProxy*>((EarthView::World::Spatial3D::CLocalDemDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CLocalDemDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
		}
	}
}
