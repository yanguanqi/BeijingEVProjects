/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/plugin.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef char*  ( _stdcall EarthView_World_Core_CPlugin_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CPlugin_install_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CPlugin_initialise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CPlugin_shutdown_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CPlugin_uninstall_void_Callback)();
			class CPluginProxy : public EarthView::World::Core::CPlugin
			{
			private:
				EarthView_World_Core_CPlugin_getName_EVString_Callback* m_EarthView_World_Core_CPlugin_getName_EVString_Callback;
				EarthView_World_Core_CPlugin_install_void_Callback* m_EarthView_World_Core_CPlugin_install_void_Callback;
				EarthView_World_Core_CPlugin_initialise_void_Callback* m_EarthView_World_Core_CPlugin_initialise_void_Callback;
				EarthView_World_Core_CPlugin_shutdown_void_Callback* m_EarthView_World_Core_CPlugin_shutdown_void_Callback;
				EarthView_World_Core_CPlugin_uninstall_void_Callback* m_EarthView_World_Core_CPlugin_uninstall_void_Callback;
			public:
				CPluginProxy(EarthView::World::Core::CNameValuePairList *pList) : CPlugin(pList)
				{
					m_EarthView_World_Core_CPlugin_getName_EVString_Callback = NULL;
					m_EarthView_World_Core_CPlugin_install_void_Callback = NULL;
					m_EarthView_World_Core_CPlugin_initialise_void_Callback = NULL;
					m_EarthView_World_Core_CPlugin_shutdown_void_Callback = NULL;
					m_EarthView_World_Core_CPlugin_uninstall_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CPlugin_getName_EVString(EarthView_World_Core_CPlugin_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CPlugin_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CPlugin_install_void(EarthView_World_Core_CPlugin_install_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CPlugin_install_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CPlugin_initialise_void(EarthView_World_Core_CPlugin_initialise_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CPlugin_initialise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CPlugin_shutdown_void(EarthView_World_Core_CPlugin_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CPlugin_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CPlugin_uninstall_void(EarthView_World_Core_CPlugin_uninstall_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CPlugin_uninstall_void_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Core_CPlugin_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CPlugin_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPlugin::getName();
				}
				virtual void install()
				{
					if(m_EarthView_World_Core_CPlugin_install_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CPlugin_install_void_Callback();
					}
					else
						return this->CPlugin::install();
				}
				virtual void initialise()
				{
					if(m_EarthView_World_Core_CPlugin_initialise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CPlugin_initialise_void_Callback();
					}
					else
						return this->CPlugin::initialise();
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Core_CPlugin_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CPlugin_shutdown_void_Callback();
					}
					else
						return this->CPlugin::shutdown();
				}
				virtual void uninstall()
				{
					if(m_EarthView_World_Core_CPlugin_uninstall_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CPlugin_uninstall_void_Callback();
					}
					else
						return this->CPlugin::uninstall();
				}
			};
			REGISTER_FACTORY_CLASS(CPluginProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CPlugin_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				if (dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CPlugin::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CPlugin_getName_EVString( void *pObjectXXXX, EarthView_World_Core_CPlugin_getName_EVString_Callback* pCallback )
			{
				CPluginProxy* ptr = dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CPlugin_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CPlugin_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CPlugin::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_install_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				if (dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CPlugin::install();
				else
					ptrNativeObject->install();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CPlugin_install_void( void *pObjectXXXX, EarthView_World_Core_CPlugin_install_void_Callback* pCallback )
			{
				CPluginProxy* ptr = dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CPlugin_install_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_install_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CPlugin::install();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_initialise_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				if (dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CPlugin::initialise();
				else
					ptrNativeObject->initialise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CPlugin_initialise_void( void *pObjectXXXX, EarthView_World_Core_CPlugin_initialise_void_Callback* pCallback )
			{
				CPluginProxy* ptr = dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CPlugin_initialise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_initialise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CPlugin::initialise();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				if (dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CPlugin::shutdown();
				else
					ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CPlugin_shutdown_void( void *pObjectXXXX, EarthView_World_Core_CPlugin_shutdown_void_Callback* pCallback )
			{
				CPluginProxy* ptr = dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CPlugin_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_shutdown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CPlugin::shutdown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_uninstall_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				if (dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CPlugin::uninstall();
				else
					ptrNativeObject->uninstall();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CPlugin_uninstall_void( void *pObjectXXXX, EarthView_World_Core_CPlugin_uninstall_void_Callback* pCallback )
			{
				CPluginProxy* ptr = dynamic_cast<CPluginProxy*>((EarthView::World::Core::CPlugin*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CPlugin_uninstall_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CPlugin_uninstall_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CPlugin* ptrNativeObject = (EarthView::World::Core::CPlugin*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CPlugin::uninstall();
			}
		}
	}
}
