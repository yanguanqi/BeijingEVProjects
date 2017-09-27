package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DefaultWorkQueueBase extends com.earthview.world.core.WorkQueue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDefaultWorkQueueBase", new DefaultWorkQueueBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCDefaultWorkQueueBaseProxy", new DefaultWorkQueueBaseClassFactory());
	}

	native private void registerPreExtraThreadsStartedFunc_void(long pNativeObject, long preExtraThreadsStartedFunc);
	public void registerPreExtraThreadsStartedFunc(VoidPointer preExtraThreadsStartedFunc)
	{
		long preExtraThreadsStartedFuncParamValue = (preExtraThreadsStartedFunc == null ? 0L : preExtraThreadsStartedFunc.nativeObject.pointer);
		registerPreExtraThreadsStartedFunc_void(this.nativeObject.pointer, preExtraThreadsStartedFuncParamValue);
	}
	native private void registerPostExtraThreadsStartedFunc_void(long pNativeObject, long postExtraThreadsStartedFunc);
	public void registerPostExtraThreadsStartedFunc(VoidPointer postExtraThreadsStartedFunc)
	{
		long postExtraThreadsStartedFuncParamValue = (postExtraThreadsStartedFunc == null ? 0L : postExtraThreadsStartedFunc.nativeObject.pointer);
		registerPostExtraThreadsStartedFunc_void(this.nativeObject.pointer, postExtraThreadsStartedFuncParamValue);
	}
	native private void registerThreadFunc_void(long pNativeObject, long pThreadFunc);
	public void registerThreadFunc(VoidPointer pThreadFunc)
	{
		long pThreadFuncParamValue = (pThreadFunc == null ? 0L : pThreadFunc.nativeObject.pointer);
		registerThreadFunc_void(this.nativeObject.pointer, pThreadFuncParamValue);
	}
	native private void registerThreadFunc2_void(long pNativeObject, long pThreadFunc);
	public void registerThreadFunc2(VoidPointer pThreadFunc)
	{
		long pThreadFuncParamValue = (pThreadFunc == null ? 0L : pThreadFunc.nativeObject.pointer);
		registerThreadFunc2_void(this.nativeObject.pointer, pThreadFuncParamValue);
	}
	native private void registerflushRenderSystemFunc_void(long pNativeObject, long pflushRenderSystemFunc);
	public void registerflushRenderSystemFunc(VoidPointer pflushRenderSystemFunc)
	{
		long pflushRenderSystemFuncParamValue = (pflushRenderSystemFunc == null ? 0L : pflushRenderSystemFunc.nativeObject.pointer);
		registerflushRenderSystemFunc_void(this.nativeObject.pointer, pflushRenderSystemFuncParamValue);
	}
	native private void unregisterPreExtraThreadsStartedFunc_void(long pNativeObject);
	public void unregisterPreExtraThreadsStartedFunc()
	{
		unregisterPreExtraThreadsStartedFunc_void(this.nativeObject.pointer);
	}
	native private void unregisterPostExtraThreadsStartedFunc_void(long pNativeObject);
	public void unregisterPostExtraThreadsStartedFunc()
	{
		unregisterPostExtraThreadsStartedFunc_void(this.nativeObject.pointer);
	}
	native private void unregisterThreadFunc_void(long pNativeObject);
	public void unregisterThreadFunc()
	{
		unregisterThreadFunc_void(this.nativeObject.pointer);
	}
	native private void unregisterThreadFunc2_void(long pNativeObject);
	public void unregisterThreadFunc2()
	{
		unregisterThreadFunc2_void(this.nativeObject.pointer);
	}
	native private void unregisterflushRenderSystemFunc_void(long pNativeObject);
	public void unregisterflushRenderSystemFunc()
	{
		unregisterflushRenderSystemFunc_void(this.nativeObject.pointer);
	}
	public DefaultWorkQueueBase(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCDefaultWorkQueueBaseProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DefaultWorkQueueBase".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public DefaultWorkQueueBase() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDefaultWorkQueueBaseProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DefaultWorkQueueBase".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getName_void(long pNativeObject);
	//// Get the name of the work queue
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	protected  long getWorkerThreadCount_void_callback()
	{
		long returnValue = getWorkerThreadCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getWorkerThreadCount_void(long pNativeObject);
	public long getWorkerThreadCount()
	{
		long returnValue = getWorkerThreadCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getWorkerThreadCount_void_NoVirtual(long pNativeObject);
	protected long getWorkerThreadCount_NoVirtual()
	{
		long returnValue = getWorkerThreadCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setWorkerThreadCount_ev_size_t_callback(long c)
	{
		long cParamValue = c;
		setWorkerThreadCount(cParamValue);
	}

	native private void setWorkerThreadCount_ev_size_t(long pNativeObject, long c);
	public void setWorkerThreadCount(long c)
	{
		long cParamValue = c;
		setWorkerThreadCount_ev_size_t(this.nativeObject.pointer, cParamValue);
	}
	native private void setWorkerThreadCount_ev_size_t_NoVirtual(long pNativeObject, long c);
	protected void setWorkerThreadCount_NoVirtual(long c)
	{
		long cParamValue = c;
		setWorkerThreadCount_ev_size_t_NoVirtual(this.nativeObject.pointer, cParamValue);
	}

	protected  boolean getWorkersCanAccessRenderSystem_void_callback()
	{
		boolean returnValue = getWorkersCanAccessRenderSystem();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getWorkersCanAccessRenderSystem_void(long pNativeObject);
	public boolean getWorkersCanAccessRenderSystem()
	{
		boolean returnValue = getWorkersCanAccessRenderSystem_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getWorkersCanAccessRenderSystem_void_NoVirtual(long pNativeObject);
	protected boolean getWorkersCanAccessRenderSystem_NoVirtual()
	{
		boolean returnValue = getWorkersCanAccessRenderSystem_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setWorkersCanAccessRenderSystem_ev_bool_callback(boolean access)
	{
		boolean accessParamValue = access;
		setWorkersCanAccessRenderSystem(accessParamValue);
	}

	native private void setWorkersCanAccessRenderSystem_ev_bool(long pNativeObject, boolean access);
	public void setWorkersCanAccessRenderSystem(boolean access)
	{
		boolean accessParamValue = access;
		setWorkersCanAccessRenderSystem_ev_bool(this.nativeObject.pointer, accessParamValue);
	}
	native private void setWorkersCanAccessRenderSystem_ev_bool_NoVirtual(long pNativeObject, boolean access);
	protected void setWorkersCanAccessRenderSystem_NoVirtual(boolean access)
	{
		boolean accessParamValue = access;
		setWorkersCanAccessRenderSystem_ev_bool_NoVirtual(this.nativeObject.pointer, accessParamValue);
	}

	protected  void _processNextRequest_void_callback()
	{
		_processNextRequest();
	}

	native private void _processNextRequest_void(long pNativeObject);
	public void _processNextRequest()
	{
		_processNextRequest_void(this.nativeObject.pointer);
	}
	native private void _processNextRequest_void_NoVirtual(long pNativeObject);
	protected void _processNextRequest_NoVirtual()
	{
		_processNextRequest_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void _threadMain_void_callback()
	{
		_threadMain();
	}

	native private void _threadMain_void(long pNativeObject);
	//// Main function for each thread spawned.
	public void _threadMain()
	{
		_threadMain_void(this.nativeObject.pointer);
	}
	native private void _threadMain_void_NoVirtual(long pNativeObject);
	protected void _threadMain_NoVirtual()
	{
		_threadMain_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isShuttingDown_void_callback()
	{
		boolean returnValue = isShuttingDown();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isShuttingDown_void(long pNativeObject);
	public boolean isShuttingDown()
	{
		boolean returnValue = isShuttingDown_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isShuttingDown_void_NoVirtual(long pNativeObject);
	protected boolean isShuttingDown_NoVirtual()
	{
		boolean returnValue = isShuttingDown_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void addRequestHandler_ev_uint16_CRequestHandler(long pNativeObject, int channel, long rh);
	//// @copydoc CWorkQueue::addRequestHandler
	public void addRequestHandler(int channel, com.earthview.world.core.WorkQueue.RequestHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		addRequestHandler_ev_uint16_CRequestHandler(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}
	native private void addRequestHandler_ev_uint16_CRequestHandler_NoVirtual(long pNativeObject, int channel, long rh);
	protected void addRequestHandler_NoVirtual(int channel, com.earthview.world.core.WorkQueue.RequestHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		addRequestHandler_ev_uint16_CRequestHandler_NoVirtual(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}

	native private void removeRequestHandler_ev_uint16_CRequestHandler(long pNativeObject, int channel, long rh);
	//// @copydoc CWorkQueue::removeRequestHandler
	public void removeRequestHandler(int channel, com.earthview.world.core.WorkQueue.RequestHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		removeRequestHandler_ev_uint16_CRequestHandler(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}
	native private void removeRequestHandler_ev_uint16_CRequestHandler_NoVirtual(long pNativeObject, int channel, long rh);
	protected void removeRequestHandler_NoVirtual(int channel, com.earthview.world.core.WorkQueue.RequestHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		removeRequestHandler_ev_uint16_CRequestHandler_NoVirtual(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}

	native private void addResponseHandler_ev_uint16_CResponseHandler(long pNativeObject, int channel, long rh);
	//// @copydoc CWorkQueue::addResponseHandler
	public void addResponseHandler(int channel, com.earthview.world.core.WorkQueue.ResponseHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		addResponseHandler_ev_uint16_CResponseHandler(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}
	native private void addResponseHandler_ev_uint16_CResponseHandler_NoVirtual(long pNativeObject, int channel, long rh);
	protected void addResponseHandler_NoVirtual(int channel, com.earthview.world.core.WorkQueue.ResponseHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		addResponseHandler_ev_uint16_CResponseHandler_NoVirtual(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}

	native private void removeResponseHandler_ev_uint16_CResponseHandler(long pNativeObject, int channel, long rh);
	//// @copydoc CWorkQueue::removeResponseHandler
	public void removeResponseHandler(int channel, com.earthview.world.core.WorkQueue.ResponseHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		removeResponseHandler_ev_uint16_CResponseHandler(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}
	native private void removeResponseHandler_ev_uint16_CResponseHandler_NoVirtual(long pNativeObject, int channel, long rh);
	protected void removeResponseHandler_NoVirtual(int channel, com.earthview.world.core.WorkQueue.ResponseHandler rh)
	{
		int channelParamValue = channel;
		long rhParamValue = (rh == null ? 0L : rh.nativeObject.pointer);
		removeResponseHandler_ev_uint16_CResponseHandler_NoVirtual(this.nativeObject.pointer, channelParamValue, rhParamValue);
	}

	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter);
	//// @copydoc CWorkQueue::addRequest
	///virtual RequestID addRequest(ev_uint16 channel, ev_uint16 requestType, const CAny& rData, ev_uint8 retryCount = 0,
	///	ev_bool forceSynchronous = false);
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous, ULongPointer filter)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		long filterParamValue = filter.nativeObject.pointer;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue, filterParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter);
	protected ULongPointer addRequest_NoVirtual(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous, ULongPointer filter)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		long filterParamValue = filter.nativeObject.pointer;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue, filterParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String addRequest_CRequest(long pNativeObject, long request);
	public ULongPointer addRequest(com.earthview.world.core.WorkQueue.Request request)
	{
		long requestParamValue = (request == null ? 0L : request.nativeObject.pointer);
		String returnValue = addRequest_CRequest(this.nativeObject.pointer, requestParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addRequest_CRequest_NoVirtual(long pNativeObject, long request);
	protected ULongPointer addRequest_NoVirtual(com.earthview.world.core.WorkQueue.Request request)
	{
		long requestParamValue = (request == null ? 0L : request.nativeObject.pointer);
		String returnValue = addRequest_CRequest_NoVirtual(this.nativeObject.pointer, requestParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter);
	public ULongPointer addOrReplaceRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous, ULongPointer filter)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		long filterParamValue = filter.nativeObject.pointer;
		String returnValue = addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue, filterParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter);
	protected ULongPointer addOrReplaceRequest_NoVirtual(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous, ULongPointer filter)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		long filterParamValue = filter.nativeObject.pointer;
		String returnValue = addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_NoVirtual(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue, filterParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private void abortRequest_ev_uint64(long pNativeObject, long id);
	//// @copydoc CWorkQueue::abortRequest
	public void abortRequest(ULongPointer id)
	{
		long idParamValue = id.nativeObject.pointer;
		abortRequest_ev_uint64(this.nativeObject.pointer, idParamValue);
	}
	native private void abortRequest_ev_uint64_NoVirtual(long pNativeObject, long id);
	protected void abortRequest_NoVirtual(ULongPointer id)
	{
		long idParamValue = id.nativeObject.pointer;
		abortRequest_ev_uint64_NoVirtual(this.nativeObject.pointer, idParamValue);
	}

	native private void abortRequestsByChannel_ev_uint16(long pNativeObject, int channel);
	//// @copydoc CWorkQueue::abortRequestsByChannel
	public void abortRequestsByChannel(int channel)
	{
		int channelParamValue = channel;
		abortRequestsByChannel_ev_uint16(this.nativeObject.pointer, channelParamValue);
	}
	native private void abortRequestsByChannel_ev_uint16_NoVirtual(long pNativeObject, int channel);
	protected void abortRequestsByChannel_NoVirtual(int channel)
	{
		int channelParamValue = channel;
		abortRequestsByChannel_ev_uint16_NoVirtual(this.nativeObject.pointer, channelParamValue);
	}

	native private void abortRequestsByFilter_ev_uint16_ev_uint64(long pNativeObject, int channel, long filter);
	public void abortRequestsByFilter(int channel, ULongPointer filter)
	{
		int channelParamValue = channel;
		long filterParamValue = filter.nativeObject.pointer;
		abortRequestsByFilter_ev_uint16_ev_uint64(this.nativeObject.pointer, channelParamValue, filterParamValue);
	}
	native private void abortRequestsByFilter_ev_uint16_ev_uint64_NoVirtual(long pNativeObject, int channel, long filter);
	protected void abortRequestsByFilter_NoVirtual(int channel, ULongPointer filter)
	{
		int channelParamValue = channel;
		long filterParamValue = filter.nativeObject.pointer;
		abortRequestsByFilter_ev_uint16_ev_uint64_NoVirtual(this.nativeObject.pointer, channelParamValue, filterParamValue);
	}

	native private void abortAllRequests_void(long pNativeObject);
	//// @copydoc CWorkQueue::abortAllRequests
	public void abortAllRequests()
	{
		abortAllRequests_void(this.nativeObject.pointer);
	}
	native private void abortAllRequests_void_NoVirtual(long pNativeObject);
	protected void abortAllRequests_NoVirtual()
	{
		abortAllRequests_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setPaused_ev_bool(long pNativeObject, boolean pause);
	//// @copydoc CWorkQueue::setPaused
	public void setPaused(boolean pause)
	{
		boolean pauseParamValue = pause;
		setPaused_ev_bool(this.nativeObject.pointer, pauseParamValue);
	}
	native private void setPaused_ev_bool_NoVirtual(long pNativeObject, boolean pause);
	protected void setPaused_NoVirtual(boolean pause)
	{
		boolean pauseParamValue = pause;
		setPaused_ev_bool_NoVirtual(this.nativeObject.pointer, pauseParamValue);
	}

	native private boolean isPaused_void(long pNativeObject);
	//// @copydoc CWorkQueue::isPaused
	public boolean isPaused()
	{
		boolean returnValue = isPaused_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isPaused_void_NoVirtual(long pNativeObject);
	protected boolean isPaused_NoVirtual()
	{
		boolean returnValue = isPaused_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setRequestsAccepted_ev_bool(long pNativeObject, boolean accept);
	//// @copydoc CWorkQueue::setRequestsAccepted
	public void setRequestsAccepted(boolean accept)
	{
		boolean acceptParamValue = accept;
		setRequestsAccepted_ev_bool(this.nativeObject.pointer, acceptParamValue);
	}
	native private void setRequestsAccepted_ev_bool_NoVirtual(long pNativeObject, boolean accept);
	protected void setRequestsAccepted_NoVirtual(boolean accept)
	{
		boolean acceptParamValue = accept;
		setRequestsAccepted_ev_bool_NoVirtual(this.nativeObject.pointer, acceptParamValue);
	}

	native private boolean getRequestsAccepted_void(long pNativeObject);
	//// @copydoc CWorkQueue::getRequestsAccepted
	public boolean getRequestsAccepted()
	{
		boolean returnValue = getRequestsAccepted_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRequestsAccepted_void_NoVirtual(long pNativeObject);
	protected boolean getRequestsAccepted_NoVirtual()
	{
		boolean returnValue = getRequestsAccepted_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void processResponses_void(long pNativeObject);
	//// @copydoc CWorkQueue::processResponses
	public void processResponses()
	{
		processResponses_void(this.nativeObject.pointer);
	}
	native private void processResponses_void_NoVirtual(long pNativeObject);
	protected void processResponses_NoVirtual()
	{
		processResponses_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getResponseProcessingTimeLimit_void(long pNativeObject);
	//// @copydoc CWorkQueue::getResponseProcessingTimeLimit
	public long getResponseProcessingTimeLimit()
	{
		long returnValue = getResponseProcessingTimeLimit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getResponseProcessingTimeLimit_void_NoVirtual(long pNativeObject);
	protected long getResponseProcessingTimeLimit_NoVirtual()
	{
		long returnValue = getResponseProcessingTimeLimit_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setResponseProcessingTimeLimit_ev_uint32(long pNativeObject, long ms);
	//// @copydoc CWorkQueue::setResponseProcessingTimeLimit
	public void setResponseProcessingTimeLimit(long ms)
	{
		long msParamValue = ms;
		setResponseProcessingTimeLimit_ev_uint32(this.nativeObject.pointer, msParamValue);
	}
	native private void setResponseProcessingTimeLimit_ev_uint32_NoVirtual(long pNativeObject, long ms);
	protected void setResponseProcessingTimeLimit_NoVirtual(long ms)
	{
		long msParamValue = ms;
		setResponseProcessingTimeLimit_ev_uint32_NoVirtual(this.nativeObject.pointer, msParamValue);
	}

	public static class RequestHandlerHolder extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder", new RequestHandlerHolderClassFactory());
		}

		public RequestHandlerHolder(com.earthview.world.core.WorkQueue.RequestHandler handler) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer handlerPtr = new BasePointer(handler);
			list.add("handler", handlerPtr.get());
			Create("CRequestHandlerHolder", list);
		}

		native private void disconnectHandler_void(long pNativeObject);
		/// Disconnect the handler to allow it to be destroyed
		public void disconnectHandler()
		{
			disconnectHandler_void(this.nativeObject.pointer);
		}
		native private long getHandler_void(long pNativeObject);
		public com.earthview.world.core.WorkQueue.RequestHandler getHandler()
		{
			long returnValue = getHandler_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.RequestHandler __returnValue = new com.earthview.world.core.WorkQueue.RequestHandler(CreatedWhenConstruct.CWC_NotToCreate, "CRequestHandler");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.RequestHandler)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRequestHandler");
			}
			return __returnValue;
		}
		native private long handleRequest_CRequest_CWorkQueue(long pNativeObject, long req, long srcQ);
		public com.earthview.world.core.WorkQueue.Response handleRequest(com.earthview.world.core.WorkQueue.Request req, com.earthview.world.core.WorkQueue srcQ)
		{
			long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			long returnValue = handleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, reqParamValue, srcQParamValue);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.Response __returnValue = new com.earthview.world.core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate, "CResponse");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.Response)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CResponse");
			}
			return __returnValue;
		}
		public RequestHandlerHolder(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RequestHandlerHolder(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static RequestHandlerHolder fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RequestHandlerHolder obj = null;
 			if(baseObj instanceof RequestHandlerHolder)
			{
				obj = (RequestHandlerHolder)baseObj;
			} else {
				obj = new RequestHandlerHolder(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRequestHandlerHolder");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RequestHandlerHolderClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RequestHandlerHolder emptyInstance = new RequestHandlerHolder(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	protected  void notifyWorkers_void_callback()
	{
		notifyWorkers();
	}

	native private void notifyWorkers_void(long pNativeObject);
	//// Notify workers about a new request.
	public void notifyWorkers()
	{
		notifyWorkers_void(this.nativeObject.pointer);
	}
	native private void notifyWorkers_void_NoVirtual(long pNativeObject);
	protected void notifyWorkers_NoVirtual()
	{
		notifyWorkers_void_NoVirtual(this.nativeObject.pointer);
	}

	public DefaultWorkQueueBase(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultWorkQueueBase(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void startup(boolean forceRestart)
	{
		super.startup_NoVirtual(forceRestart);
	}
	public void startup()
	{
		super.startup_NoVirtual();
	}
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous)
	{
		return super.addRequest_NoVirtual(channel, requestType, rData, retryCount, forceSynchronous);
	}
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount)
	{
		return super.addRequest_NoVirtual(channel, requestType, rData, retryCount);
	}
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData)
	{
		return super.addRequest_NoVirtual(channel, requestType, rData);
	}
	public void shutdown()
	{
		super.shutdown_NoVirtual();
	}
	public int getChannel(long priority)
	{
		return super.getChannel_NoVirtual(priority);
	}
	public boolean setChannelListener(int channelID, com.earthview.world.core.WorkQueueChannelListener pListener)
	{
		return super.setChannelListener_NoVirtual(channelID, pListener);
	}
	public com.earthview.world.core.WorkQueueChannelListener getChannelListener(int channelID)
	{
		return super.getChannelListener_NoVirtual(channelID);
	}
	
	native protected void register_getWorkerThreadCount_void(long pNativeObject, String method);
	native protected void register_setWorkerThreadCount_ev_size_t(long pNativeObject, String method);
	native protected void register_getWorkersCanAccessRenderSystem_void(long pNativeObject, String method);
	native protected void register_setWorkersCanAccessRenderSystem_ev_bool(long pNativeObject, String method);
	native protected void register__processNextRequest_void(long pNativeObject, String method);
	native protected void register__threadMain_void(long pNativeObject, String method);
	native protected void register_isShuttingDown_void(long pNativeObject, String method);
	native protected void register_notifyWorkers_void(long pNativeObject, String method);
	native protected void register_startup_ev_bool(long pNativeObject, String method);
	native protected void register_startup_void(long pNativeObject, String method);
	native protected void register_addRequestHandler_ev_uint16_CRequestHandler(long pNativeObject, String method);
	native protected void register_removeRequestHandler_ev_uint16_CRequestHandler(long pNativeObject, String method);
	native protected void register_addResponseHandler_ev_uint16_CResponseHandler(long pNativeObject, String method);
	native protected void register_removeResponseHandler_ev_uint16_CResponseHandler(long pNativeObject, String method);
	native protected void register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(long pNativeObject, String method);
	native protected void register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(long pNativeObject, String method);
	native protected void register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8(long pNativeObject, String method);
	native protected void register_addRequest_ev_uint16_ev_uint16_RequestPara(long pNativeObject, String method);
	native protected void register_addRequest_CRequest(long pNativeObject, String method);
	native protected void register_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(long pNativeObject, String method);
	native protected void register_abortRequest_ev_uint64(long pNativeObject, String method);
	native protected void register_abortRequestsByChannel_ev_uint16(long pNativeObject, String method);
	native protected void register_abortRequestsByFilter_ev_uint16_ev_uint64(long pNativeObject, String method);
	native protected void register_abortAllRequests_void(long pNativeObject, String method);
	native protected void register_setPaused_ev_bool(long pNativeObject, String method);
	native protected void register_isPaused_void(long pNativeObject, String method);
	native protected void register_setRequestsAccepted_ev_bool(long pNativeObject, String method);
	native protected void register_getRequestsAccepted_void(long pNativeObject, String method);
	native protected void register_processResponses_void(long pNativeObject, String method);
	native protected void register_getResponseProcessingTimeLimit_void(long pNativeObject, String method);
	native protected void register_setResponseProcessingTimeLimit_ev_uint32(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_getChannel_ev_uint32(long pNativeObject, String method);
	native protected void register_setChannelListener_ev_uint16_CWorkQueueChannelListener(long pNativeObject, String method);
	native protected void register_getChannelListener_ev_uint16(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getWorkerThreadCount_void(this.nativeObject.pointer, "getWorkerThreadCount_void_callback");
			this.register_setWorkerThreadCount_ev_size_t(this.nativeObject.pointer, "setWorkerThreadCount_ev_size_t_callback");
			this.register_getWorkersCanAccessRenderSystem_void(this.nativeObject.pointer, "getWorkersCanAccessRenderSystem_void_callback");
			this.register_setWorkersCanAccessRenderSystem_ev_bool(this.nativeObject.pointer, "setWorkersCanAccessRenderSystem_ev_bool_callback");
			this.register__processNextRequest_void(this.nativeObject.pointer, "_processNextRequest_void_callback");
			this.register__threadMain_void(this.nativeObject.pointer, "_threadMain_void_callback");
			this.register_isShuttingDown_void(this.nativeObject.pointer, "isShuttingDown_void_callback");
			this.register_notifyWorkers_void(this.nativeObject.pointer, "notifyWorkers_void_callback");
			this.register_startup_ev_bool(this.nativeObject.pointer, "startup_ev_bool_callback");
			this.register_startup_void(this.nativeObject.pointer, "startup_void_callback");
			this.register_addRequestHandler_ev_uint16_CRequestHandler(this.nativeObject.pointer, "addRequestHandler_ev_uint16_CRequestHandler_callback");
			this.register_removeRequestHandler_ev_uint16_CRequestHandler(this.nativeObject.pointer, "removeRequestHandler_ev_uint16_CRequestHandler_callback");
			this.register_addResponseHandler_ev_uint16_CResponseHandler(this.nativeObject.pointer, "addResponseHandler_ev_uint16_CResponseHandler_callback");
			this.register_removeResponseHandler_ev_uint16_CResponseHandler(this.nativeObject.pointer, "removeResponseHandler_ev_uint16_CResponseHandler_callback");
			this.register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.nativeObject.pointer, "addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback");
			this.register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(this.nativeObject.pointer, "addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback");
			this.register_addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8(this.nativeObject.pointer, "addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback");
			this.register_addRequest_ev_uint16_ev_uint16_RequestPara(this.nativeObject.pointer, "addRequest_ev_uint16_ev_uint16_RequestPara_callback");
			this.register_addRequest_CRequest(this.nativeObject.pointer, "addRequest_CRequest_callback");
			this.register_addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(this.nativeObject.pointer, "addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback");
			this.register_abortRequest_ev_uint64(this.nativeObject.pointer, "abortRequest_ev_uint64_callback");
			this.register_abortRequestsByChannel_ev_uint16(this.nativeObject.pointer, "abortRequestsByChannel_ev_uint16_callback");
			this.register_abortRequestsByFilter_ev_uint16_ev_uint64(this.nativeObject.pointer, "abortRequestsByFilter_ev_uint16_ev_uint64_callback");
			this.register_abortAllRequests_void(this.nativeObject.pointer, "abortAllRequests_void_callback");
			this.register_setPaused_ev_bool(this.nativeObject.pointer, "setPaused_ev_bool_callback");
			this.register_isPaused_void(this.nativeObject.pointer, "isPaused_void_callback");
			this.register_setRequestsAccepted_ev_bool(this.nativeObject.pointer, "setRequestsAccepted_ev_bool_callback");
			this.register_getRequestsAccepted_void(this.nativeObject.pointer, "getRequestsAccepted_void_callback");
			this.register_processResponses_void(this.nativeObject.pointer, "processResponses_void_callback");
			this.register_getResponseProcessingTimeLimit_void(this.nativeObject.pointer, "getResponseProcessingTimeLimit_void_callback");
			this.register_setResponseProcessingTimeLimit_ev_uint32(this.nativeObject.pointer, "setResponseProcessingTimeLimit_ev_uint32_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_getChannel_ev_uint32(this.nativeObject.pointer, "getChannel_ev_uint32_callback");
			this.register_setChannelListener_ev_uint16_CWorkQueueChannelListener(this.nativeObject.pointer, "setChannelListener_ev_uint16_CWorkQueueChannelListener_callback");
			this.register_getChannelListener_ev_uint16(this.nativeObject.pointer, "getChannelListener_ev_uint16_callback");
		}
	}
	
	public static DefaultWorkQueueBase fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultWorkQueueBase obj = null;
 		if(baseObj instanceof DefaultWorkQueueBase)
		{
			obj = (DefaultWorkQueueBase)baseObj;
		} else {
			obj = new DefaultWorkQueueBase(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultWorkQueueBase");
			obj.increaseCast();
		}

		return obj;
	}
}
