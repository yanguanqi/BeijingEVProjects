package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标相机动画
 */
public class DynamicCameraNodeTrackAnimation extends com.earthview.world.spatial3d.NodeTrackAnimation {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation", new DynamicCameraNodeTrackAnimationClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicCameraNodeTrackAnimationProxy", new DynamicCameraNodeTrackAnimationClassFactory());
	}

	/**
	 * 动态目标相机动画构造函数
	 * @param name 名称
	 * @param ref_sceneManager 场景管理器
	 * @param ref_eventManager 事件管理器，该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public DynamicCameraNodeTrackAnimation(String name, com.earthview.world.graphic.SceneManager ref_sceneManager, com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEventManager ref_eventManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer ref_eventManagerPtr = new BasePointer(ref_eventManager);
		list.add("ref_eventManager", ref_eventManagerPtr.get());
		Create("JCDynamicCameraNodeTrackAnimationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicCameraNodeTrackAnimation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void createAnimation_void_callback()
	{
		createAnimation();
	}

	native private void createAnimation_void(long pNativeObject);
	/**
	 * 生成相机动画
	 */
	public void createAnimation()
	{
		createAnimation_void(this.nativeObject.pointer);
	}
	native private void createAnimation_void_NoVirtual(long pNativeObject);
	protected void createAnimation_NoVirtual()
	{
		createAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void refreshAnimation_CControlPointMap_callback(long refreshPoints)
	{
		com.earthview.world.spatial3d.ControlPointMap refreshPointsParamValue = new com.earthview.world.spatial3d.ControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		refreshPointsParamValue.setDelegate(true);
		refreshPointsParamValue.setInstancePointer(new InstancePointer(refreshPoints));
		IClassFactory refreshPointsParamValueClassFactory = GlobalClassFactoryMap.get(refreshPointsParamValue.getCppInstanceTypeName());
		if (refreshPointsParamValueClassFactory != null)
		{
			refreshPointsParamValue.setDelegate(true);
			refreshPointsParamValue = (com.earthview.world.spatial3d.ControlPointMap)refreshPointsParamValueClassFactory.create();
			refreshPointsParamValue.setDelegate(true);
			refreshPointsParamValue.setInstancePointer(new InstancePointer(refreshPoints));
		}
		refreshAnimation(refreshPointsParamValue);
	}

	native private void refreshAnimation_CControlPointMap(long pNativeObject, long refreshPoints);
	/**
	 * 动态刷新相机动画
	 * @param refreshPoints 控制点参数
	 */
	public void refreshAnimation(com.earthview.world.spatial3d.ControlPointMap refreshPoints)
	{
		long refreshPointsParamValue = refreshPoints.nativeObject.pointer;
		refreshAnimation_CControlPointMap(this.nativeObject.pointer, refreshPointsParamValue);
	}
	native private void refreshAnimation_CControlPointMap_NoVirtual(long pNativeObject, long refreshPoints);
	protected void refreshAnimation_NoVirtual(com.earthview.world.spatial3d.ControlPointMap refreshPoints)
	{
		long refreshPointsParamValue = refreshPoints.nativeObject.pointer;
		refreshAnimation_CControlPointMap_NoVirtual(this.nativeObject.pointer, refreshPointsParamValue);
	}

	protected  void setCurrentFrameTime_ev_real64_callback(double time)
	{
		double timeParamValue = time;
		setCurrentFrameTime(timeParamValue);
	}

	native private void setCurrentFrameTime_ev_real64(long pNativeObject, double time);
	/**
	 * 设置当前帧时间
	 * @param time 当前动画帧时间
	 */
	public void setCurrentFrameTime(double time)
	{
		double timeParamValue = time;
		setCurrentFrameTime_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void setCurrentFrameTime_ev_real64_NoVirtual(long pNativeObject, double time);
	protected void setCurrentFrameTime_NoVirtual(double time)
	{
		double timeParamValue = time;
		setCurrentFrameTime_ev_real64_NoVirtual(this.nativeObject.pointer, timeParamValue);
	}

	protected  double getCurrentFrameTime_void_callback()
	{
		double returnValue = getCurrentFrameTime();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCurrentFrameTime_void(long pNativeObject);
	/**
	 * 获取当前帧时间
	 * @return 当前动画帧时间
	 */
	public double getCurrentFrameTime()
	{
		double returnValue = getCurrentFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCurrentFrameTime_void_NoVirtual(long pNativeObject);
	protected double getCurrentFrameTime_NoVirtual()
	{
		double returnValue = getCurrentFrameTime_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void clearAllCameraNodeTrackPoints_void_callback()
	{
		clearAllCameraNodeTrackPoints();
	}

	native private void clearAllCameraNodeTrackPoints_void(long pNativeObject);
	/**
	 * 清除所有动画关键控制点
	 */
	public void clearAllCameraNodeTrackPoints()
	{
		clearAllCameraNodeTrackPoints_void(this.nativeObject.pointer);
	}
	native private void clearAllCameraNodeTrackPoints_void_NoVirtual(long pNativeObject);
	protected void clearAllCameraNodeTrackPoints_NoVirtual()
	{
		clearAllCameraNodeTrackPoints_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean canStart_void_callback()
	{
		boolean returnValue = canStart();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canStart_void(long pNativeObject);
	/**
	 * 是否可以开始相机动画
	 */
	public boolean canStart()
	{
		boolean returnValue = canStart_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canStart_void_NoVirtual(long pNativeObject);
	protected boolean canStart_NoVirtual()
	{
		boolean returnValue = canStart_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean hasRequestCreateAnimation_void_callback()
	{
		boolean returnValue = hasRequestCreateAnimation();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasRequestCreateAnimation_void(long pNativeObject);
	/**
	 * 是否发送过创建动画请求
	 */
	public boolean hasRequestCreateAnimation()
	{
		boolean returnValue = hasRequestCreateAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasRequestCreateAnimation_void_NoVirtual(long pNativeObject);
	protected boolean hasRequestCreateAnimation_NoVirtual()
	{
		boolean returnValue = hasRequestCreateAnimation_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setOnLineModeEnabled_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setOnLineModeEnabled(enableParamValue);
	}

	native private void setOnLineModeEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否开启在线模式（优化内存管理，不可以进行动画重播功能）
	 * @param enable 是否开启在线
	 */
	public void setOnLineModeEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setOnLineModeEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setOnLineModeEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setOnLineModeEnabled_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setOnLineModeEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getOnLineModeEnabled_void_callback()
	{
		boolean returnValue = getOnLineModeEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getOnLineModeEnabled_void(long pNativeObject);
	/**
	 * 获取是否开启在线模式（优化内存管理，不可以进行动画重播功能）
	 * @return 是否开启在线，如果开启该模式则会定时清除轨迹点，优化内存管理，但是开启该功能后不可以进行轨迹重播功能
	 */
	public boolean getOnLineModeEnabled()
	{
		boolean returnValue = getOnLineModeEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getOnLineModeEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getOnLineModeEnabled_NoVirtual()
	{
		boolean returnValue = getOnLineModeEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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

	native private boolean frameRenderingQueued_FrameEvent(long pNativeObject, long evt);
	/**
	 * 在所有的渲染目标已经获得渲染命令，渲染窗体被要求跳出缓存之前调用
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

	public DynamicCameraNodeTrackAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicCameraNodeTrackAnimation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 创建动画
	 * @param ref_node 动画作用的节点。
	 */
	public void createAnimation(com.earthview.world.graphic.SceneNode ref_node)
	{
		super.createAnimation_NoVirtual(ref_node);
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
	
	native protected void register_createAnimation_void(long pNativeObject, String method);
	native protected void register_refreshAnimation_CControlPointMap(long pNativeObject, String method);
	native protected void register_setCurrentFrameTime_ev_real64(long pNativeObject, String method);
	native protected void register_getCurrentFrameTime_void(long pNativeObject, String method);
	native protected void register_clearAllCameraNodeTrackPoints_void(long pNativeObject, String method);
	native protected void register_canStart_void(long pNativeObject, String method);
	native protected void register_hasRequestCreateAnimation_void(long pNativeObject, String method);
	native protected void register_setOnLineModeEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getOnLineModeEnabled_void(long pNativeObject, String method);
	native protected void register_createAnimation_CSceneNode(long pNativeObject, String method);
	native protected void register_destoryAnimation_void(long pNativeObject, String method);
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameRenderingQueued_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createAnimation_void(this.nativeObject.pointer, "createAnimation_void_callback");
			this.register_refreshAnimation_CControlPointMap(this.nativeObject.pointer, "refreshAnimation_CControlPointMap_callback");
			this.register_setCurrentFrameTime_ev_real64(this.nativeObject.pointer, "setCurrentFrameTime_ev_real64_callback");
			this.register_getCurrentFrameTime_void(this.nativeObject.pointer, "getCurrentFrameTime_void_callback");
			this.register_clearAllCameraNodeTrackPoints_void(this.nativeObject.pointer, "clearAllCameraNodeTrackPoints_void_callback");
			this.register_canStart_void(this.nativeObject.pointer, "canStart_void_callback");
			this.register_hasRequestCreateAnimation_void(this.nativeObject.pointer, "hasRequestCreateAnimation_void_callback");
			this.register_setOnLineModeEnabled_ev_bool(this.nativeObject.pointer, "setOnLineModeEnabled_ev_bool_callback");
			this.register_getOnLineModeEnabled_void(this.nativeObject.pointer, "getOnLineModeEnabled_void_callback");
			this.register_createAnimation_CSceneNode(this.nativeObject.pointer, "createAnimation_CSceneNode_callback");
			this.register_destoryAnimation_void(this.nativeObject.pointer, "destoryAnimation_void_callback");
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameRenderingQueued_FrameEvent(this.nativeObject.pointer, "frameRenderingQueued_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
		}
	}
	
	public static DynamicCameraNodeTrackAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicCameraNodeTrackAnimation obj = null;
 		if(baseObj instanceof DynamicCameraNodeTrackAnimation)
		{
			obj = (DynamicCameraNodeTrackAnimation)baseObj;
		} else {
			obj = new DynamicCameraNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicCameraNodeTrackAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
