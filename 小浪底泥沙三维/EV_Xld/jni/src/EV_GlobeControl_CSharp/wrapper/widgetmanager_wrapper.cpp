/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/widgetmanager.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_push_back_void_CWidget(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CWidget*& t )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CWidget*  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_front_CWidget(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CWidget* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CWidget*  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_back_CWidget(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CWidget* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_insert_void_ev_uint32_CWidget(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::Controls::CWidget*& t )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CWidget*  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_OperatorIndex_CWidget_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList& objYYYY = *(EarthView::World::Spatial3D::Controls::CWidgetList*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CWidget* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CWidget*  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_at_CWidget_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CWidget* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetList* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent);
				class CWidgetManagerProxy : public EarthView::World::Spatial3D::Controls::CWidgetManager
				{
				private:
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback;
				public:
					CWidgetManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWidgetManager(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					virtual ev_bool handleEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleEvent(guiEvent);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleMouseDownEvent(guiEvent);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleMouseMoveEvent(guiEvent);
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleMouseUpEvent(guiEvent);
					}
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handeMouseDbClickEvent(guiEvent);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleKeyDownEvent(guiEvent);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleKeyUpEvent(guiEvent);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleUserEvent(guiEvent);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if(m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback(guiEvent);
							return returnValue;
						}
						else
							return this->CWidgetManager::handleFrameEvent(guiEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CWidgetManagerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_setSceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* ref_sceneManager )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->setSceneManager(ref_sceneManager);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_show_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->show();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_hide_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->hide();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_sort_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->sort();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_addWidget_void_CWidget(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CWidget* ref_widget )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->addWidget(ref_widget);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_removeWidget_void_CWidget(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CWidget* widget )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->removeWidget(widget);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_removeWidget_void_EVString(void *pObjectXXXX, _in const char* widgetName )
				{
					EarthView::World::Core::ev_string widgetName1 = widgetName;
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ptrNativeObject->removeWidget(widgetName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CWidget*  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_getWidget_CWidget_EVString(void *pObjectXXXX, _in const char* widgetName )
				{
					EarthView::World::Core::ev_string widgetName1 = widgetName;
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CWidget* objXXXX = ptrNativeObject->getWidget(widgetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseDownEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseDownEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseDownEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseMoveEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseMoveEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseMoveEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseMoveEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseUpEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleMouseUpEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleMouseUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleMouseUpEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handeMouseDbClickEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handeMouseDbClickEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handeMouseDbClickEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handeMouseDbClickEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyDownEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyDownEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyDownEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyDownEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyUpEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleKeyUpEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleKeyUpEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleKeyUpEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleUserEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleUserEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					if (dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleFrameEvent(guiEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(guiEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CWidgetManagerProxy* ptr = dynamic_cast<CWidgetManagerProxy*>((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_handleFrameEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CWidgetManager::handleFrameEvent(guiEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CWidgetManager_OperatorAssign_void_CWidgetManager(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager& objXXXX = *((EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CWidgetManager*)rhs;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidgetManager_mWidgetList( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CWidgetList &objXXXX = ptrNativeObject->mWidgetList;
					EarthView::World::Spatial3D::Controls::CWidgetList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidgetManager_mWidgetList( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjectXXXX)->mWidgetList = *(EarthView::World::Spatial3D::Controls::CWidgetList*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidgetManager_mName( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidgetManager_mName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjectXXXX)->mName = value1;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidgetManager_mviewport( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->mviewport;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidgetManager_mviewport( void *pObjectXXXX, EarthView::World::Graphic::CViewport*  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjectXXXX)->mviewport = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COverlay*  _stdcall Get_EarthView_World_Spatial3D_Controls_CWidgetManager_mOverlayLayer( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CWidgetManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CWidgetManager*) pObjectXXXX;
					EarthView::World::Graphic::COverlay* objXXXX = ptrNativeObject->mOverlayLayer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CWidgetManager_mOverlayLayer( void *pObjectXXXX, EarthView::World::Graphic::COverlay*  value )
				{
					((EarthView::World::Spatial3D::Controls::CWidgetManager*)pObjectXXXX)->mOverlayLayer = value;
				}
			}
		}
	}
}
