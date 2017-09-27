package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundQueueListener extends com.earthview.world.graphic.FrameListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundQueueListener", new BackgroundQueueListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCBackgroundQueueListenerProxy", new BackgroundQueueListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param pParent 模型管理器对象
	 */
	public BackgroundQueueListener(com.earthview.world.geometry3d.BackgroundWorkManager ref_pParent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pParentPtr = new BasePointer(ref_pParent);
		list.add("ref_pParent", ref_pParentPtr.get());
		Create("JCBackgroundQueueListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.BackgroundQueueListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean frameEnded_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧渲染之后被调用
	 * @param evt 帧事件
	 * @return 成功返回true否则返回false
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

	public BackgroundQueueListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BackgroundQueueListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 帧渲染之前调用
	 * @param evt 
	 */
	public boolean frameStarted(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameStarted_NoVirtual(evt);
	}
	/**
	 * 视口更新之后调用
	 * @param evt 
	 */
	public boolean frameRenderingQueued(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameRenderingQueued_NoVirtual(evt);
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
	
	public static BackgroundQueueListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BackgroundQueueListener obj = null;
 		if(baseObj instanceof BackgroundQueueListener)
		{
			obj = (BackgroundQueueListener)baseObj;
		} else {
			obj = new BackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBackgroundQueueListener");
			obj.increaseCast();
		}

		return obj;
	}
}
