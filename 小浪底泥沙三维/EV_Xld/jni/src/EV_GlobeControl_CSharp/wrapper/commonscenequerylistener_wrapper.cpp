/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/commonscenequerylistener.h"
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback)(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback)(_in void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback)(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback)(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback)(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* entry, _in const void* newMatrix, _in int type);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback)();
				class ICommonSceneQueryListenerProxy : public EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener
				{
				private:
					EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback* m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback;
					EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback* m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback;
					EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback* m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback;
					EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback* m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback;
				public:
					ICommonSceneQueryListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : ICommonSceneQueryListener(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback = pCallback;
					}
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in EarthView::World::Spatial3D::CGlobeSelection& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback(globeControl, &result);
						}
						else
							return this->ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
					}
					virtual void onSelectionChanged(_in EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback(&result);
						}
						else
							return this->ICommonSceneQueryListener::onSelectionChanged(result);
					}
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback(globeControl, &result);
						}
						else
							return this->ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
					}
					virtual void onSelectionChanged(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in EarthView::World::Graphic::SceneQueryResult& result)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback(globeControl, &result);
						}
						else
							return this->ICommonSceneQueryListener::onSelectionChanged(globeControl, result);
					}
					virtual void onSelectedObjectMoved(_in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in EarthView::World::Graphic::RaySceneQueryResultEntry& entry, _in const EarthView::World::Spatial::Math::CMatrix4& newMatrix, _in EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType type)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback(globeControl, &entry, &newMatrix, (int)type);
						}
						else
							return this->ICommonSceneQueryListener::onSelectedObjectMoved(globeControl, entry, newMatrix, type);
					}
					virtual void onDeleteKeyPressed()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback();
						}
						else
							return this->ICommonSceneQueryListener::onDeleteKeyPressed();
					}
				};
				REGISTER_FACTORY_CLASS(ICommonSceneQueryListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					if (dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Spatial3D::CGlobeSelection*)result);
					else
						ptrNativeObject->onSelectionChanged(globeControl, *(EarthView::World::Spatial3D::CGlobeSelection*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_Callback* pCallback )
				{
					ICommonSceneQueryListenerProxy* ptr = dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_CGlobeSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Spatial3D::CGlobeSelection*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(void *pObjectXXXX, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					if (dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
					else
						ptrNativeObject->onSelectionChanged(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_Callback* pCallback )
				{
					ICommonSceneQueryListenerProxy* ptr = dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_RaySceneQueryResult_NoVirtual(void *pObjectXXXX, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					if (dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::RaySceneQueryResult*)result);
					else
						ptrNativeObject->onSelectionChanged(globeControl, *(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_Callback* pCallback )
				{
					ICommonSceneQueryListenerProxy* ptr = dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_RaySceneQueryResult_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					if (dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::SceneQueryResult*)result);
					else
						ptrNativeObject->onSelectionChanged(globeControl, *(EarthView::World::Graphic::SceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_Callback* pCallback )
				{
					ICommonSceneQueryListenerProxy* ptr = dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectionChanged_void_C3DControl_SceneQueryResult_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* result )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectionChanged(globeControl, *(EarthView::World::Graphic::SceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* entry, _in const void* newMatrix, _in int type )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					if (dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectedObjectMoved(globeControl, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)type);
					else
						ptrNativeObject->onSelectedObjectMoved(globeControl, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_Callback* pCallback )
				{
					ICommonSceneQueryListenerProxy* ptr = dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onSelectedObjectMoved_void_C3DControl_RaySceneQueryResultEntry_CMatrix4_GUIEventType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::C3DControl* globeControl, _in void* entry, _in const void* newMatrix, _in int type )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onSelectedObjectMoved(globeControl, *(EarthView::World::Graphic::RaySceneQueryResultEntry*)entry, *(EarthView::World::Spatial::Math::CMatrix4*)newMatrix, (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					if (dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onDeleteKeyPressed();
					else
						ptrNativeObject->onDeleteKeyPressed();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_Callback* pCallback )
				{
					ICommonSceneQueryListenerProxy* ptr = dynamic_cast<ICommonSceneQueryListenerProxy*>((EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_ICommonSceneQueryListener_onDeleteKeyPressed_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::ICommonSceneQueryListener::onDeleteKeyPressed();
				}
			}
		}
	}
}
