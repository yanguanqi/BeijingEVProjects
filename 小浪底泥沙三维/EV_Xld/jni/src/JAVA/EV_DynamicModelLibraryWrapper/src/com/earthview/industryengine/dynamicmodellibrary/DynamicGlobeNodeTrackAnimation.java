package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * /动态目标轨迹动画/
 */
public class DynamicGlobeNodeTrackAnimation extends com.earthview.world.spatial3d.GlobeNodeTrackAnimation {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation", new DynamicGlobeNodeTrackAnimationClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicGlobeNodeTrackAnimationProxy", new DynamicGlobeNodeTrackAnimationClassFactory());
	}

	/**
	 * 动态目标轨迹动画构造函数
	 * @param name 名称
	 * @param ref_sceneManager 场景管理器
	 * @param ref_eventManager 事件管理器，该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public DynamicGlobeNodeTrackAnimation(String name, com.earthview.world.graphic.SceneManager ref_sceneManager, com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEventManager ref_eventManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer ref_eventManagerPtr = new BasePointer(ref_eventManager);
		list.add("ref_eventManager", ref_eventManagerPtr.get());
		Create("JCDynamicGlobeNodeTrackAnimationProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimation".equals(this.getClass().getName()))
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
	 * 生成轨迹动画
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

	protected  void refreshAnimation_CGlobeControlPointMap_callback(long refreshPoints)
	{
		com.earthview.world.spatial3d.GlobeControlPointMap refreshPointsParamValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		refreshPointsParamValue.setDelegate(true);
		refreshPointsParamValue.setInstancePointer(new InstancePointer(refreshPoints));
		IClassFactory refreshPointsParamValueClassFactory = GlobalClassFactoryMap.get(refreshPointsParamValue.getCppInstanceTypeName());
		if (refreshPointsParamValueClassFactory != null)
		{
			refreshPointsParamValue.setDelegate(true);
			refreshPointsParamValue = (com.earthview.world.spatial3d.GlobeControlPointMap)refreshPointsParamValueClassFactory.create();
			refreshPointsParamValue.setDelegate(true);
			refreshPointsParamValue.setInstancePointer(new InstancePointer(refreshPoints));
		}
		refreshAnimation(refreshPointsParamValue);
	}

	native private void refreshAnimation_CGlobeControlPointMap(long pNativeObject, long refreshPoints);
	/**
	 * 动态刷新轨迹动画
	 * @param refreshPoints 控制点参数
	 */
	public void refreshAnimation(com.earthview.world.spatial3d.GlobeControlPointMap refreshPoints)
	{
		long refreshPointsParamValue = refreshPoints.nativeObject.pointer;
		refreshAnimation_CGlobeControlPointMap(this.nativeObject.pointer, refreshPointsParamValue);
	}
	native private void refreshAnimation_CGlobeControlPointMap_NoVirtual(long pNativeObject, long refreshPoints);
	protected void refreshAnimation_NoVirtual(com.earthview.world.spatial3d.GlobeControlPointMap refreshPoints)
	{
		long refreshPointsParamValue = refreshPoints.nativeObject.pointer;
		refreshAnimation_CGlobeControlPointMap_NoVirtual(this.nativeObject.pointer, refreshPointsParamValue);
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

	protected  long getCurrentFrameControlPoint_void_callback()
	{
		com.earthview.world.spatial3d.GlobeControlPoint returnValue = getCurrentFrameControlPoint();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentFrameControlPoint_void(long pNativeObject);
	/**
	 * 获取当前帧的控制点参数
	 * @return 控制点参数
	 */
	public com.earthview.world.spatial3d.GlobeControlPoint getCurrentFrameControlPoint()
	{
		long returnValue = getCurrentFrameControlPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GlobeControlPoint __returnValue = new com.earthview.world.spatial3d.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		}
		return __returnValue;
	}
	native private long getCurrentFrameControlPoint_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.GlobeControlPoint getCurrentFrameControlPoint_NoVirtual()
	{
		long returnValue = getCurrentFrameControlPoint_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GlobeControlPoint __returnValue = new com.earthview.world.spatial3d.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		}
		return __returnValue;
	}

	protected  long getKeyFrameControlPoint_ev_real64_callback(double time)
	{
		double timeParamValue = time;
		com.earthview.world.spatial3d.GlobeControlPoint returnValue = getKeyFrameControlPoint(timeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getKeyFrameControlPoint_ev_real64(long pNativeObject, double time);
	/**
	 * 获取指定关键帧时间对应的控制点参数
	 * @param time 指定关键帧时间
	 * @return 控制点参数
	 */
	public com.earthview.world.spatial3d.GlobeControlPoint getKeyFrameControlPoint(double time)
	{
		double timeParamValue = time;
		long returnValue = getKeyFrameControlPoint_ev_real64(this.nativeObject.pointer, timeParamValue);
		com.earthview.world.spatial3d.GlobeControlPoint __returnValue = new com.earthview.world.spatial3d.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		}
		return __returnValue;
	}
	native private long getKeyFrameControlPoint_ev_real64_NoVirtual(long pNativeObject, double time);
	protected com.earthview.world.spatial3d.GlobeControlPoint getKeyFrameControlPoint_NoVirtual(double time)
	{
		double timeParamValue = time;
		long returnValue = getKeyFrameControlPoint_ev_real64_NoVirtual(this.nativeObject.pointer, timeParamValue);
		com.earthview.world.spatial3d.GlobeControlPoint __returnValue = new com.earthview.world.spatial3d.GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPoint");
		}
		return __returnValue;
	}

	protected  boolean getAnimationIsLooping_void_callback()
	{
		boolean returnValue = getAnimationIsLooping();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getAnimationIsLooping_void(long pNativeObject);
	/**
	 * 获取动画是否要进入循环播放状态
	 * @return 动画是否要进入循环播放状态
	 */
	public boolean getAnimationIsLooping()
	{
		boolean returnValue = getAnimationIsLooping_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getAnimationIsLooping_void_NoVirtual(long pNativeObject);
	protected boolean getAnimationIsLooping_NoVirtual()
	{
		boolean returnValue = getAnimationIsLooping_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAltitudeMode_AltitudeMode_callback(int altitudeMode)
	{
		com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeModeParamValue = com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(altitudeMode);
		setAltitudeMode(altitudeModeParamValue);
	}

	native private void setAltitudeMode_AltitudeMode(long pNativeObject, int altitudeMode);
	/**
	 * 设置高度模式
	 * @param altitudeMode 高度模式
	 */
	public void setAltitudeMode(com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeMode)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		setAltitudeMode_AltitudeMode(this.nativeObject.pointer, altitudeModeParamValue);
	}
	native private void setAltitudeMode_AltitudeMode_NoVirtual(long pNativeObject, int altitudeMode);
	protected void setAltitudeMode_NoVirtual(com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeMode)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		setAltitudeMode_AltitudeMode_NoVirtual(this.nativeObject.pointer, altitudeModeParamValue);
	}

	protected  int getAltitudeMode_void_callback()
	{
		com.earthview.world.spatial3d.Flyparam.AltitudeMode returnValue = getAltitudeMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getAltitudeMode_void(long pNativeObject);
	/**
	 * 获取高度模式
	 * @return 高度模式
	 */
	public com.earthview.world.spatial3d.Flyparam.AltitudeMode getAltitudeMode()
	{
		int returnValue = getAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(returnValue);
	}
	native private int getAltitudeMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.Flyparam.AltitudeMode getAltitudeMode_NoVirtual()
	{
		int returnValue = getAltitudeMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(returnValue);
	}

	protected  void setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback(long ref_globeNodeTrackAnimationListener)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListenerParamValue = (ref_globeNodeTrackAnimationListener == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_globeNodeTrackAnimationListenerParamValue != null)
		{
		ref_globeNodeTrackAnimationListenerParamValue.setDelegate(true);
		ref_globeNodeTrackAnimationListenerParamValue.setInstancePointer(new InstancePointer(ref_globeNodeTrackAnimationListener));
		IClassFactory ref_globeNodeTrackAnimationListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_globeNodeTrackAnimationListenerParamValue.getCppInstanceTypeName());
		if (ref_globeNodeTrackAnimationListenerParamValueClassFactory != null)
		{
			ref_globeNodeTrackAnimationListenerParamValue.setDelegate(true);
			ref_globeNodeTrackAnimationListenerParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener)ref_globeNodeTrackAnimationListenerParamValueClassFactory.create();
			ref_globeNodeTrackAnimationListenerParamValue.setDelegate(true);
			ref_globeNodeTrackAnimationListenerParamValue.setInstancePointer(new InstancePointer(ref_globeNodeTrackAnimationListener));
		}
		}
		setGlobeNodeTrackAnimationListener(ref_globeNodeTrackAnimationListenerParamValue);
	}

	native private void setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(long pNativeObject, long ref_globeNodeTrackAnimationListener);
	/**
	 * 设置动画监听
	 * @param ref_globeNodeTrackAnimationListener 动画监听,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setGlobeNodeTrackAnimationListener(com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListener)
	{
		long ref_globeNodeTrackAnimationListenerParamValue = (ref_globeNodeTrackAnimationListener == null ? 0L : ref_globeNodeTrackAnimationListener.nativeObject.pointer);
		setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.nativeObject.pointer, ref_globeNodeTrackAnimationListenerParamValue);
	}
	native private void setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(long pNativeObject, long ref_globeNodeTrackAnimationListener);
	protected void setGlobeNodeTrackAnimationListener_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener ref_globeNodeTrackAnimationListener)
	{
		long ref_globeNodeTrackAnimationListenerParamValue = (ref_globeNodeTrackAnimationListener == null ? 0L : ref_globeNodeTrackAnimationListener.nativeObject.pointer);
		setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_NoVirtual(this.nativeObject.pointer, ref_globeNodeTrackAnimationListenerParamValue);
	}

	protected  long getGlobeNodeTrackAnimationListener_void_callback()
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener returnValue = getGlobeNodeTrackAnimationListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGlobeNodeTrackAnimationListener_void(long pNativeObject);
	/**
	 * 获取动画监听
	 * @return 动画监听
	 */
	public com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener getGlobeNodeTrackAnimationListener()
	{
		long returnValue = getGlobeNodeTrackAnimationListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicGlobeNodeTrackAnimationListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicGlobeNodeTrackAnimationListener");
		}
		return __returnValue;
	}
	native private long getGlobeNodeTrackAnimationListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener getGlobeNodeTrackAnimationListener_NoVirtual()
	{
		long returnValue = getGlobeNodeTrackAnimationListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener __returnValue = new com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate, "CDynamicGlobeNodeTrackAnimationListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDynamicGlobeNodeTrackAnimationListener");
		}
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

	protected  void clearAllGlobeNodeTrackPoints_void_callback()
	{
		clearAllGlobeNodeTrackPoints();
	}

	native private void clearAllGlobeNodeTrackPoints_void(long pNativeObject);
	/**
	 * 清除所有动画关键控制点
	 */
	public void clearAllGlobeNodeTrackPoints()
	{
		clearAllGlobeNodeTrackPoints_void(this.nativeObject.pointer);
	}
	native private void clearAllGlobeNodeTrackPoints_void_NoVirtual(long pNativeObject);
	protected void clearAllGlobeNodeTrackPoints_NoVirtual()
	{
		clearAllGlobeNodeTrackPoints_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean canStart_void_callback()
	{
		boolean returnValue = canStart();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canStart_void(long pNativeObject);
	/**
	 * 是否可以开始轨迹动画
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

	protected  boolean hasCreatedAnimation_void_callback()
	{
		boolean returnValue = hasCreatedAnimation();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean hasCreatedAnimation_void(long pNativeObject);
	/**
	 * 是否已经完成创建动画
	 */
	public boolean hasCreatedAnimation()
	{
		boolean returnValue = hasCreatedAnimation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasCreatedAnimation_void_NoVirtual(long pNativeObject);
	protected boolean hasCreatedAnimation_NoVirtual()
	{
		boolean returnValue = hasCreatedAnimation_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setAnimationsetEnabled_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setAnimationsetEnabled(enableParamValue);
	}

	native private void setAnimationsetEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用动画
	 * @param enable 是否启用动画
	 */
	public void setAnimationsetEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setAnimationsetEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setAnimationsetEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setAnimationsetEnabled_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setAnimationsetEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getAnimationsetEnabled_void_callback()
	{
		boolean returnValue = getAnimationsetEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getAnimationsetEnabled_void(long pNativeObject);
	/**
	 * 获取是否启用动画
	 * @return 是否启用动画
	 */
	public boolean getAnimationsetEnabled()
	{
		boolean returnValue = getAnimationsetEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getAnimationsetEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getAnimationsetEnabled_NoVirtual()
	{
		boolean returnValue = getAnimationsetEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setArouseFrequency_ev_real64_callback(double frequency)
	{
		double frequencyParamValue = frequency;
		setArouseFrequency(frequencyParamValue);
	}

	native private void setArouseFrequency_ev_real64(long pNativeObject, double frequency);
	/**
	 * 设置动画处于休眠状态时的自动唤醒频率
	 * @param frequency 唤醒频率
	 */
	public void setArouseFrequency(double frequency)
	{
		double frequencyParamValue = frequency;
		setArouseFrequency_ev_real64(this.nativeObject.pointer, frequencyParamValue);
	}
	native private void setArouseFrequency_ev_real64_NoVirtual(long pNativeObject, double frequency);
	protected void setArouseFrequency_NoVirtual(double frequency)
	{
		double frequencyParamValue = frequency;
		setArouseFrequency_ev_real64_NoVirtual(this.nativeObject.pointer, frequencyParamValue);
	}

	protected  double getArouseFrequency_void_callback()
	{
		double returnValue = getArouseFrequency();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getArouseFrequency_void(long pNativeObject);
	/**
	 * 获取动画处于休眠状态时的自动唤醒频率
	 * @return 唤醒频率
	 */
	public double getArouseFrequency()
	{
		double returnValue = getArouseFrequency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getArouseFrequency_void_NoVirtual(long pNativeObject);
	protected double getArouseFrequency_NoVirtual()
	{
		double returnValue = getArouseFrequency_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void forceArouseAnimation_void_callback()
	{
		forceArouseAnimation();
	}

	native private void forceArouseAnimation_void(long pNativeObject);
	/**
	 * 强制唤醒动画
	 */
	public void forceArouseAnimation()
	{
		forceArouseAnimation_void(this.nativeObject.pointer);
	}
	native private void forceArouseAnimation_void_NoVirtual(long pNativeObject);
	protected void forceArouseAnimation_NoVirtual()
	{
		forceArouseAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getControlPointMap_void(long pNativeObject);
	/**
	 * 获取控制点容器
	 * @return 控制点容器
	 */
	public com.earthview.world.spatial3d.GlobeControlPointMap getControlPointMap()
	{
		long returnValue = getControlPointMap_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GlobeControlPointMap __returnValue = new com.earthview.world.spatial3d.GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControlPointMap");
		}
		return __returnValue;
	}
	public DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_createAnimation_void(long pNativeObject, String method);
	native protected void register_refreshAnimation_CGlobeControlPointMap(long pNativeObject, String method);
	native protected void register_setCurrentFrameTime_ev_real64(long pNativeObject, String method);
	native protected void register_getCurrentFrameTime_void(long pNativeObject, String method);
	native protected void register_getCurrentFrameControlPoint_void(long pNativeObject, String method);
	native protected void register_getKeyFrameControlPoint_ev_real64(long pNativeObject, String method);
	native protected void register_getAnimationIsLooping_void(long pNativeObject, String method);
	native protected void register_setAltitudeMode_AltitudeMode(long pNativeObject, String method);
	native protected void register_getAltitudeMode_void(long pNativeObject, String method);
	native protected void register_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(long pNativeObject, String method);
	native protected void register_getGlobeNodeTrackAnimationListener_void(long pNativeObject, String method);
	native protected void register_clearAllGlobeNodeTrackPoints_void(long pNativeObject, String method);
	native protected void register_canStart_void(long pNativeObject, String method);
	native protected void register_hasRequestCreateAnimation_void(long pNativeObject, String method);
	native protected void register_hasCreatedAnimation_void(long pNativeObject, String method);
	native protected void register_setOnLineModeEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getOnLineModeEnabled_void(long pNativeObject, String method);
	native protected void register_setAnimationsetEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getAnimationsetEnabled_void(long pNativeObject, String method);
	native protected void register_setArouseFrequency_ev_real64(long pNativeObject, String method);
	native protected void register_getArouseFrequency_void(long pNativeObject, String method);
	native protected void register_forceArouseAnimation_void(long pNativeObject, String method);
	native protected void register_createAnimation_CSceneNode(long pNativeObject, String method);
	native protected void register_destoryAnimation_void(long pNativeObject, String method);
	native protected void register_frameStarted_FrameEvent(long pNativeObject, String method);
	native protected void register_frameRenderingQueued_FrameEvent(long pNativeObject, String method);
	native protected void register_frameEnded_FrameEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createAnimation_void(this.nativeObject.pointer, "createAnimation_void_callback");
			this.register_refreshAnimation_CGlobeControlPointMap(this.nativeObject.pointer, "refreshAnimation_CGlobeControlPointMap_callback");
			this.register_setCurrentFrameTime_ev_real64(this.nativeObject.pointer, "setCurrentFrameTime_ev_real64_callback");
			this.register_getCurrentFrameTime_void(this.nativeObject.pointer, "getCurrentFrameTime_void_callback");
			this.register_getCurrentFrameControlPoint_void(this.nativeObject.pointer, "getCurrentFrameControlPoint_void_callback");
			this.register_getKeyFrameControlPoint_ev_real64(this.nativeObject.pointer, "getKeyFrameControlPoint_ev_real64_callback");
			this.register_getAnimationIsLooping_void(this.nativeObject.pointer, "getAnimationIsLooping_void_callback");
			this.register_setAltitudeMode_AltitudeMode(this.nativeObject.pointer, "setAltitudeMode_AltitudeMode_callback");
			this.register_getAltitudeMode_void(this.nativeObject.pointer, "getAltitudeMode_void_callback");
			this.register_setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.nativeObject.pointer, "setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener_callback");
			this.register_getGlobeNodeTrackAnimationListener_void(this.nativeObject.pointer, "getGlobeNodeTrackAnimationListener_void_callback");
			this.register_clearAllGlobeNodeTrackPoints_void(this.nativeObject.pointer, "clearAllGlobeNodeTrackPoints_void_callback");
			this.register_canStart_void(this.nativeObject.pointer, "canStart_void_callback");
			this.register_hasRequestCreateAnimation_void(this.nativeObject.pointer, "hasRequestCreateAnimation_void_callback");
			this.register_hasCreatedAnimation_void(this.nativeObject.pointer, "hasCreatedAnimation_void_callback");
			this.register_setOnLineModeEnabled_ev_bool(this.nativeObject.pointer, "setOnLineModeEnabled_ev_bool_callback");
			this.register_getOnLineModeEnabled_void(this.nativeObject.pointer, "getOnLineModeEnabled_void_callback");
			this.register_setAnimationsetEnabled_ev_bool(this.nativeObject.pointer, "setAnimationsetEnabled_ev_bool_callback");
			this.register_getAnimationsetEnabled_void(this.nativeObject.pointer, "getAnimationsetEnabled_void_callback");
			this.register_setArouseFrequency_ev_real64(this.nativeObject.pointer, "setArouseFrequency_ev_real64_callback");
			this.register_getArouseFrequency_void(this.nativeObject.pointer, "getArouseFrequency_void_callback");
			this.register_forceArouseAnimation_void(this.nativeObject.pointer, "forceArouseAnimation_void_callback");
			this.register_createAnimation_CSceneNode(this.nativeObject.pointer, "createAnimation_CSceneNode_callback");
			this.register_destoryAnimation_void(this.nativeObject.pointer, "destoryAnimation_void_callback");
			this.register_frameStarted_FrameEvent(this.nativeObject.pointer, "frameStarted_FrameEvent_callback");
			this.register_frameRenderingQueued_FrameEvent(this.nativeObject.pointer, "frameRenderingQueued_FrameEvent_callback");
			this.register_frameEnded_FrameEvent(this.nativeObject.pointer, "frameEnded_FrameEvent_callback");
		}
	}
	
	public static DynamicGlobeNodeTrackAnimation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicGlobeNodeTrackAnimation obj = null;
 		if(baseObj instanceof DynamicGlobeNodeTrackAnimation)
		{
			obj = (DynamicGlobeNodeTrackAnimation)baseObj;
		} else {
			obj = new DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicGlobeNodeTrackAnimation");
			obj.increaseCast();
		}

		return obj;
	}
}
