/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/drawthemefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Renderer
			{
				typedef EarthView::World::Spatial2D::Renderer::CDrawTheme*  ( _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback)(_in char*& key);
				class CDrawThemeFactoryProxy : public EarthView::World::Spatial2D::Renderer::CDrawThemeFactory
				{
				private:
					EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback* m_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback;
				public:
					CDrawThemeFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDrawThemeFactory(pList)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CDrawThemeFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback = pCallback;
					}
					virtual EarthView::World::Spatial2D::Renderer::CDrawTheme* create(_in const EVString& key)
					{
						if(m_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* key_Char = key.makeBuffer();
							EarthView::World::Spatial2D::Renderer::CDrawTheme* returnValue = m_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback(key_Char);
							return returnValue;
						}
						else
							return this->CDrawThemeFactory::create(key);
					}
				};
				REGISTER_FACTORY_CLASS(CDrawThemeFactoryProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_getKeys_CStringArray(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_isSupported_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSupported(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Renderer::CDrawTheme*  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX;
					if (dynamic_cast<CDrawThemeFactoryProxy*>((EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial2D::Renderer::CDrawTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawThemeFactory::create(key1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial2D::Renderer::CDrawTheme* objXXXX = ptrNativeObject->create(key1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_Callback* pCallback )
				{
					CDrawThemeFactoryProxy* ptr = dynamic_cast<CDrawThemeFactoryProxy*>((EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Renderer::CDrawTheme*  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_create_CDrawTheme_EVString_NoVirtual(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX;
					EarthView::World::Spatial2D::Renderer::CDrawTheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Renderer::CDrawThemeFactory::create(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_destroy_void_CDrawTheme(void *pObjectXXXX, _in EarthView::World::Spatial2D::Renderer::CDrawTheme* obj )
				{
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX;
					ptrNativeObject->destroy(obj);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactory_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*) pObjectXXXX;
					ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactoryRegistry_registryFactory_int_CDrawThemeFactory(void *pObjectXXXX, _in EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* factory )
				{
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry*) pObjectXXXX;
					int objXXXX = ptrNativeObject->registryFactory(factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Renderer::CDrawThemeFactory*  _stdcall EarthView_World_Spatial2D_Renderer_CDrawThemeFactoryRegistry_getFactory_CDrawThemeFactory_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					const EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry*) pObjectXXXX;
					EarthView::World::Spatial2D::Renderer::CDrawThemeFactory* objXXXX = ptrNativeObject->getFactory(key1);
					return objXXXX;
				}
			}
		}
	}
}
