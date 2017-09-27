/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlasdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback)(_out void* initData);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback)(_in char*& filename, _in char*& tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& filename, _in char*& tileName, _out void* meshStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback)(_out void* info);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback)(_in ev_real64 altitude);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback)(_in const void* info);
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CEVLasDatasetProxy : public EarthView::World::Spatial3D::ModelManager::CEVLasDataset
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CEVLasDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLasDataset(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::getType();
					}
					virtual ev_int32 readInitData(_out EarthView::World::Spatial3D::ModelManager::OBQInitData& initData)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback(&initData);
							return returnValue;
						}
						else
							return this->CEVLasDataset::readInitData(initData);
					}
					virtual ev_int32 readTileData(_in const EVString& filename, _in const EVString& tileName, _in ev_uint32 lodID, _out EarthView::World::Spatial::MeshStream& meshStream, _out EarthView::World::Spatial3D::ModelManager::LodIndexVector& childIndexVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback != NULL && this->isCustomExtend())
						{
							char* filename_Char = filename.makeBuffer();
							char* tileName_Char = tileName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback(filename_Char, tileName_Char, lodID, &meshStream, &childIndexVec);
							return returnValue;
						}
						else
							return this->CEVLasDataset::readTileData(filename, tileName, lodID, meshStream, childIndexVec);
					}
					virtual ev_int32 readTileMeshData(_in const EVString& filename, _in const EVString& tileName, _out EarthView::World::Core::MemoryDataStreamPtr& meshStream)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* filename_Char = filename.makeBuffer();
							char* tileName_Char = tileName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(filename_Char, tileName_Char, &meshStream);
							return returnValue;
						}
						else
							return this->CEVLasDataset::readTileMeshData(filename, tileName, meshStream);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::getDescription();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::getDataSourceRef();
					}
					virtual ev_bool readMetaDataInfo(_out EarthView::World::Spatial3D::ModelManager::OBQMetaInfo& info)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback(&info);
							return returnValue;
						}
						else
							return this->CEVLasDataset::readMetaDataInfo(info);
					}
					virtual ev_bool updateMetaDataInfo(_in ev_real64 altitude)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback(altitude);
							return returnValue;
						}
						else
							return this->CEVLasDataset::updateMetaDataInfo(altitude);
					}
					virtual ev_bool updateMetaDataInfo(_in const EarthView::World::Spatial3D::ModelManager::OBQMetaInfo& info)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback(&info);
							return returnValue;
						}
						else
							return this->CEVLasDataset::updateMetaDataInfo(info);
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::hasSubDataset();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CEVLasDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CEVLasDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEVLasDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CEVLasDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(CEVLasDatasetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getElevationMinMaxZ_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& elevationMinZ, _inout ev_real64& elevationMaxZ )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					ptrNativeObject->getElevationMinMaxZ(elevationMinZ, elevationMaxZ);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData(void *pObjectXXXX, _out void* initData )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readInitData_ev_int32_OBQInitData_NoVirtual(void *pObjectXXXX, _out void* initData )
				{
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::readInitData(*(EarthView::World::Spatial3D::ModelManager::OBQInitData*)initData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileData_ev_int32_EVString_EVString_ev_uint32_MeshStream_LodIndexVector_NoVirtual(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _in ev_uint32 lodID, _out void* meshStream, _out void* childIndexVec )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::readTileData(filename1, tileName1, lodID, *(EarthView::World::Spatial::MeshStream*)meshStream, *(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)childIndexVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _out void* meshStream )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					if (dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readTileMeshData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* filename, _in const char* tileName, _out void* meshStream )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					EarthView::World::Core::ev_string tileName1 = tileName;
					EarthView::World::Spatial3D::ModelManager::CEVLasDataset* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CEVLasDataset::readTileMeshData(filename1, tileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)meshStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_readMetaDataInfo_ev_bool_OBQMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_updateMetaDataInfo_ev_bool_OBQMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CEVLasDatasetProxy* ptr = dynamic_cast<CEVLasDatasetProxy*>((EarthView::World::Spatial3D::ModelManager::CEVLasDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CEVLasDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
