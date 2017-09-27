/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/workqueue.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback)(_in ev_uint16 channelID);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback)(_in ev_uint16 channelID);
			class CWorkQueueChannelListenerProxy : public EarthView::World::Core::CWorkQueueChannelListener
			{
			private:
				EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback* m_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback;
				EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback* m_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback;
			public:
				CWorkQueueChannelListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWorkQueueChannelListener(pList)
				{
					m_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback = pCallback;
				}
				virtual ev_bool preRequestSorted(_in ev_uint16 channelID)
				{
					if(m_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback(channelID);
						return returnValue;
					}
					else
						return this->CWorkQueueChannelListener::preRequestSorted(channelID);
				}
				virtual void postRequestSorted(_in ev_uint16 channelID)
				{
					if(m_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback(channelID);
					}
					else
						return this->CWorkQueueChannelListener::postRequestSorted(channelID);
				}
			};
			REGISTER_FACTORY_CLASS(CWorkQueueChannelListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 channelID )
			{
				EarthView::World::Core::CWorkQueueChannelListener* ptrNativeObject = (EarthView::World::Core::CWorkQueueChannelListener*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueChannelListenerProxy*>((EarthView::World::Core::CWorkQueueChannelListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueueChannelListener::preRequestSorted(channelID);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->preRequestSorted(channelID);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_Callback* pCallback )
			{
				CWorkQueueChannelListenerProxy* ptr = dynamic_cast<CWorkQueueChannelListenerProxy*>((EarthView::World::Core::CWorkQueueChannelListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueueChannelListener_preRequestSorted_ev_bool_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 channelID )
			{
				EarthView::World::Core::CWorkQueueChannelListener* ptrNativeObject = (EarthView::World::Core::CWorkQueueChannelListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueueChannelListener::preRequestSorted(channelID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 channelID )
			{
				EarthView::World::Core::CWorkQueueChannelListener* ptrNativeObject = (EarthView::World::Core::CWorkQueueChannelListener*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueChannelListenerProxy*>((EarthView::World::Core::CWorkQueueChannelListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueueChannelListener::postRequestSorted(channelID);
				else
					ptrNativeObject->postRequestSorted(channelID);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_Callback* pCallback )
			{
				CWorkQueueChannelListenerProxy* ptr = dynamic_cast<CWorkQueueChannelListenerProxy*>((EarthView::World::Core::CWorkQueueChannelListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueueChannelListener_postRequestSorted_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 channelID )
			{
				EarthView::World::Core::CWorkQueueChannelListener* ptrNativeObject = (EarthView::World::Core::CWorkQueueChannelListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueueChannelListener::postRequestSorted(channelID);
			}
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback)(_in ev_bool forceRestart);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_startup_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback)(_in EarthView::World::Core::CWorkQueue::CRequest* request);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback)(_in ev_uint64 id);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback)(_in ev_uint16 channel);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback)(_in ev_bool pause);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback)(_in ev_bool accept);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_processResponses_void_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback)(_in ev_uint32 ms);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_shutdown_void_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback)(_in ev_uint32 priority);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback)(_in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener);
			typedef EarthView::World::Core::CWorkQueueChannelListener*  ( _stdcall EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback)(_in ev_uint16 channelID);
			class CWorkQueueProxy : public EarthView::World::Core::CWorkQueue
			{
			private:
				EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback* m_EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback;
				EarthView_World_Core_CWorkQueue_startup_void_Callback* m_EarthView_World_Core_CWorkQueue_startup_void_Callback;
				EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* m_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback;
				EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* m_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback;
				EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* m_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback;
				EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* m_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback;
				EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback;
				EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback;
				EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback;
				EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback;
				EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback* m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback;
				EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* m_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback;
				EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback* m_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback;
				EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback* m_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback;
				EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* m_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback;
				EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback* m_EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback;
				EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback* m_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback;
				EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback* m_EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback;
				EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback* m_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback;
				EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback* m_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback;
				EarthView_World_Core_CWorkQueue_processResponses_void_Callback* m_EarthView_World_Core_CWorkQueue_processResponses_void_Callback;
				EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback* m_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback;
				EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback* m_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback;
				EarthView_World_Core_CWorkQueue_shutdown_void_Callback* m_EarthView_World_Core_CWorkQueue_shutdown_void_Callback;
				EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback* m_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback;
				EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* m_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback;
				EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* m_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback;
			public:
				CWorkQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CWorkQueue(pList)
				{
					m_EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_startup_void_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_processResponses_void_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_shutdown_void_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_startup_void_ev_bool(EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_startup_void(EarthView_World_Core_CWorkQueue_startup_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_startup_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_abortAllRequests_void(EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_isPaused_ev_bool(EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_processResponses_void(EarthView_World_Core_CWorkQueue_processResponses_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_processResponses_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_shutdown_void(EarthView_World_Core_CWorkQueue_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback = pCallback;
				}
				virtual void startup(_in ev_bool forceRestart)
				{
					if(m_EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback(forceRestart);
					}
					else
						return this->CWorkQueue::startup(forceRestart);
				}
				virtual void startup()
				{
					if(m_EarthView_World_Core_CWorkQueue_startup_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_startup_void_Callback();
					}
					else
						return this->CWorkQueue::startup();
				}
				virtual void addRequestHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if(m_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback(channel, rh);
					}
					else
						return this->CWorkQueue::addRequestHandler(channel, rh);
				}
				virtual void removeRequestHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if(m_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback(channel, rh);
					}
					else
						return this->CWorkQueue::removeRequestHandler(channel, rh);
				}
				virtual void addResponseHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if(m_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback(channel, rh);
					}
					else
						return this->CWorkQueue::addResponseHandler(channel, rh);
				}
				virtual void removeResponseHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if(m_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback(channel, rh);
					}
					else
						return this->CWorkQueue::removeResponseHandler(channel, rh);
				}
				virtual ev_uint64 addRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback(channel, requestType, &rData, retryCount, forceSynchronous, filter);
						return returnValue;
					}
					else
						return this->CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				}
				virtual ev_uint64 addRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous)
				{
					if(m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback(channel, requestType, &rData, retryCount, forceSynchronous);
						return returnValue;
					}
					else
						return this->CWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous);
				}
				virtual ev_uint64 addRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount)
				{
					if(m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback(channel, requestType, &rData, retryCount);
						return returnValue;
					}
					else
						return this->CWorkQueue::addRequest(channel, requestType, rData, retryCount);
				}
				virtual ev_uint64 addRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData)
				{
					if(m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback(channel, requestType, &rData);
						return returnValue;
					}
					else
						return this->CWorkQueue::addRequest(channel, requestType, rData);
				}
				virtual ev_uint64 addRequest(_in EarthView::World::Core::CWorkQueue::CRequest* request)
				{
					if(m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback(request);
						return returnValue;
					}
					else
						return this->CWorkQueue::addRequest(request);
				}
				virtual ev_uint64 addOrReplaceRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback(channel, requestType, &rData, retryCount, forceSynchronous, filter);
						return returnValue;
					}
					else
						return this->CWorkQueue::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				}
				virtual void abortRequest(_in ev_uint64 id)
				{
					if(m_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback(id);
					}
					else
						return this->CWorkQueue::abortRequest(id);
				}
				virtual void abortRequestsByChannel(_in ev_uint16 channel)
				{
					if(m_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback(channel);
					}
					else
						return this->CWorkQueue::abortRequestsByChannel(channel);
				}
				virtual void abortRequestsByFilter(_in ev_uint16 channel, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback(channel, filter);
					}
					else
						return this->CWorkQueue::abortRequestsByFilter(channel, filter);
				}
				virtual void abortAllRequests()
				{
					if(m_EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback();
					}
					else
						return this->CWorkQueue::abortAllRequests();
				}
				virtual void setPaused(_in ev_bool pause)
				{
					if(m_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback(pause);
					}
					else
						return this->CWorkQueue::setPaused(pause);
				}
				virtual ev_bool isPaused() const
				{
					if(m_EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWorkQueue::isPaused();
				}
				virtual void setRequestsAccepted(_in ev_bool accept)
				{
					if(m_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback(accept);
					}
					else
						return this->CWorkQueue::setRequestsAccepted(accept);
				}
				virtual ev_bool getRequestsAccepted() const
				{
					if(m_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWorkQueue::getRequestsAccepted();
				}
				virtual void processResponses()
				{
					if(m_EarthView_World_Core_CWorkQueue_processResponses_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_processResponses_void_Callback();
					}
					else
						return this->CWorkQueue::processResponses();
				}
				virtual ev_uint32 getResponseProcessingTimeLimit() const
				{
					if(m_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWorkQueue::getResponseProcessingTimeLimit();
				}
				virtual void setResponseProcessingTimeLimit(_in ev_uint32 ms)
				{
					if(m_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback(ms);
					}
					else
						return this->CWorkQueue::setResponseProcessingTimeLimit(ms);
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Core_CWorkQueue_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_shutdown_void_Callback();
					}
					else
						return this->CWorkQueue::shutdown();
				}
				virtual ev_uint16 getChannel(_in ev_uint32 priority)
				{
					if(m_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback(priority);
						return returnValue;
					}
					else
						return this->CWorkQueue::getChannel(priority);
				}
				virtual ev_bool setChannelListener(_in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener)
				{
					if(m_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback(channelID, pListener);
						return returnValue;
					}
					else
						return this->CWorkQueue::setChannelListener(channelID, pListener);
				}
				virtual EarthView::World::Core::CWorkQueueChannelListener* getChannelListener(_in ev_uint16 channelID) const
				{
					if(m_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueueChannelListener* returnValue = m_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback(channelID);
						return returnValue;
					}
					else
						return this->CWorkQueue::getChannelListener(channelID);
				}
			};
			REGISTER_FACTORY_CLASS(CWorkQueueProxy);
			typedef EarthView::World::Core::CWorkQueue::RequestPara*  ( _stdcall EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback)();
			class RequestParaProxy : public EarthView::World::Core::CWorkQueue::RequestPara
			{
			private:
				EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback* m_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback;
			public:
				RequestParaProxy(EarthView::World::Core::CNameValuePairList *pList) : RequestPara(pList)
				{
					m_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback = pCallback;
				}
				virtual EarthView::World::Core::CWorkQueue::RequestPara* clone() const
				{
					if(m_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueue::RequestPara* returnValue = m_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->RequestPara::clone();
				}
			};
			REGISTER_FACTORY_CLASS(RequestParaProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::RequestPara*  _stdcall EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::RequestPara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjectXXXX;
				if (dynamic_cast<RequestParaProxy*>((EarthView::World::Core::CWorkQueue::RequestPara*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueue::RequestPara* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::RequestPara::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::RequestPara* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_Callback* pCallback )
			{
				RequestParaProxy* ptr = dynamic_cast<RequestParaProxy*>((EarthView::World::Core::CWorkQueue::RequestPara*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::RequestPara*  _stdcall EarthView_World_Core_CWorkQueue_RequestPara_clone_RequestPara_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::RequestPara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::RequestPara* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::RequestPara::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CRequest*  _stdcall EarthView_World_Core_CWorkQueue_RequestPara_getRequest_CRequest(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::RequestPara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::CRequest* objXXXX = ptrNativeObject->getRequest();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_RequestPara_setRequest_void_CRequest(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::CRequest* parent )
			{
				const EarthView::World::Core::CWorkQueue::RequestPara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::RequestPara*) pObjectXXXX;
				ptrNativeObject->setRequest(parent);
			}
			typedef EarthView::World::Core::CWorkQueue::ResponsePara*  ( _stdcall EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback)();
			class ResponseParaProxy : public EarthView::World::Core::CWorkQueue::ResponsePara
			{
			private:
				EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback* m_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback;
			public:
				ResponseParaProxy(EarthView::World::Core::CNameValuePairList *pList) : ResponsePara(pList)
				{
					m_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback = pCallback;
				}
				virtual EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
				{
					if(m_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueue::ResponsePara* returnValue = m_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->ResponsePara::clone();
				}
			};
			REGISTER_FACTORY_CLASS(ResponseParaProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::ResponsePara*  _stdcall EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::ResponsePara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjectXXXX;
				if (dynamic_cast<ResponseParaProxy*>((EarthView::World::Core::CWorkQueue::ResponsePara*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::ResponsePara::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_Callback* pCallback )
			{
				ResponseParaProxy* ptr = dynamic_cast<ResponseParaProxy*>((EarthView::World::Core::CWorkQueue::ResponsePara*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::ResponsePara*  _stdcall EarthView_World_Core_CWorkQueue_ResponsePara_clone_ResponsePara_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::ResponsePara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::ResponsePara* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::ResponsePara::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CResponse*  _stdcall EarthView_World_Core_CWorkQueue_ResponsePara_getResponse_CResponse(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::ResponsePara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->getResponse();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_ResponsePara_setResponse_void_CResponse(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::CResponse* parent )
			{
				const EarthView::World::Core::CWorkQueue::ResponsePara* ptrNativeObject = (EarthView::World::Core::CWorkQueue::ResponsePara*) pObjectXXXX;
				ptrNativeObject->setResponse(parent);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Core_CWorkQueue_CRequest_mID( void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->mID;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CWorkQueue_CRequest_mID( void *pObjectXXXX, ev_uint64  value )
			{
				((EarthView::World::Core::CWorkQueue::CRequest*)pObjectXXXX)->mID = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_CRequest_abortRequest_void(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ptrNativeObject->abortRequest();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getChannel_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getChannel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getType_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getData_RequestPara(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				const EarthView::World::Core::CWorkQueue::RequestPara& objXXXX = ptrNativeObject->getData();
				const EarthView::World::Core::CWorkQueue::RequestPara *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getRetryCount_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getRetryCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getID_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getAborted_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAborted();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_CRequest_getFilter_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CRequest* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequest*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->getFilter();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Core::CWorkQueue::CRequest*  _stdcall EarthView_World_Core_CWorkQueue_CResponse_getRequest_CRequest(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CResponse* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponse*) pObjectXXXX;
				const EarthView::World::Core::CWorkQueue::CRequest* objXXXX = ptrNativeObject->getRequest();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_CResponse_succeeded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CResponse* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponse*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->succeeded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CWorkQueue_CResponse_getMessages_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CResponse* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponse*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMessages();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_CResponse_abortRequest_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue::CResponse* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponse*) pObjectXXXX;
				ptrNativeObject->abortRequest();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CWorkQueue_CResponse_getData_ResponsePara(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue::CResponse* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponse*) pObjectXXXX;
				const EarthView::World::Core::CWorkQueue::ResponsePara& objXXXX = ptrNativeObject->getData();
				const EarthView::World::Core::CWorkQueue::ResponsePara *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ);
			typedef EarthView::World::Core::CWorkQueue::CResponse*  ( _stdcall EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ);
			class CRequestHandlerProxy : public EarthView::World::Core::CWorkQueue::CRequestHandler
			{
			private:
				EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback* m_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback;
				EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback* m_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback;
			public:
				CRequestHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRequestHandler(pList)
				{
					m_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback = pCallback;
				}
				virtual ev_bool canHandleRequest(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback(req, srcQ);
						return returnValue;
					}
					else
						return this->CRequestHandler::canHandleRequest(req, srcQ);
				}
				virtual EarthView::World::Core::CWorkQueue::CResponse* handleRequest(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueue::CResponse* returnValue = m_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback(req, srcQ);
						return returnValue;
					}
					else
						return this->CRequestHandler::handleRequest(req, srcQ);
				}
			};
			REGISTER_FACTORY_CLASS(CRequestHandlerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CRequestHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjectXXXX;
				if (dynamic_cast<CRequestHandlerProxy*>((EarthView::World::Core::CWorkQueue::CRequestHandler*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::CRequestHandler::canHandleRequest(req, srcQ);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canHandleRequest(req, srcQ);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback* pCallback )
			{
				CRequestHandlerProxy* ptr = dynamic_cast<CRequestHandlerProxy*>((EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_CRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CRequestHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::CRequestHandler::canHandleRequest(req, srcQ);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CResponse*  _stdcall EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CRequestHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjectXXXX;
				if (dynamic_cast<CRequestHandlerProxy*>((EarthView::World::Core::CWorkQueue::CRequestHandler*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::CRequestHandler::handleRequest(req, srcQ);
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->handleRequest(req, srcQ);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback* pCallback )
			{
				CRequestHandlerProxy* ptr = dynamic_cast<CRequestHandlerProxy*>((EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CResponse*  _stdcall EarthView_World_Core_CWorkQueue_CRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CRequestHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CRequestHandler*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::CRequestHandler::handleRequest(req, srcQ);
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ);
			typedef void  ( _stdcall EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ);
			class CResponseHandlerProxy : public EarthView::World::Core::CWorkQueue::CResponseHandler
			{
			private:
				EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback* m_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback;
				EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback* m_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback;
			public:
				CResponseHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResponseHandler(pList)
				{
					m_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback = NULL;
					m_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback = pCallback;
				}
				virtual ev_bool canHandleResponse(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback(res, srcQ);
						return returnValue;
					}
					else
						return this->CResponseHandler::canHandleResponse(res, srcQ);
				}
				virtual void handleResponse(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback(res, srcQ);
					}
					else
						return this->CResponseHandler::handleResponse(res, srcQ);
				}
			};
			REGISTER_FACTORY_CLASS(CResponseHandlerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CResponseHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjectXXXX;
				if (dynamic_cast<CResponseHandlerProxy*>((EarthView::World::Core::CWorkQueue::CResponseHandler*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::CResponseHandler::canHandleResponse(res, srcQ);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canHandleResponse(res, srcQ);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback* pCallback )
			{
				CResponseHandlerProxy* ptr = dynamic_cast<CResponseHandlerProxy*>((EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_CResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CResponseHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::CResponseHandler::canHandleResponse(res, srcQ);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CResponseHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjectXXXX;
				if (dynamic_cast<CResponseHandlerProxy*>((EarthView::World::Core::CWorkQueue::CResponseHandler*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::CResponseHandler::handleResponse(res, srcQ);
				else
					ptrNativeObject->handleResponse(res, srcQ);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback* pCallback )
			{
				CResponseHandlerProxy* ptr = dynamic_cast<CResponseHandlerProxy*>((EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_CResponseHandler_handleResponse_void_CResponse_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CWorkQueue::CResponseHandler* ptrNativeObject = (EarthView::World::Core::CWorkQueue::CResponseHandler*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::CResponseHandler::handleResponse(res, srcQ);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_startup_void_ev_bool(void *pObjectXXXX, _in ev_bool forceRestart )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::startup(forceRestart);
				else
					ptrNativeObject->startup(forceRestart);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_startup_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_startup_void_ev_bool_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_startup_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_startup_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forceRestart )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::startup(forceRestart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_startup_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::startup();
				else
					ptrNativeObject->startup();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_startup_void( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_startup_void_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_startup_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_startup_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::startup();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequestHandler(channel, rh);
				else
					ptrNativeObject->addRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::removeRequestHandler(channel, rh);
				else
					ptrNativeObject->removeRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::removeRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::addResponseHandler(channel, rh);
				else
					ptrNativeObject->addResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::addResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::removeResponseHandler(channel, rh);
				else
					ptrNativeObject->removeResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::removeResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::CRequest* request )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(request);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(request);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addRequest_ev_uint64_CRequest_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::CRequest* request )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addRequest(request);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addOrReplaceRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addOrReplaceRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::addOrReplaceRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(void *pObjectXXXX, _in ev_uint64 id )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::abortRequest(id);
				else
					ptrNativeObject->abortRequest(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortRequest_void_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint64 id )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::abortRequest(id);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 channel )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::abortRequestsByChannel(channel);
				else
					ptrNativeObject->abortRequestsByChannel(channel);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortRequestsByChannel_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::abortRequestsByChannel(channel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint64 filter )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::abortRequestsByFilter(channel, filter);
				else
					ptrNativeObject->abortRequestsByFilter(channel, filter);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint64 filter )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::abortRequestsByFilter(channel, filter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortAllRequests_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::abortAllRequests();
				else
					ptrNativeObject->abortAllRequests();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_abortAllRequests_void( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_abortAllRequests_void_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_abortAllRequests_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_abortAllRequests_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::abortAllRequests();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(void *pObjectXXXX, _in ev_bool pause )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::setPaused(pause);
				else
					ptrNativeObject->setPaused(pause);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_setPaused_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool pause )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::setPaused(pause);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_isPaused_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::isPaused();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isPaused();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_isPaused_ev_bool( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_isPaused_ev_bool_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_isPaused_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_isPaused_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::isPaused();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(void *pObjectXXXX, _in ev_bool accept )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::setRequestsAccepted(accept);
				else
					ptrNativeObject->setRequestsAccepted(accept);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_setRequestsAccepted_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool accept )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::setRequestsAccepted(accept);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getRequestsAccepted();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getRequestsAccepted();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_getRequestsAccepted_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getRequestsAccepted();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_processResponses_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::processResponses();
				else
					ptrNativeObject->processResponses();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_processResponses_void( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_processResponses_void_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_processResponses_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_processResponses_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::processResponses();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getResponseProcessingTimeLimit();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getResponseProcessingTimeLimit();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CWorkQueue_getResponseProcessingTimeLimit_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getResponseProcessingTimeLimit();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 ms )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::setResponseProcessingTimeLimit(ms);
				else
					ptrNativeObject->setResponseProcessingTimeLimit(ms);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 ms )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::setResponseProcessingTimeLimit(ms);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CWorkQueue::shutdown();
				else
					ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_shutdown_void( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_shutdown_void_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWorkQueue_shutdown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CWorkQueue::shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(void *pObjectXXXX, _in ev_uint32 priority )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getChannel(priority);
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getChannel(priority);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Core_CWorkQueue_getChannel_ev_uint16_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 priority )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getChannel(priority);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(void *pObjectXXXX, _in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::setChannelListener(channelID, pListener);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setChannelListener(channelID, pListener);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_NoVirtual(void *pObjectXXXX, _in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener )
			{
				EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::setChannelListener(channelID, pListener);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueueChannelListener*  _stdcall EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(void *pObjectXXXX, _in ev_uint16 channelID )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueueChannelListener* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getChannelListener(channelID);
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueueChannelListener* objXXXX = ptrNativeObject->getChannelListener(channelID);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* pCallback )
			{
				CWorkQueueProxy* ptr = dynamic_cast<CWorkQueueProxy*>((EarthView::World::Core::CWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueueChannelListener*  _stdcall EarthView_World_Core_CWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 channelID )
			{
				const EarthView::World::Core::CWorkQueue* ptrNativeObject = (EarthView::World::Core::CWorkQueue*) pObjectXXXX;
				EarthView::World::Core::CWorkQueueChannelListener* objXXXX = ptrNativeObject->EarthView::World::Core::CWorkQueue::getChannelListener(channelID);
				return objXXXX;
			}
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback)(_in ev_uint64  c);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback)(_in ev_bool access);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback)(_in ev_bool forceRestart);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback)(_in EarthView::World::Core::CWorkQueue::CRequest* request);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback)(_in ev_uint64 id);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback)(_in ev_uint16 channel);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback)(_in ev_bool pause);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback)(_in ev_bool accept);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback)(_in ev_uint32 ms);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback)(_in ev_uint32 priority);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback)(_in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener);
			typedef EarthView::World::Core::CWorkQueueChannelListener*  ( _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback)(_in ev_uint16 channelID);
			class CDefaultWorkQueueBaseProxy : public EarthView::World::Core::CDefaultWorkQueueBase
			{
			private:
				EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback;
				EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* m_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback;
			public:
				CDefaultWorkQueueBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultWorkQueueBase(pList)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void(EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void(EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32(EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16(EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback = pCallback;
				}
				virtual ev_size_t getWorkerThreadCount() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::getWorkerThreadCount();
				}
				virtual void setWorkerThreadCount(_in ev_size_t c)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback(c);
					}
					else
						return this->CDefaultWorkQueueBase::setWorkerThreadCount(c);
				}
				virtual ev_bool getWorkersCanAccessRenderSystem() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::getWorkersCanAccessRenderSystem();
				}
				virtual void setWorkersCanAccessRenderSystem(_in ev_bool access)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback(access);
					}
					else
						return this->CDefaultWorkQueueBase::setWorkersCanAccessRenderSystem(access);
				}
				virtual void _processNextRequest()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::_processNextRequest();
				}
				virtual void _threadMain()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::_threadMain();
				}
				virtual ev_bool isShuttingDown() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::isShuttingDown();
				}
				virtual void addRequestHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueueBase::addRequestHandler(channel, rh);
				}
				virtual void removeRequestHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueueBase::removeRequestHandler(channel, rh);
				}
				virtual void addResponseHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueueBase::addResponseHandler(channel, rh);
				}
				virtual void removeResponseHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueueBase::removeResponseHandler(channel, rh);
				}
				virtual ev_uint64 addRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback(channel, requestType, &rData, retryCount, forceSynchronous, filter);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				}
				virtual ev_uint64 addRequest(_in EarthView::World::Core::CWorkQueue::CRequest* request)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback(request);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::addRequest(request);
				}
				virtual ev_uint64 addOrReplaceRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback(channel, requestType, &rData, retryCount, forceSynchronous, filter);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				}
				virtual void abortRequest(_in ev_uint64 id)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback(id);
					}
					else
						return this->CDefaultWorkQueueBase::abortRequest(id);
				}
				virtual void abortRequestsByChannel(_in ev_uint16 channel)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback(channel);
					}
					else
						return this->CDefaultWorkQueueBase::abortRequestsByChannel(channel);
				}
				virtual void abortRequestsByFilter(_in ev_uint16 channel, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback(channel, filter);
					}
					else
						return this->CDefaultWorkQueueBase::abortRequestsByFilter(channel, filter);
				}
				virtual void abortAllRequests()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::abortAllRequests();
				}
				virtual void setPaused(_in ev_bool pause)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback(pause);
					}
					else
						return this->CDefaultWorkQueueBase::setPaused(pause);
				}
				virtual ev_bool isPaused() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::isPaused();
				}
				virtual void setRequestsAccepted(_in ev_bool accept)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback(accept);
					}
					else
						return this->CDefaultWorkQueueBase::setRequestsAccepted(accept);
				}
				virtual ev_bool getRequestsAccepted() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::getRequestsAccepted();
				}
				virtual void processResponses()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::processResponses();
				}
				virtual ev_uint32 getResponseProcessingTimeLimit() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::getResponseProcessingTimeLimit();
				}
				virtual void setResponseProcessingTimeLimit(_in ev_uint32 ms)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback(ms);
					}
					else
						return this->CDefaultWorkQueueBase::setResponseProcessingTimeLimit(ms);
				}
				virtual void notifyWorkers()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::notifyWorkers();
				}
				virtual void startup(_in ev_bool forceRestart)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback(forceRestart);
					}
					else
						return this->CDefaultWorkQueueBase::startup(forceRestart);
				}
				virtual void startup()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::startup();
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback();
					}
					else
						return this->CDefaultWorkQueueBase::shutdown();
				}
				virtual ev_uint16 getChannel(_in ev_uint32 priority)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback(priority);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::getChannel(priority);
				}
				virtual ev_bool setChannelListener(_in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback(channelID, pListener);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::setChannelListener(channelID, pListener);
				}
				virtual EarthView::World::Core::CWorkQueueChannelListener* getChannelListener(_in ev_uint16 channelID) const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueueChannelListener* returnValue = m_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback(channelID);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueueBase::getChannelListener(channelID);
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultWorkQueueBaseProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_registerPreExtraThreadsStartedFunc_void_void(void *pObjectXXXX, _in void* preExtraThreadsStartedFunc )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->registerPreExtraThreadsStartedFunc(preExtraThreadsStartedFunc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_registerPostExtraThreadsStartedFunc_void_void(void *pObjectXXXX, _in void* postExtraThreadsStartedFunc )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->registerPostExtraThreadsStartedFunc(postExtraThreadsStartedFunc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_registerThreadFunc_void_void(void *pObjectXXXX, _in void* pThreadFunc )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->registerThreadFunc(pThreadFunc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_registerThreadFunc2_void_void(void *pObjectXXXX, _in void* pThreadFunc )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->registerThreadFunc2(pThreadFunc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_registerflushRenderSystemFunc_void_void(void *pObjectXXXX, _in void* pflushRenderSystemFunc )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->registerflushRenderSystemFunc(pflushRenderSystemFunc);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_unregisterPreExtraThreadsStartedFunc_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->unregisterPreExtraThreadsStartedFunc();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_unregisterPostExtraThreadsStartedFunc_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->unregisterPostExtraThreadsStartedFunc();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_unregisterThreadFunc_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->unregisterThreadFunc();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_unregisterThreadFunc2_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->unregisterThreadFunc2();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_unregisterflushRenderSystemFunc_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->unregisterflushRenderSystemFunc();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getWorkerThreadCount();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getWorkerThreadCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getWorkerThreadCount_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getWorkerThreadCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  c )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setWorkerThreadCount(c);
				else
					ptrNativeObject->setWorkerThreadCount(c);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setWorkerThreadCount_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  c )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setWorkerThreadCount(c);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getWorkersCanAccessRenderSystem();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getWorkersCanAccessRenderSystem();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getWorkersCanAccessRenderSystem_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getWorkersCanAccessRenderSystem();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(void *pObjectXXXX, _in ev_bool access )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setWorkersCanAccessRenderSystem(access);
				else
					ptrNativeObject->setWorkersCanAccessRenderSystem(access);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setWorkersCanAccessRenderSystem_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool access )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setWorkersCanAccessRenderSystem(access);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::_processNextRequest();
				else
					ptrNativeObject->_processNextRequest();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase__processNextRequest_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::_processNextRequest();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::_threadMain();
				else
					ptrNativeObject->_threadMain();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase__threadMain_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::_threadMain();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::isShuttingDown();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isShuttingDown();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_isShuttingDown_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::isShuttingDown();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addRequestHandler(channel, rh);
				else
					ptrNativeObject->addRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::removeRequestHandler(channel, rh);
				else
					ptrNativeObject->removeRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_removeRequestHandler_void_ev_uint16_CRequestHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::removeRequestHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addResponseHandler(channel, rh);
				else
					ptrNativeObject->addResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::removeResponseHandler(channel, rh);
				else
					ptrNativeObject->removeResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_removeResponseHandler_void_ev_uint16_CResponseHandler_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::removeResponseHandler(channel, rh);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::CRequest* request )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(request);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(request);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_CRequest_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue::CRequest* request )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addRequest(request);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addOrReplaceRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addOrReplaceRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::addOrReplaceRequest(channel, requestType, *(EarthView::World::Core::CWorkQueue::RequestPara*)rData, retryCount, forceSynchronous, filter);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(void *pObjectXXXX, _in ev_uint64 id )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortRequest(id);
				else
					ptrNativeObject->abortRequest(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequest_void_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint64 id )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortRequest(id);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 channel )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByChannel(channel);
				else
					ptrNativeObject->abortRequestsByChannel(channel);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByChannel_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByChannel(channel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByFilter(channel, filter);
				else
					ptrNativeObject->abortRequestsByFilter(channel, filter);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortRequestsByFilter_void_ev_uint16_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortRequestsByFilter(channel, filter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortAllRequests();
				else
					ptrNativeObject->abortAllRequests();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_abortAllRequests_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::abortAllRequests();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(void *pObjectXXXX, _in ev_bool pause )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setPaused(pause);
				else
					ptrNativeObject->setPaused(pause);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setPaused_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool pause )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setPaused(pause);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::isPaused();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isPaused();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_isPaused_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::isPaused();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(void *pObjectXXXX, _in ev_bool accept )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setRequestsAccepted(accept);
				else
					ptrNativeObject->setRequestsAccepted(accept);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setRequestsAccepted_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool accept )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setRequestsAccepted(accept);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getRequestsAccepted();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getRequestsAccepted();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getRequestsAccepted_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getRequestsAccepted();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::processResponses();
				else
					ptrNativeObject->processResponses();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_processResponses_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::processResponses();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getResponseProcessingTimeLimit();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getResponseProcessingTimeLimit();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_getResponseProcessingTimeLimit_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::getResponseProcessingTimeLimit();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 ms )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setResponseProcessingTimeLimit(ms);
				else
					ptrNativeObject->setResponseProcessingTimeLimit(ms);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_setResponseProcessingTimeLimit_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 ms )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::setResponseProcessingTimeLimit(ms);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_disconnectHandler_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder*) pObjectXXXX;
				ptrNativeObject->disconnectHandler();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CRequestHandler*  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_getHandler_CRequestHandler(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::CRequestHandler* objXXXX = ptrNativeObject->getHandler();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CResponse*  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_CRequestHandlerHolder_handleRequest_CResponse_CRequest_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->handleRequest(req, srcQ);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::notifyWorkers();
				else
					ptrNativeObject->notifyWorkers();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueueBase_notifyWorkers_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueueBase* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueueBase::notifyWorkers();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_startup_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_startup_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannel_ev_uint16_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* pCallback )
			{
				CDefaultWorkQueueBaseProxy* ptr = dynamic_cast<CDefaultWorkQueueBaseProxy*>((EarthView::World::Core::CDefaultWorkQueueBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueueBase_getChannelListener_CWorkQueueChannelListener_ev_uint16(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Core_CBackgroundQueue_initialise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback)();
			class CBackgroundQueueProxy : public EarthView::World::Core::CBackgroundQueue
			{
			private:
				EarthView_World_Core_CBackgroundQueue_initialise_void_Callback* m_EarthView_World_Core_CBackgroundQueue_initialise_void_Callback;
				EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback* m_EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback;
				EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback* m_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback;
				EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback* m_EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback;
			public:
				CBackgroundQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundQueue(pList)
				{
					m_EarthView_World_Core_CBackgroundQueue_initialise_void_Callback = NULL;
					m_EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback = NULL;
					m_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback = NULL;
					m_EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CBackgroundQueue_initialise_void(EarthView_World_Core_CBackgroundQueue_initialise_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CBackgroundQueue_initialise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBackgroundQueue_shutdown_void(EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CBackgroundQueue_getName_EVString(EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback = pCallback;
				}
				virtual void initialise()
				{
					if(m_EarthView_World_Core_CBackgroundQueue_initialise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBackgroundQueue_initialise_void_Callback();
					}
					else
						return this->CBackgroundQueue::initialise();
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback();
					}
					else
						return this->CBackgroundQueue::shutdown();
				}
				virtual EVString getGroupName() const
				{
					if(m_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBackgroundQueue::getGroupName();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBackgroundQueue::getName();
				}
			};
			REGISTER_FACTORY_CLASS(CBackgroundQueueProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueue_initialise_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CBackgroundQueue::initialise();
				else
					ptrNativeObject->initialise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_initialise_void( void *pObjectXXXX, EarthView_World_Core_CBackgroundQueue_initialise_void_Callback* pCallback )
			{
				CBackgroundQueueProxy* ptr = dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBackgroundQueue_initialise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueue_initialise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CBackgroundQueue::initialise();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueue_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CBackgroundQueue::shutdown();
				else
					ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_shutdown_void( void *pObjectXXXX, EarthView_World_Core_CBackgroundQueue_shutdown_void_Callback* pCallback )
			{
				CBackgroundQueueProxy* ptr = dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBackgroundQueue_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueue_shutdown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CBackgroundQueue::shutdown();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBackgroundQueue::getGroupName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getGroupName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString( void *pObjectXXXX, EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_Callback* pCallback )
			{
				CBackgroundQueueProxy* ptr = dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBackgroundQueue_getGroupName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBackgroundQueue_getGroupName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBackgroundQueue::getGroupName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBackgroundQueue_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBackgroundQueue::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CBackgroundQueue_getName_EVString( void *pObjectXXXX, EarthView_World_Core_CBackgroundQueue_getName_EVString_Callback* pCallback )
			{
				CBackgroundQueueProxy* ptr = dynamic_cast<CBackgroundQueueProxy*>((EarthView::World::Core::CBackgroundQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CBackgroundQueue_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBackgroundQueue_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBackgroundQueue* ptrNativeObject = (EarthView::World::Core::CBackgroundQueue*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CBackgroundQueue::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBackgroundQueueManager*  _stdcall EarthView_World_Core_CBackgroundQueueManager_getSingletonPtr_CBackgroundQueueManager( )
			{
				EarthView::World::Core::CBackgroundQueueManager* objXXXX = EarthView::World::Core::CBackgroundQueueManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CBackgroundQueueManager_getSingleton_CBackgroundQueueManager( )
			{
				EarthView::World::Core::CBackgroundQueueManager& objXXXX = EarthView::World::Core::CBackgroundQueueManager::getSingleton();
				EarthView::World::Core::CBackgroundQueueManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_registerBackgroundQueue_void_CBackgroundQueue(void *pObjectXXXX, _in EarthView::World::Core::CBackgroundQueue* queue )
			{
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->registerBackgroundQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_unregisterBackgroundQueue_void_CBackgroundQueue(void *pObjectXXXX, _in EarthView::World::Core::CBackgroundQueue* queue )
			{
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->unregisterBackgroundQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBackgroundQueue*  _stdcall EarthView_World_Core_CBackgroundQueueManager_getBackgroundQueue_CBackgroundQueue_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				EarthView::World::Core::CBackgroundQueue* objXXXX = ptrNativeObject->getBackgroundQueue(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CBackgroundQueueManager_getRegisterBackgroundQueueNames_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getRegisterBackgroundQueueNames();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CBackgroundQueueManager_getRegisterBackgroundGroupNames_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getRegisterBackgroundGroupNames();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_clearBackgroundQueues_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->clearBackgroundQueues();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_initialiseAllGroups_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->initialiseAllGroups();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_initialise_void_EVString(void *pObjectXXXX, _in char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->initialise(groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_shutdownAllGroups_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->shutdownAllGroups();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBackgroundQueueManager_shutdown_void_EVString(void *pObjectXXXX, _in char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::CBackgroundQueueManager* ptrNativeObject = (EarthView::World::Core::CBackgroundQueueManager*) pObjectXXXX;
				ptrNativeObject->shutdown(groupName1);
			}
		}
	}
}
