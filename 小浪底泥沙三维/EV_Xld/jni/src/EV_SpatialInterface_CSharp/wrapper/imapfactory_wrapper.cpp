/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/imapfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback)(_in void* stream);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback)(_inout void* element);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback)(_in char*& mapName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback)(_in EarthView::World::Spatial::Atlas::IMap* map);
				class IMapFactoryProxy : public EarthView::World::Spatial::Atlas::IMapFactory
				{
				private:
					EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback* m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback;
					EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback* m_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback;
					EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback* m_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback;
				public:
					IMapFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IMapFactory(pList)
					{
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IMapFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream(EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString(EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement(EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString(EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap(EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback(&stream);
							return returnValue;
						}
						else
							return this->IMapFactory::createMapFromStream(stream);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXML(_in const EVString& strXml)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback(strXml_Char);
							return returnValue;
						}
						else
							return this->IMapFactory::createMapFromXML(strXml);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXMLElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->IMapFactory::createMapFromXMLElement(element);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMap(_in const EVString& mapName)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* mapName_Char = mapName.makeBuffer();
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback(mapName_Char);
							return returnValue;
						}
						else
							return this->IMapFactory::createMap(mapName);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::IMap* map)
					{
						if(m_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback(map);
							return returnValue;
						}
						else
							return this->IMapFactory::destroyInstance(map);
					}
				};
				REGISTER_FACTORY_CLASS(IMapFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					if (dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromStream(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMapFromStream(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_Callback* pCallback )
				{
					IMapFactoryProxy* ptr = dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromStream_IMap_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					if (dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXML(strXml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMapFromXML(strXml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_Callback* pCallback )
				{
					IMapFactoryProxy* ptr = dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXML_IMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXML(strXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					if (dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXMLElement(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMapFromXMLElement(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback* pCallback )
				{
					IMapFactoryProxy* ptr = dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMapFromXMLElement_IMap_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMapFromXMLElement(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString(void *pObjectXXXX, _in const char* mapName )
				{
					EarthView::World::Core::ev_string mapName1 = mapName;
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					if (dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMap(mapName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMap(mapName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_Callback* pCallback )
				{
					IMapFactoryProxy* ptr = dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_createMap_IMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* mapName )
				{
					EarthView::World::Core::ev_string mapName1 = mapName;
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::createMap(mapName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					if (dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::destroyInstance(map);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(map);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap( void *pObjectXXXX, EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_Callback* pCallback )
				{
					IMapFactoryProxy* ptr = dynamic_cast<IMapFactoryProxy*>((EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_IMapFactory_destroyInstance_ev_bool_IMap_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Spatial::Atlas::IMapFactory* ptrNativeObject = (EarthView::World::Spatial::Atlas::IMapFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::IMapFactory::destroyInstance(map);
					return objXXXX;
				}
			}
		}
	}
}
