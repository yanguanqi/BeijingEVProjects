package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画类
 */
public class TrackAnimation extends com.earthview.world.graphic.FrameListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTrackAnimation", new TrackAnimationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCTrackAnimationProxy", new TrackAnimationClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 * @param ref_sceneManager 场景管理器
	 */
	public TrackAnimation(String name, com.earthview.world.graphic.SceneManager ref_sceneManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		Create("JCTrackAnimationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.TrackAnimation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void createAnimation_CSceneNode_callback(long ref_node)
	{
		com.earthview.world.graphic.SceneNode ref_nodeParamValue = (ref_node == 0L ? null : new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_nodeParamValue != null)
		{
		ref_nodeParamValue.setDelegate(true);
		ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		IClassFactory ref_nodeParamValueClassFactory = GlobalClassFactoryMap.get(ref_nodeParamValue.getCppInstanceTypeName());
		if (ref_nodeParamValueClassFactory != null)
		{
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue = (com.earthview.world.graphic.SceneNode)ref_nodeParamValueClassFactory.create();
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		}
		}
		createAnimation(ref_nodeParamValue);
	}

	native private void createAnimation_CSceneNode(long pNativeObject, long ref_node);
	/**
	 * 创建动画
	 * @param ref_node 动画作用的节点。
	 */
	public void createAnimation(com.earthview.world.graphic.SceneNode ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		createAnimation_CSceneNode(this.nativeObject.pointer, ref_nodeParamValue);
	}
	native private void createAnimation_CSceneNode_NoVirtual(long pNativeObject, long ref_node);
	protected void createAnimation_NoVirtual(com.earthview.world.graphic.SceneNode ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		createAnimation_CSceneNode_NoVirtual(this.nativeObject.pointer, ref_nodeParamValue);
	}

	protected  void destoryAnimation_void_callback()
	{
		destoryAnimation();
	}

	native private void destoryAnimation_void(long pNativeObject);
	/**
	 * 销毁动画
	 */
	public void destoryAnimation()
	{
		destoryAnimation_void(this.nativeObject.pointer);
	}
	native private void destoryAnimation_void_NoVirtual(long pNativeObject);
	protected void destoryAnimation_NoVirtual()
	{
		destoryAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void startAnimation_void(long pNativeObject);
	/**
	 * 开始动画
	 */
	public void startAnimation()
	{
		startAnimation_void(this.nativeObject.pointer);
	}
	native private void stopAnimation_void(long pNativeObject);
	/**
	 * 停止动画
	 */
	public void stopAnimation()
	{
		stopAnimation_void(this.nativeObject.pointer);
	}
	native private void pauseAnimation_void(long pNativeObject);
	/**
	 * 暂停动画
	 */
	public void pauseAnimation()
	{
		pauseAnimation_void(this.nativeObject.pointer);
	}
	native private void continueAnimation_void(long pNativeObject);
	/**
	 * 继续动画
	 */
	public void continueAnimation()
	{
		continueAnimation_void(this.nativeObject.pointer);
	}
	native private double getLength_void(long pNativeObject);
	/**
	 * 返回时间长度
	 */
	public double getLength()
	{
		double returnValue = getLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTimeListener_CTrackAnimationTimeListener(long pNativeObject, long ref_listener);
	/**
	 * 设置时间比例监听器
	 */
	public void setTimeListener(com.earthview.world.spatial3d.TrackAnimationTimeListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setTimeListener_CTrackAnimationTimeListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getSceneNode_void(long pNativeObject);
	/**
	 * 返回动画作用的节点
	 */
	public com.earthview.world.graphic.SceneNode getSceneNode()
	{
		long returnValue = getSceneNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private void setLoop_bool(long pNativeObject, boolean loop);
	/**
	 * 设置是否循环
	 * @param loop 是否循环
	 */
	public void setLoop(boolean loop)
	{
		boolean loopParamValue = loop;
		setLoop_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private boolean getLoop_void(long pNativeObject);
	/**
	 * 获取是否循环
	 */
	public boolean getLoop()
	{
		boolean returnValue = getLoop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTimeRatiio_ev_real64(long pNativeObject, double timeRatio);
	/**
	 * 设置当前时间比例　
	 * @param timeRatio 时间比例
	 */
	public void setTimeRatiio(double timeRatio)
	{
		double timeRatioParamValue = timeRatio;
		setTimeRatiio_ev_real64(this.nativeObject.pointer, timeRatioParamValue);
	}
	native private void setTrackListener_CAnimationTrackListener(long pNativeObject, long ref_listener);
	/**
	 * 设置动画监听　
	 * @param ref_listener 监听
	 */
	public void setTrackListener(com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setTrackListener_CAnimationTrackListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private boolean frameRenderingQueued_FrameEvent(long pNativeObject, long evt);
	/**
	 * 处理每一帧的事件。
	 * @param evt 帧事件
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

	native private long getAnimationState_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationState getAnimationState()
	{
		long returnValue = getAnimationState_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	public TrackAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackAnimation(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_createAnimation_CSceneNode(long pNativeObject, String method);
	native protected void register_destoryAnimation_void(long pNativeObject, String method);
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameRenderingQueued_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createAnimation_CSceneNode(this.nativeObject.pointer, "createAnimation_CSceneNode_callback");
			this.register_destoryAnimation_void(this.nativeObject.pointer, "destoryAnimation_void_callback");
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameRenderingQueued_FrameEvent(this.nativeObject.pointer, "frameRenderingQueued_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
		}
	}
	
	public static TrackAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackAnimation obj = null;
 		if(baseObj instanceof TrackAnimation)
		{
			obj = (TrackAnimation)baseObj;
		} else {
			obj = new TrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
