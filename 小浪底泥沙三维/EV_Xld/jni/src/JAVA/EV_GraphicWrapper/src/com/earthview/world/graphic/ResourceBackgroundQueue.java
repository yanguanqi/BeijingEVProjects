package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceBackgroundQueue extends com.earthview.world.core.BackgroundQueue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue", new ResourceBackgroundQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCResourceBackgroundQueueProxy", new ResourceBackgroundQueueClassFactory());
	}

	native private static String get_msBackgroundQueueGroupName_void();
	public static String get_msBackgroundQueueGroupName()
	{
		String jniValue = get_msBackgroundQueueGroupName_void();
		
		return jniValue;
	}
	
	native private static void set_msBackgroundQueueGroupName_EVString (String value);
	public static void set_msBackgroundQueueGroupName(String msBackgroundQueueGroupName)
	{
		String msBackgroundQueueGroupNameParamValue = msBackgroundQueueGroupName;
		
		set_msBackgroundQueueGroupName_EVString(msBackgroundQueueGroupNameParamValue);
	}
	
	native private static String get_msBackgroundQueueName_void();
	public static String get_msBackgroundQueueName()
	{
		String jniValue = get_msBackgroundQueueName_void();
		
		return jniValue;
	}
	
	native private static void set_msBackgroundQueueName_EVString (String value);
	public static void set_msBackgroundQueueName(String msBackgroundQueueName)
	{
		String msBackgroundQueueNameParamValue = msBackgroundQueueName;
		
		set_msBackgroundQueueName_EVString(msBackgroundQueueNameParamValue);
	}
	
	native private String getGroupName_void(long pNativeObject);
	public String getGroupName()
	{
		String returnValue = getGroupName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getGroupName_void_NoVirtual(long pNativeObject);
	protected String getGroupName_NoVirtual()
	{
		String returnValue = getGroupName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ResourceBackgroundQueue getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ResourceBackgroundQueue __returnValue = new com.earthview.world.graphic.ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate, "CResourceBackgroundQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceBackgroundQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceBackgroundQueue");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ResourceBackgroundQueue getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceBackgroundQueue __returnValue = new com.earthview.world.graphic.ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate, "CResourceBackgroundQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceBackgroundQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceBackgroundQueue");
		}
		return __returnValue;
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

	protected  boolean canHandleRequest_CRequest_CWorkQueue_callback(long res, long srcQ)
	{
		com.earthview.world.core.WorkQueue.Request resParamValue = (res == 0L ? null : new com.earthview.world.core.WorkQueue.Request(CreatedWhenConstruct.CWC_NotToCreate));
		if(resParamValue != null)
		{
		resParamValue.setDelegate(true);
		resParamValue.setInstancePointer(new InstancePointer(res));
		IClassFactory resParamValueClassFactory = GlobalClassFactoryMap.get(resParamValue.getCppInstanceTypeName());
		if (resParamValueClassFactory != null)
		{
			resParamValue.setDelegate(true);
			resParamValue = (com.earthview.world.core.WorkQueue.Request)resParamValueClassFactory.create();
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
		boolean returnValue = canHandleRequest(resParamValue, srcQParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canHandleRequest_CRequest_CWorkQueue(long pNativeObject, long res, long srcQ);
	public boolean canHandleRequest(com.earthview.world.core.WorkQueue.Request res, com.earthview.world.core.WorkQueue srcQ)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
		boolean returnValue = canHandleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, resParamValue, srcQParamValue);
		return returnValue;
	}
	native private boolean canHandleRequest_CRequest_CWorkQueue_NoVirtual(long pNativeObject, long res, long srcQ);
	protected boolean canHandleRequest_NoVirtual(com.earthview.world.core.WorkQueue.Request res, com.earthview.world.core.WorkQueue srcQ)
	{
		long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
		long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
		boolean returnValue = canHandleRequest_CRequest_CWorkQueue_NoVirtual(this.nativeObject.pointer, resParamValue, srcQParamValue);
		return returnValue;
	}

	public static class ResourceBackgroundQueueInternalRequestHandler extends com.earthview.world.core.WorkQueue.RequestHandler {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler", new ResourceBackgroundQueueInternalRequestHandlerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue::JCResourceBackgroundQueueInternalRequestHandlerProxy", new ResourceBackgroundQueueInternalRequestHandlerClassFactory());
		}

		public ResourceBackgroundQueueInternalRequestHandler(com.earthview.world.graphic.ResourceBackgroundQueue parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCResourceBackgroundQueueInternalRequestHandlerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ResourceBackgroundQueue$ResourceBackgroundQueueInternalRequestHandler".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean canHandleRequest_CRequest_CWorkQueue(long pNativeObject, long res, long srcQ);
		//// Implementation for EarthView::World::Core::CWorkQueue::CRequestHandler
		public boolean canHandleRequest(com.earthview.world.core.WorkQueue.Request res, com.earthview.world.core.WorkQueue srcQ)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			boolean returnValue = canHandleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, resParamValue, srcQParamValue);
			return returnValue;
		}
		native private boolean canHandleRequest_CRequest_CWorkQueue_NoVirtual(long pNativeObject, long res, long srcQ);
		protected boolean canHandleRequest_NoVirtual(com.earthview.world.core.WorkQueue.Request res, com.earthview.world.core.WorkQueue srcQ)
		{
			long resParamValue = (res == null ? 0L : res.nativeObject.pointer);
			long srcQParamValue = (srcQ == null ? 0L : srcQ.nativeObject.pointer);
			boolean returnValue = canHandleRequest_CRequest_CWorkQueue_NoVirtual(this.nativeObject.pointer, resParamValue, srcQParamValue);
			return returnValue;
		}

		native private long handleRequest_CRequest_CWorkQueue(long pNativeObject, long req, long srcQ);
		//// Implementation for EarthView::World::Core::CWorkQueue::CRequestHandler
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

		public ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static ResourceBackgroundQueueInternalRequestHandler fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceBackgroundQueueInternalRequestHandler obj = null;
 			if(baseObj instanceof ResourceBackgroundQueueInternalRequestHandler)
			{
				obj = (ResourceBackgroundQueueInternalRequestHandler)baseObj;
			} else {
				obj = new ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourceBackgroundQueueInternalRequestHandler");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceBackgroundQueueInternalRequestHandlerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceBackgroundQueueInternalRequestHandler emptyInstance = new ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class ResourceBackgroundQueueInternalResponseHandler extends com.earthview.world.core.WorkQueue.ResponseHandler {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler", new ResourceBackgroundQueueInternalResponseHandlerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue::JCResourceBackgroundQueueInternalResponseHandlerProxy", new ResourceBackgroundQueueInternalResponseHandlerClassFactory());
		}

		public ResourceBackgroundQueueInternalResponseHandler(com.earthview.world.graphic.ResourceBackgroundQueue parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCResourceBackgroundQueueInternalResponseHandlerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ResourceBackgroundQueue$ResourceBackgroundQueueInternalResponseHandler".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
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

		native private void handleResponse_CResponse_CWorkQueue(long pNativeObject, long res, long srcQ);
		//// Implementation for EarthView::World::Core::CWorkQueue::CResponseHandler
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

		public ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static ResourceBackgroundQueueInternalResponseHandler fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceBackgroundQueueInternalResponseHandler obj = null;
 			if(baseObj instanceof ResourceBackgroundQueueInternalResponseHandler)
			{
				obj = (ResourceBackgroundQueueInternalResponseHandler)baseObj;
			} else {
				obj = new ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourceBackgroundQueueInternalResponseHandler");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceBackgroundQueueInternalResponseHandlerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceBackgroundQueueInternalResponseHandler emptyInstance = new ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
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

	protected  long getRequestHandlerPtr_void_callback()
	{
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler returnValue = getRequestHandlerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRequestHandlerPtr_void(long pNativeObject);
	public com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler getRequestHandlerPtr()
	{
		long returnValue = getRequestHandlerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler __returnValue = new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate, "CResourceBackgroundQueueInternalRequestHandler");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceBackgroundQueueInternalRequestHandler");
		}
		return __returnValue;
	}
	native private long getRequestHandlerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler getRequestHandlerPtr_NoVirtual()
	{
		long returnValue = getRequestHandlerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler __returnValue = new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler(CreatedWhenConstruct.CWC_NotToCreate, "CResourceBackgroundQueueInternalRequestHandler");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalRequestHandler)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceBackgroundQueueInternalRequestHandler");
		}
		return __returnValue;
	}

	protected  long getResponseHandlerPtr_void_callback()
	{
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler returnValue = getResponseHandlerPtr();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getResponseHandlerPtr_void(long pNativeObject);
	///virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalRequestHandler& getRequestHandler() {return *m_pRequestHandler;}
	public com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler getResponseHandlerPtr()
	{
		long returnValue = getResponseHandlerPtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler __returnValue = new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate, "CResourceBackgroundQueueInternalResponseHandler");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceBackgroundQueueInternalResponseHandler");
		}
		return __returnValue;
	}
	native private long getResponseHandlerPtr_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler getResponseHandlerPtr_NoVirtual()
	{
		long returnValue = getResponseHandlerPtr_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler __returnValue = new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler(CreatedWhenConstruct.CWC_NotToCreate, "CResourceBackgroundQueueInternalResponseHandler");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueInternalResponseHandler)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceBackgroundQueueInternalResponseHandler");
		}
		return __returnValue;
	}

	///virtual const EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueInternalResponseHandler& getResponseHandler(){return *m_pResponseHandler;}
	public static class ResourceBackgroundQueueListener extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue::CResourceBackgroundQueueListener", new ResourceBackgroundQueueListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceBackgroundQueue::JCResourceBackgroundQueueListenerProxy", new ResourceBackgroundQueueListenerClassFactory());
		}

		public ResourceBackgroundQueueListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCResourceBackgroundQueueListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.ResourceBackgroundQueue$ResourceBackgroundQueueListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  void operationCompleted_ev_uint64_BackgroundProcessResult_callback(long ticket, long result)
		{
			ULongPointer ticketParamValue = new ULongPointer(new InstancePointer(ticket));
			com.earthview.world.graphic.BackgroundProcessResult resultParamValue = new com.earthview.world.graphic.BackgroundProcessResult(CreatedWhenConstruct.CWC_NotToCreate);
			resultParamValue.setDelegate(true);
			resultParamValue.setInstancePointer(new InstancePointer(result));
			IClassFactory resultParamValueClassFactory = GlobalClassFactoryMap.get(resultParamValue.getCppInstanceTypeName());
			if (resultParamValueClassFactory != null)
			{
				resultParamValue.setDelegate(true);
				resultParamValue = (com.earthview.world.graphic.BackgroundProcessResult)resultParamValueClassFactory.create();
				resultParamValue.setDelegate(true);
				resultParamValue.setInstancePointer(new InstancePointer(result));
			}
			operationCompleted(ticketParamValue, resultParamValue);
		}

		native private void operationCompleted_ev_uint64_BackgroundProcessResult(long pNativeObject, long ticket, long result);
		public void operationCompleted(ULongPointer ticket, com.earthview.world.graphic.BackgroundProcessResult result)
		{
			long ticketParamValue = ticket.nativeObject.pointer;
			long resultParamValue = result.nativeObject.pointer;
			operationCompleted_ev_uint64_BackgroundProcessResult(this.nativeObject.pointer, ticketParamValue, resultParamValue);
		}
		native private void operationCompleted_ev_uint64_BackgroundProcessResult_NoVirtual(long pNativeObject, long ticket, long result);
		protected void operationCompleted_NoVirtual(ULongPointer ticket, com.earthview.world.graphic.BackgroundProcessResult result)
		{
			long ticketParamValue = ticket.nativeObject.pointer;
			long resultParamValue = result.nativeObject.pointer;
			operationCompleted_ev_uint64_BackgroundProcessResult_NoVirtual(this.nativeObject.pointer, ticketParamValue, resultParamValue);
		}

		public ResourceBackgroundQueueListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ResourceBackgroundQueueListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_operationCompleted_ev_uint64_BackgroundProcessResult(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_operationCompleted_ev_uint64_BackgroundProcessResult(this.nativeObject.pointer, "operationCompleted_ev_uint64_BackgroundProcessResult_callback");
			}
		}
		
		public static ResourceBackgroundQueueListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ResourceBackgroundQueueListener obj = null;
 			if(baseObj instanceof ResourceBackgroundQueueListener)
			{
				obj = (ResourceBackgroundQueueListener)baseObj;
			} else {
				obj = new ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CResourceBackgroundQueueListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ResourceBackgroundQueueListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ResourceBackgroundQueueListener emptyInstance = new ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public ResourceBackgroundQueue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCResourceBackgroundQueueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ResourceBackgroundQueue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void initialise_void(long pNativeObject);
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
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

	protected  String initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback(String name, long listener)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = initialiseResourceGroup(nameParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String initialiseResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String name, long listener);
	public ULongPointer initialiseResourceGroup(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = initialiseResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String name, long listener);
	protected ULongPointer initialiseResourceGroup_NoVirtual(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String initialiseResourceGroup_EVString_callback(String name)
	{
		String nameParamValue = name;
		ULongPointer returnValue = initialiseResourceGroup(nameParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String initialiseResourceGroup_EVString(long pNativeObject, String name);
	public ULongPointer initialiseResourceGroup(String name)
	{
		String nameParamValue = name;
		String returnValue = initialiseResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String initialiseResourceGroup_EVString_NoVirtual(long pNativeObject, String name);
	protected ULongPointer initialiseResourceGroup_NoVirtual(String name)
	{
		String nameParamValue = name;
		String returnValue = initialiseResourceGroup_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback(long listener)
	{
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = initialiseAllResourceGroups(listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String initialiseAllResourceGroups_CResourceBackgroundQueueListener(long pNativeObject, long listener);
	public ULongPointer initialiseAllResourceGroups(com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = initialiseAllResourceGroups_CResourceBackgroundQueueListener(this.nativeObject.pointer, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String initialiseAllResourceGroups_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, long listener);
	protected ULongPointer initialiseAllResourceGroups_NoVirtual(com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = initialiseAllResourceGroups_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String initialiseAllResourceGroups_void_callback()
	{
		ULongPointer returnValue = initialiseAllResourceGroups();
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String initialiseAllResourceGroups_void(long pNativeObject);
	public ULongPointer initialiseAllResourceGroups()
	{
		String returnValue = initialiseAllResourceGroups_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String initialiseAllResourceGroups_void_NoVirtual(long pNativeObject);
	protected ULongPointer initialiseAllResourceGroups_NoVirtual()
	{
		String returnValue = initialiseAllResourceGroups_void_NoVirtual(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback(String name, long listener)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = prepareResourceGroup(nameParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepareResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String name, long listener);
	public ULongPointer prepareResourceGroup(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = prepareResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepareResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String name, long listener);
	protected ULongPointer prepareResourceGroup_NoVirtual(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = prepareResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepareResourceGroup_EVString_callback(String name)
	{
		String nameParamValue = name;
		ULongPointer returnValue = prepareResourceGroup(nameParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepareResourceGroup_EVString(long pNativeObject, String name);
	public ULongPointer prepareResourceGroup(String name)
	{
		String nameParamValue = name;
		String returnValue = prepareResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepareResourceGroup_EVString_NoVirtual(long pNativeObject, String name);
	protected ULongPointer prepareResourceGroup_NoVirtual(String name)
	{
		String nameParamValue = name;
		String returnValue = prepareResourceGroup_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback(String name, long listener)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = loadResourceGroup(nameParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String loadResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String name, long listener);
	public ULongPointer loadResourceGroup(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = loadResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String loadResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String name, long listener);
	protected ULongPointer loadResourceGroup_NoVirtual(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = loadResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String loadResourceGroup_EVString_callback(String name)
	{
		String nameParamValue = name;
		ULongPointer returnValue = loadResourceGroup(nameParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String loadResourceGroup_EVString(long pNativeObject, String name);
	public ULongPointer loadResourceGroup(String name)
	{
		String nameParamValue = name;
		String returnValue = loadResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String loadResourceGroup_EVString_NoVirtual(long pNativeObject, String name);
	protected ULongPointer loadResourceGroup_NoVirtual(String name)
	{
		String nameParamValue = name;
		String returnValue = loadResourceGroup_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String unload_EVString_EVString_CResourceBackgroundQueueListener_callback(String resType, String name, long listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = unload(resTypeParamValue, nameParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String unload_EVString_EVString_CResourceBackgroundQueueListener(long pNativeObject, String resType, String name, long listener);
	public ULongPointer unload(String resType, String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = unload_EVString_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, resTypeParamValue, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String unload_EVString_EVString_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String resType, String name, long listener);
	protected ULongPointer unload_NoVirtual(String resType, String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = unload_EVString_EVString_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String unload_EVString_EVString_callback(String resType, String name)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		ULongPointer returnValue = unload(resTypeParamValue, nameParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String unload_EVString_EVString(long pNativeObject, String resType, String name);
	public ULongPointer unload(String resType, String name)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String returnValue = unload_EVString_EVString(this.nativeObject.pointer, resTypeParamValue, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String unload_EVString_EVString_NoVirtual(long pNativeObject, String resType, String name);
	protected ULongPointer unload_NoVirtual(String resType, String name)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String returnValue = unload_EVString_EVString_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback(String resType, long handle, long listener)
	{
		String resTypeParamValue = resType;
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = unload(resTypeParamValue, handleParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String unload_EVString_ev_uint64_CResourceBackgroundQueueListener(long pNativeObject, String resType, long handle, long listener);
	public ULongPointer unload(String resType, ULongPointer handle, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		long handleParamValue = handle.nativeObject.pointer;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = unload_EVString_ev_uint64_CResourceBackgroundQueueListener(this.nativeObject.pointer, resTypeParamValue, handleParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String unload_EVString_ev_uint64_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String resType, long handle, long listener);
	protected ULongPointer unload_NoVirtual(String resType, ULongPointer handle, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		long handleParamValue = handle.nativeObject.pointer;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = unload_EVString_ev_uint64_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, resTypeParamValue, handleParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String unload_EVString_ev_uint64_callback(String resType, long handle)
	{
		String resTypeParamValue = resType;
		ULongPointer handleParamValue = new ULongPointer(new InstancePointer(handle));
		ULongPointer returnValue = unload(resTypeParamValue, handleParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String unload_EVString_ev_uint64(long pNativeObject, String resType, long handle);
	public ULongPointer unload(String resType, ULongPointer handle)
	{
		String resTypeParamValue = resType;
		long handleParamValue = handle.nativeObject.pointer;
		String returnValue = unload_EVString_ev_uint64(this.nativeObject.pointer, resTypeParamValue, handleParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String unload_EVString_ev_uint64_NoVirtual(long pNativeObject, String resType, long handle);
	protected ULongPointer unload_NoVirtual(String resType, ULongPointer handle)
	{
		String resTypeParamValue = resType;
		long handleParamValue = handle.nativeObject.pointer;
		String returnValue = unload_EVString_ev_uint64_NoVirtual(this.nativeObject.pointer, resTypeParamValue, handleParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback(String name, long listener)
	{
		String nameParamValue = name;
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = unloadResourceGroup(nameParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String unloadResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String name, long listener);
	public ULongPointer unloadResourceGroup(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = unloadResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String unloadResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String name, long listener);
	protected ULongPointer unloadResourceGroup_NoVirtual(String name, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String nameParamValue = name;
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = unloadResourceGroup_EVString_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, nameParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String unloadResourceGroup_EVString_callback(String name)
	{
		String nameParamValue = name;
		ULongPointer returnValue = unloadResourceGroup(nameParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String unloadResourceGroup_EVString(long pNativeObject, String name);
	public ULongPointer unloadResourceGroup(String name)
	{
		String nameParamValue = name;
		String returnValue = unloadResourceGroup_EVString(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String unloadResourceGroup_EVString_NoVirtual(long pNativeObject, String name);
	protected ULongPointer unloadResourceGroup_NoVirtual(String name)
	{
		String nameParamValue = name;
		String returnValue = unloadResourceGroup_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback(String resType, String name, String group, boolean isManual, long ref_loader, long loadParams, long listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = prepare(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams, long listener);
	public ULongPointer prepare(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams, long listener);
	protected ULongPointer prepare_NoVirtual(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String resType, String name, String group, boolean isManual, long ref_loader, long loadParams)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		ULongPointer returnValue = prepare(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams);
	public ULongPointer prepare(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams);
	protected ULongPointer prepare_NoVirtual(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback(String resType, String name, String group, boolean isManual, long ref_loader)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		ULongPointer returnValue = prepare(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader);
	public ULongPointer prepare(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader);
	protected ULongPointer prepare_NoVirtual(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepare_EVString_EVString_EVString_ev_bool_callback(String resType, String name, String group, boolean isManual)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		ULongPointer returnValue = prepare(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepare_EVString_EVString_EVString_ev_bool(long pNativeObject, String resType, String name, String group, boolean isManual);
	public ULongPointer prepare(String resType, String name, String group, boolean isManual)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		String returnValue = prepare_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepare_EVString_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual);
	protected ULongPointer prepare_NoVirtual(String resType, String name, String group, boolean isManual)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		String returnValue = prepare_EVString_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String prepare_EVString_EVString_EVString_callback(String resType, String name, String group)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		ULongPointer returnValue = prepare(resTypeParamValue, nameParamValue, groupParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String prepare_EVString_EVString_EVString(long pNativeObject, String resType, String name, String group);
	public ULongPointer prepare(String resType, String name, String group)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		String returnValue = prepare_EVString_EVString_EVString(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String prepare_EVString_EVString_EVString_NoVirtual(long pNativeObject, String resType, String name, String group);
	protected ULongPointer prepare_NoVirtual(String resType, String name, String group)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		String returnValue = prepare_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback(String resType, String name, String group, boolean isManual, long ref_loader, long loadParams, long listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listenerParamValue = (listener == 0L ? null : new com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(listenerParamValue != null)
		{
		listenerParamValue.setDelegate(true);
		listenerParamValue.setInstancePointer(new InstancePointer(listener));
		IClassFactory listenerParamValueClassFactory = GlobalClassFactoryMap.get(listenerParamValue.getCppInstanceTypeName());
		if (listenerParamValueClassFactory != null)
		{
			listenerParamValue.setDelegate(true);
			listenerParamValue = (com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener)listenerParamValueClassFactory.create();
			listenerParamValue.setDelegate(true);
			listenerParamValue.setInstancePointer(new InstancePointer(listener));
		}
		}
		ULongPointer returnValue = load(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, listenerParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams, long listener);
	public ULongPointer load(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams, long listener);
	protected ULongPointer load_NoVirtual(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams, com.earthview.world.graphic.ResourceBackgroundQueue.ResourceBackgroundQueueListener listener)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		String returnValue = load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue, listenerParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback(String resType, String name, String group, boolean isManual, long ref_loader, long loadParams)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		com.earthview.world.core.CommonStringPairList loadParamsParamValue = (loadParams == 0L ? null : new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate));
		if(loadParamsParamValue != null)
		{
		loadParamsParamValue.setDelegate(true);
		loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		IClassFactory loadParamsParamValueClassFactory = GlobalClassFactoryMap.get(loadParamsParamValue.getCppInstanceTypeName());
		if (loadParamsParamValueClassFactory != null)
		{
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue = (com.earthview.world.core.CommonStringPairList)loadParamsParamValueClassFactory.create();
			loadParamsParamValue.setDelegate(true);
			loadParamsParamValue.setInstancePointer(new InstancePointer(loadParams));
		}
		}
		ULongPointer returnValue = load(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams);
	public ULongPointer load(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		String returnValue = load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader, long loadParams);
	protected ULongPointer load_NoVirtual(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader, com.earthview.world.core.CommonStringPairList loadParams)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		long loadParamsParamValue = (loadParams == null ? 0L : loadParams.nativeObject.pointer);
		String returnValue = load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue, loadParamsParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback(String resType, String name, String group, boolean isManual, long ref_loader)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		com.earthview.world.graphic.ManualResourceLoader ref_loaderParamValue = (ref_loader == 0L ? null : new com.earthview.world.graphic.ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_loaderParamValue != null)
		{
		ref_loaderParamValue.setDelegate(true);
		ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		IClassFactory ref_loaderParamValueClassFactory = GlobalClassFactoryMap.get(ref_loaderParamValue.getCppInstanceTypeName());
		if (ref_loaderParamValueClassFactory != null)
		{
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue = (com.earthview.world.graphic.ManualResourceLoader)ref_loaderParamValueClassFactory.create();
			ref_loaderParamValue.setDelegate(true);
			ref_loaderParamValue.setInstancePointer(new InstancePointer(ref_loader));
		}
		}
		ULongPointer returnValue = load(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader);
	public ULongPointer load(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		String returnValue = load_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual, long ref_loader);
	protected ULongPointer load_NoVirtual(String resType, String name, String group, boolean isManual, com.earthview.world.graphic.ManualResourceLoader ref_loader)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		long ref_loaderParamValue = (ref_loader == null ? 0L : ref_loader.nativeObject.pointer);
		String returnValue = load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue, ref_loaderParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String load_EVString_EVString_EVString_ev_bool_callback(String resType, String name, String group, boolean isManual)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		ULongPointer returnValue = load(resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String load_EVString_EVString_EVString_ev_bool(long pNativeObject, String resType, String name, String group, boolean isManual);
	public ULongPointer load(String resType, String name, String group, boolean isManual)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		String returnValue = load_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String load_EVString_EVString_EVString_ev_bool_NoVirtual(long pNativeObject, String resType, String name, String group, boolean isManual);
	protected ULongPointer load_NoVirtual(String resType, String name, String group, boolean isManual)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		boolean isManualParamValue = isManual;
		String returnValue = load_EVString_EVString_EVString_ev_bool_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue, isManualParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  String load_EVString_EVString_EVString_callback(String resType, String name, String group)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		ULongPointer returnValue = load(resTypeParamValue, nameParamValue, groupParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String load_EVString_EVString_EVString(long pNativeObject, String resType, String name, String group);
	public ULongPointer load(String resType, String name, String group)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		String returnValue = load_EVString_EVString_EVString(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String load_EVString_EVString_EVString_NoVirtual(long pNativeObject, String resType, String name, String group);
	protected ULongPointer load_NoVirtual(String resType, String name, String group)
	{
		String resTypeParamValue = resType;
		String nameParamValue = name;
		String groupParamValue = group;
		String returnValue = load_EVString_EVString_EVString_NoVirtual(this.nativeObject.pointer, resTypeParamValue, nameParamValue, groupParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	protected  boolean isProcessComplete_ev_uint64_callback(long ticket)
	{
		ULongPointer ticketParamValue = new ULongPointer(new InstancePointer(ticket));
		boolean returnValue = isProcessComplete(ticketParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isProcessComplete_ev_uint64(long pNativeObject, long ticket);
	public boolean isProcessComplete(ULongPointer ticket)
	{
		long ticketParamValue = ticket.nativeObject.pointer;
		boolean returnValue = isProcessComplete_ev_uint64(this.nativeObject.pointer, ticketParamValue);
		return returnValue;
	}
	native private boolean isProcessComplete_ev_uint64_NoVirtual(long pNativeObject, long ticket);
	protected boolean isProcessComplete_NoVirtual(ULongPointer ticket)
	{
		long ticketParamValue = ticket.nativeObject.pointer;
		boolean returnValue = isProcessComplete_ev_uint64_NoVirtual(this.nativeObject.pointer, ticketParamValue);
		return returnValue;
	}

	native private void abortRequest_ev_uint64(long pNativeObject, long ticket);
	public void abortRequest(ULongPointer ticket)
	{
		long ticketParamValue = ticket.nativeObject.pointer;
		abortRequest_ev_uint64(this.nativeObject.pointer, ticketParamValue);
	}
	public ResourceBackgroundQueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceBackgroundQueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_canHandleResponse_CResponse_CWorkQueue(long pNativeObject, String method);
	native protected void register_canHandleRequest_CRequest_CWorkQueue(long pNativeObject, String method);
	native protected void register_handleResponse_CResponse_CWorkQueue(long pNativeObject, String method);
	native protected void register_handleRequest_CRequest_CWorkQueue(long pNativeObject, String method);
	native protected void register_getRequestHandlerPtr_void(long pNativeObject, String method);
	native protected void register_getResponseHandlerPtr_void(long pNativeObject, String method);
	native protected void register_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_initialiseResourceGroup_EVString(long pNativeObject, String method);
	native protected void register_initialiseAllResourceGroups_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_initialiseAllResourceGroups_void(long pNativeObject, String method);
	native protected void register_prepareResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_prepareResourceGroup_EVString(long pNativeObject, String method);
	native protected void register_loadResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_loadResourceGroup_EVString(long pNativeObject, String method);
	native protected void register_unload_EVString_EVString_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_unload_EVString_EVString(long pNativeObject, String method);
	native protected void register_unload_EVString_ev_uint64_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_unload_EVString_ev_uint64(long pNativeObject, String method);
	native protected void register_unloadResourceGroup_EVString_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_unloadResourceGroup_EVString(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_prepare_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_EVString_ev_bool(long pNativeObject, String method);
	native protected void register_load_EVString_EVString_EVString(long pNativeObject, String method);
	native protected void register_isProcessComplete_ev_uint64(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_getGroupName_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_canHandleResponse_CResponse_CWorkQueue(this.nativeObject.pointer, "canHandleResponse_CResponse_CWorkQueue_callback");
			this.register_canHandleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, "canHandleRequest_CRequest_CWorkQueue_callback");
			this.register_handleResponse_CResponse_CWorkQueue(this.nativeObject.pointer, "handleResponse_CResponse_CWorkQueue_callback");
			this.register_handleRequest_CRequest_CWorkQueue(this.nativeObject.pointer, "handleRequest_CRequest_CWorkQueue_callback");
			this.register_getRequestHandlerPtr_void(this.nativeObject.pointer, "getRequestHandlerPtr_void_callback");
			this.register_getResponseHandlerPtr_void(this.nativeObject.pointer, "getResponseHandlerPtr_void_callback");
			this.register_initialiseResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, "initialiseResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
			this.register_initialiseResourceGroup_EVString(this.nativeObject.pointer, "initialiseResourceGroup_EVString_callback");
			this.register_initialiseAllResourceGroups_CResourceBackgroundQueueListener(this.nativeObject.pointer, "initialiseAllResourceGroups_CResourceBackgroundQueueListener_callback");
			this.register_initialiseAllResourceGroups_void(this.nativeObject.pointer, "initialiseAllResourceGroups_void_callback");
			this.register_prepareResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, "prepareResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
			this.register_prepareResourceGroup_EVString(this.nativeObject.pointer, "prepareResourceGroup_EVString_callback");
			this.register_loadResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, "loadResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
			this.register_loadResourceGroup_EVString(this.nativeObject.pointer, "loadResourceGroup_EVString_callback");
			this.register_unload_EVString_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, "unload_EVString_EVString_CResourceBackgroundQueueListener_callback");
			this.register_unload_EVString_EVString(this.nativeObject.pointer, "unload_EVString_EVString_callback");
			this.register_unload_EVString_ev_uint64_CResourceBackgroundQueueListener(this.nativeObject.pointer, "unload_EVString_ev_uint64_CResourceBackgroundQueueListener_callback");
			this.register_unload_EVString_ev_uint64(this.nativeObject.pointer, "unload_EVString_ev_uint64_callback");
			this.register_unloadResourceGroup_EVString_CResourceBackgroundQueueListener(this.nativeObject.pointer, "unloadResourceGroup_EVString_CResourceBackgroundQueueListener_callback");
			this.register_unloadResourceGroup_EVString(this.nativeObject.pointer, "unloadResourceGroup_EVString_callback");
			this.register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.nativeObject.pointer, "prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback");
			this.register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "prepare_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_prepare_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, "prepare_EVString_EVString_EVString_ev_bool_callback");
			this.register_prepare_EVString_EVString_EVString(this.nativeObject.pointer, "prepare_EVString_EVString_EVString_callback");
			this.register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener(this.nativeObject.pointer, "load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_CResourceBackgroundQueueListener_callback");
			this.register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(this.nativeObject.pointer, "load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_callback");
			this.register_load_EVString_EVString_EVString_ev_bool_CManualResourceLoader(this.nativeObject.pointer, "load_EVString_EVString_EVString_ev_bool_CManualResourceLoader_callback");
			this.register_load_EVString_EVString_EVString_ev_bool(this.nativeObject.pointer, "load_EVString_EVString_EVString_ev_bool_callback");
			this.register_load_EVString_EVString_EVString(this.nativeObject.pointer, "load_EVString_EVString_EVString_callback");
			this.register_isProcessComplete_ev_uint64(this.nativeObject.pointer, "isProcessComplete_ev_uint64_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_getGroupName_void(this.nativeObject.pointer, "getGroupName_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
		}
	}
	
	public static ResourceBackgroundQueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceBackgroundQueue obj = null;
 		if(baseObj instanceof ResourceBackgroundQueue)
		{
			obj = (ResourceBackgroundQueue)baseObj;
		} else {
			obj = new ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceBackgroundQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
