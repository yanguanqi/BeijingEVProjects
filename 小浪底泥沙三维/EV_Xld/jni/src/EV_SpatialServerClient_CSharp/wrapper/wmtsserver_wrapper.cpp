/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmtsserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
			typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback)();
			class CWMTSServerProxy : public EarthView::World::Spatial::CWMTSServer
			{
			private:
				EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback* m_EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback;
				EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback* m_EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback;
				EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback;
				EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
				EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
				EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback;
				EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback* m_EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback;
				EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback* m_EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback;
			public:
				CWMTSServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSServer(pList)
				{
					m_EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getServerName_EVString(EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString(EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString(EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString(EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool(EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool(EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_disConnect_void(EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getName_EVString(EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getType_ev_int32(EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet(EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool(EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString(EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_toXML_EVString(EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSServer_clone_IDataSource(EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSServer::getPropertySet();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::isValid();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSServer::getDatasetInfo(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSServer::getDatasetInfos(type);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSServer::clone();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CWMTSServer::openDataset(name);
				}
				virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
				{
					if(m_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback(pDataset);
						return returnValue;
					}
					else
						return this->CWMTSServer::closeDataset(pDataset);
				}
				virtual const EVString getServerName() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::getServerName();
				}
				virtual const EVString getServerAbstract() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::getServerAbstract();
				}
				virtual const EVString getServerTitle() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::getServerTitle();
				}
				virtual const EVString getServerUrl() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::getServerUrl();
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::toXML();
				}
				virtual ev_bool isConnected()
				{
					if(m_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::isConnected();
				}
				virtual ev_bool reconnect()
				{
					if(m_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::reconnect();
				}
				virtual void disConnect()
				{
					if(m_EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback();
					}
					else
						return this->CWMTSServer::disConnect();
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSServer::getName();
				}
				virtual ev_bool deleteDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CWMTSServer::deleteDataset(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if(m_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSServer::createFeatureClass(name, geofield, fields);
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSServerProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial_CWMTSServer_getServerInfoRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getServerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::getPropertySet();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_CWMTSServer_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::getPropertySet();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSServer_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSServer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::getDatasetInfo(name1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWMTSServer_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::getDatasetInfo(name1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_CWMTSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CWMTSServer_clone_IDataSource(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::clone();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_clone_IDataSource_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_clone_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CWMTSServer_clone_IDataSource_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::openDataset(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWMTSServer_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::openDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
			{
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				if (dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::closeDataset(pDataset);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->closeDataset(pDataset);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSServer_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
			{
				EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSServer::closeDataset(pDataset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMTSServer_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CWMTSServer_getLayerInfoRef_CWMTSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CWMTSServer_getLayerInfoRef_CWMTSLayerInfo_EVString(void *pObjectXXXX, _in const char* tilematrix )
			{
				EarthView::World::Core::ev_string tilematrix1 = tilematrix;
				const EarthView::World::Spatial::CWMTSServer* ptrNativeObject = (EarthView::World::Spatial::CWMTSServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef(tilematrix1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getServerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getServerName_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getServerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getServerAbstract_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getServerTitle_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getServerUrl_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_isConnected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_reconnect_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_disConnect_void( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_disConnect_void_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_disConnect_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getName_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_getType_ev_int32_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_deleteDataset_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSServer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSServer_toXML_EVString_Callback* pCallback )
			{
				CWMTSServerProxy* ptr = dynamic_cast<CWMTSServerProxy*>((EarthView::World::Spatial::CWMTSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSServer_toXML_EVString(pCallback);
				}
			}
		}
	}
}
