/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/themefactory2.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback)(_in char*& key);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback)(_inout void* stream);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback)(_inout void* element);
				class CThemeFactory2Proxy : public EarthView::World::Spatial::Theme::CThemeFactory2
				{
				private:
					EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback* m_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback;
					EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback;
					EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback;
				public:
					CThemeFactory2Proxy(EarthView::World::Core::CNameValuePairList *pList) : CThemeFactory2(pList)
					{
						m_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString(EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream(EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement(EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::ITheme* create(_in const EVString& key)
					{
						if(m_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback(key_Char);
							return returnValue;
						}
						else
							return this->CThemeFactory2::create(key);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* createThemeFromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback(&stream);
							return returnValue;
						}
						else
							return this->CThemeFactory2::createThemeFromStream(stream);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* createThemeFromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CThemeFactory2::createThemeFromXmlElement(element);
					}
				};
				REGISTER_FACTORY_CLASS(CThemeFactory2Proxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_getKeys_CStringArray(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_isSupported_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSupported(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					if (dynamic_cast<CThemeFactory2Proxy*>((EarthView::World::Spatial::Theme::CThemeFactory2*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CThemeFactory2::create(key1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->create(key1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_Callback* pCallback )
				{
					CThemeFactory2Proxy* ptr = dynamic_cast<CThemeFactory2Proxy*>((EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_create_ITheme_EVString_NoVirtual(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CThemeFactory2::create(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					if (dynamic_cast<CThemeFactory2Proxy*>((EarthView::World::Spatial::Theme::CThemeFactory2*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CThemeFactory2::createThemeFromStream(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->createThemeFromStream(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_Callback* pCallback )
				{
					CThemeFactory2Proxy* ptr = dynamic_cast<CThemeFactory2Proxy*>((EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromStream_ITheme_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CThemeFactory2::createThemeFromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					if (dynamic_cast<CThemeFactory2Proxy*>((EarthView::World::Spatial::Theme::CThemeFactory2*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CThemeFactory2::createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_Callback* pCallback )
				{
					CThemeFactory2Proxy* ptr = dynamic_cast<CThemeFactory2Proxy*>((EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_createThemeFromXmlElement_ITheme_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CThemeFactory2::createThemeFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_destroyTheme_void_ITheme(void *pObjectXXXX, _in EarthView::World::Spatial::Theme::ITheme* pTheme )
				{
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					ptrNativeObject->destroyTheme(pTheme);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CThemeFactory2_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CThemeFactory2* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactory2*) pObjectXXXX;
					ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CThemeFactoryRegistry_registryFactory_int_CThemeFactory2(void *pObjectXXXX, _in EarthView::World::Spatial::Theme::CThemeFactory2* factory )
				{
					EarthView::World::Spatial::Theme::CThemeFactoryRegistry* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactoryRegistry*) pObjectXXXX;
					int objXXXX = ptrNativeObject->registryFactory(factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::CThemeFactory2*  _stdcall EarthView_World_Spatial_Theme_CThemeFactoryRegistry_getFactory_CThemeFactory2_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial::Theme::CThemeFactoryRegistry* ptrNativeObject = (EarthView::World::Spatial::Theme::CThemeFactoryRegistry*) pObjectXXXX;
					EarthView::World::Spatial::Theme::CThemeFactory2* objXXXX = ptrNativeObject->getFactory(key1);
					return objXXXX;
				}
			}
		}
	}
}
