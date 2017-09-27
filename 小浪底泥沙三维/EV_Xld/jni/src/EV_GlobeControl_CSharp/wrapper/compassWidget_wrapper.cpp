/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/compassWidget.h"
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
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEvent_mvisibleMode( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::VisibleMode objXXXX = ptrNativeObject->mvisibleMode;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEvent_mvisibleMode( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent*)pObjectXXXX)->mvisibleMode = (EarthView::World::Spatial3D::Controls::VisibleMode)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent*  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_get_CCompassWidgetVisibleEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorAssign_CCompassWidgetVisibleEventPtr_CCompassWidgetVisibleEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorAssign_CCompassWidgetVisibleEventPtr_CCompassWidgetVisibleEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidgetVisibleEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport);
				class CCompassWidgetProxy : public EarthView::World::Spatial3D::Controls::CCompassWidget
				{
				private:
					EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback;
				public:
					CCompassWidgetProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompassWidget(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = pCallback;
					}
					virtual void additionMouseUp()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback();
						}
						else
							return this->CCompassWidget::additionMouseUp();
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback(event, viewport);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleFrameEvent(event, viewport);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleMouseDownEvent(guiEvent);
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleMouseUpEvent(guiEvent);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleMouseMoveEvent(guiEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleUserEvent(event);
					}
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCompassWidget::handeMouseDbClickEvent(event);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleKeyDownEvent(event);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCompassWidget::handleKeyUpEvent(event);
					}
				};
				REGISTER_FACTORY_CLASS(CCompassWidgetProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_setHandleEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool canHandle )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ptrNativeObject->setHandleEnable(canHandle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					if (dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::additionMouseUp();
					else
						ptrNativeObject->additionMouseUp();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_additionMouseUp_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::additionMouseUp();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					if (dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleFrameEvent(event, viewport);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(event, viewport);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleFrameEvent(event, viewport);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					if (dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseDownEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseDownEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					if (dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseUpEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseUpEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					if (dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseMoveEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleMouseMoveEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					if (dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleUserEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CCompassWidget_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CCompassWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CCompassWidget::handleUserEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCompassWidgetProxy* ptr = dynamic_cast<CCompassWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCompassWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCompassWidget_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
			}
		}
	}
}
