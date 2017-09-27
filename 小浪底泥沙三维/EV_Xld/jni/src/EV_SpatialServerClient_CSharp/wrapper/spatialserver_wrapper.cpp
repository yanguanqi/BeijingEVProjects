/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/spatialserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const char*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
			typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
			typedef char*  ( _stdcall EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback)();
			class CSpatialServerProxy : public EarthView::World::Spatial::CSpatialServer
			{
			private:
				EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback* m_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback;
				EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback* m_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback;
				EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback* m_EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback;
				EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback* m_EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback;
				EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback;
				EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
				EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
				EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback;
				EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback* m_EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback;
				EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback* m_EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback;
			public:
				CSpatialServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialServer(pList)
				{
					m_EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getServerName_EVString(EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString(EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString(EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString(EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool(EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool(EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_disConnect_void(EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getName_EVString(EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getType_ev_int32(EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet(EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool(EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString(EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_toXML_EVString(EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CSpatialServer_clone_IDataSource(EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback = pCallback;
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getName();
				}
				virtual const EVString getServerName() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getServerName();
				}
				virtual const EVString getServerAbstract() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getServerAbstract();
				}
				virtual const EVString getServerTitle() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getServerTitle();
				}
				virtual const EVString getServerUrl() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getServerUrl();
				}
				virtual ev_bool isConnected()
				{
					if(m_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::isConnected();
				}
				virtual ev_bool reconnect()
				{
					if(m_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::reconnect();
				}
				virtual void disConnect()
				{
					if(m_EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback();
					}
					else
						return this->CSpatialServer::disConnect();
				}
				virtual ev_bool deleteDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSpatialServer::deleteDataset(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::getPropertySet();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::isValid();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSpatialServer::getDatasetInfo(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if(m_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSpatialServer::getDatasetInfos(type);
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if(m_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CSpatialServer::createFeatureClass(name, geofield, fields);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CSpatialServer::openDataset(name);
				}
				virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
				{
					if(m_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback(dataset);
						return returnValue;
					}
					else
						return this->CSpatialServer::closeDataset(dataset);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::toXML();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
				{
					if(m_EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CSpatialServer::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CSpatialServerProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CSpatialServer_getType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getType();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getType_ev_int32_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CSpatialServer_getType_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CSpatialServer_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getName_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CSpatialServer_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerName();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getServerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getServerName_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getServerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerAbstract();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerAbstract();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerAbstract_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerAbstract();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerTitle();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerTitle();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerTitle_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerTitle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerUrl();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString objXXXX = ptrNativeObject->getServerUrl();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServerUrl_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::getServerUrl();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::isConnected();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isConnected();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CSpatialServer_isConnected_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::isConnected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::reconnect();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->reconnect();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CSpatialServer_reconnect_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::reconnect();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CSpatialServer_disConnect_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CSpatialServer::disConnect();
				else
					ptrNativeObject->disConnect();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_disConnect_void( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_disConnect_void_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_disConnect_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CSpatialServer_disConnect_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CSpatialServer::disConnect();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				if (dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::deleteDataset(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CSpatialServer_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CSpatialServer::deleteDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CSpatialServer_formatServiceName_EVString_EVWebServiceType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->formatServiceName((EarthView::World::Spatial::EVWebServiceType)type);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CSpatialServer_getServiceDetailUrl_EVString_EVWebServiceType(void *pObjectXXXX, _in int type )
			{
				const EarthView::World::Spatial::CSpatialServer* ptrNativeObject = (EarthView::World::Spatial::CSpatialServer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getServiceDetailUrl((EarthView::World::Spatial::EVWebServiceType)type);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getPropertySet_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_isValid_ev_bool_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_openDataset_IDataset_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_closeDataset_ev_bool_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_toXML_EVString_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSpatialServer_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CSpatialServer_clone_IDataSource_Callback* pCallback )
			{
				CSpatialServerProxy* ptr = dynamic_cast<CSpatialServerProxy*>((EarthView::World::Spatial::CSpatialServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSpatialServer_clone_IDataSource(pCallback);
				}
			}
		}
	}
}
