/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/tcpclient.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef void  ( _stdcall EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback)(_in ev_int32 eErrorNo);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback)(_out ev_byte* byBuf, _in ev_int32 iLen);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CTcpClientProxy : public EarthView::World::Core::CTcpClient
			{
			private:
				EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback* m_EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback;
				EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback* m_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback;
				EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback;
			public:
				CTcpClientProxy(EarthView::World::Core::CNameValuePairList *pList) : CTcpClient(pList)
				{
					m_EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CTcpClient_onError_void_ev_int32(EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32(EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent(EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent(EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual void onError(_in ev_int32 eErrorNo)
				{
					if(m_EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback(eErrorNo);
					}
					else
						return this->CTcpClient::onError(eErrorNo);
				}
				virtual ev_bool onReceive(_out ev_byte* byBuf, _in ev_int32 iLen)
				{
					if(m_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback(byBuf, iLen);
						return returnValue;
					}
					else
						return this->CTcpClient::onReceive(byBuf, iLen);
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CTcpClient::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CTcpClient::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CTcpClient::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CTcpClientProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpClient_connect_void_ev_string_ev_int16(void *pObjectXXXX, _in const char* strIp, _in ev_int16 iPort )
			{
				EarthView::World::Core::ev_string strIp1 = strIp;
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ptrNativeObject->connect(strIp1, iPort);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CTcpClient_send_ev_int32_ev_byte_ev_int32(void *pObjectXXXX, _in ev_byte* byBuf, _in ev_int32 iLen )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->send(byBuf, iLen);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpClient_setBufByteSize_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBufSize )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ptrNativeObject->setBufByteSize(iBufSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpClient_setConnTimeOut_void_ev_int32(void *pObjectXXXX, _in ev_int32 iTimeOut )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ptrNativeObject->setConnTimeOut(iTimeOut);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CTcpClient_close_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->close();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CTcpClient_isConnected_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isConnected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpClient_onError_void_ev_int32(void *pObjectXXXX, _in ev_int32 eErrorNo )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				if (dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CTcpClient::onError(eErrorNo);
				else
					ptrNativeObject->onError(eErrorNo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpClient_onError_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CTcpClient_onError_void_ev_int32_Callback* pCallback )
			{
				CTcpClientProxy* ptr = dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpClient_onError_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpClient_onError_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 eErrorNo )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CTcpClient::onError(eErrorNo);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32(void *pObjectXXXX, _out ev_byte* byBuf, _in ev_int32 iLen )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				if (dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CTcpClient::onReceive(byBuf, iLen);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onReceive(byBuf, iLen);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32( void *pObjectXXXX, EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_Callback* pCallback )
			{
				CTcpClientProxy* ptr = dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CTcpClient_onReceive_ev_bool_ev_byte_ev_int32_NoVirtual(void *pObjectXXXX, _out ev_byte* byBuf, _in ev_int32 iLen )
			{
				EarthView::World::Core::CTcpClient* ptrNativeObject = (EarthView::World::Core::CTcpClient*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CTcpClient::onReceive(byBuf, iLen);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CTcpClientProxy* ptr = dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpClient_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CTcpClientProxy* ptr = dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpClient_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CTcpClientProxy* ptr = dynamic_cast<CTcpClientProxy*>((EarthView::World::Core::CTcpClient*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpClient_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
