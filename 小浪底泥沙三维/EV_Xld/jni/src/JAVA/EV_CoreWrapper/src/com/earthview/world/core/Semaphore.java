package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 信号量类
 */
public class Semaphore extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CSemaphore", new SemaphoreClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCSemaphoreProxy", new SemaphoreClassFactory());
	}

	/**
	 * 构造信号量
	 * @param MaxCount 资源的最大可用数
	 * @param InitialCount 资源的初始可用数
	 */
	public Semaphore(long nMaxCount, long nInitialCount) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer nMaxCountPtr = new BasePointer(nMaxCount);
		list.add("nMaxCount", nMaxCountPtr.get());
		BasePointer nInitialCountPtr = new BasePointer(nInitialCount);
		list.add("nInitialCount", nInitialCountPtr.get());
		Create("JCSemaphoreProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.core.Semaphore".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean ev_wait_ev_uint32(long pNativeObject, long count);
	/**
	 * 使用指定数量的信号，P操作
	 * @param count 使用的信号量数
	 * @return 成功返回true,否则false
	 */
	public boolean ev_wait(long count)
	{
		long countParamValue = count;
		boolean returnValue = ev_wait_ev_uint32(this.nativeObject.pointer, countParamValue);
		return returnValue;
	}
	native private boolean waitOne_void(long pNativeObject);
	/// <summary>
	/// 使用一个数量的信号，P操作
	/// </summary>
	/// <param name="></param>
	/// <returns>成功返回true,否则false</returns>
	public boolean waitOne()
	{
		boolean returnValue = waitOne_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean release_ev_uint32(long pNativeObject, long count);
	/**
	 * 恢复指定数量的信号，V操作
	 * @param count 恢复的信号量数
	 * @return 成功返回true,否则false
	 */
	public boolean release(long count)
	{
		long countParamValue = count;
		boolean returnValue = release_ev_uint32(this.nativeObject.pointer, countParamValue);
		return returnValue;
	}
	native private boolean releaseOne_void(long pNativeObject);
	/// <summary>
	/// 恢复一个数量的信号，V操作
	/// </summary>
	/// <param name="></param>
	/// <returns>成功返回true,否则false</returns>
	public boolean releaseOne()
	{
		boolean returnValue = releaseOne_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean tryWaitOne_void(long pNativeObject);
	public boolean tryWaitOne()
	{
		boolean returnValue = tryWaitOne_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Semaphore(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Semaphore(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static Semaphore fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Semaphore obj = null;
 		if(baseObj instanceof Semaphore)
		{
			obj = (Semaphore)baseObj;
		} else {
			obj = new Semaphore(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSemaphore");
			obj.increaseCast();
		}

		return obj;
	}
}
