package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 接口类，定义了一个帧监听器，用来获得帧事件的通知
 */
public class FrameListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrameListener", new FrameListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFrameListenerProxy", new FrameListenerClassFactory());
	}

	protected  boolean frameStarted_FrameEvent_callback(long evt)
	{
		com.earthview.world.graphic.FrameEvent evtParamValue = new com.earthview.world.graphic.FrameEvent(new InstancePointer(evt));
		boolean returnValue = frameStarted(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean frameStarted_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧渲染之前调用
	 * @param evt 
	 */
	public boolean frameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameStarted_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean frameStarted_FrameEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean frameStarted_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameStarted_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	protected  boolean frameRenderingQueued_FrameEvent_callback(long evt)
	{
		com.earthview.world.graphic.FrameEvent evtParamValue = new com.earthview.world.graphic.FrameEvent(new InstancePointer(evt));
		boolean returnValue = frameRenderingQueued(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean frameRenderingQueued_FrameEvent(long pNativeObject, long evt);
	/**
	 * 视口更新之后调用
	 * @param evt 
	 */
	public boolean frameRenderingQueued(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameRenderingQueued_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean frameRenderingQueued_FrameEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean frameRenderingQueued_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameRenderingQueued_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	protected  boolean frameEnded_FrameEvent_callback(long evt)
	{
		com.earthview.world.graphic.FrameEvent evtParamValue = new com.earthview.world.graphic.FrameEvent(new InstancePointer(evt));
		boolean returnValue = frameEnded(evtParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean frameEnded_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧渲染之后被调用
	 * @param evt 
	 */
	public boolean frameEnded(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameEnded_FrameEvent(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}
	native private boolean frameEnded_FrameEvent_NoVirtual(long pNativeObject, long evt);
	protected boolean frameEnded_NoVirtual(com.earthview.world.graphic.FrameEvent evt)
	{
		long evtParamValue = evt.nativeObject.pointer;
		boolean returnValue = frameEnded_FrameEvent_NoVirtual(this.nativeObject.pointer, evtParamValue);
		return returnValue;
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FrameListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFrameListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.FrameListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public FrameListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FrameListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameRenderingQueued_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameRenderingQueued_FrameEvent(this.nativeObject.pointer, "frameRenderingQueued_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
		}
	}
	
	public static FrameListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FrameListener obj = null;
 		if(baseObj instanceof FrameListener)
		{
			obj = (FrameListener)baseObj;
		} else {
			obj = new FrameListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFrameListener");
			obj.increaseCast();
		}

		return obj;
	}
}
