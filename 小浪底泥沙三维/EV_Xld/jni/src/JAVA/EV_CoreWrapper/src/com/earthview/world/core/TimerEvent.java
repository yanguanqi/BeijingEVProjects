package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 定时器事件类，从EarthView::World::Core::CEvent派生
 */
public class TimerEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CTimerEvent", new TimerEventClassFactory());
	}

	/**
	 * 代参构造函数，通过定时器id和事件发送目标构造
	 * @param timerId 定时器id
	 * @param dst 接受事件的对象
	 */
	public TimerEvent(int timerId, com.earthview.world.core.EventObject dst) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer timerIdPtr = new BasePointer(timerId);
		list.add("timerId", timerIdPtr.get());
		BasePointer dstPtr = new BasePointer(dst);
		list.add("dst", dstPtr.get());
		Create("CTimerEvent", list);
	}

	native private int timerID_void(long pNativeObject);
	/**
	 * 获得定时器事件的定时器id
	 * @param  
	 * @return 定时器id
	 */
	public int timerID()
	{
		int returnValue = timerID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long receiver_void(long pNativeObject);
	/**
	 * 获得定时器事件的接收者对象
	 * @param  
	 * @return 接收者对象
	 */
	public com.earthview.world.core.EventObject receiver()
	{
		long returnValue = receiver_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.EventObject __returnValue = new com.earthview.world.core.EventObject(CreatedWhenConstruct.CWC_NotToCreate, "CEventObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.EventObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEventObject");
		}
		return __returnValue;
	}
	public TimerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TimerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TimerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TimerEvent obj = null;
 		if(baseObj instanceof TimerEvent)
		{
			obj = (TimerEvent)baseObj;
		} else {
			obj = new TimerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTimerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
