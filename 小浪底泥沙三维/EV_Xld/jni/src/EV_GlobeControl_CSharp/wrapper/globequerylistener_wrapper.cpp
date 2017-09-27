/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globequerylistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback)(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback)(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback)(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback)(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* entry, _in const void* newMatrix, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback)();
				class IGlobeQueryListenerProxy : public EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener
				{
				private:
					EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback* m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback;
					EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback* m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback;
					EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback* m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback;
				public:
					IGlobeQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IGlobeQueryListener(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback = pCallback;
					}
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout EarthView::World::Spatial3D::CGlobeSelection& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback(globeControl, &result);
						}
						else
							return this->IGlobeQueryListener::onSelectionChanged(globeControl, result);
					}
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback(globeControl, &result);
						}
						else
							return this->IGlobeQueryListener::onSelectionChanged(globeControl, result);
					}
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout EarthView::World::Graphic::SceneQueryResult& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback(globeControl, &result);
						}
						else
							return this->IGlobeQueryListener::onSelectionChanged(globeControl, result);
					}
					virtual void onSelectedObjectMoved(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout EarthView::World::Graphic::RaySceneQueryResultEntry& entry, _in const EarthView::World::Spatial::Math::CMatrix4& newMatrix, _in EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType type)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback(globeControl, &entry, &newMatrix, (int)type);
						}
						else
							return this->IGlobeQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
					}
					virtual void onDeleteKeyPressed()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback();
						}
						else
							return this->IGlobeQueryListener::onDeleteKeyPressed();
					}
				};
				REGISTER_FACTORY_CLASS(IGlobeQueryListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					if (dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Spatial3D::CGlobeSelection*)result);
					else
						ptrNativeObject->onSelectionChanged(globeControl, *(EarthView::World::Spatial3D::CGlobeSelection*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_Callback* pCallback )
				{
					IGlobeQueryListenerProxy* ptr = dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_CGlobeSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Spatial3D::CGlobeSelection*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					if (dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::RaySceneQueryResult*)result);
					else
						ptrNativeObject->onSelectionChanged(globeControl, *(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_Callback* pCallback )
				{
					IGlobeQueryListenerProxy* ptr = dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_RaySceneQueryResult_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					if (dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::SceneQueryResult*)result);
					else
						ptrNativeObject->onSelectionChanged(globeControl, *(EarthView::World::Graphic::SceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_Callback* pCallback )
				{
					IGlobeQueryListenerProxy* ptr = dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectionChanged_void_CGlobeControl_SceneQueryResult_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* result )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::SceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* entry, _in const void* newMatrix, _in int type )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					if (dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectedObjectMoved(globeControl, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType)type);
					else
						ptrNativeObject->onSelectedObjectMoved(globeControl, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_Callback* pCallback )
				{
					IGlobeQueryListenerProxy* ptr = dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onSelectedObjectMoved_void_CGlobeControl_RaySceneQueryResultEntry_CMatrix4_MouseOpType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _inout void* entry, _in const void* newMatrix, _in int type )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onSelectedObjectMoved(globeControl, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::MouseOpType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					if (dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onDeleteKeyPressed();
					else
						ptrNativeObject->onDeleteKeyPressed();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_Callback* pCallback )
				{
					IGlobeQueryListenerProxy* ptr = dynamic_cast<IGlobeQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_IGlobeQueryListener_onDeleteKeyPressed_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::IGlobeQueryListener::onDeleteKeyPressed();
				}
			}
		}
	}
}
