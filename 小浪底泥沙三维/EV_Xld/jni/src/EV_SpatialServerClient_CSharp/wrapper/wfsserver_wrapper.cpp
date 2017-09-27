/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wfsserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_getMaxFeatures_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMaxFeatures();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_setMaxFeatures_void_ev_int32(void *pObjectXXXX, _in ev_int32 maxFeatures )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ptrNativeObject->setMaxFeatures(maxFeatures);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_getRequestVersion_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getRequestVersion();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_setRequestVersion_void_EVString(void *pObjectXXXX, _in char* version )
			{
				EarthView::World::Core::ev_string version1 = version;
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ptrNativeObject->setRequestVersion(version1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_getRequestFilter_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getRequestFilter();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_setUsingRect_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ptrNativeObject->setUsingRect(b);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_getUsingRect_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUsingRect();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_getRequestRect_IEnvelope(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getRequestRect();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_setRequestFilter_void_EVString(void *pObjectXXXX, _in char* filter )
			{
				EarthView::World::Core::ev_string filter1 = filter;
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ptrNativeObject->setRequestFilter(filter1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_getStringInterfacePtr_CStringInterface(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->getStringInterfacePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_isEqual_ev_bool_CWFSLayerRequestParam(void *pObjectXXXX, _in EarthView::World::Spatial::CWFSLayerRequestParam* other )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEqual(other);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_toXmlElement_CXmlElement(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSLayerRequestParam* ptrNativeObject = (EarthView::World::Spatial::CWFSLayerRequestParam*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CWFSLayerRequestParam_OperatorAssign_CWFSLayerRequestParam_CWFSLayerRequestParam(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Spatial::CWFSLayerRequestParam& objXXXX = *((EarthView::World::Spatial::CWFSLayerRequestParam*) pObjXXXX);
				objXXXX = *(EarthView::World::Spatial::CWFSLayerRequestParam*)other;
				EarthView::World::Spatial::CWFSLayerRequestParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback)();
			typedef const char*  ( _stdcall EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWFSServer_disConnect_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWFSServer_getName_EVString_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
			typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback)();
			class CWFSServerProxy : public EarthView::World::Spatial::CWFSServer
			{
			private:
				EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback* m_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback;
				EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback* m_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback;
				EarthView_World_Spatial_CWFSServer_disConnect_void_Callback* m_EarthView_World_Spatial_CWFSServer_disConnect_void_Callback;
				EarthView_World_Spatial_CWFSServer_getName_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_getName_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback* m_EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback;
				EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback;
				EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
				EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
				EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback;
				EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback* m_EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback;
				EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback* m_EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback;
			public:
				CWFSServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSServer(pList)
				{
					m_EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_disConnect_void_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getServerName_EVString(EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString(EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString(EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString(EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool(EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool(EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_disConnect_void(EarthView_World_Spatial_CWFSServer_disConnect_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_disConnect_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getName_EVString(EarthView_World_Spatial_CWFSServer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getType_ev_int32(EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet(EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_isValid_ev_bool(EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString(EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString(EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset(EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_toXML_EVString(EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSServer_clone_IDataSource(EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getPropertySet();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::isValid();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWFSServer::getDatasetInfo(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
				{
					if(m_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWFSServer::getDatasetInfos(type);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWFSServer::clone();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CWFSServer::openDataset(name);
				}
				virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* pDataset)
				{
					if(m_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback(pDataset);
						return returnValue;
					}
					else
						return this->CWFSServer::closeDataset(pDataset);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::toXML();
				}
				virtual const EVString getServerName() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getServerName();
				}
				virtual const EVString getServerAbstract() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getServerAbstract();
				}
				virtual const EVString getServerTitle() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getServerTitle();
				}
				virtual const EVString getServerUrl() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString returnValue = m_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getServerUrl();
				}
				virtual ev_bool isConnected()
				{
					if(m_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::isConnected();
				}
				virtual ev_bool reconnect()
				{
					if(m_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::reconnect();
				}
				virtual void disConnect()
				{
					if(m_EarthView_World_Spatial_CWFSServer_disConnect_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWFSServer_disConnect_void_Callback();
					}
					else
						return this->CWFSServer::disConnect();
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWFSServer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWFSServer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSServer::getName();
				}
				virtual ev_bool deleteDataset(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CWFSServer::deleteDataset(name);
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
				{
					if(m_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWFSServer::createFeatureClass(name, geofield, fields);
				}
			};
			REGISTER_FACTORY_CLASS(CWFSServerProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWFSServerInfo*  _stdcall EarthView_World_Spatial_CWFSServer_getServerInfo_CWFSServerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWFSServerInfo* objXXXX = ptrNativeObject->getServerInfo();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::getPropertySet();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial_CWFSServer_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::getPropertySet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWFSServer_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_isValid_ev_bool_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWFSServer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::getDatasetInfo(name1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial_CWFSServer_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::getDatasetInfo(name1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial_CWFSServer_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CWFSServer_clone_IDataSource(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::clone();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_clone_IDataSource_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_clone_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CWFSServer_clone_IDataSource_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::openDataset(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_CWFSServer_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::openDataset(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
			{
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::closeDataset(pDataset);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->closeDataset(pDataset);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWFSServer_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
			{
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::closeDataset(pDataset);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSServer_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWFSLayerInfo*  _stdcall EarthView_World_Spatial_CWFSServer_getLayerInfo_CWFSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				const EarthView::World::Spatial::CWFSLayerInfo* objXXXX = ptrNativeObject->getLayerInfo(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWFSServer_toXML_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				if (dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::toXML();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_toXML_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWFSServer_toXML_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSServer::toXML();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWFSLayerRequestParam*  _stdcall EarthView_World_Spatial_CWFSServer_getLayerRequestParam_CWFSLayerRequestParam_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::CWFSLayerRequestParam* objXXXX = ptrNativeObject->getLayerRequestParam(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CWFSLayerRequestParam*  _stdcall EarthView_World_Spatial_CWFSServer_getLayerRequestParam_CWFSLayerRequestParam_EVString(void *pObjectXXXX, _in char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CWFSServer* ptrNativeObject = (EarthView::World::Spatial::CWFSServer*) pObjectXXXX;
				EarthView::World::Spatial::CWFSLayerRequestParam* objXXXX = ptrNativeObject->getLayerRequestParam(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getServerName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getServerName_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getServerName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getServerAbstract_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getServerTitle_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getServerTitle_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getServerUrl_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getServerUrl_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_isConnected_ev_bool_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_isConnected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_reconnect_ev_bool_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_reconnect_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_disConnect_void( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_disConnect_void_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_disConnect_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getName_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_getType_ev_int32_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString_Callback* pCallback )
			{
				CWFSServerProxy* ptr = dynamic_cast<CWFSServerProxy*>((EarthView::World::Spatial::CWFSServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSServer_deleteDataset_ev_bool_EVString(pCallback);
				}
			}
		}
	}
}
