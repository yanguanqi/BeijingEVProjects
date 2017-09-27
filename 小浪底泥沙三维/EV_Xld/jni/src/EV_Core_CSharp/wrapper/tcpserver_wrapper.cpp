/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/tcpserver.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef EarthView::World::Core::CBaseTcpServerJob*  ( _stdcall EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback)(_in ev_int32 eErrorNo);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CTcpServerProxy : public EarthView::World::Core::CTcpServer
			{
			private:
				EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback* m_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback;
				EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback* m_EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback;
				EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback;
			public:
				CTcpServerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTcpServer(pList)
				{
					m_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback = NULL;
					m_EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback = NULL;
					m_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob(EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpServer_onError_void_ev_int32(EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent(EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent(EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent(EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual EarthView::World::Core::CBaseTcpServerJob* createJob()
				{
					if(m_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CBaseTcpServerJob* returnValue = m_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback();
						return returnValue;
					}
					else
						return this->CTcpServer::createJob();
				}
				virtual void onError(_in ev_int32 eErrorNo)
				{
					if(m_EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback(eErrorNo);
					}
					else
						return this->CTcpServer::onError(eErrorNo);
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CTcpServer::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CTcpServer::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CTcpServer::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CTcpServerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_start_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				ptrNativeObject->start();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_shutDown_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				ptrNativeObject->shutDown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_setMaxClientCount_void_ev_int32(void *pObjectXXXX, _in ev_int32 iClientCount )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				ptrNativeObject->setMaxClientCount(iClientCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_setTcpListenPort_void_ev_int16(void *pObjectXXXX, _in ev_int16 iPort )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				ptrNativeObject->setTcpListenPort(iPort);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_setBufByteSize_void_ev_int32(void *pObjectXXXX, _in ev_int32 iBufSize )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				ptrNativeObject->setBufByteSize(iBufSize);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseTcpServerJob*  _stdcall EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob(void *pObjectXXXX )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				if (dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CBaseTcpServerJob* objXXXX = ptrNativeObject->EarthView::World::Core::CTcpServer::createJob();
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CBaseTcpServerJob* objXXXX = ptrNativeObject->createJob();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob( void *pObjectXXXX, EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_Callback* pCallback )
			{
				CTcpServerProxy* ptr = dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseTcpServerJob*  _stdcall EarthView_World_Core_CTcpServer_createJob_CBaseTcpServerJob_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				EarthView::World::Core::CBaseTcpServerJob* objXXXX = ptrNativeObject->EarthView::World::Core::CTcpServer::createJob();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_onError_void_ev_int32(void *pObjectXXXX, _in ev_int32 eErrorNo )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				if (dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CTcpServer::onError(eErrorNo);
				else
					ptrNativeObject->onError(eErrorNo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpServer_onError_void_ev_int32( void *pObjectXXXX, EarthView_World_Core_CTcpServer_onError_void_ev_int32_Callback* pCallback )
			{
				CTcpServerProxy* ptr = dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpServer_onError_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CTcpServer_onError_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 eErrorNo )
			{
				EarthView::World::Core::CTcpServer* ptrNativeObject = (EarthView::World::Core::CTcpServer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CTcpServer::onError(eErrorNo);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CTcpServerProxy* ptr = dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpServer_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CTcpServerProxy* ptr = dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpServer_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CTcpServerProxy* ptr = dynamic_cast<CTcpServerProxy*>((EarthView::World::Core::CTcpServer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CTcpServer_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
