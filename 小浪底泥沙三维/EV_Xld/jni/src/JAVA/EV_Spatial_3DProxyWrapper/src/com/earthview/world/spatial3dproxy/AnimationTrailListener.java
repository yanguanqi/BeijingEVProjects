package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 飘带动画监听类
 */
public class AnimationTrailListener extends com.earthview.world.graphic.FrameListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CAnimationTrailListener", new AnimationTrailListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCAnimationTrailListenerProxy", new AnimationTrailListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param state 动画状态
	 */
	public AnimationTrailListener(com.earthview.world.graphic.AnimationState ref_state) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_statePtr = new BasePointer(ref_state);
		list.add("ref_state", ref_statePtr.get());
		Create("JCAnimationTrailListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.AnimationTrailListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean frameRenderingQueued_FrameEvent(long pNativeObject, long evt);
	/**
	 * 帧渲染队列
	 * @param evt 帧事件
	 * @return 返回true
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

	public AnimationTrailListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationTrailListener(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 帧渲染之后被调用
	 * @param evt 
	 */
	public boolean frameEnded(com.earthview.world.graphic.FrameEvent evt)
	{
		return super.frameEnded_NoVirtual(evt);
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
	
	public static AnimationTrailListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationTrailListener obj = null;
 		if(baseObj instanceof AnimationTrailListener)
		{
			obj = (AnimationTrailListener)baseObj;
		} else {
			obj = new AnimationTrailListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationTrailListener");
			obj.increaseCast();
		}

		return obj;
	}
}
