/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecontrollistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback)(_in EarthView::World::Spatial3D::CGlobeSelection* globeSelection);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback)(_inout void* result);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback)(_in EarthView::World::Spatial::SystemUI::ITool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback)(_in EarthView::World::Spatial::SystemUI::ITool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback)(_in Real lat, _in Real lon, _in Real alt, _in ev_bool isValid);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback)(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback)(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _in EarthView::World::Spatial::SystemUI::ITool* pOldTool, _in EarthView::World::Spatial::SystemUI::ITool* pNewTool);
				class CGlobeControlListenerProxy : public EarthView::World::Spatial3D::Controls::CGlobeControlListener
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback;
				public:
					CGlobeControlListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeControlListener(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback = pCallback;
					}
					virtual void onGlobeSelectionChanged(_in EarthView::World::Spatial3D::CGlobeSelection* globeSelection)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback(globeSelection);
						}
						else
							return this->CGlobeControlListener::onGlobeSelectionChanged(globeSelection);
					}
					virtual void onRaySceneQueryResult(_inout EarthView::World::Graphic::RaySceneQueryResult& result)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback(&result);
						}
						else
							return this->CGlobeControlListener::onRaySceneQueryResult(result);
					}
					virtual void onAnalysisStart(_in EarthView::World::Spatial::SystemUI::ITool* tool)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback(tool);
						}
						else
							return this->CGlobeControlListener::onAnalysisStart(tool);
					}
					virtual void onAnalysisEnd(_in EarthView::World::Spatial::SystemUI::ITool* tool)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback(tool);
						}
						else
							return this->CGlobeControlListener::onAnalysisEnd(tool);
					}
					virtual void onMousePosition(_in Real lat, _in Real lon, _in Real alt, _in ev_bool isValid)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback(lat, lon, alt, isValid);
						}
						else
							return this->CGlobeControlListener::onMousePosition(lat, lon, alt, isValid);
					}
					virtual void onFlyFinished(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback(globeControl);
						}
						else
							return this->CGlobeControlListener::onFlyFinished(globeControl);
					}
					virtual void onCurrentToolChanged(_in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _in EarthView::World::Spatial::SystemUI::ITool* pOldTool, _in EarthView::World::Spatial::SystemUI::ITool* pNewTool)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback(globeControl, pOldTool, pNewTool);
						}
						else
							return this->CGlobeControlListener::onCurrentToolChanged(globeControl, pOldTool, pNewTool);
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeControlListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeSelection* globeSelection )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onGlobeSelectionChanged(globeSelection);
					else
						ptrNativeObject->onGlobeSelectionChanged(globeSelection);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onGlobeSelectionChanged_void_CGlobeSelection_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::CGlobeSelection* globeSelection )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onGlobeSelectionChanged(globeSelection);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(void *pObjectXXXX, _inout void* result )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onRaySceneQueryResult(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
					else
						ptrNativeObject->onRaySceneQueryResult(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onRaySceneQueryResult_void_RaySceneQueryResult_NoVirtual(void *pObjectXXXX, _inout void* result )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onRaySceneQueryResult(*(EarthView::World::Graphic::RaySceneQueryResult*)result);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisStart(tool);
					else
						ptrNativeObject->onAnalysisStart(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisStart_void_ITool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisStart(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisEnd(tool);
					else
						ptrNativeObject->onAnalysisEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onAnalysisEnd_void_ITool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ITool* tool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onAnalysisEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(void *pObjectXXXX, _in Real lat, _in Real lon, _in Real alt, _in ev_bool isValid )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onMousePosition(lat, lon, alt, isValid);
					else
						ptrNativeObject->onMousePosition(lat, lon, alt, isValid);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onMousePosition_void_Real_Real_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in Real lat, _in Real lon, _in Real alt, _in ev_bool isValid )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onMousePosition(lat, lon, alt, isValid);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onFlyFinished(globeControl);
					else
						ptrNativeObject->onFlyFinished(globeControl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onFlyFinished_void_CGlobeControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onFlyFinished(globeControl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _in EarthView::World::Spatial::SystemUI::ITool* pOldTool, _in EarthView::World::Spatial::SystemUI::ITool* pNewTool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					if (dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onCurrentToolChanged(globeControl, pOldTool, pNewTool);
					else
						ptrNativeObject->onCurrentToolChanged(globeControl, pOldTool, pNewTool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_Callback* pCallback )
				{
					CGlobeControlListenerProxy* ptr = dynamic_cast<CGlobeControlListenerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlListener_onCurrentToolChanged_void_CGlobeControl_ITool_ITool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl, _in EarthView::World::Spatial::SystemUI::ITool* pOldTool, _in EarthView::World::Spatial::SystemUI::ITool* pNewTool )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeControlListener::onCurrentToolChanged(globeControl, pOldTool, pNewTool);
				}
			}
		}
	}
}
