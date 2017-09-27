/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/object.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CEventObjectProxy : public EarthView::World::Core::CEventObject
			{
			private:
				EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback;
			public:
				CEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CEventObject(pList)
				{
					m_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent(EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent(EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CEventObject::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CEventObject::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CEventObject::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CEventObjectProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CEventObject_startTimer_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 interval )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->startTimer(interval);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventObject_killTimer_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 id )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->killTimer(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				if (dynamic_cast<CEventObjectProxy*>((EarthView::World::Core::CEventObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CEventObject::onEvent(e);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CEventObjectProxy* ptr = dynamic_cast<CEventObjectProxy*>((EarthView::World::Core::CEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEventObject_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CEventObject::onEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent(void *pObjectXXXX, _in EarthView::World::Core::CTimerEvent* e )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				if (dynamic_cast<CEventObjectProxy*>((EarthView::World::Core::CEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CEventObject::onTimerEvent(e);
				else
					ptrNativeObject->onTimerEvent(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CEventObjectProxy* ptr = dynamic_cast<CEventObjectProxy*>((EarthView::World::Core::CEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventObject_onTimerEvent_void_CTimerEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CTimerEvent* e )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CEventObject::onTimerEvent(e);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				if (dynamic_cast<CEventObjectProxy*>((EarthView::World::Core::CEventObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CEventObject::onCustomEvent(e);
				else
					ptrNativeObject->onCustomEvent(e);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CEventObjectProxy* ptr = dynamic_cast<CEventObjectProxy*>((EarthView::World::Core::CEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEventObject_onCustomEvent_void_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::World::Core::CEventObject* ptrNativeObject = (EarthView::World::Core::CEventObject*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CEventObject::onCustomEvent(e);
			}
		}
	}
}
