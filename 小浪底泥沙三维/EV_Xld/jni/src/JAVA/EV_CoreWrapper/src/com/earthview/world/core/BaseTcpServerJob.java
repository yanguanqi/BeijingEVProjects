package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BaseTcpServerJob extends com.earthview.world.core.EVThread {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CBaseTcpServerJob", new BaseTcpServerJobClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCBaseTcpServerJobProxy", new BaseTcpServerJobClassFactory());
	}

	public BaseTcpServerJob() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBaseTcpServerJobProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.BaseTcpServerJob".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int send_ev_byte_ev_int32(long pNativeObject, long buf, int iLen);
	/**
	 * 向客户端发送数据
	 * @param buf 存储发送的数据
	 * @param iLen 数据的字节长长度
	 * @return 发送成功为发送的数据大小，失败为-1
	 */
	public int send(UBytePointer buf, int iLen)
	{
		long bufParamValue = (buf == null ? 0L : buf.nativeObject.pointer);
		int iLenParamValue = iLen;
		int returnValue = send_ev_byte_ev_int32(this.nativeObject.pointer, bufParamValue, iLenParamValue);
		return returnValue;
	}
	protected  boolean onReceive_ev_byte_ev_int32_callback(long byBuf, int iLen)
	{
		UBytePointer byBufParamValue = (byBuf == 0L ? null : new UBytePointer(new InstancePointer(byBuf)));
		int iLenParamValue = iLen;
		boolean returnValue = onReceive(byBufParamValue, iLenParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onReceive_ev_byte_ev_int32(long pNativeObject, long byBuf, int iLen);
	/**
	 * 函数没有具体实现，需要用户继承于此类来完成具体数据的接收后的操作
	 * @param byBuf 存储接收的数据
	 * @param iLen 数据的字节长长度
	 * @return 接收成功为true失败为false
	 */
	public boolean onReceive(UBytePointer byBuf, int iLen)
	{
		long byBufParamValue = (byBuf == null ? 0L : byBuf.nativeObject.pointer);
		int iLenParamValue = iLen;
		boolean returnValue = onReceive_ev_byte_ev_int32(this.nativeObject.pointer, byBufParamValue, iLenParamValue);
		return returnValue;
	}
	native private boolean onReceive_ev_byte_ev_int32_NoVirtual(long pNativeObject, long byBuf, int iLen);
	protected boolean onReceive_NoVirtual(UBytePointer byBuf, int iLen)
	{
		long byBufParamValue = (byBuf == null ? 0L : byBuf.nativeObject.pointer);
		int iLenParamValue = iLen;
		boolean returnValue = onReceive_ev_byte_ev_int32_NoVirtual(this.nativeObject.pointer, byBufParamValue, iLenParamValue);
		return returnValue;
	}

	native private int run_void(long pNativeObject);
	/**
	 * 对每个连接的客户端，单独开个线程来实现数据的接收和发送
	 * @return 成功连接则循环接收数据，失败返回-1
	 */
	public int run()
	{
		int returnValue = run_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int run_void_NoVirtual(long pNativeObject);
	protected int run_NoVirtual()
	{
		int returnValue = run_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public BaseTcpServerJob(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BaseTcpServerJob(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onReceive_ev_byte_ev_int32(long pNativeObject, String method);
	native protected void register_run_void(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onReceive_ev_byte_ev_int32(this.nativeObject.pointer, "onReceive_ev_byte_ev_int32_callback");
			this.register_run_void(this.nativeObject.pointer, "run_void_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static BaseTcpServerJob fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BaseTcpServerJob obj = null;
 		if(baseObj instanceof BaseTcpServerJob)
		{
			obj = (BaseTcpServerJob)baseObj;
		} else {
			obj = new BaseTcpServerJob(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBaseTcpServerJob");
			obj.increaseCast();
		}

		return obj;
	}
}
