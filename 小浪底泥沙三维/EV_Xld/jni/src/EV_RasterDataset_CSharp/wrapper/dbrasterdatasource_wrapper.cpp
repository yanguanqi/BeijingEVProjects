/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/dbrasterdatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef EarthView::World::Spatial2D::Raster::CDBRasterDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial2D::Raster::CDBRasterDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback)(_in char*& name, _in void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback)();
				class CDBRasterDataSourceProxy : public EarthView::World::Spatial2D::Raster::CDBRasterDataSource
				{
				private:
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback;
				public:
					CDBRasterDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDBRasterDataSource(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource(EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::getName();
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::getType();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::getDatasetInfo(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::getDatasetInfos(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::getPropertySet();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::openDataset(name);
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback(pDataset);
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::closeDataset(pDataset);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::deleteDataset(name);
					}
					virtual EarthView::World::Spatial2D::Raster::CDBRasterDataset* createDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial2D::Raster::CDBRasterDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::createDataset(name);
					}
					virtual EarthView::World::Spatial2D::Raster::CDBRasterDataset* createDataset(_in const EVString& name, _in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial2D::Raster::CDBRasterDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback(name_Char, &stream);
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::createDataset(name, stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::toXML();
					}
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::Database::CSqlDatabase& returnValue = *(EarthView::World::Core::Database::CSqlDatabase*)m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::getDatabase();
					}
					virtual ev_bool IsEditing() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::IsEditing();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::createFeatureClass(name, geofield, fields);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataSource::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CDBRasterDataSourceProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfo(name1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(name1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfo(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getPropertySet();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getPropertySet();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::closeDataset(pDataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(pDataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::closeDataset(pDataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->createDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(void *pObjectXXXX, _in const char* name, _in void* stream )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name1, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->createDataset(name1, *(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createDataset_CDBRasterDataset_EVString_CDataStream_NoVirtual(void *pObjectXXXX, _in const char* name, _in void* stream )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::createDataset(name1, *(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatabase();
						EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->getDatabase();
						EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_getDatabase_CSqlDatabase_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::getDatabase();
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::IsEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->IsEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataSource_IsEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataSource::IsEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource_Callback* pCallback )
				{
					CDBRasterDataSourceProxy* ptr = dynamic_cast<CDBRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataSource_clone_IDataSource(pCallback);
					}
				}
			}
		}
	}
}
