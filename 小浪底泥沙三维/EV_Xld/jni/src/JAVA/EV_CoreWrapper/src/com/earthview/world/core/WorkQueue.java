package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class WorkQueue extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue", new WorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCWorkQueueProxy", new WorkQueueClassFactory());
	}

	public static class RequestPara extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::RequestPara", new RequestParaClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JRequestParaProxy", new RequestParaClassFactory());
		}

		public RequestPara() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JRequestParaProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.core.WorkQueue$RequestPara".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  long ev_clone_void_callback()
		{
			com.earthview.world.core.WorkQueue.RequestPara returnValue = ev_clone();
			if(returnValue == null) {
				return 0L;
			}
			returnValue.setDelegate(true);
			long __returnValue = returnValue.nativeObject.pointer;
			return __returnValue;
		}

		native private long ev_clone_void(long pNativeObject);
		public com.earthview.world.core.WorkQueue.RequestPara ev_clone()
		{
			long returnValue = ev_clone_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.RequestPara __returnValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate, "RequestPara");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.RequestPara)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RequestPara");
			}
			return __returnValue;
		}
		native private long ev_clone_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.core.WorkQueue.RequestPara ev_clone_NoVirtual()
		{
			long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.RequestPara __returnValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate, "RequestPara");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.RequestPara)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "RequestPara");
			}
			return __returnValue;
		}

		native private long getRequest_void(long pNativeObject);
		public com.earthview.world.core.WorkQueue.Request getRequest()
		{
			long returnValue = getRequest_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.Request __returnValue = new com.earthview.world.core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate, "CRequest");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.Request)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRequest");
			}
			return __returnValue;
		}
		native private void setRequest_CRequest(long pNativeObject, long parent);
		public void setRequest(com.earthview.world.core.WorkQueue.Request parent)
		{
			long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
			setRequest_CRequest(this.nativeObject.pointer, parentParamValue);
		}
		public RequestPara(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RequestPara(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_ev_clone_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			}
		}
		
		public static RequestPara fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RequestPara obj = null;
 			if(baseObj instanceof RequestPara)
			{
				obj = (RequestPara)baseObj;
			} else {
				obj = new RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "RequestPara");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RequestParaClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RequestPara emptyInstance = new RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResponsePara extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::ResponsePara", new ResponseParaClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JResponseParaProxy", new ResponseParaClassFactory());
		}

		public ResponsePara() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JResponseParaProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.core.WorkQueue$ResponsePara".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  long ev_clone_void_callback()
		{
			com.earthview.world.core.WorkQueue.ResponsePara returnValue = ev_clone();
			if(returnValue == null) {
				return 0L;
			}
			returnValue.setDelegate(true);
			long __returnValue = returnValue.nativeObject.pointer;
			return __returnValue;
		}

		native private long ev_clone_void(long pNativeObject);
		public com.earthview.world.core.WorkQueue.ResponsePara ev_clone()
		{
			long returnValue = ev_clone_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.ResponsePara __returnValue = new com.earthview.world.core.WorkQueue.ResponsePara(CreatedWhenConstruct.CWC_NotToCreate, "ResponsePara");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.ResponsePara)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResponsePara");
			}
			return __returnValue;
		}
		native private long ev_clone_void_NoVirtual(long pNativeObject);
		protected com.earthview.world.core.WorkQueue.ResponsePara ev_clone_NoVirtual()
		{
			long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.ResponsePara __returnValue = new com.earthview.world.core.WorkQueue.ResponsePara(CreatedWhenConstruct.CWC_NotToCreate, "ResponsePara");
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.ResponsePara)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "ResponsePara");
			}
			return __returnValue;
		}

		native private long getResponse_void(long pNativeObject);
		public com.earthview.world.core.WorkQueue.Response getResponse()
		{
			long returnValue = getResponse_void(this.nativeObject.pointer);
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
		native private void setResponse_CResponse(long pNativeObject, long parent);
		public void setResponse(com.earthview.world.core.WorkQueue.Response parent)
		{
			long parentParamValue = (parent == null ? 0L : parent.nativeObject.pointer);
			setResponse_CResponse(this.nativeObject.pointer, parentParamValue);
		}
		public ResponsePara(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResponsePara(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_ev_clone_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			}
		}
		
		public static ResponsePara fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResponsePara obj = null;
 			if(baseObj instanceof ResponsePara)
			{
				obj = (ResponsePara)baseObj;
			} else {
				obj = new ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ResponsePara");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResponseParaClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResponsePara emptyInstance = new ResponsePara(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	//// Numeric identifier for a request
	public static class Request extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CRequest", new RequestClassFactory());
		}

		native private String get_mID_void(long pNativeObject);
		public ULongPointer get_mID()
		{
			String jniValue = get_mID_void(this.nativeObject.pointer);
			
			ULongPointer __returnValue = new ULongPointer(jniValue);
			return __returnValue;
		}
		
		native private void set_mID_ev_uint64 (long pNativeObject, long value);
		public void set_mID(ULongPointer mID)
		{
			long mIDParamValue = mID.nativeObject.pointer;
			
			set_mID_ev_uint64(this.nativeObject.pointer, mIDParamValue);
		}
		
		//// Constructor
		public Request(int channel, int rtype, com.earthview.world.core.WorkQueue.RequestPara rData, short retry, ULongPointer rid) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer channelPtr = new BasePointer(channel);
			list.add("channel", channelPtr.get());
			BasePointer rtypePtr = new BasePointer(rtype);
			list.add("rtype", rtypePtr.get());
			BasePointer rDataPtr = new BasePointer(rData);
			list.add("rData", rDataPtr.get());
			BasePointer retryPtr = new BasePointer(retry);
			list.add("retry", retryPtr.get());
			BasePointer ridPtr = new BasePointer(rid);
			list.add("rid", ridPtr.get());
			Create("CRequest", list);
		}

		public Request(int channel, int rtype, com.earthview.world.core.WorkQueue.RequestPara rData, short retry, ULongPointer rid, ULongPointer filter) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer channelPtr = new BasePointer(channel);
			list.add("channel", channelPtr.get());
			BasePointer rtypePtr = new BasePointer(rtype);
			list.add("rtype", rtypePtr.get());
			BasePointer rDataPtr = new BasePointer(rData);
			list.add("rData", rDataPtr.get());
			BasePointer retryPtr = new BasePointer(retry);
			list.add("retry", retryPtr.get());
			BasePointer ridPtr = new BasePointer(rid);
			list.add("rid", ridPtr.get());
			BasePointer filterPtr = new BasePointer(filter);
			list.add("filter", filterPtr.get());
			Create("CRequest", list);
		}

		native private void abortRequest_void(long pNativeObject);
		//// Set the abort flag
		public void abortRequest()
		{
			abortRequest_void(this.nativeObject.pointer);
		}
		native private int getChannel_void(long pNativeObject);
		//// Get the request channel (top level categorisation)
		public int getChannel()
		{
			int returnValue = getChannel_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private int getType_void(long pNativeObject);
		//// Get the type of this request within the given channel
		public int getType()
		{
			int returnValue = getType_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getData_void(long pNativeObject);
		//// Get the user details of this request
		public com.earthview.world.core.WorkQueue.RequestPara getData()
		{
			long returnValue = getData_void(this.nativeObject.pointer);
			com.earthview.world.core.WorkQueue.RequestPara __returnValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate, "RequestPara");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.RequestPara)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "RequestPara");
			}
			return __returnValue;
		}
		native private short getRetryCount_void(long pNativeObject);
		//// Get the remaining retry count
		public short getRetryCount()
		{
			short returnValue = getRetryCount_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getID_void(long pNativeObject);
		//// Get the identifier of this request
		public ULongPointer getID()
		{
			String returnValue = getID_void(this.nativeObject.pointer);
			ULongPointer __returnValue = new ULongPointer(returnValue);
			return __returnValue;
		}
		native private boolean getAborted_void(long pNativeObject);
		//// Get the abort flag
		public boolean getAborted()
		{
			boolean returnValue = getAborted_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private String getFilter_void(long pNativeObject);
		public ULongPointer getFilter()
		{
			String returnValue = getFilter_void(this.nativeObject.pointer);
			ULongPointer __returnValue = new ULongPointer(returnValue);
			return __returnValue;
		}
		public Request(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Request(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Request fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Request obj = null;
 			if(baseObj instanceof Request)
			{
				obj = (Request)baseObj;
			} else {
				obj = new Request(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRequest");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RequestClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Request emptyInstance = new Request(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class Response extends com.earthview.world.core.AllocatedObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CResponse", new ResponseClassFactory());
		}

		public Response(com.earthview.world.core.WorkQueue.Request rq, boolean success, com.earthview.world.core.WorkQueue.ResponsePara data, String msg) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rqPtr = new BasePointer(rq);
			list.add("rq", rqPtr.get());
			BasePointer successPtr = new BasePointer(success);
			list.add("success", successPtr.get());
			BasePointer dataPtr = new BasePointer(data);
			list.add("data", dataPtr.get());
			BasePointer msgPtr = new BasePointer(msg);
			list.add("msg", msgPtr.get());
			Create("CResponse", list);
		}

		public Response(com.earthview.world.core.WorkQueue.Request rq, boolean success, com.earthview.world.core.WorkQueue.ResponsePara data) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer rqPtr = new BasePointer(rq);
			list.add("rq", rqPtr.get());
			BasePointer successPtr = new BasePointer(success);
			list.add("success", successPtr.get());
			BasePointer dataPtr = new BasePointer(data);
			list.add("data", dataPtr.get());
			Create("CResponse", list);
		}

		native private long getRequest_void(long pNativeObject);
		//// Get the request that this is a response to (NB destruction destroys this)
		public com.earthview.world.core.WorkQueue.Request getRequest()
		{
			long returnValue = getRequest_void(this.nativeObject.pointer);
			if(returnValue == 0L) {
				return null;
			}
			com.earthview.world.core.WorkQueue.Request __returnValue = new com.earthview.world.core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate, "CRequest");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.Request)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CRequest");
			}
			return __returnValue;
		}
		native private boolean succeeded_void(long pNativeObject);
		//// Return whether this is a successful response
		public boolean succeeded()
		{
			boolean returnValue = succeeded_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private long getMessages_void(long pNativeObject);
		//// Get any diagnostic messages about the process
		public StringPointer getMessages()
		{
			long returnValue = getMessages_void(this.nativeObject.pointer);
			StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
			return __returnValue;
		}
		native private void abortRequest_void(long pNativeObject);
		//// Abort the request
		public void abortRequest()
		{
			abortRequest_void(this.nativeObject.pointer);
		}
		native private long getData_void(long pNativeObject);
		//// Return the response data (user defined, only valid on success)
		public com.earthview.world.core.WorkQueue.ResponsePara getData()
		{
			long returnValue = getData_void(this.nativeObject.pointer);
			com.earthview.world.core.WorkQueue.ResponsePara __returnValue = new com.earthview.world.core.WorkQueue.ResponsePara(CreatedWhenConstruct.CWC_NotToCreate, "ResponsePara");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(returnValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.core.WorkQueue.ResponsePara)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "ResponsePara");
			}
			return __returnValue;
		}
		public Response(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public Response(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static Response fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			Response obj = null;
 			if(baseObj instanceof Response)
			{
				obj = (Response)baseObj;
			} else {
				obj = new Response(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResponse");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResponseClassFactory implements IClassFactory {
		public BaseObject create()
		{
			Response emptyInstance = new Response(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class RequestHandler extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CRequestHandler", new RequestHandlerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JCRequestHandlerProxy", new RequestHandlerClassFactory());
		}

		public RequestHandler() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCRequestHandlerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.core.WorkQueue$RequestHandler".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  boolean canHandleRequest_CRequest_CWorkQueue_callback(long req, long srcQ)
		{
			com.earthview.world.core.WorkQueue.Request reqParamValue = (req == 0L ? null : new com.earthview.world.core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate));
			if(reqParamValue != null)
			{
			reqParamValue.setDelegate(true);
			reqParamValue.setInstancePointer(new InstancePointer(req));
			IClassFactory reqParamValueClassFactory = GlobalClassFactoryMap.get(reqParamValue.getCppInstanceTypeName());
			if (reqParamValueClassFactory != null)
			{
				reqParamValue.setDelegate(true);
				reqParamValue = (com.earthview.world.core.WorkQueue.Request)reqParamValueClassFactory.create();
				reqParamValue.setDelegate(true);
				reqParamValue.setInstancePointer(new InstancePointer(req));
			}
			}
			com.earthview.world.core.WorkQueue srcQParamValue = (srcQ == 0L ? null : new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate));
			if(srcQParamValue != null)
			{
			srcQParamValue.setDelegate(true);
			srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			IClassFactory srcQParamValueClassFactory = GlobalClassFactoryMap.get(srcQParamValue.getCppInstanceTypeName());
			if (srcQParamValueClassFactory != null)
			{
				srcQParamValue.setDelegate(true);
				srcQParamValue = (com.earthview.world.core.WorkQueue)srcQParamValueClassFactory.create();
				srcQParamValue.setDelegate(true);
				srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			}
			}
			boolean returnValue = canHandleRequest(reqParamValue, srcQParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean canHandleRequest_CRequest_CWorkQueue(long pNativeObject, long req, long srcQ);
		public boolean canHandleRequest(com.earthview.world.core.WorkQueue.Request req, com.earthview.world.core.WorkQueue srcQ)
		{
			long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			boolean returnValue = canHandleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, reqParamValue, srcQParamValue);
			return returnValue;
		}
		native private boolean canHandleRequest_CRequest_CWorkQueue_NoVirtual(long pNativeObject, long req, long srcQ);
		protected boolean canHandleRequest_NoVirtual(com.earthview.world.core.WorkQueue.Request req, com.earthview.world.core.WorkQueue srcQ)
		{
			long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			boolean returnValue = canHandleRequest_CRequest_CWorkQueue_NoVirtual(this.nativeObject.pointer, reqParamValue, srcQParamValue);
			return returnValue;
		}

		protected  long handleRequest_CRequest_CWorkQueue_callback(long req, long srcQ)
		{
			com.earthview.world.core.WorkQueue.Request reqParamValue = (req == 0L ? null : new com.earthview.world.core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate));
			if(reqParamValue != null)
			{
			reqParamValue.setDelegate(true);
			reqParamValue.setInstancePointer(new InstancePointer(req));
			IClassFactory reqParamValueClassFactory = GlobalClassFactoryMap.get(reqParamValue.getCppInstanceTypeName());
			if (reqParamValueClassFactory != null)
			{
				reqParamValue.setDelegate(true);
				reqParamValue = (com.earthview.world.core.WorkQueue.Request)reqParamValueClassFactory.create();
				reqParamValue.setDelegate(true);
				reqParamValue.setInstancePointer(new InstancePointer(req));
			}
			}
			com.earthview.world.core.WorkQueue srcQParamValue = (srcQ == 0L ? null : new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate));
			if(srcQParamValue != null)
			{
			srcQParamValue.setDelegate(true);
			srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			IClassFactory srcQParamValueClassFactory = GlobalClassFactoryMap.get(srcQParamValue.getCppInstanceTypeName());
			if (srcQParamValueClassFactory != null)
			{
				srcQParamValue.setDelegate(true);
				srcQParamValue = (com.earthview.world.core.WorkQueue)srcQParamValueClassFactory.create();
				srcQParamValue.setDelegate(true);
				srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			}
			}
			com.earthview.world.core.WorkQueue.Response returnValue = handleRequest(reqParamValue, srcQParamValue);
			if(returnValue == null) {
				return 0L;
			}
			returnValue.setDelegate(true);
			long __returnValue = returnValue.nativeObject.pointer;
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
		native private long handleRequest_CRequest_CWorkQueue_NoVirtual(long pNativeObject, long req, long srcQ);
		protected com.earthview.world.core.WorkQueue.Response handleRequest_NoVirtual(com.earthview.world.core.WorkQueue.Request req, com.earthview.world.core.WorkQueue srcQ)
		{
			long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			long returnValue = handleRequest_CRequest_CWorkQueue_NoVirtual(this.nativeObject.pointer, reqParamValue, srcQParamValue);
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

		public RequestHandler(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public RequestHandler(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_canHandleRequest_CRequest_CWorkQueue(long pNativeObject, String method);
		native protected void register_handleRequest_CRequest_CWorkQueue(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_canHandleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, "canHandleRequest_CRequest_CWorkQueue_callback");
				this.register_handleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, "handleRequest_CRequest_CWorkQueue_callback");
			}
		}
		
		public static RequestHandler fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			RequestHandler obj = null;
 			if(baseObj instanceof RequestHandler)
			{
				obj = (RequestHandler)baseObj;
			} else {
				obj = new RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CRequestHandler");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class RequestHandlerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			RequestHandler emptyInstance = new RequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResponseHandler extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CResponseHandler", new ResponseHandlerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JCResponseHandlerProxy", new ResponseHandlerClassFactory());
		}

		public ResponseHandler() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCResponseHandlerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.core.WorkQueue$ResponseHandler".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  boolean canHandleResponse_CResponse_CWorkQueue_callback(long res, long srcQ)
		{
			com.earthview.world.core.WorkQueue.Response resParamValue = (res == 0L ? null : new com.earthview.world.core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate));
			if(resParamValue != null)
			{
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
			IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
			if (resParamValueClassFactory != null)
			{
				resParamValue.setDelegate(true);
				resParamValue = (com.earthview.world.core.WorkQueue.Response)resParamValueClassFactory.create();
				resParamValue.setDelegate(true);
				resParamValue.setInstancePointer(new InstancePointer(res));
			}
			}
			com.earthview.world.core.WorkQueue srcQParamValue = (srcQ == 0L ? null : new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate));
			if(srcQParamValue != null)
			{
			srcQParamValue.setDelegate(true);
			srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			IClassFactory srcQParamValueClassFactory = GlobalClassFactoryMap.get(srcQParamValue.getCppInstanceTypeName());
			if (srcQParamValueClassFactory != null)
			{
				srcQParamValue.setDelegate(true);
				srcQParamValue = (com.earthview.world.core.WorkQueue)srcQParamValueClassFactory.create();
				srcQParamValue.setDelegate(true);
				srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			}
			}
			boolean returnValue = canHandleResponse(resParamValue, srcQParamValue);
			boolean __returnValue = returnValue;
			return __returnValue;
		}

		native private boolean canHandleResponse_CResponse_CWorkQueue(long pNativeObject, long res, long srcQ);
		public boolean canHandleResponse(com.earthview.world.core.WorkQueue.Response res, com.earthview.world.core.WorkQueue srcQ)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			boolean returnValue = canHandleResponse_CResponse_CWorkQueue(this.nativeObject.pointer, resParamValue, srcQParamValue);
			return returnValue;
		}
		native private boolean canHandleResponse_CResponse_CWorkQueue_NoVirtual(long pNativeObject, long res, long srcQ);
		protected boolean canHandleResponse_NoVirtual(com.earthview.world.core.WorkQueue.Response res, com.earthview.world.core.WorkQueue srcQ)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			boolean returnValue = canHandleResponse_CResponse_CWorkQueue_NoVirtual(this.nativeObject.pointer, resParamValue, srcQParamValue);
			return returnValue;
		}

		protected  void handleResponse_CResponse_CWorkQueue_callback(long res, long srcQ)
		{
			com.earthview.world.core.WorkQueue.Response resParamValue = (res == 0L ? null : new com.earthview.world.core.WorkQueue.Response(CreatedWhenConstruct.CWC_NotToCreate));
			if(resParamValue != null)
			{
			resParamValue.setDelegate(true);
			resParamValue.setInstancePointer(new InstancePointer(res));
			IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
			if (resParamValueClassFactory != null)
			{
				resParamValue.setDelegate(true);
				resParamValue = (com.earthview.world.core.WorkQueue.Response)resParamValueClassFactory.create();
				resParamValue.setDelegate(true);
				resParamValue.setInstancePointer(new InstancePointer(res));
			}
			}
			com.earthview.world.core.WorkQueue srcQParamValue = (srcQ == 0L ? null : new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate));
			if(srcQParamValue != null)
			{
			srcQParamValue.setDelegate(true);
			srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			IClassFactory srcQParamValueClassFactory = GlobalClassFactoryMap.get(srcQParamValue.getCppInstanceTypeName());
			if (srcQParamValueClassFactory != null)
			{
				srcQParamValue.setDelegate(true);
				srcQParamValue = (com.earthview.world.core.WorkQueue)srcQParamValueClassFactory.create();
				srcQParamValue.setDelegate(true);
				srcQParamValue.setInstancePointer(new InstancePointer(srcQ));
			}
			}
			handleResponse(resParamValue, srcQParamValue);
		}

		native private void handleResponse_CResponse_CWorkQueue(long pNativeObject, long res, long srcQ);
		public void handleResponse(com.earthview.world.core.WorkQueue.Response res, com.earthview.world.core.WorkQueue srcQ)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			handleResponse_CResponse_CWorkQueue(this.nativeObject.pointer, resParamValue, srcQParamValue);
		}
		native private void handleResponse_CResponse_CWorkQueue_NoVirtual(long pNativeObject, long res, long srcQ);
		protected void handleResponse_NoVirtual(com.earthview.world.core.WorkQueue.Response res, com.earthview.world.core.WorkQueue srcQ)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			handleResponse_CResponse_CWorkQueue_NoVirtual(this.nativeObject.pointer, resParamValue, srcQParamValue);
		}

		public ResponseHandler(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResponseHandler(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_canHandleResponse_CResponse_CWorkQueue(long pNativeObject, String method);
		native protected void register_handleResponse_CResponse_CWorkQueue(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_canHandleResponse_CResponse_CWorkQueue(this.nativeObject.pointer, "canHandleResponse_CResponse_CWorkQueue_callback");
				this.register_handleResponse_CResponse_CWorkQueue(this.nativeObject.pointer, "handleResponse_CResponse_CWorkQueue_callback");
			}
		}
		
		public static ResponseHandler fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResponseHandler obj = null;
 			if(baseObj instanceof ResponseHandler)
			{
				obj = (ResponseHandler)baseObj;
			} else {
				obj = new ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResponseHandler");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResponseHandlerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResponseHandler emptyInstance = new ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public WorkQueue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCWorkQueueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.WorkQueue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void startup_ev_bool_callback(boolean forceRestart)
	{
		boolean forceRestartParamValue = forceRestart;
		startup(forceRestartParamValue);
	}

	native private void startup_ev_bool(long pNativeObject, boolean forceRestart);
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

	protected  void startup_void_callback()
	{
		startup();
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

	protected  void addRequestHandler_ev_uint16_CRequestHandler_callback(int channel, long rh)
	{
		int channelParamValue = channel;
		com.earthview.world.core.WorkQueue.RequestHandler rhParamValue = (rh == 0L ? null : new com.earthview.world.core.WorkQueue.RequestHandler(CreatedWhenConstruct.CWC_NotToCreate));
		if(rhParamValue != null)
		{
		rhParamValue.setDelegate(true);
		rhParamValue.setInstancePointer(new InstancePointer(rh));
		IClassFactory rhParamValueClassFactory = GlobalClassFactoryMap.get(rhParamValue.getCppInstanceTypeName());
		if (rhParamValueClassFactory != null)
		{
			rhParamValue.setDelegate(true);
			rhParamValue = (com.earthview.world.core.WorkQueue.RequestHandler)rhParamValueClassFactory.create();
			rhParamValue.setDelegate(true);
			rhParamValue.setInstancePointer(new InstancePointer(rh));
		}
		}
		addRequestHandler(channelParamValue, rhParamValue);
	}

	native private void addRequestHandler_ev_uint16_CRequestHandler(long pNativeObject, int channel, long rh);
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

	protected  void removeRequestHandler_ev_uint16_CRequestHandler_callback(int channel, long rh)
	{
		int channelParamValue = channel;
		com.earthview.world.core.WorkQueue.RequestHandler rhParamValue = (rh == 0L ? null : new com.earthview.world.core.WorkQueue.RequestHandler(CreatedWhenConstruct.CWC_NotToCreate));
		if(rhParamValue != null)
		{
		rhParamValue.setDelegate(true);
		rhParamValue.setInstancePointer(new InstancePointer(rh));
		IClassFactory rhParamValueClassFactory = GlobalClassFactoryMap.get(rhParamValue.getCppInstanceTypeName());
		if (rhParamValueClassFactory != null)
		{
			rhParamValue.setDelegate(true);
			rhParamValue = (com.earthview.world.core.WorkQueue.RequestHandler)rhParamValueClassFactory.create();
			rhParamValue.setDelegate(true);
			rhParamValue.setInstancePointer(new InstancePointer(rh));
		}
		}
		removeRequestHandler(channelParamValue, rhParamValue);
	}

	native private void removeRequestHandler_ev_uint16_CRequestHandler(long pNativeObject, int channel, long rh);
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

	protected  void addResponseHandler_ev_uint16_CResponseHandler_callback(int channel, long rh)
	{
		int channelParamValue = channel;
		com.earthview.world.core.WorkQueue.ResponseHandler rhParamValue = (rh == 0L ? null : new com.earthview.world.core.WorkQueue.ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate));
		if(rhParamValue != null)
		{
		rhParamValue.setDelegate(true);
		rhParamValue.setInstancePointer(new InstancePointer(rh));
		IClassFactory rhParamValueClassFactory = GlobalClassFactoryMap.get(rhParamValue.getCppInstanceTypeName());
		if (rhParamValueClassFactory != null)
		{
			rhParamValue.setDelegate(true);
			rhParamValue = (com.earthview.world.core.WorkQueue.ResponseHandler)rhParamValueClassFactory.create();
			rhParamValue.setDelegate(true);
			rhParamValue.setInstancePointer(new InstancePointer(rh));
		}
		}
		addResponseHandler(channelParamValue, rhParamValue);
	}

	native private void addResponseHandler_ev_uint16_CResponseHandler(long pNativeObject, int channel, long rh);
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

	protected  void removeResponseHandler_ev_uint16_CResponseHandler_callback(int channel, long rh)
	{
		int channelParamValue = channel;
		com.earthview.world.core.WorkQueue.ResponseHandler rhParamValue = (rh == 0L ? null : new com.earthview.world.core.WorkQueue.ResponseHandler(CreatedWhenConstruct.CWC_NotToCreate));
		if(rhParamValue != null)
		{
		rhParamValue.setDelegate(true);
		rhParamValue.setInstancePointer(new InstancePointer(rh));
		IClassFactory rhParamValueClassFactory = GlobalClassFactoryMap.get(rhParamValue.getCppInstanceTypeName());
		if (rhParamValueClassFactory != null)
		{
			rhParamValue.setDelegate(true);
			rhParamValue = (com.earthview.world.core.WorkQueue.ResponseHandler)rhParamValueClassFactory.create();
			rhParamValue.setDelegate(true);
			rhParamValue.setInstancePointer(new InstancePointer(rh));
		}
		}
		removeResponseHandler(channelParamValue, rhParamValue);
	}

	native private void removeResponseHandler_ev_uint16_CResponseHandler(long pNativeObject, int channel, long rh);
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

	protected  String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback(int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		com.earthview.world.core.WorkQueue.RequestPara rDataParamValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
		rDataParamValue.setDelegate(true);
		rDataParamValue.setInstancePointer(new InstancePointer(rData));
		IClassFactory rDataParamValueClassFactory = GlobalClassFactoryMap.get(rDataParamValue.getCppInstanceTypeName());
		if (rDataParamValueClassFactory != null)
		{
			rDataParamValue.setDelegate(true);
			rDataParamValue = (com.earthview.world.core.WorkQueue.RequestPara)rDataParamValueClassFactory.create();
			rDataParamValue.setDelegate(true);
			rDataParamValue.setInstancePointer(new InstancePointer(rData));
		}
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		ULongPointer filterParamValue = new ULongPointer(new InstancePointer(filter));
		ULongPointer returnValue = addRequest(channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue, filterParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter);
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

	protected  String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_callback(int channel, int requestType, long rData, short retryCount, boolean forceSynchronous)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		com.earthview.world.core.WorkQueue.RequestPara rDataParamValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
		rDataParamValue.setDelegate(true);
		rDataParamValue.setInstancePointer(new InstancePointer(rData));
		IClassFactory rDataParamValueClassFactory = GlobalClassFactoryMap.get(rDataParamValue.getCppInstanceTypeName());
		if (rDataParamValueClassFactory != null)
		{
			rDataParamValue.setDelegate(true);
			rDataParamValue = (com.earthview.world.core.WorkQueue.RequestPara)rDataParamValueClassFactory.create();
			rDataParamValue.setDelegate(true);
			rDataParamValue.setInstancePointer(new InstancePointer(rData));
		}
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		ULongPointer returnValue = addRequest(channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous);
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_NoVirtual(long pNativeObject, int channel, int requestType, long rData, short retryCount, boolean forceSynchronous);
	protected ULongPointer addRequest_NoVirtual(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount, boolean forceSynchronous)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_NoVirtual(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_callback(int channel, int requestType, long rData, short retryCount)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		com.earthview.world.core.WorkQueue.RequestPara rDataParamValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
		rDataParamValue.setDelegate(true);
		rDataParamValue.setInstancePointer(new InstancePointer(rData));
		IClassFactory rDataParamValueClassFactory = GlobalClassFactoryMap.get(rDataParamValue.getCppInstanceTypeName());
		if (rDataParamValueClassFactory != null)
		{
			rDataParamValue.setDelegate(true);
			rDataParamValue = (com.earthview.world.core.WorkQueue.RequestPara)rDataParamValueClassFactory.create();
			rDataParamValue.setDelegate(true);
			rDataParamValue.setInstancePointer(new InstancePointer(rData));
		}
		short retryCountParamValue = retryCount;
		ULongPointer returnValue = addRequest(channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8(long pNativeObject, int channel, int requestType, long rData, short retryCount);
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_NoVirtual(long pNativeObject, int channel, int requestType, long rData, short retryCount);
	protected ULongPointer addRequest_NoVirtual(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData, short retryCount)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		short retryCountParamValue = retryCount;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_NoVirtual(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String addRequest_ev_uint16_ev_uint16_RequestPara_callback(int channel, int requestType, long rData)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		com.earthview.world.core.WorkQueue.RequestPara rDataParamValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
		rDataParamValue.setDelegate(true);
		rDataParamValue.setInstancePointer(new InstancePointer(rData));
		IClassFactory rDataParamValueClassFactory = GlobalClassFactoryMap.get(rDataParamValue.getCppInstanceTypeName());
		if (rDataParamValueClassFactory != null)
		{
			rDataParamValue.setDelegate(true);
			rDataParamValue = (com.earthview.world.core.WorkQueue.RequestPara)rDataParamValueClassFactory.create();
			rDataParamValue.setDelegate(true);
			rDataParamValue.setInstancePointer(new InstancePointer(rData));
		}
		ULongPointer returnValue = addRequest(channelParamValue, requestTypeParamValue, rDataParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String addRequest_ev_uint16_ev_uint16_RequestPara(long pNativeObject, int channel, int requestType, long rData);
	public ULongPointer addRequest(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addRequest_ev_uint16_ev_uint16_RequestPara_NoVirtual(long pNativeObject, int channel, int requestType, long rData);
	protected ULongPointer addRequest_NoVirtual(int channel, int requestType, com.earthview.world.core.WorkQueue.RequestPara rData)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		long rDataParamValue = rData.nativeObject.pointer;
		String returnValue = addRequest_ev_uint16_ev_uint16_RequestPara_NoVirtual(this.nativeObject.pointer, channelParamValue, requestTypeParamValue, rDataParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String addRequest_CRequest_callback(long request)
	{
		com.earthview.world.core.WorkQueue.Request requestParamValue = (request == 0L ? null : new com.earthview.world.core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate));
		if(requestParamValue != null)
		{
		requestParamValue.setDelegate(true);
		requestParamValue.setInstancePointer(new InstancePointer(request));
		IClassFactory requestParamValueClassFactory = GlobalClassFactoryMap.get(requestParamValue.getCppInstanceTypeName());
		if (requestParamValueClassFactory != null)
		{
			requestParamValue.setDelegate(true);
			requestParamValue = (com.earthview.world.core.WorkQueue.Request)requestParamValueClassFactory.create();
			requestParamValue.setDelegate(true);
			requestParamValue.setInstancePointer(new InstancePointer(request));
		}
		}
		ULongPointer returnValue = addRequest(requestParamValue);
		String __returnValue = returnValue.get().toString();
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

	protected  String addOrReplaceRequest_ev_uint16_ev_uint16_RequestPara_ev_uint8_ev_bool_ev_uint64_callback(int channel, int requestType, long rData, short retryCount, boolean forceSynchronous, long filter)
	{
		int channelParamValue = channel;
		int requestTypeParamValue = requestType;
		com.earthview.world.core.WorkQueue.RequestPara rDataParamValue = new com.earthview.world.core.WorkQueue.RequestPara(CreatedWhenConstruct.CWC_NotToCreate);
		rDataParamValue.setDelegate(true);
		rDataParamValue.setInstancePointer(new InstancePointer(rData));
		IClassFactory rDataParamValueClassFactory = GlobalClassFactoryMap.get(rDataParamValue.getCppInstanceTypeName());
		if (rDataParamValueClassFactory != null)
		{
			rDataParamValue.setDelegate(true);
			rDataParamValue = (com.earthview.world.core.WorkQueue.RequestPara)rDataParamValueClassFactory.create();
			rDataParamValue.setDelegate(true);
			rDataParamValue.setInstancePointer(new InstancePointer(rData));
		}
		short retryCountParamValue = retryCount;
		boolean forceSynchronousParamValue = forceSynchronous;
		ULongPointer filterParamValue = new ULongPointer(new InstancePointer(filter));
		ULongPointer returnValue = addOrReplaceRequest(channelParamValue, requestTypeParamValue, rDataParamValue, retryCountParamValue, forceSynchronousParamValue, filterParamValue);
		String __returnValue = returnValue.get().toString();
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

	protected  void abortRequest_ev_uint64_callback(long id)
	{
		ULongPointer idParamValue = new ULongPointer(new InstancePointer(id));
		abortRequest(idParamValue);
	}

	native private void abortRequest_ev_uint64(long pNativeObject, long id);
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

	protected  void abortRequestsByChannel_ev_uint16_callback(int channel)
	{
		int channelParamValue = channel;
		abortRequestsByChannel(channelParamValue);
	}

	native private void abortRequestsByChannel_ev_uint16(long pNativeObject, int channel);
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

	protected  void abortRequestsByFilter_ev_uint16_ev_uint64_callback(int channel, long filter)
	{
		int channelParamValue = channel;
		ULongPointer filterParamValue = new ULongPointer(new InstancePointer(filter));
		abortRequestsByFilter(channelParamValue, filterParamValue);
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

	protected  void abortAllRequests_void_callback()
	{
		abortAllRequests();
	}

	native private void abortAllRequests_void(long pNativeObject);
	public void abortAllRequests()
	{
		abortAllRequests_void(this.nativeObject.pointer);
	}
	native private void abortAllRequests_void_NoVirtual(long pNativeObject);
	protected void abortAllRequests_NoVirtual()
	{
		abortAllRequests_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setPaused_ev_bool_callback(boolean pause)
	{
		boolean pauseParamValue = pause;
		setPaused(pauseParamValue);
	}

	native private void setPaused_ev_bool(long pNativeObject, boolean pause);
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

	protected  boolean isPaused_void_callback()
	{
		boolean returnValue = isPaused();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isPaused_void(long pNativeObject);
	//// Return whether the queue is paused ie not sending more work to workers
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

	protected  void setRequestsAccepted_ev_bool_callback(boolean accept)
	{
		boolean acceptParamValue = accept;
		setRequestsAccepted(acceptParamValue);
	}

	native private void setRequestsAccepted_ev_bool(long pNativeObject, boolean accept);
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

	protected  boolean getRequestsAccepted_void_callback()
	{
		boolean returnValue = getRequestsAccepted();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getRequestsAccepted_void(long pNativeObject);
	//// Returns whether requests are being accepted right now
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

	protected  void processResponses_void_callback()
	{
		processResponses();
	}

	native private void processResponses_void(long pNativeObject);
	public void processResponses()
	{
		processResponses_void(this.nativeObject.pointer);
	}
	native private void processResponses_void_NoVirtual(long pNativeObject);
	protected void processResponses_NoVirtual()
	{
		processResponses_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getResponseProcessingTimeLimit_void_callback()
	{
		long returnValue = getResponseProcessingTimeLimit();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getResponseProcessingTimeLimit_void(long pNativeObject);
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

	protected  void setResponseProcessingTimeLimit_ev_uint32_callback(long ms)
	{
		long msParamValue = ms;
		setResponseProcessingTimeLimit(msParamValue);
	}

	native private void setResponseProcessingTimeLimit_ev_uint32(long pNativeObject, long ms);
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

	protected  void shutdown_void_callback()
	{
		shutdown();
	}

	native private void shutdown_void(long pNativeObject);
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  int getChannel_ev_uint32_callback(long priority)
	{
		long priorityParamValue = priority;
		int returnValue = getChannel(priorityParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getChannel_ev_uint32(long pNativeObject, long priority);
	public int getChannel(long priority)
	{
		long priorityParamValue = priority;
		int returnValue = getChannel_ev_uint32(this.nativeObject.pointer, priorityParamValue);
		return returnValue;
	}
	native private int getChannel_ev_uint32_NoVirtual(long pNativeObject, long priority);
	protected int getChannel_NoVirtual(long priority)
	{
		long priorityParamValue = priority;
		int returnValue = getChannel_ev_uint32_NoVirtual(this.nativeObject.pointer, priorityParamValue);
		return returnValue;
	}

	protected  boolean setChannelListener_ev_uint16_CWorkQueueChannelListener_callback(int channelID, long pListener)
	{
		int channelIDParamValue = channelID;
		com.earthview.world.core.WorkQueueChannelListener pListenerParamValue = (pListener == 0L ? null : new com.earthview.world.core.WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(pListenerParamValue != null)
		{
		pListenerParamValue.setDelegate(true);
		pListenerParamValue.setInstancePointer(new InstancePointer(pListener));
		IClassFactory pListenerParamValueClassFactory = GlobalClassFactoryMap.get(pListenerParamValue.getCppInstanceTypeName());
		if (pListenerParamValueClassFactory != null)
		{
			pListenerParamValue.setDelegate(true);
			pListenerParamValue = (com.earthview.world.core.WorkQueueChannelListener)pListenerParamValueClassFactory.create();
			pListenerParamValue.setDelegate(true);
			pListenerParamValue.setInstancePointer(new InstancePointer(pListener));
		}
		}
		boolean returnValue = setChannelListener(channelIDParamValue, pListenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setChannelListener_ev_uint16_CWorkQueueChannelListener(long pNativeObject, int channelID, long pListener);
	public boolean setChannelListener(int channelID, com.earthview.world.core.WorkQueueChannelListener pListener)
	{
		int channelIDParamValue = channelID;
		long pListenerParamValue = (pListener == null ? 0L : pListener.nativeObject.pointer);
		boolean returnValue = setChannelListener_ev_uint16_CWorkQueueChannelListener(this.nativeObject.pointer, channelIDParamValue, pListenerParamValue);
		return returnValue;
	}
	native private boolean setChannelListener_ev_uint16_CWorkQueueChannelListener_NoVirtual(long pNativeObject, int channelID, long pListener);
	protected boolean setChannelListener_NoVirtual(int channelID, com.earthview.world.core.WorkQueueChannelListener pListener)
	{
		int channelIDParamValue = channelID;
		long pListenerParamValue = (pListener == null ? 0L : pListener.nativeObject.pointer);
		boolean returnValue = setChannelListener_ev_uint16_CWorkQueueChannelListener_NoVirtual(this.nativeObject.pointer, channelIDParamValue, pListenerParamValue);
		return returnValue;
	}

	protected  long getChannelListener_ev_uint16_callback(int channelID)
	{
		int channelIDParamValue = channelID;
		com.earthview.world.core.WorkQueueChannelListener returnValue = getChannelListener(channelIDParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getChannelListener_ev_uint16(long pNativeObject, int channelID);
	public com.earthview.world.core.WorkQueueChannelListener getChannelListener(int channelID)
	{
		int channelIDParamValue = channelID;
		long returnValue = getChannelListener_ev_uint16(this.nativeObject.pointer, channelIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueueChannelListener __returnValue = new com.earthview.world.core.WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueueChannelListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueueChannelListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueueChannelListener");
		}
		return __returnValue;
	}
	native private long getChannelListener_ev_uint16_NoVirtual(long pNativeObject, int channelID);
	protected com.earthview.world.core.WorkQueueChannelListener getChannelListener_NoVirtual(int channelID)
	{
		int channelIDParamValue = channelID;
		long returnValue = getChannelListener_ev_uint16_NoVirtual(this.nativeObject.pointer, channelIDParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueueChannelListener __returnValue = new com.earthview.world.core.WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueueChannelListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueueChannelListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueueChannelListener");
		}
		return __returnValue;
	}

	public WorkQueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WorkQueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
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
	
	public static WorkQueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WorkQueue obj = null;
 		if(baseObj instanceof WorkQueue)
		{
			obj = (WorkQueue)baseObj;
		} else {
			obj = new WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWorkQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
