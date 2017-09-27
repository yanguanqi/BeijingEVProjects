/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/kmlfeatureedittoolmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			namespace KmlManager
			{
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback)();
				class CKmlFeatureEditToolManagerProxy : public EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager
				{
				private:
					EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback;
					EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback* m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback;
				public:
					CKmlFeatureEditToolManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFeatureEditToolManager(pList)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback = NULL;
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void(EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void(EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void(EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback = pCallback;
					}
					virtual void refresh()
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback();
						}
						else
							return this->CKmlFeatureEditToolManager::refresh();
					}
					virtual void update()
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback();
						}
						else
							return this->CKmlFeatureEditToolManager::update();
					}
					virtual void toolDeactivatedUpdate()
					{
						if(m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback();
						}
						else
							return this->CKmlFeatureEditToolManager::toolDeactivatedUpdate();
					}
				};
				REGISTER_FACTORY_CLASS(CKmlFeatureEditToolManagerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					if (dynamic_cast<CKmlFeatureEditToolManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager::refresh();
					else
						ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_Callback* pCallback )
				{
					CKmlFeatureEditToolManagerProxy* ptr = dynamic_cast<CKmlFeatureEditToolManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager::refresh();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_destoryCurrentTool_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					ptrNativeObject->destoryCurrentTool();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_refresh_void_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					ptrNativeObject->refresh(geoObj, parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_endEdit_CGeoObjectExtension_ev_bool_CKmlDocument(void *pObjectXXXX, _in ev_bool isCancelEdit, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->endEdit(isCancelEdit, parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_getSingletonPtr_CKmlFeatureEditToolManager_CSceneManager_CCamera_CViewport_CKmlTreeManager(_in EarthView::World::Graphic::CSceneManager* ref_sceneMgr, _in EarthView::World::Graphic::CCamera* ref_camera, _in EarthView::World::Graphic::CViewport* ref_viewPort, _in EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager* ref_treeEventObj )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* objXXXX = EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager::getSingletonPtr(ref_sceneMgr, ref_camera, ref_viewPort, ref_treeEventObj);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_createTool_ITool_CGeoObjectExtension_CKmlDocument_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* data, _in EarthView::World::Spatial::Kml::CKmlDocument* parent, _in ev_bool isCreate )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->createTool(data, parent, isCreate);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ITool*  _stdcall Get_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_mCurrentTool( void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ITool* objXXXX = ptrNativeObject->mCurrentTool;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_mCurrentTool( void *pObjectXXXX, EarthView::World::Spatial::SystemUI::ITool*  value )
				{
					((EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)pObjectXXXX)->mCurrentTool = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall Get_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_mSymbol( void *pObjectXXXX )
				{
					EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->mSymbol;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_mSymbol( void *pObjectXXXX, EarthView::World::Spatial::Display::ISymbol*  value )
				{
					((EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*)pObjectXXXX)->mSymbol = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void_Callback* pCallback )
				{
					CKmlFeatureEditToolManagerProxy* ptr = dynamic_cast<CKmlFeatureEditToolManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_update_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void( void *pObjectXXXX, EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void_Callback* pCallback )
				{
					CKmlFeatureEditToolManagerProxy* ptr = dynamic_cast<CKmlFeatureEditToolManagerProxy*>((EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3DProxy_KmlManager_CKmlFeatureEditToolManager_toolDeactivatedUpdate_void(pCallback);
					}
				}
			}
		}
	}
}
