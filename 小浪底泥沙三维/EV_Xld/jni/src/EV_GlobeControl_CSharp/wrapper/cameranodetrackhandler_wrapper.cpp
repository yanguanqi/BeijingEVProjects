/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/cameranodetrackhandler.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CCameraAnimationHandlerProxy : public EarthView::World::Spatial3D::Controls::CCameraAnimationHandler
				{
				private:
					EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CCameraAnimationHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCameraAnimationHandler(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCameraAnimationHandler::handleEvent(guiEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CCameraAnimationHandlerProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_getAnimationName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getAnimationName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_init_ev_bool_CSceneNode_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_parentNode, _in const char* filePath )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->init(ref_parentNode, filePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_init_ev_bool_CSceneNode_CVector3_CControlPointMap(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode* ref_parentNode, _in const void* localCenter, _in const void* controlPointMap )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->init(ref_parentNode, *(EarthView::World::Spatial::Math::CVector3*)localCenter, *(EarthView::World::Spatial3D::CControlPointMap*)controlPointMap);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					if (dynamic_cast<CCameraAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraAnimationHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCameraAnimationHandlerProxy* ptr = dynamic_cast<CCameraAnimationHandlerProxy*>((EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraAnimationHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_startAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ptrNativeObject->startAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_stopAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ptrNativeObject->stopAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_pauseAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ptrNativeObject->pauseAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraAnimationHandler_continueAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCameraAnimationHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraAnimationHandler*) pObjectXXXX;
					ptrNativeObject->continueAnimation();
				}
			}
		}
	}
}
