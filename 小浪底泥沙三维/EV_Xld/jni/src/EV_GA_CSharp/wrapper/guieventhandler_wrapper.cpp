/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/guieventhandler.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
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
			namespace Controls
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGUIEventHandlerProxy : public EarthView::World::Spatial3D::Controls::CGUIEventHandler
				{
				private:
					EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGUIEventHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGUIEventHandler(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGUIEventHandler::handleEvent(guiEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CGUIEventHandlerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventHandler*) pObjectXXXX;
					if (dynamic_cast<CGUIEventHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGUIEventHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGUIEventHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGUIEventHandlerProxy* ptr = dynamic_cast<CGUIEventHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGUIEventHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGUIEventHandler::handleEvent(guiEvent);
					return objXXXX;
				}
			}
		}
	}
}
