/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/datasourceserverfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback)(_in const EarthView::World::Spatial::CServerConnection* connection);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef void  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			class CDataSourceServerFactoryProxy : public EarthView::World::Spatial::CDataSourceServerFactory
			{
			private:
				EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback;
				EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback;
			public:
				CDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourceServerFactory(pList)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
				}
				virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
					}
					else
						return this->CDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* xml_Char = xml.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::createFromXML(xml);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection)
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback(connection);
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::open(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::createDataSource(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* path_Char = path.makeBuffer();
						char* fileName_Char = fileName.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::openDataSource(path, fileName);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::openDataSource(connection);
				}
				virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if(m_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
						return returnValue;
					}
					else
						return this->CDataSourceServerFactory::existDataSource(pDataSource);
				}
			};
			REGISTER_FACTORY_CLASS(CDataSourceServerFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_close_ev_bool_IDataSource(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* server )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->close(server);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::destroyDataSource(pDataSource);
				else
					ptrNativeObject->destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::getType();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::createFromXML(xml1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::createFromXML(xml1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::open(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->open(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::open(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::createDataSource(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CDataSourceServerFactory::createDataSource(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CDataSourceServerFactory*  _stdcall EarthView_World_Spatial_CDataSourceServerFactory_getInstance_CDataSourceServerFactory( )
			{
				EarthView::World::Spatial::CDataSourceServerFactory* objXXXX = EarthView::World::Spatial::CDataSourceServerFactory::getInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
			{
				CDataSourceServerFactoryProxy* ptr = dynamic_cast<CDataSourceServerFactoryProxy*>((EarthView::World::Spatial::CDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CDataSourceServerFactory_existDataSource_ev_bool_IDataSource(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback)(_in const EarthView::World::Spatial::CServerConnection* connection);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef void  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			class COGCWMSDataSourceServerFactoryProxy : public EarthView::World::Spatial::COGCWMSDataSourceServerFactory
			{
			private:
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback;
				EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback;
			public:
				COGCWMSDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWMSDataSourceServerFactory(pList)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
				}
				virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
					}
					else
						return this->COGCWMSDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* xml_Char = xml.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::createFromXML(xml);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection)
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::open(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::createDataSource(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* path_Char = path.makeBuffer();
						char* fileName_Char = fileName.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::openDataSource(path, fileName);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::openDataSource(connection);
				}
				virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if(m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
						return returnValue;
					}
					else
						return this->COGCWMSDataSourceServerFactory::existDataSource(pDataSource);
				}
			};
			REGISTER_FACTORY_CLASS(COGCWMSDataSourceServerFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_close_ev_bool_IDataSource(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* server )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->close(server);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::destroyDataSource(pDataSource);
				else
					ptrNativeObject->destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::getType();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createFromXML(xml1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createFromXML(xml1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::open(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->open(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::open(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createDataSource(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMSDataSourceServerFactory::createDataSource(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMSDataSourceServerFactory*  _stdcall EarthView_World_Spatial_COGCWMSDataSourceServerFactory_getInstance_COGCWMSDataSourceServerFactory( )
			{
				EarthView::World::Spatial::COGCWMSDataSourceServerFactory* objXXXX = EarthView::World::Spatial::COGCWMSDataSourceServerFactory::getInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
			{
				COGCWMSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback)(_in const EarthView::World::Spatial::CServerConnection* connection);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef void  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			class COGCWMTSDataSourceServerFactoryProxy : public EarthView::World::Spatial::COGCWMTSDataSourceServerFactory
			{
			private:
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback;
				EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback;
			public:
				COGCWMTSDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWMTSDataSourceServerFactory(pList)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
				}
				virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
					}
					else
						return this->COGCWMTSDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* xml_Char = xml.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::createFromXML(xml);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection)
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::open(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::createDataSource(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* path_Char = path.makeBuffer();
						char* fileName_Char = fileName.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::openDataSource(path, fileName);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::openDataSource(connection);
				}
				virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if(m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
						return returnValue;
					}
					else
						return this->COGCWMTSDataSourceServerFactory::existDataSource(pDataSource);
				}
			};
			REGISTER_FACTORY_CLASS(COGCWMTSDataSourceServerFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_close_ev_bool_IDataSource(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* server )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->close(server);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::destroyDataSource(pDataSource);
				else
					ptrNativeObject->destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::getType();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createFromXML(xml1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createFromXML(xml1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::open(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->open(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::open(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createDataSource(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::createDataSource(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*  _stdcall EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_getInstance_COGCWMTSDataSourceServerFactory( )
			{
				EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* objXXXX = EarthView::World::Spatial::COGCWMTSDataSourceServerFactory::getInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
			{
				COGCWMTSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWMTSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWMTSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWMTSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback)(_in const EarthView::World::Spatial::CServerConnection* connection);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
			typedef void  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
			class COGCWFSDataSourceServerFactoryProxy : public EarthView::World::Spatial::COGCWFSDataSourceServerFactory
			{
			private:
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback;
				EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback;
			public:
				COGCWFSDataSourceServerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWFSDataSourceServerFactory(pList)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
				}
				virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
					}
					else
						return this->COGCWFSDataSourceServerFactory::destroyDataSource(pDataSource);
				}
				virtual ev_int32 getType() const
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* xml_Char = xml.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::createFromXML(xml);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection)
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::open(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::createDataSource(connection);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* path_Char = path.makeBuffer();
						char* fileName_Char = fileName.makeBuffer();
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::openDataSource(path, fileName);
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::openDataSource(connection);
				}
				virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
				{
					if(m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
						return returnValue;
					}
					else
						return this->COGCWFSDataSourceServerFactory::existDataSource(pDataSource);
				}
			};
			REGISTER_FACTORY_CLASS(COGCWFSDataSourceServerFactoryProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_close_ev_bool_IDataSource(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataSource* server )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->close(server);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::destroyDataSource(pDataSource);
				else
					ptrNativeObject->destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::destroyDataSource(pDataSource);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::getType();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createFromXML(xml1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
			{
				EarthView::World::Core::ev_string xml1 = xml;
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createFromXML(xml1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::open(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->open(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_open_IDataSource_CServerConnection_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::CServerConnection* connection )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::open(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				if (dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createDataSource(connection);
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* ptrNativeObject = (EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::COGCWFSDataSourceServerFactory::createDataSource(connection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::COGCWFSDataSourceServerFactory*  _stdcall EarthView_World_Spatial_COGCWFSDataSourceServerFactory_getInstance_COGCWFSDataSourceServerFactory( )
			{
				EarthView::World::Spatial::COGCWFSDataSourceServerFactory* objXXXX = EarthView::World::Spatial::COGCWFSDataSourceServerFactory::getInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_openDataSource_IDataSource_IPropertySet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
			{
				COGCWFSDataSourceServerFactoryProxy* ptr = dynamic_cast<COGCWFSDataSourceServerFactoryProxy*>((EarthView::World::Spatial::COGCWFSDataSourceServerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_COGCWFSDataSourceServerFactory_existDataSource_ev_bool_IDataSource(pCallback);
				}
			}
		}
	}
}
