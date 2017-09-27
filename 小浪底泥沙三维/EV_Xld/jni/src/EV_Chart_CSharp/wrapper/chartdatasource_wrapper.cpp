/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartdatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback)();
				class CChartDataSourceProxy : public EarthView::World::Spatial::GeoDataset::CChartDataSource
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback;
				public:
					CChartDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartDataSource(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString(EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32(EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool(EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString(EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource(EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CChartDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CChartDataSource::openDataset(name);
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback(pDataset);
							return returnValue;
						}
						else
							return this->CChartDataSource::closeDataset(pDataset);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDataSource::getDatasetInfo(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDataSource::getDatasetInfos(type);
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CChartDataSource::isValid();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartDataSource::getName();
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartDataSource::toXML();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback();
							return returnValue;
						}
						else
							return this->CChartDataSource::getPropertySet();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDataSource::createFeatureClass(name, geofield, fields);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CChartDataSource::deleteDataset(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CChartDataSource::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CChartDataSourceProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_updateDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::closeDataset(pDataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(pDataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::closeDataset(pDataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getDatasetInfo(name1);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getDatasetInfo(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					if (dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataSource* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource_Callback* pCallback )
				{
					CChartDataSourceProxy* ptr = dynamic_cast<CChartDataSourceProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataSource_clone_IDataSource(pCallback);
					}
				}
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback)();
				class CChartDatasetIteratorProxy : public EarthView::World::Spatial::GeoDataset::CChartDatasetIterator
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback;
				public:
					CChartDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartDatasetIterator(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset(EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDatasetIterator::next();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartDatasetIterator::getSize();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CChartDatasetIterator::getDatasetType();
					}
				};
				REGISTER_FACTORY_CLASS(CChartDatasetIteratorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDatasetIterator::next();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_Callback* pCallback )
				{
					CChartDatasetIteratorProxy* ptr = dynamic_cast<CChartDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDatasetIterator::next();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDatasetIterator::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_Callback* pCallback )
				{
					CChartDatasetIteratorProxy* ptr = dynamic_cast<CChartDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDatasetIterator::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<CChartDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDatasetIterator::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					CChartDatasetIteratorProxy* ptr = dynamic_cast<CChartDatasetIteratorProxy*>((EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartDatasetIterator_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDatasetIterator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDatasetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDatasetIterator::getDatasetType();
					return (int)objXXXX;
				}
				typedef EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback)();
				class CChartDataMetaInfoProxy : public EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback;
				public:
					CChartDataMetaInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartDataMetaInfo(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfo::getDatasetType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfo::getName();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfo::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfo::getSpatialReference();
					}
					virtual EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* getDetailDescriptionRef()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfo::getDetailDescriptionRef();
					}
				};
				REGISTER_FACTORY_CLASS(CChartDataMetaInfoProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_init_void_EVString_IEnvelope_ISpatialReference_CChartDatasetHeaderInfo(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::Geometry::IEnvelope* env, _in EarthView::World::Spatial::Geometry::ISpatialReference* srs, _in EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* info )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					ptrNativeObject->init(name1, env, srs, info);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					CChartDataMetaInfoProxy* ptr = dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_Callback* pCallback )
				{
					CChartDataMetaInfoProxy* ptr = dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CChartDataMetaInfoProxy* ptr = dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CChartDataMetaInfoProxy* ptr = dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getDetailDescriptionRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* objXXXX = ptrNativeObject->getDetailDescriptionRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_Callback* pCallback )
				{
					CChartDataMetaInfoProxy* ptr = dynamic_cast<CChartDataMetaInfoProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfo_getDetailDescriptionRef_CChartDatasetHeaderInfo_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo::getDetailDescriptionRef();
					return objXXXX;
				}
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* ref_info);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback)();
				class CChartDataMetaInfosProxy : public EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos
				{
				private:
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback;
				public:
					CChartDataMetaInfosProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartDataMetaInfos(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32(EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback = pCallback;
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfos::getCount();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback(index);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CChartDataMetaInfos::getInfo(index);
					}
					virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback(info);
							return returnValue;
						}
						else
							return this->CChartDataMetaInfos::add(info);
					}
					virtual ev_uint32 remove(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CChartDataMetaInfos::remove(index);
					}
					virtual ev_uint32 clear()
					{
						if(m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CChartDataMetaInfos::clear();
					}
				};
				REGISTER_FACTORY_CLASS(CChartDataMetaInfosProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_Callback* pCallback )
				{
					CChartDataMetaInfosProxy* ptr = dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::getInfo(index);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getInfo(index);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_Callback* pCallback )
				{
					CChartDataMetaInfosProxy* ptr = dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getInfo_IDataMetaInfo_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::getInfo(index);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::add(info);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->add(info);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_Callback* pCallback )
				{
					CChartDataMetaInfosProxy* ptr = dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_add_ev_uint32_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::add(info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::remove(index);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->remove(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CChartDataMetaInfosProxy* ptr = dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_remove_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					if (dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::clear();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->clear();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_Callback* pCallback )
				{
					CChartDataMetaInfosProxy* ptr = dynamic_cast<CChartDataMetaInfosProxy*>((EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_clear_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos::clear();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CChartDataMetaInfos_getDatasetNames_void_StringVector(void *pObjectXXXX, _inout void* namelist )
				{
					EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos*) pObjectXXXX;
					ptrNativeObject->getDatasetNames(*(EarthView::World::Core::StringVector*)namelist);
				}
			}
		}
	}
}
