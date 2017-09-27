/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globelockcamerahandler.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback)(_in const void* v);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CGlobeLockCameraHandlerProxy : public EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CGlobeLockCameraHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeLockCameraHandler(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleUseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback(userEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleUseEvent(userEvent);
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleEvent(guiEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleFrameEvent(guiEvent);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleMouseDownEvent(mouseEvent);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleMouseMoveEvent(mouseEvent);
					}
					virtual ev_bool handleMouseUp(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleMouseUp(mouseEvent);
					}
					virtual ev_bool handleMouseWheelEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback(mouseEvent);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::handleMouseWheelEvent(mouseEvent);
					}
					virtual ev_real64 computeAltitudeDelta(_in const EarthView::World::Spatial::Math::CVector3& v)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback(&v);
							return returnValue;
						}
						else
							return this->CGlobeLockCameraHandler::computeAltitudeDelta(v);
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeLockCameraHandlerProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleUseEvent(userEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUseEvent(userEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleUseEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleUseEvent(userEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleFrameEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleFrameEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseDownEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseDownEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseMoveEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseMoveEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseUp(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseUp(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseUp_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseUp(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseWheelEvent(mouseEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseWheelEvent(mouseEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_handleMouseWheelEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::handleMouseWheelEvent(mouseEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_calculateMoveable_ev_bool_CGUIEvent_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* firstEvent, _in EarthView::World::Spatial::SystemUI::CGUIEvent* secondEvent )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->calculateMoveable(firstEvent, secondEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					if (dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_Callback* pCallback )
				{
					CGlobeLockCameraHandlerProxy* ptr = dynamic_cast<CGlobeLockCameraHandlerProxy*>((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_computeAltitudeDelta_ev_real64_CVector3_NoVirtual(void *pObjectXXXX, _in const void* v )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::computeAltitudeDelta(*(EarthView::World::Spatial::Math::CVector3*)v);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_needResetCamera_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->needResetCamera();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_calculateZoomFactor_ev_real64_ev_real32(void *pObjectXXXX, _in ev_real32 mouseWheelDelta )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calculateZoomFactor(mouseWheelDelta);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_getRotationMode_RotationMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode objXXXX = ptrNativeObject->getRotationMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_setRotationMode_void_RotationMode(void *pObjectXXXX, _in int rotationMode )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ptrNativeObject->setRotationMode((EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler::RotationMode)rotationMode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_setEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enbale )
				{
					EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ptrNativeObject->setEnable(enbale);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeLockCameraHandler_getEnable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEnable();
					return objXXXX;
				}
			}
		}
	}
}
