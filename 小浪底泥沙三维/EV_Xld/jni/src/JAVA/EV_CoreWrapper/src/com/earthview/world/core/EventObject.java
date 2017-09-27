package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 对象模型的基类提供定时器、事件处理方法、对象初始化方法
 */
public class EventObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CEventObject", new EventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEventObjectProxy", new EventObjectClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.EventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int startTimer_ev_int32(long pNativeObject, int interval);
	/**
	 * 启动一个定时器，返回定时器id，时间间隔为interval
	 * @param interval 定时器时间间隔
	 * @return 定时器id，大于0的值为有效定时器id
	 */
	public int startTimer(int interval)
	{
		int intervalParamValue = interval;
		int returnValue = startTimer_ev_int32(this.nativeObject.pointer, intervalParamValue);
		return returnValue;
	}
	native private boolean killTimer_ev_int32(long pNativeObject, int id);
	/**
	 * 注销指定定时器id的定时器
	 * @param id 定时器id
	 * @return 成功返回true，否则返回false
	 */
	public boolean killTimer(int id)
	{
		int idParamValue = id;
		boolean returnValue = killTimer_ev_int32(this.nativeObject.pointer, idParamValue);
		return returnValue;
	}
	protected  boolean onEvent_CEvent_callback(long e)
	{
		com.earthview.world.core.Event eParamValue = (e == 0L ? null : new com.earthview.world.core.Event(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.core.Event)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
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

	protected  void onTimerEvent_CTimerEvent_callback(long e)
	{
		com.earthview.world.core.TimerEvent eParamValue = (e == 0L ? null : new com.earthview.world.core.TimerEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.core.TimerEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onTimerEvent(eParamValue);
	}

	native private void onTimerEvent_CTimerEvent(long pNativeObject, long e);
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onTimerEvent_CTimerEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onTimerEvent_CTimerEvent_NoVirtual(long pNativeObject, long e);
	protected void onTimerEvent_NoVirtual(com.earthview.world.core.TimerEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onTimerEvent_CTimerEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	protected  void onCustomEvent_CEvent_callback(long e)
	{
		com.earthview.world.core.Event eParamValue = (e == 0L ? null : new com.earthview.world.core.Event(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.world.core.Event)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		onCustomEvent(eParamValue);
	}

	native private void onCustomEvent_CEvent(long pNativeObject, long e);
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCustomEvent_CEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onCustomEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected void onCustomEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onCustomEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	public EventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EventObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static EventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EventObject obj = null;
 		if(baseObj instanceof EventObject)
		{
			obj = (EventObject)baseObj;
		} else {
			obj = new EventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
