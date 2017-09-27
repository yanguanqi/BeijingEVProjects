/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/vectoroctreedatasource.h"
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
			namespace Dataset
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback)(_in char*& name, _in int geometryType, _in int layerType, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* layerInfoStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback)(_in char*& datasetName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback)();
				class CVectorOctreeDataSourceProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource
				{
				private:
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback;
				public:
					CVectorOctreeDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataSource(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::getName();
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::getPropertySet();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& datasetName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(datasetName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::getDatasetInfo(datasetName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::getDatasetInfos(type);
					}
					virtual ev_bool createDataset(_in EVString name, _in EarthView::World::Spatial::Geometry::EVGeometryType geometryType, _in EarthView::World::Spatial::Atlas::EVLayerType layerType, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const EarthView::World::Core::MemoryDataStreamPtr& layerInfoStream)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback(name_Char, (int)geometryType, (int)layerType, pEnv, sr, &layerInfoStream);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::createDataset(name, geometryType, layerType, pEnv, sr, layerInfoStream);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::openDataset(name);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::deleteDataset(name);
					}
					virtual ev_bool deleteDatasetInfo(_in EVString datasetName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* datasetName_Char = datasetName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback(datasetName_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::deleteDatasetInfo(datasetName);
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::closeDataset(dataset);
					}
					virtual EarthView::World::Core::Database::CSqlDatabase& getDatabase()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::Database::CSqlDatabase& returnValue = *(EarthView::World::Core::Database::CSqlDatabase*)m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::getDatabase();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::createFeatureClass(name, geofield, fields);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::toXML();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSource::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CVectorOctreeDataSourceProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getPropertySet();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getPropertySet();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfo(datasetName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(datasetName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfo(datasetName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(void *pObjectXXXX, _in char* name, _in int geometryType, _in int layerType, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* layerInfoStream )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::createDataset(name1, (EarthView::World::Spatial::Geometry::EVGeometryType)geometryType, (EarthView::World::Spatial::Atlas::EVLayerType)layerType, pEnv, sr, *(EarthView::World::Core::MemoryDataStreamPtr*)layerInfoStream);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createDataset(name1, (EarthView::World::Spatial::Geometry::EVGeometryType)geometryType, (EarthView::World::Spatial::Atlas::EVLayerType)layerType, pEnv, sr, *(EarthView::World::Core::MemoryDataStreamPtr*)layerInfoStream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createDataset_ev_bool_EVString_EVGeometryType_EVLayerType_IEnvelope_ISpatialReference_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in char* name, _in int geometryType, _in int layerType, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in const void* layerInfoStream )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::createDataset(name1, (EarthView::World::Spatial::Geometry::EVGeometryType)geometryType, (EarthView::World::Spatial::Atlas::EVLayerType)layerType, pEnv, sr, *(EarthView::World::Core::MemoryDataStreamPtr*)layerInfoStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString(void *pObjectXXXX, _in char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDatasetInfo(datasetName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDatasetInfo(datasetName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_deleteDatasetInfo_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::deleteDatasetInfo(datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::closeDataset(dataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::closeDataset(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isDatasetValid_ev_bool_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetValid(datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatabase();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_getDatabase_CSqlDatabase_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDatabase& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource::getDatabase();
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource_Callback* pCallback )
				{
					CVectorOctreeDataSourceProxy* ptr = dynamic_cast<CVectorOctreeDataSourceProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSource_clone_IDataSource(pCallback);
					}
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				class CVectorOctreeDataSourceFactoryProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory
				{
				private:
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback;
				public:
					CVectorOctreeDataSourceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataSourceFactory(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSourceFactory::openDataSource(path, fileName);
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSourceFactory::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in const EVString& path, _in const EVString& fileName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSourceFactory::createDataSource(path, fileName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* xml_Char = xml.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSourceFactory::createFromXML(xml);
					}
					virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
						}
						else
							return this->CVectorOctreeDataSourceFactory::destroyDataSource(pDataSource);
					}
					virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataSourceFactory::existDataSource(pDataSource);
					}
				};
				REGISTER_FACTORY_CLASS(CVectorOctreeDataSourceFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getSingletonPtr_CVectorOctreeDataSourceFactory( )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* objXXXX = EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_closeDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ds )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					ptrNativeObject->closeDataSource(ds);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::openDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::openDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::createDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory::createDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createFromXML_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_openDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_createDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_destroyDataSource_void_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
				{
					CVectorOctreeDataSourceFactoryProxy* ptr = dynamic_cast<CVectorOctreeDataSourceFactoryProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataSourceFactory_existDataSource_ev_bool_IDataSource(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnv);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback)(_in ev_uint32 version);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback)(_in ev_uint32 id);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback)(_inout void* objStream);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback)(_inout void* objStream);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback)();
				class CVectorOctreeDataMetaInfoProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo
				{
				private:
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback;
				public:
					CVectorOctreeDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataMetaInfo(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataMetaInfo::getDatasetType();
					}
					virtual void setDatasetType(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback((int)type);
						}
						else
							return this->CVectorOctreeDataMetaInfo::setDatasetType(type);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataMetaInfo::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CVectorOctreeDataMetaInfo::setName(name);
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataMetaInfo::getEnvelopeRef();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnv)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback(pEnv);
						}
						else
							return this->CVectorOctreeDataMetaInfo::setEnvelope(pEnv);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataMetaInfo::getSpatialReference();
					}
					virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback(sr);
						}
						else
							return this->CVectorOctreeDataMetaInfo::setSpatialReference(sr);
					}
					virtual void setVersion(_in ev_uint32 version)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback(version);
						}
						else
							return this->CVectorOctreeDataMetaInfo::setVersion(version);
					}
					virtual ev_uint32 getVersion()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataMetaInfo::getVersion();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataMetaInfo::getID();
					}
					virtual void setID(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback(id);
						}
						else
							return this->CVectorOctreeDataMetaInfo::setID(id);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& objStream)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback(&objStream);
						}
						else
							return this->CVectorOctreeDataMetaInfo::toStream(objStream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& objStream)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback(&objStream);
						}
						else
							return this->CVectorOctreeDataMetaInfo::fromStream(objStream);
					}
				};
				REGISTER_FACTORY_CLASS(CVectorOctreeDataMetaInfoProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					else
						ptrNativeObject->setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setDatasetType_void_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setEnvelope(pEnv);
					else
						ptrNativeObject->setEnvelope(pEnv);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnv )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setEnvelope(pEnv);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setSpatialReference(sr);
					else
						ptrNativeObject->setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setSpatialReference(sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 version )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setVersion(version);
					else
						ptrNativeObject->setVersion(version);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setVersion_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 version )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setVersion(version);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getVersion();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getVersion_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setID(id);
					else
						ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setID_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::setID(id);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setGeometryType_void_EVGeometryType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_getLayerType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getLayerType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_setLayerType_void_EVLayerType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->setLayerType((EarthView::World::Spatial::Atlas::EVLayerType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream(void *pObjectXXXX, _inout void* objStream )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::toStream(*(EarthView::World::Core::CDataStream*)objStream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* objStream )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::toStream(*(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* objStream )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::fromStream(*(EarthView::World::Core::CDataStream*)objStream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_Callback* pCallback )
				{
					CVectorOctreeDataMetaInfoProxy* ptr = dynamic_cast<CVectorOctreeDataMetaInfoProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataMetaInfo_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* objStream )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo::fromStream(*(EarthView::World::Core::CDataStream*)objStream);
				}
			}
		}
	}
}
