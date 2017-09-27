/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/thread.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef void  ( _stdcall EarthView_World_Core_CThreadFunc_run_void_Callback)();
			class CThreadFuncProxy : public EarthView::World::Core::CThreadFunc
			{
			private:
				EarthView_World_Core_CThreadFunc_run_void_Callback* m_EarthView_World_Core_CThreadFunc_run_void_Callback;
			public:
				CThreadFuncProxy(EarthView::World::Core::CNameValuePairList *pList) : CThreadFunc(pList)
				{
					m_EarthView_World_Core_CThreadFunc_run_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CThreadFunc_run_void(EarthView_World_Core_CThreadFunc_run_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CThreadFunc_run_void_Callback = pCallback;
				}
				virtual void run()
				{
					if(m_EarthView_World_Core_CThreadFunc_run_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CThreadFunc_run_void_Callback();
					}
					else
						return this->CThreadFunc::run();
				}
			};
			REGISTER_FACTORY_CLASS(CThreadFuncProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThreadFunc_run_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CThreadFunc* ptrNativeObject = (EarthView::World::Core::CThreadFunc*) pObjectXXXX;
				if (dynamic_cast<CThreadFuncProxy*>((EarthView::World::Core::CThreadFunc*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CThreadFunc::run();
				else
					ptrNativeObject->run();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CThreadFunc_run_void( void *pObjectXXXX, EarthView_World_Core_CThreadFunc_run_void_Callback* pCallback )
			{
				CThreadFuncProxy* ptr = dynamic_cast<CThreadFuncProxy*>((EarthView::World::Core::CThreadFunc*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CThreadFunc_run_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThreadFunc_run_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CThreadFunc* ptrNativeObject = (EarthView::World::Core::CThreadFunc*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CThreadFunc::run();
			}
			typedef ev_int32  ( _stdcall EarthView_World_Core_CThread_run_ev_int32_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CThreadProxy : public EarthView::World::Core::CThread
			{
			private:
				EarthView_World_Core_CThread_run_ev_int32_Callback* m_EarthView_World_Core_CThread_run_ev_int32_Callback;
				EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback;
			public:
				CThreadProxy(EarthView::World::Core::CNameValuePairList *pList) : CThread(pList)
				{
					m_EarthView_World_Core_CThread_run_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CThread_run_ev_int32(EarthView_World_Core_CThread_run_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CThread_run_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent(EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CThread_onCustomEvent_void_CEvent(EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_int32 run()
				{
					if(m_EarthView_World_Core_CThread_run_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CThread_run_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CThread::run();
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CThread::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CThread::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CThread::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CThreadProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CThread_start_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->start();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CThread_work_ev_bool_CThreadFunc(void *pObjectXXXX, _in EarthView::World::Core::CThreadFunc* threadFunc )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->work(threadFunc);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CThread_wait_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->wait();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_sleep_void_ev_uint32(_in ev_uint32 msecs )
			{
				EarthView::World::Core::CThread::sleep(msecs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_terminate_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ptrNativeObject->terminate();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CThread_isRunning_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isRunning();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_setThreadPriority_void_ThreadPriority(void *pObjectXXXX, _in int priority )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ptrNativeObject->setThreadPriority((EarthView::World::Core::ThreadPriority)priority);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_setThreadInheritAttr_void_ev_bool(void *pObjectXXXX, _in ev_bool inherit )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ptrNativeObject->setThreadInheritAttr(inherit);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CThread_getThreadID_ev_uint32( )
			{
				ev_uint32 objXXXX = EarthView::World::Core::CThread::getThreadID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_suspend_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ptrNativeObject->suspend();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_resume_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ptrNativeObject->resume();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CThread_getThreadState_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getThreadState();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CThread_setThreadState_void_ThreadState(void *pObjectXXXX, _in int state )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ptrNativeObject->setThreadState((EarthView::World::Core::ThreadState)state);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CThread_getRetValue_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getRetValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CThread*  _stdcall EarthView_World_Core_CThread_getCurrentThread_CThread( )
			{
				EarthView::World::Core::CThread* objXXXX = EarthView::World::Core::CThread::getCurrentThread();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CThread_getThreadCount_ev_uint32( )
			{
				ev_uint32 objXXXX = EarthView::World::Core::CThread::getThreadCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CThread_isMainThread_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CThread::isMainThread();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CThread_run_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				if (dynamic_cast<CThreadProxy*>((EarthView::World::Core::CThread*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CThread::run();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->run();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CThread_run_ev_int32( void *pObjectXXXX, EarthView_World_Core_CThread_run_ev_int32_Callback* pCallback )
			{
				CThreadProxy* ptr = dynamic_cast<CThreadProxy*>((EarthView::World::Core::CThread*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CThread_run_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CThread_run_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CThread* ptrNativeObject = (EarthView::World::Core::CThread*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CThread::run();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CThread_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CThreadProxy* ptr = dynamic_cast<CThreadProxy*>((EarthView::World::Core::CThread*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CThread_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CThreadProxy* ptr = dynamic_cast<CThreadProxy*>((EarthView::World::Core::CThread*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CThread_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CThread_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CThread_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CThreadProxy* ptr = dynamic_cast<CThreadProxy*>((EarthView::World::Core::CThread*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CThread_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
