/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/ogcspatialserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const char*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
			typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
			typedef char*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback)();
			class COGCSpatialServerProxy : public EarthView::World::Spatial::COGCSpatialServer
			{
			private:
				EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback* m_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback;
				EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback* m_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback;
				EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback* m_EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback;
				EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
				EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
				EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback;
				EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback* m_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback;
				EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback* m_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback;
			public:
				COGCSpatialServerProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCSpatialServer(pList)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString(EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString(EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString(EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString(EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool(EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool(EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_disConnect_void(EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getName_EVString(EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32(EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet(EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool(EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString(EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString(EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource(EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback = pCallback;
				}
				virtual const EVString getServerName() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getServerName();
				}
				virtual const EVString getServerAbstract() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getServerAbstract();
				}
				virtual const EVString getServerTitle() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getServerTitle();
				}
				virtual const EVString getServerUrl() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getServerUrl();
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::toXML();
				}
				virtual ev_bool isConnected()
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::isConnected();
				}
				virtual ev_bool reconnect()
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::reconnect();
				}
				virtual void disConnect()
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback();
					}
					else
						return this->COGCSpatialServer::disConnect();
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getName();
				}
				virtual ev_bool deleteDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COGCSpatialServer::deleteDataset(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getPropertySet();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::isValid();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getDatasetInfo(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->COGCSpatialServer::getDatasetInfos(type);
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->COGCSpatialServer::createFeatureClass(name, geofield, fields);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COGCSpatialServer::openDataset(name);
				}
				virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback(dataset);
						return returnValue;
					}
					else
						return this->COGCSpatialServer::closeDataset(dataset);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
				{
					if(m_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->COGCSpatialServer::clone();
				}
			};
			REGISTER_FACTORY_CLASS(COGCSpatialServerProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerName();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerAbstract();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerAbstract();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerAbstract_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerAbstract();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerTitle();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerTitle();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerTitle_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerTitle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerUrl();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerUrl();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_getServerUrl_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::getServerUrl();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_toXML_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::toXML();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_COGCSpatialServer_toXML_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::toXML();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::isConnected();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isConnected();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCSpatialServer_isConnected_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::isConnected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::reconnect();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->reconnect();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCSpatialServer_reconnect_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::reconnect();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCSpatialServer_disConnect_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				if (dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::disConnect();
				else
					ptrNativeObject->disConnect();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_disConnect_void( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_disConnect_void_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_disConnect_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCSpatialServer_disConnect_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::COGCSpatialServer* ptrNativeObject = (EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::COGCSpatialServer::disConnect();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getName_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getPropertySet_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_openDataset_IDataset_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_deleteDataset_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_closeDataset_ev_bool_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource_Callback* pCallback )
			{
				COGCSpatialServerProxy* ptr = dynamic_cast<COGCSpatialServerProxy*>((EarthView::World::Spatial::COGCSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCSpatialServer_clone_IDataSource(pCallback);
				}
			}
		}
	}
}
