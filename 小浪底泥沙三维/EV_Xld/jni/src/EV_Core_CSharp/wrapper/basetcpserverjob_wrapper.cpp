/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/basetcpserverjob.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback)(_out ev_byte* byBuf, _in ev_int32 iLen);
			typedef ev_int32  ( _stdcall EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CBaseTcpServerJobProxy : public EarthView::World::Core::CBaseTcpServerJob
			{
			private:
				EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback* m_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback;
				EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback* m_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback;
				EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback;
			public:
				CBaseTcpServerJobProxy(EarthView::World::Core::CNameValuePairList *pList) : CBaseTcpServerJob(pList)
				{
					m_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32(EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32(EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent(EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent(EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_bool onReceive(_out ev_byte* byBuf, _in ev_int32 iLen)
				{
					if(m_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback(byBuf, iLen);
						return returnValue;
					}
					else
						return this->CBaseTcpServerJob::onReceive(byBuf, iLen);
				}
				virtual ev_int32 run()
				{
					if(m_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CBaseTcpServerJob::run();
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CBaseTcpServerJob::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CBaseTcpServerJob::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CBaseTcpServerJob::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CBaseTcpServerJobProxy);
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CBaseTcpServerJob_send_ev_int32_ev_byte_ev_int32(void *pObjectXXXX, _in ev_byte* buf, _in ev_int32 iLen )
			{
				EarthView::World::Core::CBaseTcpServerJob* ptrNativeObject = (EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->send(buf, iLen);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32(void *pObjectXXXX, _out ev_byte* byBuf, _in ev_int32 iLen )
			{
				EarthView::World::Core::CBaseTcpServerJob* ptrNativeObject = (EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX;
				if (dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CBaseTcpServerJob::onReceive(byBuf, iLen);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onReceive(byBuf, iLen);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32( void *pObjectXXXX, EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_Callback* pCallback )
			{
				CBaseTcpServerJobProxy* ptr = dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CBaseTcpServerJob_onReceive_ev_bool_ev_byte_ev_int32_NoVirtual(void *pObjectXXXX, _out ev_byte* byBuf, _in ev_int32 iLen )
			{
				EarthView::World::Core::CBaseTcpServerJob* ptrNativeObject = (EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CBaseTcpServerJob::onReceive(byBuf, iLen);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CBaseTcpServerJob_run_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseTcpServerJob* ptrNativeObject = (EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX;
				if (dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CBaseTcpServerJob::run();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->run();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32( void *pObjectXXXX, EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_Callback* pCallback )
			{
				CBaseTcpServerJobProxy* ptr = dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBaseTcpServerJob_run_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CBaseTcpServerJob_run_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseTcpServerJob* ptrNativeObject = (EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Core::CBaseTcpServerJob::run();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CBaseTcpServerJobProxy* ptr = dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBaseTcpServerJob_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CBaseTcpServerJobProxy* ptr = dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBaseTcpServerJob_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CBaseTcpServerJobProxy* ptr = dynamic_cast<CBaseTcpServerJobProxy*>((EarthView::World::Core::CBaseTcpServerJob*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBaseTcpServerJob_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
