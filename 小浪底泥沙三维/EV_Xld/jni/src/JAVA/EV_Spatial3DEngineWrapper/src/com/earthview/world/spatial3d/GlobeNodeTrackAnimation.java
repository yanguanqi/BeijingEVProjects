package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 节点动画类(以经纬度作为控制点)
 */
public class GlobeNodeTrackAnimation extends com.earthview.world.spatial3d.TrackAnimation {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeNodeTrackAnimation", new GlobeNodeTrackAnimationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCGlobeNodeTrackAnimationProxy", new GlobeNodeTrackAnimationClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 * @param ref_sceneManager 场景管理器
	 */
	public GlobeNodeTrackAnimation(String name, com.earthview.world.graphic.SceneManager ref_sceneManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		Create("JCGlobeNodeTrackAnimationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.GlobeNodeTrackAnimation".equals(this.getClass().getName()))
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

	native private void setNodeUpAxis_EVString(long pNativeObject, String upAxis);
	/**
	 * 设置模型的上方向
	 * @param upAxis 上方向的名字，x轴为XAxis,y轴为YAxis,z轴为ZAxis
	 */
	public void setNodeUpAxis(String upAxis)
	{
		String upAxisParamValue = upAxis;
		setNodeUpAxis_EVString(this.nativeObject.pointer, upAxisParamValue);
	}
	native private String getNodeUpAxis_void(long pNativeObject);
	/**
	 * 返回模型的上方向
	 */
	public String getNodeUpAxis()
	{
		String returnValue = getNodeUpAxis_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getPosition_void(long pNativeObject);
	/**
	 * /获取位置/
	 */
	public com.earthview.world.spatial.math.Vector3 getPosition()
	{
		long returnValue = getPosition_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private double getHeading_void(long pNativeObject);
	/**
	 * 获取偏航角
	 */
	public double getHeading()
	{
		double returnValue = getHeading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void insertGlobePoint_ev_real64_CGlobeControlPoint(long pNativeObject, double time, long globeControlPoint);
	/**
	 * 增加控制点
	 * @param time 时间
	 * @param globeControlPoint 控制点
	 */
	public void insertGlobePoint(double time, com.earthview.world.spatial3d.GlobeControlPoint globeControlPoint)
	{
		double timeParamValue = time;
		long globeControlPointParamValue = globeControlPoint.nativeObject.pointer;
		insertGlobePoint_ev_real64_CGlobeControlPoint(this.nativeObject.pointer, timeParamValue, globeControlPointParamValue);
	}
	public GlobeNodeTrackAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeNodeTrackAnimation(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static GlobeNodeTrackAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeNodeTrackAnimation obj = null;
 		if(baseObj instanceof GlobeNodeTrackAnimation)
		{
			obj = (GlobeNodeTrackAnimation)baseObj;
		} else {
			obj = new GlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeNodeTrackAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
