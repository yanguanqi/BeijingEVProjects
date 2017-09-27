/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamiccameralockhandler.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
			class CDynamicCameraLockHandlerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback;
			public:
				CDynamicCameraLockHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicCameraLockHandler(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
				}
				virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
						return returnValue;
					}
					else
						return this->CDynamicCameraLockHandler::handleEvent(guiEvent);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicCameraLockHandlerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				if (dynamic_cast<CDynamicCameraLockHandlerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
			{
				CDynamicCameraLockHandlerProxy* ptr = dynamic_cast<CDynamicCameraLockHandlerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler::handleEvent(guiEvent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(guiEvent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->handleFrameEvent(guiEvent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(guiEvent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(guiEvent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->handleMouseWheelEvent(guiEvent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicCameraLockHandler_handleKeyEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->handleKeyEvent(guiEvent);
				return objXXXX;
			}
		}
	}
}
