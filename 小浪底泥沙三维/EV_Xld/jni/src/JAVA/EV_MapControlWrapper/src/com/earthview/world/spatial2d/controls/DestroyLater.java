package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 删除对象延迟器.其工作原理与QT中QObject::deleteLater()一致.用户在一段代码中可以在调用该方法之后,仍然可以				使用对象,其内存只有在回到主线程的消息路由之后,才会被真正删除.
 */
public class DestroyLater extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CDestroyLater", new DestroyLaterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCDestroyLaterProxy", new DestroyLaterClassFactory());
	}

	native private static long getInstance_void();
	/**
	 * 获取静态实例
	 */
	public static com.earthview.world.spatial2d.controls.DestroyLater getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.DestroyLater __returnValue = new com.earthview.world.spatial2d.controls.DestroyLater(CreatedWhenConstruct.CWC_NotToCreate, "CDestroyLater");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.DestroyLater)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDestroyLater");
		}
		return __returnValue;
	}
	native private void destroy_CBaseObject(long pNativeObject, long obj);
	/**
	 * 消毁对象(延迟消毁)
	 */
	public void destroy(com.earthview.world.core.BaseObject obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroy_CBaseObject(this.nativeObject.pointer, objParamValue);
	}
	public DestroyLater(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DestroyLater(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DestroyLater fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DestroyLater obj = null;
 		if(baseObj instanceof DestroyLater)
		{
			obj = (DestroyLater)baseObj;
		} else {
			obj = new DestroyLater(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDestroyLater");
			obj.increaseCast();
		}

		return obj;
	}
}
