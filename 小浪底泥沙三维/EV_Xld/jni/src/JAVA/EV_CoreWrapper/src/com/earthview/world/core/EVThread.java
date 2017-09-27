package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 线程的基类，可以通过继承此类并重载run方法开启线程也可以直接调用work方法将线程函数指针传递进去，运行线程
 */
public class EVThread extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CThread", new EVThreadClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCThreadProxy", new EVThreadClassFactory());
	}

	public EVThread() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCThreadProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EVThread".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean start_void(long pNativeObject);
	/**
	 * 开始运行线程，调用此接口时，必须继承此类并重载run方法
	 * @param  
	 * @return 成功返回true,否则false
	 */
	public boolean start()
	{
		boolean returnValue = start_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean work_CThreadFunc(long pNativeObject, long threadFunc);
	/**
	 * 开始运行线程，调用此接口时，不需要继承此类，之间将线程函数的指针传递给该接口的第一个参数即可
	 * @param pFunc 线程函数的指针
	 * @param pParam 线程函数的参数
	 * @return 成功返回true,否则false
	 */
	public boolean work(com.earthview.world.core.ThreadFunc threadFunc)
	{
		long threadFuncParamValue = (threadFunc == null ? 0L : threadFunc.nativeObject.pointer);
		boolean returnValue = work_CThreadFunc(this.nativeObject.pointer, threadFuncParamValue);
		return returnValue;
	}
	native private boolean ev_wait_void(long pNativeObject);
	/**
	 * 等待线程运行结束
	 * @param  
	 * @return 成功返回true,否则false
	 */
	public boolean ev_wait()
	{
		boolean returnValue = ev_wait_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static void sleep_ev_uint32(long msecs);
	/**
	 * 让线程休息指定的时间
	 * @param msecs 线程休息时间的毫秒数
	 */
	public static void sleep(long msecs)
	{
		long msecsParamValue = msecs;
		sleep_ev_uint32(msecsParamValue);
	}
	native private void terminate_void(long pNativeObject);
	/**
	 * 强制结束线程
	 * @param  
	 */
	public void terminate()
	{
		terminate_void(this.nativeObject.pointer);
	}
	native private boolean isRunning_void(long pNativeObject);
	/**
	 * 判断线程是否正在运行
	 * @param  
	 * @return 正在运行返回true,否则返回false
	 */
	public boolean isRunning()
	{
		boolean returnValue = isRunning_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setThreadPriority_ThreadPriority(long pNativeObject, int priority);
	/**
	 * 设置线程的优先级
	 * @param priority 线程优先级的枚举值
	 */
	public void setThreadPriority(com.earthview.world.core.ThreadPriority priority)
	{
		int priorityParamValue = priority.getValue();
		setThreadPriority_ThreadPriority(this.nativeObject.pointer, priorityParamValue);
	}
	native private void setThreadInheritAttr_ev_bool(long pNativeObject, boolean inherit);
	/**
	 * 设置线程的继承属性
	 * @param inherit inherit为true,则子线程继承于父线程，否则不继承
	 */
	public void setThreadInheritAttr(boolean inherit)
	{
		boolean inheritParamValue = inherit;
		setThreadInheritAttr_ev_bool(this.nativeObject.pointer, inheritParamValue);
	}
	native private static long getThreadID_void();
	/**
	 * 获得当前线程的ID
	 * @param  
	 * @return 返回当前线程的ID
	 */
	public static long getThreadID()
	{
		long returnValue = getThreadID_void();
		return returnValue;
	}
	native private void suspend_void(long pNativeObject);
	public void suspend()
	{
		suspend_void(this.nativeObject.pointer);
	}
	native private void resume_void(long pNativeObject);
	public void resume()
	{
		resume_void(this.nativeObject.pointer);
	}
	native private int getThreadState_void(long pNativeObject);
	/**
	 * 获得线程的运行状态
	 * @param  
	 * @return 线程的运行状态枚举值
	 */
	public int getThreadState()
	{
		int returnValue = getThreadState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setThreadState_ThreadState(long pNativeObject, int state);
	/**
	 * 设置线程的运行状态
	 * @param state 线程运行状态枚举值
	 */
	public void setThreadState(com.earthview.world.core.ThreadState state)
	{
		int stateParamValue = state.getValue();
		setThreadState_ThreadState(this.nativeObject.pointer, stateParamValue);
	}
	native private int getRetValue_void(long pNativeObject);
	/**
	 * 获得线程的返回值
	 * @param  
	 * @return 线程的运行完毕的返回值
	 */
	public int getRetValue()
	{
		int returnValue = getRetValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long getCurrentThread_void();
	/**
	 * 获得当前线程的指针
	 * @param  
	 * @return 当前线程的指针
	 */
	public static com.earthview.world.core.EVThread getCurrentThread()
	{
		long returnValue = getCurrentThread_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.EVThread __returnValue = new com.earthview.world.core.EVThread(CreatedWhenConstruct.CWC_NotToCreate, "CThread");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.EVThread)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CThread");
		}
		return __returnValue;
	}
	native private static long getThreadCount_void();
	/**
	 * 获得线程已开启的线程个数
	 * @param  
	 * @return 线程个数
	 */
	public static long getThreadCount()
	{
		long returnValue = getThreadCount_void();
		return returnValue;
	}
	native private static boolean isMainThread_void();
	public static boolean isMainThread()
	{
		boolean returnValue = isMainThread_void();
		return returnValue;
	}
	protected  int run_void_callback()
	{
		int returnValue = run();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int run_void(long pNativeObject);
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

	public EVThread(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EVThread(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_run_void(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_run_void(this.nativeObject.pointer, "run_void_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static EVThread fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EVThread obj = null;
 		if(baseObj instanceof EVThread)
		{
			obj = (EVThread)baseObj;
		} else {
			obj = new EVThread(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CThread");
			obj.increaseCast();
		}

		return obj;
	}
}
