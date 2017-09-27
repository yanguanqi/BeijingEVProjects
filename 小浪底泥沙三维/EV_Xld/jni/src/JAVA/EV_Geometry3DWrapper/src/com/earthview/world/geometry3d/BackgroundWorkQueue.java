package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundWorkQueue extends com.earthview.world.core.BackgroundQueue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue", new BackgroundWorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCBackgroundWorkQueueProxy", new BackgroundWorkQueueClassFactory());
	}

	public static class BackgroundResponse extends com.earthview.world.core.WorkQueue.ResponsePara {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse", new BackgroundResponseClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::JBackgroundResponseProxy", new BackgroundResponseClassFactory());
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

		public BackgroundResponse(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BackgroundResponse(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_ev_clone_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			}
		}
		
		public static BackgroundResponse fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BackgroundResponse obj = null;
 			if(baseObj instanceof BackgroundResponse)
			{
				obj = (BackgroundResponse)baseObj;
			} else {
				obj = new BackgroundResponse(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BackgroundResponse");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BackgroundResponseClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BackgroundResponse emptyInstance = new BackgroundResponse(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class BackgroundRequest extends com.earthview.world.core.WorkQueue.RequestPara {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest", new BackgroundRequestClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::JBackgroundRequestProxy", new BackgroundRequestClassFactory());
		}

		native private long get_mpObj_void(long pNativeObject);
		public com.earthview.world.geometry3d.VisibleObject get_mpObj()
		{
			long jniValue = get_mpObj_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.geometry3d.VisibleObject __returnValue = new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate, "CVisibleObject");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.geometry3d.VisibleObject)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CVisibleObject");
			}
			return __returnValue;
		}
		
		native private void set_mpObj_CVisibleObject (long pNativeObject, long value);
		public void set_mpObj(com.earthview.world.geometry3d.VisibleObject mpObj)
		{
			long mpObjParamValue = (mpObj == null ? 0L : mpObj.nativeObject.pointer);
			
			set_mpObj_CVisibleObject(this.nativeObject.pointer, mpObjParamValue);
		}
		
		native private int get_mReqType_void(long pNativeObject);
		public com.earthview.world.geometry3d.BackgroundRequestType get_mReqType()
		{
			int jniValue = get_mReqType_void(this.nativeObject.pointer);
			
			return com.earthview.world.geometry3d.BackgroundRequestType.toEnum(jniValue);
		}
		
		native private void set_mReqType_BackgroundRequestType (long pNativeObject, int value);
		public void set_mReqType(com.earthview.world.geometry3d.BackgroundRequestType mReqType)
		{
			int mReqTypeParamValue = mReqType.getValue();
			
			set_mReqType_BackgroundRequestType(this.nativeObject.pointer, mReqTypeParamValue);
		}
		
		native private long get_mpNode_void(long pNativeObject);
		public com.earthview.world.graphic.Node get_mpNode()
		{
			long jniValue = get_mpNode_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "CNode");
			}
			return __returnValue;
		}
		
		native private void set_mpNode_CNode (long pNativeObject, long value);
		public void set_mpNode(com.earthview.world.graphic.Node mpNode)
		{
			long mpNodeParamValue = (mpNode == null ? 0L : mpNode.nativeObject.pointer);
			
			set_mpNode_CNode(this.nativeObject.pointer, mpNodeParamValue);
		}
		
		public BackgroundRequest() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JBackgroundRequestProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.geometry3d.BackgroundWorkQueue$BackgroundRequest".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
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

		public BackgroundRequest(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BackgroundRequest(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		native protected void register_ev_clone_void(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			}
		}
		
		public static BackgroundRequest fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BackgroundRequest obj = null;
 			if(baseObj instanceof BackgroundRequest)
			{
				obj = (BackgroundRequest)baseObj;
			} else {
				obj = new BackgroundRequest(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "BackgroundRequest");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BackgroundRequestClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BackgroundRequest emptyInstance = new BackgroundRequest(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class BackgroundRequestHandler extends com.earthview.world.core.WorkQueue.RequestHandler {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler", new BackgroundRequestHandlerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::JCBackgroundRequestHandlerProxy", new BackgroundRequestHandlerClassFactory());
		}

		public BackgroundRequestHandler(com.earthview.world.geometry3d.BackgroundWorkQueue parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCBackgroundRequestHandlerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.geometry3d.BackgroundWorkQueue$BackgroundRequestHandler".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean canHandleRequest_CRequest_CWorkQueue(long pNativeObject, long req, long srcQ);
		/**
		 * 处理当前的请求，具体请求模型数据+模型关联资源数据
		 * @param workqueue 当前的队列
		 * @param request 传递的请求
		 * @return 响应
		 */
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

		native private long handleRequest_CRequest_CWorkQueue(long pNativeObject, long req, long srcQ);
		/**
		 * 这个hanler是否能处理当前传过来的响应
		 * @param workqueue 当前的队列
		 * @param request 传递的请求
		 * @return 能否响应
		 */
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

		public BackgroundRequestHandler(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BackgroundRequestHandler(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static BackgroundRequestHandler fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BackgroundRequestHandler obj = null;
 			if(baseObj instanceof BackgroundRequestHandler)
			{
				obj = (BackgroundRequestHandler)baseObj;
			} else {
				obj = new BackgroundRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CBackgroundRequestHandler");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BackgroundRequestHandlerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BackgroundRequestHandler emptyInstance = new BackgroundRequestHandler(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class BackgroundResponseHandler extends com.earthview.world.core.WorkQueue.ResponseHandler {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler", new BackgroundResponseHandlerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkQueue::JCBackgroundResponseHandlerProxy", new BackgroundResponseHandlerClassFactory());
		}

		public BackgroundResponseHandler(com.earthview.world.geometry3d.BackgroundWorkQueue parent) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer parentPtr = new BasePointer(parent);
			list.add("parent", parentPtr.get());
			Create("JCBackgroundResponseHandlerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.world.geometry3d.BackgroundWorkQueue$BackgroundResponseHandler".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private boolean canHandleResponse_CResponse_CWorkQueue(long pNativeObject, long res, long srcQ);
		/**
		 * 这个hanler是否能处理当前传过来的响应
		 * @param workqueue 当前的队列
		 * @param response 传递的响应
		 * @return 是否能处理
		 */
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
		/**
		 * 处理当前的响应，具体请求模型数据+模型关联资源数据
		 * @param workqueue 当前的队列
		 * @param response 传递的响应
		 */
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

		public BackgroundResponseHandler(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public BackgroundResponseHandler(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		public static BackgroundResponseHandler fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			BackgroundResponseHandler obj = null;
 			if(baseObj instanceof BackgroundResponseHandler)
			{
				obj = (BackgroundResponseHandler)baseObj;
			} else {
				obj = new BackgroundResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CBackgroundResponseHandler");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class BackgroundResponseHandlerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			BackgroundResponseHandler emptyInstance = new BackgroundResponseHandler(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	native private static long getSingletonPtr_void();
	/**
	 * 获取单例
	 * @param  
	 */
	public static com.earthview.world.geometry3d.BackgroundWorkQueue getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.BackgroundWorkQueue __returnValue = new com.earthview.world.geometry3d.BackgroundWorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CBackgroundWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.BackgroundWorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBackgroundWorkQueue");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 析构
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	protected  String addRequest_BackgroundRequest_callback(long request)
	{
		com.earthview.world.geometry3d.BackgroundWorkQueue.BackgroundRequest requestParamValue = new com.earthview.world.geometry3d.BackgroundWorkQueue.BackgroundRequest(CreatedWhenConstruct.CWC_NotToCreate);
		requestParamValue.setDelegate(true);
		requestParamValue.setInstancePointer(new InstancePointer(request));
		IClassFactory requestParamValueClassFactory = GlobalClassFactoryMap.get(requestParamValue.getCppInstanceTypeName());
		if (requestParamValueClassFactory != null)
		{
			requestParamValue.setDelegate(true);
			requestParamValue = (com.earthview.world.geometry3d.BackgroundWorkQueue.BackgroundRequest)requestParamValueClassFactory.create();
			requestParamValue.setDelegate(true);
			requestParamValue.setInstancePointer(new InstancePointer(request));
		}
		ULongPointer returnValue = addRequest(requestParamValue);
		String __returnValue = returnValue.get().toString();
		return __returnValue;
	}

	native private String addRequest_BackgroundRequest(long pNativeObject, long request);
	/**
	 * 向队列里增加一个数据的请求
	 * @param request 请求的内容
	 * @return 请求的结果
	 */
	public ULongPointer addRequest(com.earthview.world.geometry3d.BackgroundWorkQueue.BackgroundRequest request)
	{
		long requestParamValue = request.nativeObject.pointer;
		String returnValue = addRequest_BackgroundRequest(this.nativeObject.pointer, requestParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private String addRequest_BackgroundRequest_NoVirtual(long pNativeObject, long request);
	protected ULongPointer addRequest_NoVirtual(com.earthview.world.geometry3d.BackgroundWorkQueue.BackgroundRequest request)
	{
		long requestParamValue = request.nativeObject.pointer;
		String returnValue = addRequest_BackgroundRequest_NoVirtual(this.nativeObject.pointer, requestParamValue);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}

	native private String getGroupName_void(long pNativeObject);
	/**
	 * 获取线程队列的组名
	 * @param  
	 * @return 线程队列的组名
	 */
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
	/**
	 * 获取线程队列的名字，不可重复
	 * @param  
	 * @return 线程队列的名字
	 */
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

	native private void initialise_void(long pNativeObject);
	/**
	 * 启动线程队列，针对同类型的channel可能有多个，所以手动指定优先级
	 * @param  
	 */
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
	/**
	 * 关闭线程队列
	 * @param  
	 */
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void abortRequest_ev_uint64_callback(long ticket)
	{
		ULongPointer ticketParamValue = new ULongPointer(new InstancePointer(ticket));
		abortRequest(ticketParamValue);
	}

	native private void abortRequest_ev_uint64(long pNativeObject, long ticket);
	/**
	 * 中断请求
	 * @param  
	 */
	public void abortRequest(ULongPointer ticket)
	{
		long ticketParamValue = ticket.nativeObject.pointer;
		abortRequest_ev_uint64(this.nativeObject.pointer, ticketParamValue);
	}
	native private void abortRequest_ev_uint64_NoVirtual(long pNativeObject, long ticket);
	protected void abortRequest_NoVirtual(ULongPointer ticket)
	{
		long ticketParamValue = ticket.nativeObject.pointer;
		abortRequest_ev_uint64_NoVirtual(this.nativeObject.pointer, ticketParamValue);
	}

	public BackgroundWorkQueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BackgroundWorkQueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addRequest_BackgroundRequest(long pNativeObject, String method);
	native protected void register_abortRequest_ev_uint64(long pNativeObject, String method);
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_getGroupName_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addRequest_BackgroundRequest(this.nativeObject.pointer, "addRequest_BackgroundRequest_callback");
			this.register_abortRequest_ev_uint64(this.nativeObject.pointer, "abortRequest_ev_uint64_callback");
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_getGroupName_void(this.nativeObject.pointer, "getGroupName_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
		}
	}
	
	public static BackgroundWorkQueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BackgroundWorkQueue obj = null;
 		if(baseObj instanceof BackgroundWorkQueue)
		{
			obj = (BackgroundWorkQueue)baseObj;
		} else {
			obj = new BackgroundWorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBackgroundWorkQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
