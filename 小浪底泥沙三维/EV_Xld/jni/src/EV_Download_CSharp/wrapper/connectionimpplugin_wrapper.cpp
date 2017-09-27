/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/connectionimpplugin.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				typedef EarthView::World::Spatial::Download::ConnectionImp*  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback)(_in ev_int32 type);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback)(_in ev_bool connectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback)();
				class ConnectionImpPluginProxy : public EarthView::World::Spatial::Download::ConnectionImpPlugin
				{
				private:
					EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback;
					EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback* m_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback;
				public:
					ConnectionImpPluginProxy(EarthView::World::Core::CNameValuePairList *pList) : ConnectionImpPlugin(pList)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32(EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool(EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool(EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool(EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString(EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void(EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void(EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void(EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void(EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback = pCallback;
					}
					virtual void install()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback();
						}
						else
							return this->ConnectionImpPlugin::install();
					}
					virtual void initialise()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback();
						}
						else
							return this->ConnectionImpPlugin::initialise();
					}
					virtual void shutdown()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback();
						}
						else
							return this->ConnectionImpPlugin::shutdown();
					}
					virtual void uninstall()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback();
						}
						else
							return this->ConnectionImpPlugin::uninstall();
					}
					virtual EarthView::World::Spatial::Download::ConnectionImp* createConnectionImp(_in ev_int32 type)
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Download::ConnectionImp* returnValue = m_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback(type);
							return returnValue;
						}
						else
							return this->ConnectionImpPlugin::createConnectionImp(type);
					}
					virtual ev_bool useMetadataServiceConnectState()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ConnectionImpPlugin::useMetadataServiceConnectState();
					}
					virtual void setMetadataServiceConnectState(_in ev_bool connectable)
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback(connectable);
						}
						else
							return this->ConnectionImpPlugin::setMetadataServiceConnectState(connectable);
					}
					virtual ev_bool getMetadataServiceConnectState()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ConnectionImpPlugin::getMetadataServiceConnectState();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ConnectionImpPlugin::getName();
					}
				};
				REGISTER_FACTORY_CLASS(ConnectionImpPluginProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_getHost_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getHost();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_setPluginPath_void_EVString(void *pObjectXXXX, _in const char* pluginPaht )
				{
					EarthView::World::Core::ev_string pluginPaht1 = pluginPaht;
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ptrNativeObject->setPluginPath(pluginPaht1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_getPluginPath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getPluginPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::install();
					else
						ptrNativeObject->install();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_install_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::install();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::initialise();
					else
						ptrNativeObject->initialise();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_initialise_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::initialise();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::shutdown();
					else
						ptrNativeObject->shutdown();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_shutdown_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::shutdown();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::uninstall();
					else
						ptrNativeObject->uninstall();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_uninstall_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::uninstall();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_connectionImpCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->connectionImpCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Download::ConnectionImp*  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32(void *pObjectXXXX, _in ev_int32 type )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Download::ConnectionImp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::createConnectionImp(type);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Download::ConnectionImp* objXXXX = ptrNativeObject->createConnectionImp(type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Download::ConnectionImp*  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_createConnectionImp_ConnectionImp_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 type )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					EarthView::World::Spatial::Download::ConnectionImp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::createConnectionImp(type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::useMetadataServiceConnectState();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->useMetadataServiceConnectState();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_useMetadataServiceConnectState_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::useMetadataServiceConnectState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool(void *pObjectXXXX, _in ev_bool connectable )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::setMetadataServiceConnectState(connectable);
					else
						ptrNativeObject->setMetadataServiceConnectState(connectable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_setMetadataServiceConnectState_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool connectable )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::setMetadataServiceConnectState(connectable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::getMetadataServiceConnectState();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getMetadataServiceConnectState();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_getMetadataServiceConnectState_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImpPlugin::getMetadataServiceConnectState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImpPlugin_releaseConnectionImp_void_ConnectionImp(_in EarthView::World::Spatial::Download::ConnectionImp* pConnectionImp )
				{
					EarthView::World::Spatial::Download::ConnectionImpPlugin::releaseConnectionImp(pConnectionImp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString_Callback* pCallback )
				{
					ConnectionImpPluginProxy* ptr = dynamic_cast<ConnectionImpPluginProxy*>((EarthView::World::Spatial::Download::ConnectionImpPlugin*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImpPlugin_getName_EVString(pCallback);
					}
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback)(_in ev_int32 timeout);
				class ConnectionImpProxy : public EarthView::World::Spatial::Download::ConnectionImp
				{
				private:
					EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback* m_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback;
					EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback* m_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback;
					EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback* m_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback;
				public:
					ConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : ConnectionImp(pList)
					{
						m_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool(EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool(EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32(EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback = pCallback;
					}
					virtual ev_bool openConnection()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ConnectionImp::openConnection();
					}
					virtual ev_bool closeConnection()
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ConnectionImp::closeConnection();
					}
					virtual void setConnectTimeout(_in ev_int32 timeout)
					{
						if(m_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback(timeout);
						}
						else
							return this->ConnectionImp::setConnectTimeout(timeout);
					}
				};
				REGISTER_FACTORY_CLASS(ConnectionImpProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImp_setWebServiceConnection_void_CWebServiceConnection(void *pObjectXXXX, _in EarthView::World::Spatial::Download::CWebServiceConnection* pWebServiceConnection )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					ptrNativeObject->setWebServiceConnection(pWebServiceConnection);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_ConnectionImp_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpProxy*>((EarthView::World::Spatial::Download::ConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImp::openConnection();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->openConnection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_Callback* pCallback )
				{
					ConnectionImpProxy* ptr = dynamic_cast<ConnectionImpProxy*>((EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImp_openConnection_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImp::openConnection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpProxy*>((EarthView::World::Spatial::Download::ConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImp::closeConnection();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeConnection();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_Callback* pCallback )
				{
					ConnectionImpProxy* ptr = dynamic_cast<ConnectionImpProxy*>((EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_ConnectionImp_closeConnection_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImp::closeConnection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32(void *pObjectXXXX, _in ev_int32 timeout )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					if (dynamic_cast<ConnectionImpProxy*>((EarthView::World::Spatial::Download::ConnectionImp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImp::setConnectTimeout(timeout);
					else
						ptrNativeObject->setConnectTimeout(timeout);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_Callback* pCallback )
				{
					ConnectionImpProxy* ptr = dynamic_cast<ConnectionImpProxy*>((EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_ConnectionImp_setConnectTimeout_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 timeout )
				{
					EarthView::World::Spatial::Download::ConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::ConnectionImp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::ConnectionImp::setConnectTimeout(timeout);
				}
			}
		}
	}
}
