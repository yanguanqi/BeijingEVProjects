package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 事件分发器类用户可通过该类的静态函数向对象发送同步或异步事件
 */
public class EventDispatcher extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CEventDispatcher", new EventDispatcherClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEventDispatcherProxy", new EventDispatcherClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EventDispatcher() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEventDispatcherProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EventDispatcher".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static boolean sendEvent_CEventObject_CEvent(long receiver, long e);
	/**
	 * 向指定对象发送同步事件
	 * @param receiver 事件接收者对象
	 * @param e 事件
	 * @return 发送成功返回true，否则返回false
	 */
	public static boolean sendEvent(com.earthview.world.core.EventObject receiver, com.earthview.world.core.Event e)
	{
		long receiverParamValue = (receiver == null ? 0L : receiver.nativeObject.pointer);
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = sendEvent_CEventObject_CEvent(receiverParamValue, eParamValue);
		return returnValue;
	}
	native private static boolean postEvent_CEventObject_CEvent_ev_int32(long receiver, long e, int priority);
	/**
	 * 向指定对象发送异步事件，主要用在从工作线程向主线程发送事件
	 * @param receiver 事件接收者对象
	 * @param e 事件
	 * @param priority 事件优先级，一般为NormalEventPriority
	 * @return 发送成功返回true，否则返回false
	 */
	public static boolean postEvent(com.earthview.world.core.EventObject receiver, com.earthview.world.core.Event e, int priority)
	{
		long receiverParamValue = (receiver == null ? 0L : receiver.nativeObject.pointer);
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		if(e != null)
		{
		e.setNoFree(true);
		}
		int priorityParamValue = priority;
		boolean returnValue = postEvent_CEventObject_CEvent_ev_int32(receiverParamValue, eParamValue, priorityParamValue);
		return returnValue;
	}
	native private static void removePostedEvents_CEventObject(long receiver);
	/**
	 * 移除异步事件接收者
	 * @param receiver 事件接收者对象
	 */
	public static void removePostedEvents(com.earthview.world.core.EventObject receiver)
	{
		long receiverParamValue = (receiver == null ? 0L : receiver.nativeObject.pointer);
		removePostedEvents_CEventObject(receiverParamValue);
	}
	native private static void removePostedEvents_CEventObject_int(long receiver, int eventType);
	/**
	 * 移除指定类型的异步事件接收者
	 * @param receiver 事件接收者对象
	 * @param eventType 事件类型
	 */
	public static void removePostedEvents(com.earthview.world.core.EventObject receiver, int eventType)
	{
		long receiverParamValue = (receiver == null ? 0L : receiver.nativeObject.pointer);
		int eventTypeParamValue = eventType;
		removePostedEvents_CEventObject_int(receiverParamValue, eventTypeParamValue);
	}
	native private static void processEvents_void();
	/**
	 * 处理并发送事件
	 * @param  
	 */
	public static void processEvents()
	{
		processEvents_void();
	}
	native private static void removePostedTimerEvent_CEventObject_ev_int32(long pObject, int timerID);
	/**
	 * 从事件队列中删除已发送的异步定时器事件
	 * @param object 事件接收者对象
	 * @param timerID 定时器id
	 */
	public static void removePostedTimerEvent(com.earthview.world.core.EventObject pObject, int timerID)
	{
		long pObjectParamValue = (pObject == null ? 0L : pObject.nativeObject.pointer);
		int timerIDParamValue = timerID;
		removePostedTimerEvent_CEventObject_ev_int32(pObjectParamValue, timerIDParamValue);
	}
	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 重载的事件处理函数
	 * @param e 事件
	 * @return 处理了返回true，没处理返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	public EventDispatcher(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EventDispatcher(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static EventDispatcher fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EventDispatcher obj = null;
 		if(baseObj instanceof EventDispatcher)
		{
			obj = (EventDispatcher)baseObj;
		} else {
			obj = new EventDispatcher(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEventDispatcher");
			obj.increaseCast();
		}

		return obj;
	}
}
