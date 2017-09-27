/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/defaultworkqueuestandard.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback)(_in ev_uint64  c);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback)(_in ev_bool access);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback)(_in ev_bool forceRestart);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback)(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback)(_in EarthView::World::Core::CWorkQueue::CRequest* request);
			typedef ev_uint64  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint16 requestType, _in const void* rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback)(_in ev_uint64 id);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback)(_in ev_uint16 channel);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback)(_in ev_uint16 channel, _in ev_uint64 filter);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback)(_in ev_bool pause);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback)(_in ev_bool accept);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback)(_in ev_uint32 ms);
			typedef void  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback)(_in ev_uint32 priority);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback)(_in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener);
			typedef EarthView::World::Core::CWorkQueueChannelListener*  ( _stdcall EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback)(_in ev_uint16 channelID);
			class CDefaultWorkQueueProxy : public EarthView::World::Core::CDefaultWorkQueue
			{
			private:
				EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback* m_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback;
				EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback* m_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback;
				EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* m_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback;
				EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback* m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback;
				EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback;
				EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback* m_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback;
				EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback* m_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback;
				EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback* m_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback;
				EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback* m_EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback;
				EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback* m_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback;
				EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* m_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback;
				EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* m_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback;
			public:
				CDefaultWorkQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultWorkQueue(pList)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback = NULL;
					m_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64(EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void(EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void(EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t(EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t(EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool(EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool(EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void(EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue__threadMain_void(EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool(EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void(EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool(EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_startup_void(EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest(EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64(EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16(EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void(EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool(EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool(EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool(EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool(EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_processResponses_void(EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32(EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_shutdown_void(EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32(EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback = pCallback;
				}
				virtual void _threadMain()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::_threadMain();
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::shutdown();
				}
				virtual void startup(_in ev_bool forceRestart)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback(forceRestart);
					}
					else
						return this->CDefaultWorkQueue::startup(forceRestart);
				}
				virtual void startup()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::startup();
				}
				virtual ev_bool isQueueRunningByFilter(_in ev_uint16 channel, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback(channel, filter);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::isQueueRunningByFilter(channel, filter);
				}
				virtual void waitForNextRequest()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::waitForNextRequest();
				}
				virtual void notifyThreadRegistered()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::notifyThreadRegistered();
				}
				virtual void notifyWorkers()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::notifyWorkers();
				}
				virtual ev_size_t getWorkerThreadCount() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::getWorkerThreadCount();
				}
				virtual void setWorkerThreadCount(_in ev_size_t c)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback(c);
					}
					else
						return this->CDefaultWorkQueue::setWorkerThreadCount(c);
				}
				virtual ev_bool getWorkersCanAccessRenderSystem() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::getWorkersCanAccessRenderSystem();
				}
				virtual void setWorkersCanAccessRenderSystem(_in ev_bool access)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback(access);
					}
					else
						return this->CDefaultWorkQueue::setWorkersCanAccessRenderSystem(access);
				}
				virtual void _processNextRequest()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::_processNextRequest();
				}
				virtual ev_bool isShuttingDown() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::isShuttingDown();
				}
				virtual void addRequestHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueue::addRequestHandler(channel, rh);
				}
				virtual void removeRequestHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CRequestHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueue::removeRequestHandler(channel, rh);
				}
				virtual void addResponseHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueue::addResponseHandler(channel, rh);
				}
				virtual void removeResponseHandler(_in ev_uint16 channel, _in EarthView::World::Core::CWorkQueue::CResponseHandler* rh)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback(channel, rh);
					}
					else
						return this->CDefaultWorkQueue::removeResponseHandler(channel, rh);
				}
				virtual ev_uint64 addRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback(channel, requestType, &rData, retryCount, forceSynchronous, filter);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::addRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				}
				virtual ev_uint64 addRequest(_in EarthView::World::Core::CWorkQueue::CRequest* request)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback(request);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::addRequest(request);
				}
				virtual ev_uint64 addOrReplaceRequest(_in ev_uint16 channel, _in ev_uint16 requestType, _in const EarthView::World::Core::CWorkQueue::RequestPara& rData, _in ev_uint8 retryCount, _in ev_bool forceSynchronous, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback(channel, requestType, &rData, retryCount, forceSynchronous, filter);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::addOrReplaceRequest(channel, requestType, rData, retryCount, forceSynchronous, filter);
				}
				virtual void abortRequest(_in ev_uint64 id)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback(id);
					}
					else
						return this->CDefaultWorkQueue::abortRequest(id);
				}
				virtual void abortRequestsByChannel(_in ev_uint16 channel)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback(channel);
					}
					else
						return this->CDefaultWorkQueue::abortRequestsByChannel(channel);
				}
				virtual void abortRequestsByFilter(_in ev_uint16 channel, _in ev_uint64 filter)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback(channel, filter);
					}
					else
						return this->CDefaultWorkQueue::abortRequestsByFilter(channel, filter);
				}
				virtual void abortAllRequests()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::abortAllRequests();
				}
				virtual void setPaused(_in ev_bool pause)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback(pause);
					}
					else
						return this->CDefaultWorkQueue::setPaused(pause);
				}
				virtual ev_bool isPaused() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::isPaused();
				}
				virtual void setRequestsAccepted(_in ev_bool accept)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback(accept);
					}
					else
						return this->CDefaultWorkQueue::setRequestsAccepted(accept);
				}
				virtual ev_bool getRequestsAccepted() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::getRequestsAccepted();
				}
				virtual void processResponses()
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback();
					}
					else
						return this->CDefaultWorkQueue::processResponses();
				}
				virtual ev_uint32 getResponseProcessingTimeLimit() const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::getResponseProcessingTimeLimit();
				}
				virtual void setResponseProcessingTimeLimit(_in ev_uint32 ms)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback(ms);
					}
					else
						return this->CDefaultWorkQueue::setResponseProcessingTimeLimit(ms);
				}
				virtual ev_uint16 getChannel(_in ev_uint32 priority)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback(priority);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::getChannel(priority);
				}
				virtual ev_bool setChannelListener(_in ev_uint16 channelID, _in EarthView::World::Core::CWorkQueueChannelListener* pListener)
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback(channelID, pListener);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::setChannelListener(channelID, pListener);
				}
				virtual EarthView::World::Core::CWorkQueueChannelListener* getChannelListener(_in ev_uint16 channelID) const
				{
					if(m_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueueChannelListener* returnValue = m_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback(channelID);
						return returnValue;
					}
					else
						return this->CDefaultWorkQueue::getChannelListener(channelID);
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultWorkQueueProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue__threadMain_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::_threadMain();
				else
					ptrNativeObject->_threadMain();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue__threadMain_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue__threadMain_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue__threadMain_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue__threadMain_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::_threadMain();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::shutdown();
				else
					ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_shutdown_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_shutdown_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_shutdown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::shutdown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool(void *pObjectXXXX, _in ev_bool forceRestart )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::startup(forceRestart);
				else
					ptrNativeObject->startup(forceRestart);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_startup_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forceRestart )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::startup(forceRestart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_startup_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::startup();
				else
					ptrNativeObject->startup();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_startup_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_startup_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_startup_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_startup_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::startup();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::isQueueRunningByFilter(channel, filter);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isQueueRunningByFilter(channel, filter);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDefaultWorkQueue_isQueueRunningByFilter_ev_bool_ev_uint16_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint16 channel, _in ev_uint64 filter )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::isQueueRunningByFilter(channel, filter);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::waitForNextRequest();
				else
					ptrNativeObject->waitForNextRequest();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_waitForNextRequest_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::waitForNextRequest();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::notifyThreadRegistered();
				else
					ptrNativeObject->notifyThreadRegistered();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_notifyThreadRegistered_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::notifyThreadRegistered();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::notifyWorkers();
				else
					ptrNativeObject->notifyWorkers();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDefaultWorkQueue_notifyWorkers_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CDefaultWorkQueue* ptrNativeObject = (EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CDefaultWorkQueue::notifyWorkers();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_getWorkerThreadCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_setWorkerThreadCount_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_getWorkersCanAccessRenderSystem_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_setWorkersCanAccessRenderSystem_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue__processNextRequest_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_isShuttingDown_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequestHandler_void_ev_uint16_CRequestHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_removeRequestHandler_void_ev_uint16_CRequestHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addResponseHandler_void_ev_uint16_CResponseHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_removeResponseHandler_void_ev_uint16_CResponseHandler(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addRequest_ev_uint64_CRequest(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_addOrReplaceRequest_ev_uint64_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequest_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByChannel_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortRequestsByFilter_void_ev_uint16_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_abortAllRequests_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_setPaused_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_isPaused_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_setRequestsAccepted_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_getRequestsAccepted_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_processResponses_void( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_processResponses_void_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_processResponses_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_getResponseProcessingTimeLimit_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_setResponseProcessingTimeLimit_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_getChannel_ev_uint16_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_setChannelListener_ev_bool_ev_uint16_CWorkQueueChannelListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16( void *pObjectXXXX, EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16_Callback* pCallback )
			{
				CDefaultWorkQueueProxy* ptr = dynamic_cast<CDefaultWorkQueueProxy*>((EarthView::World::Core::CDefaultWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CDefaultWorkQueue_getChannelListener_CWorkQueueChannelListener_ev_uint16(pCallback);
				}
			}
		}
	}
}
