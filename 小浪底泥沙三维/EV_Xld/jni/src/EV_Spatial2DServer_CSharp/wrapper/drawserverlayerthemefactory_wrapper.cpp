/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/drawserverlayerthemefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Display::CDrawServerLayerTheme*  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback)(_in char*& key);
				typedef EarthView::World::Spatial::Display::CDrawServerLayerTheme*  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback)(_inout void* stream);
				typedef EarthView::World::Spatial::Display::CDrawServerLayerTheme*  ( _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback)(_inout void* element);
				class CDrawServerLayerThemeFactoryProxy : public EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory
				{
				private:
					EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback;
					EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback;
					EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback;
				public:
					CDrawServerLayerThemeFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawServerLayerThemeFactory(pList)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* create(_in const EVString& key)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							EarthView::World::Spatial::Display::CDrawServerLayerTheme* returnValue = m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback(key_Char);
							return returnValue;
						}
						else
							return this->CDrawServerLayerThemeFactory::create(key);
					}
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createRenderFromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CDrawServerLayerTheme* returnValue = m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback(&stream);
							return returnValue;
						}
						else
							return this->CDrawServerLayerThemeFactory::createRenderFromStream(stream);
					}
					virtual EarthView::World::Spatial::Display::CDrawServerLayerTheme* createThemeFromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CDrawServerLayerTheme* returnValue = m_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CDrawServerLayerThemeFactory::createThemeFromXmlElement(element);
					}
				};
				REGISTER_FACTORY_CLASS(CDrawServerLayerThemeFactoryProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_getKeys_CStringArray(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_isSupported_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSupported(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerTheme*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeFactoryProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::create(key1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->create(key1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_Callback* pCallback )
				{
					CDrawServerLayerThemeFactoryProxy* ptr = dynamic_cast<CDrawServerLayerThemeFactoryProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerTheme*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_create_CDrawServerLayerTheme_EVString_NoVirtual(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::create(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerTheme*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeFactoryProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createRenderFromStream(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->createRenderFromStream(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_Callback* pCallback )
				{
					CDrawServerLayerThemeFactoryProxy* ptr = dynamic_cast<CDrawServerLayerThemeFactoryProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerTheme*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createRenderFromStream_CDrawServerLayerTheme_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createRenderFromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerTheme*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					if (dynamic_cast<CDrawServerLayerThemeFactoryProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_Callback* pCallback )
				{
					CDrawServerLayerThemeFactoryProxy* ptr = dynamic_cast<CDrawServerLayerThemeFactoryProxy*>((EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerTheme*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_createThemeFromXmlElement_CDrawServerLayerTheme_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory::createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_destroyRender_void_CDrawServerLayerTheme(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CDrawServerLayerTheme* pRender )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					ptrNativeObject->destroyRender(pRender);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactory_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*) pObjectXXXX;
					ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactoryRegistry_registryFactory_int_CDrawServerLayerThemeFactory(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* factory )
				{
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry*) pObjectXXXX;
					int objXXXX = ptrNativeObject->registryFactory(factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory*  _stdcall EarthView_World_Spatial_Display_CDrawServerLayerThemeFactoryRegistry_getFactory_CDrawServerLayerThemeFactory_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry* ptrNativeObject = (EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry*) pObjectXXXX;
					EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory* objXXXX = ptrNativeObject->getFactory(key1);
					return objXXXX;
				}
			}
		}
	}
}
