/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/databasedatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback)();
				class CDatabaseDataSourceProxy : public EarthView::World::Spatial::GeoDataset::CDatabaseDataSource
				{
				private:
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback;
				public:
					CDatabaseDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDatabaseDataSource(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource(EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::getName();
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback();
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::getPropertySet();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::getDatasetInfo(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::getDatasetInfos(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::createFeatureClass(name, geofield, fields);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::openDataset(name);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::deleteDataset(name);
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::closeDataset(dataset);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::toXML();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CDatabaseDataSource::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CDatabaseDataSourceProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getdbType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getdbType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDriver_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDriver();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatabaseName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDatabaseName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getHostName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getHostName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPort_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getPort();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getUserName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getUserName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPassword_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPassword();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getConnectOptions_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getConnectOptions();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetAliasName_EVString_EVString(void *pObjectXXXX, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDatasetAliasName(datasetName1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetAliasName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 datasetID )
				{
					EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDatasetAliasName(datasetID);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getVersion_EVString_EVString(void *pObjectXXXX, _in const char* model_name )
				{
					EarthView::World::Core::ev_string model_name1 = model_name;
					EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getVersion(model_name1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource_Callback* pCallback )
				{
					CDatabaseDataSourceProxy* ptr = dynamic_cast<CDatabaseDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CDatabaseDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CDatabaseDataSource_clone_IDataSource(pCallback);
					}
				}
			}
		}
	}
}
