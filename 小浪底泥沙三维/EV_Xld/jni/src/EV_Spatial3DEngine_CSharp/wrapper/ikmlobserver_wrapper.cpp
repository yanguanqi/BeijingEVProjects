/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/ikmlobserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback)();
				class IKmlObserverProxy : public EarthView::World::Spatial3D::KmlManager::IKmlObserver
				{
				private:
					EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback* m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback;
					EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback* m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback;
					EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback;
				public:
					IKmlObserverProxy(EarthView::World::Core::CNameValuePairList *pList) : IKmlObserver(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void(EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void(EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void(EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback = pCallback;
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback();
						}
						else
							return this->IKmlObserver::update();
					}
					virtual void refresh()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback();
						}
						else
							return this->IKmlObserver::refresh();
					}
					virtual void toolDeactivatedUpdate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback();
						}
						else
							return this->IKmlObserver::toolDeactivatedUpdate();
					}
				};
				REGISTER_FACTORY_CLASS(IKmlObserverProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX;
					if (dynamic_cast<IKmlObserverProxy*>((EarthView::World::Spatial3D::KmlManager::IKmlObserver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::IKmlObserver::update();
					else
						ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_Callback* pCallback )
				{
					IKmlObserverProxy* ptr = dynamic_cast<IKmlObserverProxy*>((EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_update_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::IKmlObserver::update();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX;
					if (dynamic_cast<IKmlObserverProxy*>((EarthView::World::Spatial3D::KmlManager::IKmlObserver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::IKmlObserver::refresh();
					else
						ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_Callback* pCallback )
				{
					IKmlObserverProxy* ptr = dynamic_cast<IKmlObserverProxy*>((EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_refresh_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::IKmlObserver::refresh();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX;
					if (dynamic_cast<IKmlObserverProxy*>((EarthView::World::Spatial3D::KmlManager::IKmlObserver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::IKmlObserver::toolDeactivatedUpdate();
					else
						ptrNativeObject->toolDeactivatedUpdate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_Callback* pCallback )
				{
					IKmlObserverProxy* ptr = dynamic_cast<IKmlObserverProxy*>((EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_IKmlObserver_toolDeactivatedUpdate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::IKmlObserver* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::IKmlObserver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::IKmlObserver::toolDeactivatedUpdate();
				}
			}
		}
	}
}
