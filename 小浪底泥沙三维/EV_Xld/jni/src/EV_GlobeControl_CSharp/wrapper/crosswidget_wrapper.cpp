/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/crosswidget.h"
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport);
				class CCrossWidgetProxy : public EarthView::World::Spatial3D::Controls::CCrossWidget
				{
				private:
					EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback;
				public:
					CCrossWidgetProxy(EarthView::World::Core::CNameValuePairList *pList) : CCrossWidget(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void(EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = pCallback;
					}
					virtual void additionMouseUp()
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback();
						}
						else
							return this->CCrossWidget::additionMouseUp();
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleMouseUpEvent(event);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleMouseMoveEvent(event);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleMouseDownEvent(event);
					}
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handeMouseDbClickEvent(event);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleKeyDownEvent(event);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleKeyUpEvent(event);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleUserEvent(event);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback(event, viewport);
							return returnValue;
						}
						else
							return this->CCrossWidget::handleFrameEvent(event, viewport);
					}
				};
				REGISTER_FACTORY_CLASS(CCrossWidgetProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCrossWidget_OperatorAssign_void_CCrossWidget(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CCrossWidget& objXXXX = *((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CCrossWidget*)rhs;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPanelOverlayElement*  _stdcall Get_EarthView_World_Spatial3D_Controls_CCrossWidget_mPanel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CCrossWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX;
					EarthView::World::Graphic::CPanelOverlayElement* objXXXX = ptrNativeObject->mPanel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CCrossWidget_mPanel( void *pObjectXXXX, EarthView::World::Graphic::CPanelOverlayElement*  value )
				{
					((EarthView::World::Spatial3D::Controls::CCrossWidget*)pObjectXXXX)->mPanel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_additionMouseUp_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback )
				{
					CCrossWidgetProxy* ptr = dynamic_cast<CCrossWidgetProxy*>((EarthView::World::Spatial3D::Controls::CCrossWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCrossWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(pCallback);
					}
				}
			}
		}
	}
}
