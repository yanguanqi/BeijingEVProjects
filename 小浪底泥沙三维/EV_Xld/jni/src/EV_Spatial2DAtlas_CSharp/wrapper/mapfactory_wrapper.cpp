/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/mapfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback)(_in void* stream);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback)(_inout void* element);
				typedef EarthView::World::Spatial::Atlas::IMap*  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback)(_in char*& mapName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback)(_in EarthView::World::Spatial::Atlas::IMap* map);
				class CMapFactoryProxy : public EarthView::World::Spatial2D::Atlas::CMapFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback* m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback;
					EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback* m_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback;
				public:
					CMapFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CMapFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream(EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString(EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement(EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString(EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap(EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback(&stream);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMapFactory::createMapFromStream(stream);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXMLElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMapFactory::createMapFromXMLElement(element);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMap(_in const EVString& mapName)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* mapName_Char = mapName.makeBuffer();
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback(mapName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMapFactory::createMap(mapName);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::IMap* map)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback(map);
							return returnValue;
						}
						else
							return this->CMapFactory::destroyInstance(map);
					}
					virtual EarthView::World::Spatial::Atlas::IMap* createMapFromXML(_in const EVString& strXml)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Atlas::IMap* returnValue = m_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback(strXml_Char);
							return returnValue;
						}
						else
							return this->CMapFactory::createMapFromXML(strXml);
					}
				};
				REGISTER_FACTORY_CLASS(CMapFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					if (dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::createMapFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMapFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_Callback* pCallback )
				{
					CMapFactoryProxy* ptr = dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromStream_IMap_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::createMapFromStream(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					if (dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::createMapFromXMLElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMapFromXMLElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_Callback* pCallback )
				{
					CMapFactoryProxy* ptr = dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXMLElement_IMap_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::createMapFromXMLElement(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString(void *pObjectXXXX, _in const char* mapName )
				{
					EarthView::World::Core::ev_string mapName1 = mapName;
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					if (dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::createMap(mapName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->createMap(mapName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_Callback* pCallback )
				{
					CMapFactoryProxy* ptr = dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_createMap_IMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* mapName )
				{
					EarthView::World::Core::ev_string mapName1 = mapName;
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::createMap(mapName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					if (dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::destroyInstance(map);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(map);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_Callback* pCallback )
				{
					CMapFactoryProxy* ptr = dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapFactory_destroyInstance_ev_bool_IMap_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* map )
				{
					EarthView::World::Spatial2D::Atlas::CMapFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CMapFactory::destroyInstance(map);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString_Callback* pCallback )
				{
					CMapFactoryProxy* ptr = dynamic_cast<CMapFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CMapFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CMapFactory_createMapFromXML_IMap_EVString(pCallback);
					}
				}
			}
		}
	}
}
