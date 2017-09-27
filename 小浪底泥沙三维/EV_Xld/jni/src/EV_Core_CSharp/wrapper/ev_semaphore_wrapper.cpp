/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_semaphore.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CSemaphoreProxy : public EarthView::World::Core::CSemaphore
			{
			private:
				EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback;
			public:
				CSemaphoreProxy(EarthView::World::Core::CNameValuePairList *pList) : CSemaphore(pList)
				{
					m_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent(EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent(EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CSemaphore::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CSemaphore::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CSemaphore::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CSemaphoreProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSemaphore_wait_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
			{
				EarthView::World::Core::CSemaphore* ptrNativeObject = (EarthView::World::Core::CSemaphore*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->wait(count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSemaphore_waitOne_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CSemaphore* ptrNativeObject = (EarthView::World::Core::CSemaphore*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->waitOne();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSemaphore_release_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
			{
				EarthView::World::Core::CSemaphore* ptrNativeObject = (EarthView::World::Core::CSemaphore*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->release(count);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSemaphore_releaseOne_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CSemaphore* ptrNativeObject = (EarthView::World::Core::CSemaphore*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->releaseOne();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CSemaphore_tryWaitOne_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CSemaphore* ptrNativeObject = (EarthView::World::Core::CSemaphore*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->tryWaitOne();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CSemaphoreProxy* ptr = dynamic_cast<CSemaphoreProxy*>((EarthView::World::Core::CSemaphore*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSemaphore_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CSemaphoreProxy* ptr = dynamic_cast<CSemaphoreProxy*>((EarthView::World::Core::CSemaphore*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSemaphore_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CSemaphoreProxy* ptr = dynamic_cast<CSemaphoreProxy*>((EarthView::World::Core::CSemaphore*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CSemaphore_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
