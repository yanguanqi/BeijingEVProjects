/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmlpanoramahandle.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGui360EventHandlerProxy : public EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler
				{
				private:
					EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGui360EventHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGui360EventHandler(pList)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGui360EventHandler::handleEvent(guiEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CGui360EventHandlerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjectXXXX;
					if (dynamic_cast<CGui360EventHandlerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGui360EventHandlerProxy* ptr = dynamic_cast<CGui360EventHandlerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_create_void_CPanoramaTile(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CPanoramaTile* tile )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjectXXXX;
					ptrNativeObject->create(tile);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_setCameraInPanorama_void_ev_bool(void *pObjectXXXX, _in ev_bool isIn )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjectXXXX;
					ptrNativeObject->setCameraInPanorama(isIn);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGui360EventHandler_isCameraInPanorama_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isCameraInPanorama();
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback)(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback)(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera);
				class CGotoListener360Proxy : public EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360
				{
				private:
					EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback;
				public:
					CGotoListener360Proxy(EarthView::World::Core::CNameValuePairList *pList) : CGotoListener360(pList)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera(EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback = pCallback;
					}
					virtual void cameraHasGetAtTarget(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback(globeCamera);
						}
						else
							return this->CGotoListener360::cameraHasGetAtTarget(globeCamera);
					}
					virtual void stopGoto(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera)
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback(globeCamera);
						}
						else
							return this->CGotoListener360::stopGoto(globeCamera);
					}
				};
				REGISTER_FACTORY_CLASS(CGotoListener360Proxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjectXXXX;
					if (dynamic_cast<CGotoListener360Proxy*>((EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360::cameraHasGetAtTarget(globeCamera);
					else
						ptrNativeObject->cameraHasGetAtTarget(globeCamera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_Callback* pCallback )
				{
					CGotoListener360Proxy* ptr = dynamic_cast<CGotoListener360Proxy*>((EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_cameraHasGetAtTarget_void_CGlobeCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360::cameraHasGetAtTarget(globeCamera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_create_void_CPanoramaTile(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CPanoramaTile* tile )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjectXXXX;
					ptrNativeObject->create(tile);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera_Callback* pCallback )
				{
					CGotoListener360Proxy* ptr = dynamic_cast<CGotoListener360Proxy*>((EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CGotoListener360_stopGoto_void_CGlobeCamera(pCallback);
					}
				}
			}
		}
	}
}
