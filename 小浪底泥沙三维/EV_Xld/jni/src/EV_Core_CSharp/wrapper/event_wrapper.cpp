/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/event.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Core_CEvent_type_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Core::CEvent* ptrNativeObject = (EarthView::World::Core::CEvent*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->type();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CEventObject*  _stdcall EarthView_World_Core_CEvent_sender_CEventObject(void *pObjectXXXX )
			{
				EarthView::World::Core::CEvent* ptrNativeObject = (EarthView::World::Core::CEvent*) pObjectXXXX;
				EarthView::World::Core::CEventObject* objXXXX = ptrNativeObject->sender();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEvent_posted_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CEvent* ptrNativeObject = (EarthView::World::Core::CEvent*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->posted();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvent_setPosted_void_ev_bool(void *pObjectXXXX, _in ev_bool posted )
			{
				EarthView::World::Core::CEvent* ptrNativeObject = (EarthView::World::Core::CEvent*) pObjectXXXX;
				ptrNativeObject->setPosted(posted);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CTimerEvent_timerID_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CTimerEvent* ptrNativeObject = (EarthView::World::Core::CTimerEvent*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->timerID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CEventObject*  _stdcall EarthView_World_Core_CTimerEvent_receiver_CEventObject(void *pObjectXXXX )
			{
				const EarthView::World::Core::CTimerEvent* ptrNativeObject = (EarthView::World::Core::CTimerEvent*) pObjectXXXX;
				EarthView::World::Core::CEventObject* objXXXX = ptrNativeObject->receiver();
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CEventDispatcherProxy : public EarthView::World::Core::CEventDispatcher
			{
			private:
				EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback;
			public:
				CEventDispatcherProxy(EarthView::World::Core::CNameValuePairList *pList) : CEventDispatcher(pList)
				{
					m_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent(EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CEventDispatcher::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CEventDispatcher::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CEventDispatcher::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CEventDispatcherProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventDispatcher_sendEvent_ev_bool_CEventObject_CEvent(_in EarthView::World::Core::CEventObject* receiver, _in EarthView::World::Core::CEvent* e )
			{
				ev_bool objXXXX = EarthView::World::Core::CEventDispatcher::sendEvent(receiver, e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventDispatcher_postEvent_ev_bool_CEventObject_CEvent_ev_int32(_in EarthView::World::Core::CEventObject* receiver, _in EarthView::World::Core::CEvent* e, _in ev_int32 priority )
			{
				ev_bool objXXXX = EarthView::World::Core::CEventDispatcher::postEvent(receiver, e, priority);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventDispatcher_removePostedEvents_void_CEventObject(_in EarthView::World::Core::CEventObject* receiver )
			{
				EarthView::World::Core::CEventDispatcher::removePostedEvents(receiver);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventDispatcher_removePostedEvents_void_CEventObject_int(_in EarthView::World::Core::CEventObject* receiver, _in int eventType )
			{
				EarthView::World::Core::CEventDispatcher::removePostedEvents(receiver, eventType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventDispatcher_processEvents_void( )
			{
				EarthView::World::Core::CEventDispatcher::processEvents();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventDispatcher_removePostedTimerEvent_void_CEventObject_ev_int32(_in EarthView::World::Core::CEventObject* pObject, _in ev_int32 timerID )
			{
				EarthView::World::Core::CEventDispatcher::removePostedTimerEvent(pObject, timerID);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CEventDispatcher* ptrNativeObject = (EarthView::World::Core::CEventDispatcher*) pObjectXXXX;
				if (dynamic_cast<CEventDispatcherProxy*>((EarthView::World::Core::CEventDispatcher*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CEventDispatcher::onEvent(e);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CEventDispatcherProxy* ptr = dynamic_cast<CEventDispatcherProxy*>((EarthView::World::Core::CEventDispatcher*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventDispatcher_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CEventDispatcher* ptrNativeObject = (EarthView::World::Core::CEventDispatcher*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CEventDispatcher::onEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CEventDispatcherProxy* ptr = dynamic_cast<CEventDispatcherProxy*>((EarthView::World::Core::CEventDispatcher*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEventDispatcher_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CEventDispatcherProxy* ptr = dynamic_cast<CEventDispatcherProxy*>((EarthView::World::Core::CEventDispatcher*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEventDispatcher_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
