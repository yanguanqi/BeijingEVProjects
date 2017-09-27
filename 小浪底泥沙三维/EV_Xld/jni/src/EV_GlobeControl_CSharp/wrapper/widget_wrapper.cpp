/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/widget.h"
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport);
				class CWidgetProxy : public EarthView::World::Spatial3D::Controls::CWidget
				{
				private:
					EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback;
				public:
					CWidgetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWidget(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void(EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = pCallback;
					}
					virtual void additionMouseUp()
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback();
						}
						else
							return this->CWidget::additionMouseUp();
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handleMouseUpEvent(event);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handleMouseMoveEvent(event);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handleMouseDownEvent(event);
					}
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handeMouseDbClickEvent(event);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handleKeyDownEvent(event);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handleKeyUpEvent(event);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CWidget::handleUserEvent(event);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback(event, viewport);
							return returnValue;
						}
						else
							return this->CWidget::handleFrameEvent(event, viewport);
					}
				};
				REGISTER_FACTORY_CLASS(CWidgetProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_setPostion_void_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 left, _in ev_real32 top, _in ev_real32 width, _in ev_real32 height )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->setPostion(left, top, width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_nukeOverlayElement_void_COverlayElement(void *pObjectXXXX, _in EarthView::World::Graphic::COverlayElement* element )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->nukeOverlayElement(element);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_checkMouseEventAvailable_ev_bool_CGUIEvent_CViewport(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkMouseEventAvailable(event, viewport);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_setIgnoreCheckMouseMoveBound_void_ev_bool(void *pObjectXXXX, _in ev_bool ignoreCheckMouseMoveBound )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->setIgnoreCheckMouseMoveBound(ignoreCheckMouseMoveBound);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall EarthView_World_Spatial3D_Controls_CWidget_getOverlayElement_COverlayContainer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->getOverlayElement();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_Controls_CWidget_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_hide_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->hide();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_show_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->show();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_setZorder_void_int(void *pObjectXXXX, _in int zorder )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->setZorder(zorder);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CWidget_getZorder_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getZorder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::additionMouseUp();
					else
						ptrNativeObject->additionMouseUp();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_additionMouseUp_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::additionMouseUp();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleMouseUpEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleMouseUpEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleMouseMoveEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleMouseMoveEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleMouseDownEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleMouseDownEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handeMouseDbClickEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handeMouseDbClickEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handeMouseDbClickEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleKeyDownEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyDownEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleKeyDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleKeyDownEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleKeyUpEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyUpEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleKeyUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleKeyUpEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleUserEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleUserEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					if (dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleFrameEvent(event, viewport);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(event, viewport);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback )
				{
					CWidgetProxy* ptr = dynamic_cast<CWidgetProxy*>((EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidget::handleFrameEvent(event, viewport);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidget_OperatorAssign_void_CWidget(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CWidget& objXXXX = *((EarthView::World::Spatial3D::Controls::CWidget*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CWidget*)rhs;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlayContainer*  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mElement( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					EarthView::World::Graphic::COverlayContainer* objXXXX = ptrNativeObject->mElement;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mElement( void *pObjectXXXX, EarthView::World::Graphic::COverlayContainer*  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mElement = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mName( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mName = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mleft( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mleft;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mleft( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mleft = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mtop( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mtop;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mtop( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mtop = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mwidth( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mwidth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mwidth( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mwidth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mheight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mheight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mheight( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mheight = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mZorder( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					int objXXXX = ptrNativeObject->mZorder;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mZorder( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mZorder = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mvisibleMode( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::VisibleMode objXXXX = ptrNativeObject->mvisibleMode;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mvisibleMode( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mvisibleMode = (EarthView::World::Spatial3D::Controls::VisibleMode)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidget_mignoreCheckMouseMoveBound( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mignoreCheckMouseMoveBound;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidget_mignoreCheckMouseMoveBound( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidget*)pObjectXXXX)->mignoreCheckMouseMoveBound = value;
				}
			}
		}
	}
}
