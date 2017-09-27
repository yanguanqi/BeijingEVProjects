/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/evspatialserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
			typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
			typedef char*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback)();
			class CEVSpatialServerProxy : public EarthView::World::Spatial::CEVSpatialServer
			{
			private:
				EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback* m_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback;
				EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback* m_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback;
				EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback* m_EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback;
				EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
				EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
				EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback;
				EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback* m_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback;
				EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback* m_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback;
			public:
				CEVSpatialServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVSpatialServer(pList)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_disConnect_void(EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getName_EVString(EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32(EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback = pCallback;
				}
				virtual ev_bool isConnected()
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::isConnected();
				}
				virtual ev_bool reconnect()
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::reconnect();
				}
				virtual void disConnect()
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback();
					}
					else
						return this->CEVSpatialServer::disConnect();
				}
				virtual const EVString getServerName() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getServerName();
				}
				virtual const EVString getServerAbstract() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getServerAbstract();
				}
				virtual const EVString getServerTitle() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getServerTitle();
				}
				virtual const EVString getServerUrl() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getServerUrl();
				}
				virtual const EVString getServicePluginFile() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getServicePluginFile();
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getPropertySet();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::isValid();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getDatasetInfo(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getDatasetInfos(type);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CEVSpatialServer::openDataset(name);
				}
				virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback(dataset);
						return returnValue;
					}
					else
						return this->CEVSpatialServer::closeDataset(dataset);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::toXML();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVSpatialServer::clone();
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CEVSpatialServer::getName();
				}
				virtual ev_bool deleteDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CEVSpatialServer::deleteDataset(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if(m_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CEVSpatialServer::createFeatureClass(name, geofield, fields);
				}
			};
			REGISTER_FACTORY_CLASS(CEVSpatialServerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_currentConnectStatus_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->currentConnectStatus();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::isConnected();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isConnected();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_isConnected_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::isConnected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::reconnect();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->reconnect();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_reconnect_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::reconnect();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVSpatialServer_disConnect_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::disConnect();
				else
					ptrNativeObject->disConnect();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_disConnect_void( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_disConnect_void_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_disConnect_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVSpatialServer_disConnect_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::disConnect();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerName();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerAbstract();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerAbstract();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerAbstract_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerAbstract();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerTitle();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerTitle();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerTitle_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerTitle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerUrl();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerUrl();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServerUrl_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServerUrl();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServicePluginFile();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServicePluginFile();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServicePluginFile_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getServicePluginFile();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getPropertySet();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getPropertySet();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfo(name1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfo(name1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_EVDatasetType(void *pObjectXXXX, _in char* name, _in int type )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(name1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::openDataset(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::openDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::closeDataset(dataset);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServer_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::closeDataset(dataset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_openDataset_IDataset_EVString_EVDatasetType(void *pObjectXXXX, _in const char* name, _in int type )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1, (EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::toXML();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_toXML_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::toXML();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CEVSpatialServer_clone_IDataSource_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CEVSpatialServer::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServiceVersion_ev_int32_EVString(void *pObjectXXXX, _inout char*& version )
			{
				EarthView::World::Core::ev_string version1 = version;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getServiceVersion(version1);
				version=version1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServiceFileSet_ev_int32_EVDatasetType_CServerQueryResults(void *pObjectXXXX, _in int type, _out void* queryresult )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getServiceFileSet((EarthView::World::Spatial::GeoDataset::EVDatasetType)type, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getServiceFileSetFromMetadataCache_ev_int32_EVDatasetType_EVString(void *pObjectXXXX, _in int type, _out char*& fileSetStr )
			{
				EarthView::World::Core::ev_string fileSetStr1 = fileSetStr;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getServiceFileSetFromMetadataCache((EarthView::World::Spatial::GeoDataset::EVDatasetType)type, fileSetStr1);
				fileSetStr=fileSetStr1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWMTSDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMTSDataset_CEVWMTSDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVWMTSDataset* objXXXX = ptrNativeObject->getWMTSDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVDEMDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDEMDataset_CEVDEMDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVDEMDataset* objXXXX = ptrNativeObject->getDEMDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVKMLDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getKMLDataset_CEVKMLDataset_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVKMLDataset* objXXXX = ptrNativeObject->getKMLDataset(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVGeoCodeDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getGeoCodeDataset_CEVGeoCodeDataset_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVGeoCodeDataset* objXXXX = ptrNativeObject->getGeoCodeDataset(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVGeometryDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getGeometryDataset_CEVGeometryDataset_EVString(void *pObjectXXXX, _in const char* mapname )
			{
				EarthView::World::Core::ev_string mapname1 = mapname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVGeometryDataset* objXXXX = ptrNativeObject->getGeometryDataset(mapname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWFSDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWFSDataset_CEVWFSDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVWFSDataset* objXXXX = ptrNativeObject->getWFSDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWMSDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMSDataset_CEVWMSDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVWMSDataset* objXXXX = ptrNativeObject->getWMSDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWMSChartDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMSChartDataset_CEVWMSChartDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVWMSChartDataset* objXXXX = ptrNativeObject->getWMSChartDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVWMSImageDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMSImageDataset_CEVWMSImageDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVWMSImageDataset* objXXXX = ptrNativeObject->getWMSImageDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVModelDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getModelDataset_CEVModelDataset_EVString(void *pObjectXXXX, _in const char* modelname )
			{
				EarthView::World::Core::ev_string modelname1 = modelname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVModelDataset* objXXXX = ptrNativeObject->getModelDataset(modelname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CEVModelTemplateDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getModelTemplateDataset_CEVModelTemplateDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CEVModelTemplateDataset* objXXXX = ptrNativeObject->getModelTemplateDataset(datasetname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWebSmart3DDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getSmart3DDataset_CWebSmart3DDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CWebSmart3DDataset* objXXXX = ptrNativeObject->getSmart3DDataset(datasetname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWebMeshXDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMeshXDataset_CWebMeshXDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CWebMeshXDataset* objXXXX = ptrNativeObject->getMeshXDataset(datasetname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWebMeshXGDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMeshXGDataset_CWebMeshXGDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CWebMeshXGDataset* objXXXX = ptrNativeObject->getMeshXGDataset(datasetname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWebLasDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getLasDataset_CWebLasDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CWebLasDataset* objXXXX = ptrNativeObject->getLasDataset(datasetname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWebVector3DDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getVector3DDataset_CWebVector3DDataset_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CWebVector3DDataset* objXXXX = ptrNativeObject->getVector3DDataset(datasetname1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CMultiMedaServiceDataset*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMultimediaDataset_CMultiMedaServiceDataset_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EarthView::World::Spatial::CMultiMedaServiceDataset* objXXXX = ptrNativeObject->getMultimediaDataset(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getOGCWMTSCapabilitiesRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getOGCWMTSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getEVWMTSCapabilities_ev_int32_EVString(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEVWMTSCapabilities(value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMap_ev_int32_EVString_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_bool_ev_int32_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* layers, _in const char* styles, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in const char* format, _in ev_bool transparent, _in ev_int32 red, _in ev_int32 green, _in ev_int32 blue, _in const char* time, _in const char* elevation, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Core::ev_string time1 = time;
				EarthView::World::Core::ev_string elevation1 = elevation;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMap(layers1, styles1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, format1, transparent, red, green, blue, time1, elevation1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMSFeatureInfo_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_EVString_ev_uint32_ev_int32_ev_int32_EVString(void *pObjectXXXX, _in const char* layers, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in const char* infoformat, _in ev_uint32 featurecount, _in ev_int32 x, _in ev_int32 y, _out char*& value )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getWMSFeatureInfo(layers1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, infoformat1, featurecount, x, y, value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getLayerLegend_ev_int32_EVString_ev_uint32_ev_uint32_CMemoryStreamResult(void *pObjectXXXX, _in char* layer, _in ev_uint32 legendwidth, _in ev_uint32 legendheight, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerLegend(layer1, legendwidth, legendheight, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getQueryMap_ev_int32_EVString_ISymbol_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerSearchCondition_EVString_CMemoryStreamResult(void *pObjectXXXX, _in char* layers, _in const EarthView::World::Spatial::Display::ISymbol* symbol, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in EarthView::World::Spatial::CServerSearchCondition* conditions, _in char* format, _out void* serverresult )
			{
				EarthView::World::Core::ev_string layers1 = layers;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getQueryMap(layers1, symbol, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, conditions, format1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_convertToLngLat_ev_int32_EVString_EVSSCSRS_IEnvelope_ev_uint32_ev_uint32_CServerPointList_CServerPointList(void *pObjectXXXX, _in char* map, _in int srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect, _in ev_uint32 width, _in ev_uint32 height, _in void* pointlist, _out void* outpointlist )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->convertToLngLat(map1, (EarthView::World::Spatial::EVSSCSRS)srs, maprect, width, height, *(EarthView::World::Spatial::CServerPointList*)pointlist, *(EarthView::World::Spatial::CServerPointList*)outpointlist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSServerInfo*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getOGCWMSCapabilitiesRef_CWMSServerInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSServerInfo* objXXXX = ptrNativeObject->getOGCWMSCapabilitiesRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getEVWMSCapabilities_ev_int32_EVString(void *pObjectXXXX, _inout char*& value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEVWMSCapabilities(value1);
				value=value1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMSChart_ev_int32_EVString_EVString_EVString_EVString_ev_int32_ev_int32_EVString_EVString_EVString_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in const char* layer, _in const char* srs, _in const char* bBox, _in const char* format, _in ev_int32 width, _in ev_int32 height, _in const char* displayMode, _in const char* colorMode, _in const char* symbolMode, _in const char* isobath, _in const char* annotationMode, _out void* serverresult )
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
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getWMSChart(layer1, srs1, bBox1, format1, width, height, displayMode1, colorMode1, symbolMode1, isobath1, annotationMode1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getWMSImage_ev_int32_EVString_EVString_ev_int32_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in char* imageName, _in char* bBOX, _in ev_int32 width, _in ev_int32 height, _in char* SRS, _in char* format, _out void* serverresult )
			{
				EarthView::World::Core::ev_string imageName1 = imageName;
				EarthView::World::Core::ev_string bBOX1 = bBOX;
				EarthView::World::Core::ev_string SRS1 = SRS;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getWMSImage(imageName1, bBOX1, width, height, SRS1, format1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getQueryAttribute_ev_int32_EVString_CServerSearchCondition_ev_int32_ev_int32_CServerSet(void *pObjectXXXX, _in char* layer, _in const EarthView::World::Spatial::CServerSearchCondition* condition, _in ev_int32 startrecord, _in ev_int32 recordcount, _out void* recordset )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getQueryAttribute(layer1, condition, startrecord, recordcount, *(EarthView::World::Spatial::CServerSet*)recordset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getLayerAttributeValue_ev_int32_EVString_ev_uint32_ev_real64_ev_real64_EVString_CServerQueryResults(void *pObjectXXXX, _in char* querylayers, _in ev_uint32 featurecount, _in ev_real64 x, _in ev_real64 y, _in char* fieldname, _out void* queryresult )
			{
				EarthView::World::Core::ev_string querylayers1 = querylayers;
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerAttributeValue(querylayers1, featurecount, x, y, fieldname1, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getUniqueFieldValue_ev_int32_EVString_EVString_CServerQueryResults(void *pObjectXXXX, _in char* querylayer, _in char* fieldname, _out void* queryresult )
			{
				EarthView::World::Core::ev_string querylayer1 = querylayer;
				EarthView::World::Core::ev_string fieldname1 = fieldname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getUniqueFieldValue(querylayer1, fieldname1, *(EarthView::World::Spatial::CServerQueryResults*)queryresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getLayerFeature_ev_int32_EVString_ev_bool_ev_bool_EVString_CEVWebFeature(void *pObjectXXXX, _in char* layer, _in ev_bool hasgeometry, _in ev_bool hasattribute, _in char* attributenames, _inout void* feature )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Core::ev_string attributenames1 = attributenames;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLayerFeature(layer1, hasgeometry, hasattribute, attributenames1, *(EarthView::World::Spatial::CEVWebFeature*)feature);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getSearchGeometry_ev_int32_EVString_CServerSearchCondition_CGeometryList(void *pObjectXXXX, _in char* layer, _in const EarthView::World::Spatial::CServerSearchCondition* condition, _out void* geometrylist )
			{
				EarthView::World::Core::ev_string layer1 = layer;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSearchGeometry(layer1, condition, *(EarthView::World::Spatial::CGeometryList*)geometrylist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_buffer_ev_int32_EVString_CGeometryList_ev_real64_ev_bool_CGeometryList(void *pObjectXXXX, _in char* map, _in void* geometrylist, _in ev_real64 distance, _in ev_bool isunion, _out void* result_geometrylist )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->buffer(map1, *(EarthView::World::Spatial::CGeometryList*)geometrylist, distance, isunion, *(EarthView::World::Spatial::CGeometryList*)result_geometrylist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_contains_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->contains(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_crosses_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->crosses(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_disjoint_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->disjoint(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_distance_ev_int32_EVString_IGeometry_IGeometry_ev_real64(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_real64& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->distance(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_intersects_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->intersects(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_overlaps_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->overlaps(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_touches_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->touches(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_within_ev_int32_EVString_IGeometry_IGeometry_ev_bool(void *pObjectXXXX, _in char* map, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry1, _in const EarthView::World::Spatial::Geometry::IGeometry* geometry2, _out ev_bool& result )
			{
				EarthView::World::Core::ev_string map1 = map;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->within(map1, geometry1, geometry2, result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getGeoCodeFile_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in char* placename, _in char* dataname, _out void* serverresult )
			{
				EarthView::World::Core::ev_string placename1 = placename;
				EarthView::World::Core::ev_string dataname1 = dataname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getGeoCodeFile(placename1, dataname1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_queryPlacename_ev_int32_EVString_EVString_EVString_ev_bool_ev_int32_CPlaceNameList(void *pObjectXXXX, _in char* layername, _in char* namefield, _in char* keyword, _in ev_bool blurquery, _in ev_int32 limitcount, _out void* resultlist )
			{
				EarthView::World::Core::ev_string layername1 = layername;
				EarthView::World::Core::ev_string namefield1 = namefield;
				EarthView::World::Core::ev_string keyword1 = keyword;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->queryPlacename(layername1, namefield1, keyword1, blurquery, limitcount, *(EarthView::World::Spatial::CPlaceNameList*)resultlist);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getKMLFile_ev_int32_EVString_EVString_CMemoryStreamResult(void *pObjectXXXX, _in char* filename, _in char* dataName, _out void* serverresult )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string dataName1 = dataName;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getKMLFile(filename1, dataName1, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDEMFile_ev_int32_EVString_ev_int32_ev_int32_ev_int32_CMemoryStreamResult(void *pObjectXXXX, _in char* filename, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _out void* serverresult )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getDEMFile(filename1, level, row, col, *(EarthView::World::Spatial::CMemoryStreamResult*)serverresult);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getEntityObject_ev_int32_CServerEntityObject(void *pObjectXXXX, _inout void* entityObject )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getEntityObject(*(EarthView::World::Spatial::CServerEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMesh_ev_int32_CServerMeshObject(void *pObjectXXXX, _inout void* meshObject )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMesh(*(EarthView::World::Spatial::CServerMeshObject*)meshObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getResource_ev_int32_CServerResourceObject(void *pObjectXXXX, _inout void* resourceObject )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResource(*(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getResourceByID_ev_int32_CServerResourceObject(void *pObjectXXXX, _inout void* resourceObject )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getResourceByID(*(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getOrigTexture_ev_int32_CServerOrigTexture(void *pObjectXXXX, _inout void* origTexture )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getOrigTexture(*(EarthView::World::Spatial::CServerOrigTexture*)origTexture);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getTemplateEntityObject_ev_int32_CServerTemplateEntityObject(void *pObjectXXXX, _inout void* entityObject )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTemplateEntityObject(*(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getTemplateResourceByID_ev_int32_CServerResourceObject(void *pObjectXXXX, _inout void* resourceObject )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTemplateResourceByID(*(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVSpatialServer_setValid_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ptrNativeObject->setValid(b);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CEVSpatialServer_getDatasetType_EVString_EVString(void *pObjectXXXX, _in const char* datasetname )
			{
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDatasetType(datasetname1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMediaFileLength_ev_int32_EVString_EVString_ev_int64(void *pObjectXXXX, _in const char* flename, _in const char* filetype, _inout ev_int64& fileLength )
			{
				EarthView::World::Core::ev_string flename1 = flename;
				EarthView::World::Core::ev_string filetype1 = filetype;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMediaFileLength(flename1, filetype1, fileLength);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMediaFile_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* flename, _in const char* filetype, _in void* fileData )
			{
				EarthView::World::Core::ev_string flename1 = flename;
				EarthView::World::Core::ev_string filetype1 = filetype;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMediaFile(flename1, filetype1, *(EarthView::World::Core::MemoryDataStreamPtr*)fileData);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CEVSpatialServer_getMediaFileByOffset_ev_int32_EVString_EVString_ev_int64_ev_int64_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* flename, _in const char* filetype, _in ev_int64 offset, _in ev_int64 length, _in void* fileData )
			{
				EarthView::World::Core::ev_string flename1 = flename;
				EarthView::World::Core::ev_string filetype1 = filetype;
				EarthView::World::Spatial::CEVSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMediaFileByOffset(flename1, filetype1, offset, length, *(EarthView::World::Core::MemoryDataStreamPtr*)fileData);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getName_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString_Callback* pCallback )
			{
				CEVSpatialServerProxy* ptr = dynamic_cast<CEVSpatialServerProxy*>((EarthView::World::Spatial::CEVSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CEVSpatialServer_deleteDataset_ev_bool_EVString(pCallback);
				}
			}
		}
	}
}
