/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/application.h"
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
		namespace Graphic
		{
		}
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CApplicationProxy : public EarthView::World::Core::CApplication
			{
			private:
				EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback;
			public:
				CApplicationProxy(EarthView::World::Core::CNameValuePairList *pList) : CApplication(pList)
				{
					m_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent(EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent(EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CApplication::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CApplication::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CApplication::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CApplicationProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CApplication*  _stdcall EarthView_World_Core_CApplication_getSingletonPtr_CApplication( )
			{
				EarthView::World::Core::CApplication* objXXXX = EarthView::World::Core::CApplication::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Core_CApplication_init_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->init();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_unInit_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->unInit();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_processEvents_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->processEvents();
			}
			extern "C" EV_DLL_EXPORT  CViewManager*  _stdcall EarthView_World_Core_CApplication_getViewManager_CViewManager(void *pObjectXXXX )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				CViewManager* objXXXX = ptrNativeObject->getViewManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  CCommandPool*  _stdcall EarthView_World_Core_CApplication_getCommandPool_CCommandPool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				CCommandPool* objXXXX = ptrNativeObject->getCommandPool();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CApplication_isInitialized_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInitialized();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CApplication_getMenuCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMenuCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Core_CApplication_getMenu_IMenu_ev_uint32(void *pObjectXXXX, _in ev_uint32 type )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->getMenu(type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_addMenu_void_IMenu(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IMenu* ref_menu )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->addMenu(ref_menu);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_removeMenu_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->removeMenu(index);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CApplication_getToolBarCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getToolBarCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IToolBar*  _stdcall EarthView_World_Core_CApplication_getToolBar_IToolBar_ev_uint32(void *pObjectXXXX, _in ev_uint32 type )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				EarthView::World::Spatial::SystemUI::IToolBar* objXXXX = ptrNativeObject->getToolBar(type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_addToolBar_void_IToolBar(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IToolBar* ref_bar )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->addToolBar(ref_bar);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_removeToolBar_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->removeToolBar(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_setActionFactory_void_IActionFactory(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IActionFactory* ref_factory )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->setActionFactory(ref_factory);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IActionFactory*  _stdcall EarthView_World_Core_CApplication_getActionFactory_IActionFactory(void *pObjectXXXX )
			{
				const EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				EarthView::World::Spatial::SystemUI::IActionFactory* objXXXX = ptrNativeObject->getActionFactory();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_init1_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->init1();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CApplication_init2_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ptrNativeObject->init2();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				if (dynamic_cast<CApplicationProxy*>((EarthView::World::Core::CApplication*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CApplication::onEvent(e);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CApplicationProxy* ptr = dynamic_cast<CApplicationProxy*>((EarthView::World::Core::CApplication*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CApplication_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CApplication* ptrNativeObject = (EarthView::World::Core::CApplication*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CApplication::onEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CApplicationProxy* ptr = dynamic_cast<CApplicationProxy*>((EarthView::World::Core::CApplication*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CApplication_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CApplication_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CApplicationProxy* ptr = dynamic_cast<CApplicationProxy*>((EarthView::World::Core::CApplication*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CApplication_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
