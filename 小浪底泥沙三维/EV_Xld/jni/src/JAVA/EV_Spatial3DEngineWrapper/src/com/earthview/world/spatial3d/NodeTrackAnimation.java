package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画类
 */
public class NodeTrackAnimation extends com.earthview.world.spatial3d.TrackAnimation {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CNodeTrackAnimation", new NodeTrackAnimationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCNodeTrackAnimationProxy", new NodeTrackAnimationClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 * @param ref_sceneManager 场景管理器
	 */
	public NodeTrackAnimation(String name, com.earthview.world.graphic.SceneManager ref_sceneManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		Create("JCNodeTrackAnimationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.NodeTrackAnimation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private void setInterpolationMode_InterpolationMode(long pNativeObject, int interpolationMode);
	/**
	 * 设置位置插值方式
	 * @param interpolationMode 位置的插值方式
	 */
	public void setInterpolationMode(com.earthview.world.graphic.Animation.InterpolationMode interpolationMode)
	{
		int interpolationModeParamValue = interpolationMode.getValue();
		setInterpolationMode_InterpolationMode(this.nativeObject.pointer, interpolationModeParamValue);
	}
	native private void setRotationInterpolationMode_RotationInterpolationMode(long pNativeObject, int rotationInterpolationMode);
	/**
	 * 设置旋转的插值方式
	 * @param rotationInterpolationMode 旋转的插值方式
	 */
	public void setRotationInterpolationMode(com.earthview.world.graphic.Animation.RotationInterpolationMode rotationInterpolationMode)
	{
		int rotationInterpolationModeParamValue = rotationInterpolationMode.getValue();
		setRotationInterpolationMode_RotationInterpolationMode(this.nativeObject.pointer, rotationInterpolationModeParamValue);
	}
	native private void insertControlPoint_ev_real64_CControlPoint(long pNativeObject, double time, long controlPoint);
	/**
	 * 加入控制点
	 * @param time 时间
	 * @param controlPoint 控制点
	 */
	public void insertControlPoint(double time, com.earthview.world.spatial3d.ControlPoint controlPoint)
	{
		double timeParamValue = time;
		long controlPointParamValue = controlPoint.nativeObject.pointer;
		insertControlPoint_ev_real64_CControlPoint(this.nativeObject.pointer, timeParamValue, controlPointParamValue);
	}
	native private void setControlPointMap_CControlPointMap(long pNativeObject, long controlPointMap);
	/**
	 * 设置控制点
	 * @param controlPointMap 控制点容器
	 */
	public void setControlPointMap(com.earthview.world.spatial3d.ControlPointMap controlPointMap)
	{
		long controlPointMapParamValue = controlPointMap.nativeObject.pointer;
		setControlPointMap_CControlPointMap(this.nativeObject.pointer, controlPointMapParamValue);
	}
	public NodeTrackAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeTrackAnimation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 销毁动画
	 */
	public void destoryAnimation()
	{
		super.destoryAnimation_NoVirtual();
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
	
	public static NodeTrackAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeTrackAnimation obj = null;
 		if(baseObj instanceof NodeTrackAnimation)
		{
			obj = (NodeTrackAnimation)baseObj;
		} else {
			obj = new NodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeTrackAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
