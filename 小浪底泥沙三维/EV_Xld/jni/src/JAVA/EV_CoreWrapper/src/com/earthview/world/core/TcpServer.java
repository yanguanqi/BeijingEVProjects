package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * TCP服务端对象
 */
public class TcpServer extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CTcpServer", new TcpServerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCTcpServerProxy", new TcpServerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TcpServer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTcpServerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.TcpServer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void start_void(long pNativeObject);
	/**
	 * TCP服务器开始启动，通过创建TcpAcceptJob实例来实现对客户端连接的接收
	 */
	public void start()
	{
		start_void(this.nativeObject.pointer);
	}
	native private void shutDown_void(long pNativeObject);
	/**
	 * TCP服务器关闭，断开所有与客户端的连接
	 */
	public void shutDown()
	{
		shutDown_void(this.nativeObject.pointer);
	}
	native private void setMaxClientCount_ev_int32(long pNativeObject, int iClientCount);
	/**
	 * 设置TCP服务器的最大客户端连接数量
	 * @param iClientCount 最大客户端连接数量
	 */
	public void setMaxClientCount(int iClientCount)
	{
		int iClientCountParamValue = iClientCount;
		setMaxClientCount_ev_int32(this.nativeObject.pointer, iClientCountParamValue);
	}
	native private void setTcpListenPort_ev_int16(long pNativeObject, short iPort);
	/**
	 * 设置TCP服务器的监听端口
	 * @param iPort 进行监听的端口号
	 */
	public void setTcpListenPort(short iPort)
	{
		short iPortParamValue = iPort;
		setTcpListenPort_ev_int16(this.nativeObject.pointer, iPortParamValue);
	}
	native private void setBufByteSize_ev_int32(long pNativeObject, int iBufSize);
	/**
	 * 设置接收数据的缓冲区大小
	 * @param iBufSize 集体的缓冲区的值
	 */
	public void setBufByteSize(int iBufSize)
	{
		int iBufSizeParamValue = iBufSize;
		setBufByteSize_ev_int32(this.nativeObject.pointer, iBufSizeParamValue);
	}
	protected  long createJob_void_callback()
	{
		com.earthview.world.core.BaseTcpServerJob returnValue = createJob();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createJob_void(long pNativeObject);
	/**
	 * 虚函数，主要用于用户自己去实例化，创建新的线程
	 */
	public com.earthview.world.core.BaseTcpServerJob createJob()
	{
		long returnValue = createJob_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseTcpServerJob __returnValue = new com.earthview.world.core.BaseTcpServerJob(CreatedWhenConstruct.CWC_NotToCreate, "CBaseTcpServerJob");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseTcpServerJob)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseTcpServerJob");
		}
		return __returnValue;
	}
	native private long createJob_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.BaseTcpServerJob createJob_NoVirtual()
	{
		long returnValue = createJob_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseTcpServerJob __returnValue = new com.earthview.world.core.BaseTcpServerJob(CreatedWhenConstruct.CWC_NotToCreate, "CBaseTcpServerJob");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseTcpServerJob)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseTcpServerJob");
		}
		return __returnValue;
	}

	protected  void onError_ev_int32_callback(int eErrorNo)
	{
		int eErrorNoParamValue = eErrorNo;
		onError(eErrorNoParamValue);
	}

	native private void onError_ev_int32(long pNativeObject, int eErrorNo);
	/**
	 * 当服务端有异常时，通知给用户，让用户能够自定义处理
	 * @param eErrorNo 错误宏值
	 */
	public void onError(int eErrorNo)
	{
		int eErrorNoParamValue = eErrorNo;
		onError_ev_int32(this.nativeObject.pointer, eErrorNoParamValue);
	}
	native private void onError_ev_int32_NoVirtual(long pNativeObject, int eErrorNo);
	protected void onError_NoVirtual(int eErrorNo)
	{
		int eErrorNoParamValue = eErrorNo;
		onError_ev_int32_NoVirtual(this.nativeObject.pointer, eErrorNoParamValue);
	}

	public TcpServer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TcpServer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		return super.onEvent_NoVirtual(e);
	}
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_createJob_void(long pNativeObject, String method);
	native protected void register_onError_ev_int32(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createJob_void(this.nativeObject.pointer, "createJob_void_callback");
			this.register_onError_ev_int32(this.nativeObject.pointer, "onError_ev_int32_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static TcpServer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TcpServer obj = null;
 		if(baseObj instanceof TcpServer)
		{
			obj = (TcpServer)baseObj;
		} else {
			obj = new TcpServer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTcpServer");
			obj.increaseCast();
		}

		return obj;
	}
}
