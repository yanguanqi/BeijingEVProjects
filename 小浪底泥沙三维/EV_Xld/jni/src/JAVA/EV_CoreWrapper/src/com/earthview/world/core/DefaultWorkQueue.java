package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DefaultWorkQueue extends com.earthview.world.core.DefaultWorkQueueBase {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CDefaultWorkQueue", new DefaultWorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCDefaultWorkQueueProxy", new DefaultWorkQueueClassFactory());
	}

	public DefaultWorkQueue(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCDefaultWorkQueueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DefaultWorkQueue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public DefaultWorkQueue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDefaultWorkQueueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.DefaultWorkQueue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private void shutdown_void(long pNativeObject);
	//// @copydoc CWorkQueue::shutdown
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void startup_ev_bool(long pNativeObject, boolean forceRestart);
	//// @copydoc CWorkQueue::startup
	public void startup(boolean forceRestart)
	{
		boolean forceRestartParamValue = forceRestart;
		startup_ev_bool(this.nativeObject.pointer, forceRestartParamValue);
	}
	native private void startup_ev_bool_NoVirtual(long pNativeObject, boolean forceRestart);
	protected void startup_NoVirtual(boolean forceRestart)
	{
		boolean forceRestartParamValue = forceRestart;
		startup_ev_bool_NoVirtual(this.nativeObject.pointer, forceRestartParamValue);
	}

	native private void startup_void(long pNativeObject);
	public void startup()
	{
		startup_void(this.nativeObject.pointer);
	}
	native private void startup_void_NoVirtual(long pNativeObject);
	protected void startup_NoVirtual()
	{
		startup_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean isQueueRunningByFilter_ev_uint16_ev_uint64_callback(int channel, long filter)
	{
		int channelParamValue = channel;
		ULongPointer filterParamValue = new ULongPointer(new InstancePointer(filter));
		boolean returnValue = isQueueRunningByFilter(channelParamValue, filterParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isQueueRunningByFilter_ev_uint16_ev_uint64(long pNativeObject, int channel, long filter);
	public boolean isQueueRunningByFilter(int channel, ULongPointer filter)
	{
		int channelParamValue = channel;
		long filterParamValue = filter.nativeObject.pointer;
		boolean returnValue = isQueueRunningByFilter_ev_uint16_ev_uint64(this.nativeObject.pointer, channelParamValue, filterParamValue);
		return returnValue;
	}
	native private boolean isQueueRunningByFilter_ev_uint16_ev_uint64_NoVirtual(long pNativeObject, int channel, long filter);
	protected boolean isQueueRunningByFilter_NoVirtual(int channel, ULongPointer filter)
	{
		int channelParamValue = channel;
		long filterParamValue = filter.nativeObject.pointer;
		boolean returnValue = isQueueRunningByFilter_ev_uint16_ev_uint64_NoVirtual(this.nativeObject.pointer, channelParamValue, filterParamValue);
		return returnValue;
	}

	protected  void waitForNextRequest_void_callback()
	{
		waitForNextRequest();
	}

	native private void waitForNextRequest_void(long pNativeObject);
	public void waitForNextRequest()
	{
		waitForNextRequest_void(this.nativeObject.pointer);
	}
	native private void waitForNextRequest_void_NoVirtual(long pNativeObject);
	protected void waitForNextRequest_NoVirtual()
	{
		waitForNextRequest_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void notifyThreadRegistered_void_callback()
	{
		notifyThreadRegistered();
	}

	native private void notifyThreadRegistered_void(long pNativeObject);
	//// Notify that a thread has registered itself with the render system
	public void notifyThreadRegistered()
	{
		notifyThreadRegistered_void(this.nativeObject.pointer);
	}
	native private void notifyThreadRegistered_void_NoVirtual(long pNativeObject);
	protected void notifyThreadRegistered_NoVirtual()
	{
		notifyThreadRegistered_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void notifyWorkers_void(long pNativeObject);
	public void notifyWorkers()
	{
		notifyWorkers_void(this.nativeObject.pointer);
	}
	native private void notifyWorkers_void_NoVirtual(long pNativeObject);
	protected void notifyWorkers_NoVirtual()
	{
		notifyWorkers_void_NoVirtual(this.nativeObject.pointer);
	}

	public DefaultWorkQueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultWorkQueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public long getWorkerThreadCount()
	{
		return super.getWorkerThreadCount_NoVirtual();
	}
	public void setWorkerThreadCount(long c)
	{
		super.setWorkerThreadCount_NoVirtual(c);
	}
	public boolean getWorkersCanAccessRenderSystem()
	{
		return super.getWorkersCanAccessRenderSystem_NoVirtual();
	}
	public void setWorkersCanAccessRenderSystem(boolean access)
	{
		super.setWorkersCanAccessRenderSystem_NoVirtual(access);
	}
	public void _processNextRequest()
	{
		super._processNextRequest_NoVirtual();
	}
	public boolean isShuttingDown()
	{
		return super.isShuttingDown_NoVirtual();
	}
	public void addRequestHandler(int channel, com.earthview.world.core.WorkQueue.RequestHandler rh)
	{
		super.addRequestHandler_NoVirtual(channel, rh);
	}
	public void removeRequestHandler(int channel, com.earthview.world.core.WorkQueue.RequestHandler rh)
	{
		super.removeRequestHandler_NoVirtual(channel, rh);
	}
	public void addResponseHandler(int channel, com.earthview.world.core.WorkQueue.ResponseHandler rh)
	{
		super.addResponseHandler_NoVirtual(channel, rh);
	}
	public void removeResponseHandler(int channel, com.earthview.world.core.WorkQueue.ResponseHandler rh)
	{
		super.removeResponseHandler_NoVirtual(channel, rh);
	}
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous, ULongPointer filter)
	{
		return super.addRequest_NoVirtual(channel, requestType, rData, retryCount, forceSynchronous, filter);
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
	public ULongPointer addRequest(com.earthview.world.core.WorkQueue.Request request)
	{
		return super.addRequest_NoVirtual(request);
	}
	public ULongPointer addOrReplaceRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous, ULongPointer filter)
	{
		return super.addOrReplaceRequest_NoVirtual(channel, requestType, rData, retryCount, forceSynchronous, filter);
	}
	public void abortRequest(ULongPointer id)
	{
		super.abortRequest_NoVirtual(id);
	}
	public void abortRequestsByChannel(int channel)
	{
		super.abortRequestsByChannel_NoVirtual(channel);
	}
	public void abortRequestsByFilter(int channel, ULongPointer filter)
	{
		super.abortRequestsByFilter_NoVirtual(channel, filter);
	}
	public void abortAllRequests()
	{
		super.abortAllRequests_NoVirtual();
	}
	public void setPaused(boolean pause)
	{
		super.setPaused_NoVirtual(pause);
	}
	//// Return whether the queue is paused ie not sending more work to workers
	public boolean isPaused()
	{
		return super.isPaused_NoVirtual();
	}
	public void setRequestsAccepted(boolean accept)
	{
		super.setRequestsAccepted_NoVirtual(accept);
	}
	//// Returns whether requests are being accepted right now
	public boolean getRequestsAccepted()
	{
		return super.getRequestsAccepted_NoVirtual();
	}
	public void processResponses()
	{
		super.processResponses_NoVirtual();
	}
	public long getResponseProcessingTimeLimit()
	{
		return super.getResponseProcessingTimeLimit_NoVirtual();
	}
	public void setResponseProcessingTimeLimit(long ms)
	{
		super.setResponseProcessingTimeLimit_NoVirtual(ms);
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
	
	native protected void register_isQueueRunningByFilter_ev_uint16_ev_uint64(long pNativeObject, String method);
	native protected void register_waitForNextRequest_void(long pNativeObject, String method);
	native protected void register_notifyThreadRegistered_void(long pNativeObject, String method);
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
			this.register_isQueueRunningByFilter_ev_uint16_ev_uint64(this.nativeObject.pointer, "isQueueRunningByFilter_ev_uint16_ev_uint64_callback");
			this.register_waitForNextRequest_void(this.nativeObject.pointer, "waitForNextRequest_void_callback");
			this.register_notifyThreadRegistered_void(this.nativeObject.pointer, "notifyThreadRegistered_void_callback");
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
	
	public static DefaultWorkQueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultWorkQueue obj = null;
 		if(baseObj instanceof DefaultWorkQueue)
		{
			obj = (DefaultWorkQueue)baseObj;
		} else {
			obj = new DefaultWorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultWorkQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
