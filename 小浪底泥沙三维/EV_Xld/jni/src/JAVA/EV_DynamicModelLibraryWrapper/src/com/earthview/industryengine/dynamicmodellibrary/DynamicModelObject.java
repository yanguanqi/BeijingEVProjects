package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标对象
 */
public class DynamicModelObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject", new DynamicModelObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicModelObjectProxy", new DynamicModelObjectClassFactory());
	}

	/**
	 * 轨迹动画监听对象
	 */
	public static class DynamicAnimationListener extends com.earthview.world.graphic.SphereNodeAnimationTrack.SphereNodeAnimationTrackListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener", new DynamicAnimationListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::JCDynamicAnimationListenerProxy", new DynamicAnimationListenerClassFactory());
		}

		/**
		 * 轨迹动画监听对象构造函数
		 * @param ref_manager 场景管理器
		 * @param ref_modelObject 关联的动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期
		 */
		public DynamicAnimationListener(com.earthview.world.graphic.SceneManager ref_manager, com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject ref_modelObject) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			NameValuePairList list = new NameValuePairList();
			BasePointer ref_managerPtr = new BasePointer(ref_manager);
			list.add("ref_manager", ref_managerPtr.get());
			BasePointer ref_modelObjectPtr = new BasePointer(ref_modelObject);
			list.add("ref_modelObject", ref_modelObjectPtr.get());
			Create("JCDynamicAnimationListenerProxy", list, true);
			this.registerCallback();
			if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject$DynamicAnimationListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		native private double getRadius_CSphereTransformKeyFrame(long pNativeObject, long kf);
		/**
		 * 获取当前帧飞行控制点半径
		 * @param kf 当前飞行帧,该参数对象的生命周期要保持大于本对象的生命周期
		 * @return 当前帧飞行控制点半径
		 */
		public double getRadius(com.earthview.world.graphic.SphereTransformKeyFrame kf)
		{
			long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
			double returnValue = getRadius_CSphereTransformKeyFrame(this.nativeObject.pointer, kfParamValue);
			return returnValue;
		}
		native private double getRadius_CSphereTransformKeyFrame_NoVirtual(long pNativeObject, long kf);
		protected double getRadius_NoVirtual(com.earthview.world.graphic.SphereTransformKeyFrame kf)
		{
			long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
			double returnValue = getRadius_CSphereTransformKeyFrame_NoVirtual(this.nativeObject.pointer, kfParamValue);
			return returnValue;
		}

		native private double getHeading_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latA, double lonA, double latB, double lonB);
		/**
		 * 计算当前帧飞行控制点偏航角
		 * @param latA 起始点纬度
		 * @param lonA 起始点经度
		 * @param latB 目标点纬度
		 * @param lonB 目标点经度
		 * @return 当前帧飞行控制点偏航角
		 */
		public double getHeading(double latA, double lonA, double latB, double lonB)
		{
			double latAParamValue = latA;
			double lonAParamValue = lonA;
			double latBParamValue = latB;
			double lonBParamValue = lonB;
			double returnValue = getHeading_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
			return returnValue;
		}
		native private double getHeading_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latA, double lonA, double latB, double lonB);
		protected double getHeading_NoVirtual(double latA, double lonA, double latB, double lonB)
		{
			double latAParamValue = latA;
			double lonAParamValue = lonA;
			double latBParamValue = latB;
			double lonBParamValue = lonB;
			double returnValue = getHeading_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
			return returnValue;
		}

		native private void getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(long pNativeObject, long yawA, long pitchA, long bankA, long yawB, long pitchB, long bankB, double timeRatio, long yaw, long pitch, long bank);
		/**
		 * 计算欧拉角
		 * @param yawA 第一个yaw角
		 * @param pitchA 第一个pitch角
		 * @param bankA 第一个pitch角
		 * @param yawB 第二个yaw角
		 * @param pitchB 第二个pitch角
		 * @param bankB 第二个pitch角
		 * @param timeRatio 时间比例
		 * @param yaw 返回的yaw角
		 * @param pitch 返回的pitch角
		 * @param bank 返回的pitch角
		 */
		public void getEuler(com.earthview.world.spatial.math.Degree yawA, com.earthview.world.spatial.math.Degree pitchA, com.earthview.world.spatial.math.Degree bankA, com.earthview.world.spatial.math.Degree yawB, com.earthview.world.spatial.math.Degree pitchB, com.earthview.world.spatial.math.Degree bankB, double timeRatio, com.earthview.world.spatial.math.Degree yaw, com.earthview.world.spatial.math.Degree pitch, com.earthview.world.spatial.math.Degree bank)
		{
			long yawAParamValue = yawA.nativeObject.pointer;
			long pitchAParamValue = pitchA.nativeObject.pointer;
			long bankAParamValue = bankA.nativeObject.pointer;
			long yawBParamValue = yawB.nativeObject.pointer;
			long pitchBParamValue = pitchB.nativeObject.pointer;
			long bankBParamValue = bankB.nativeObject.pointer;
			double timeRatioParamValue = timeRatio;
			long yawParamValue = yaw.nativeObject.pointer;
			long pitchParamValue = pitch.nativeObject.pointer;
			long bankParamValue = bank.nativeObject.pointer;
			getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.nativeObject.pointer, yawAParamValue, pitchAParamValue, bankAParamValue, yawBParamValue, pitchBParamValue, bankBParamValue, timeRatioParamValue, yawParamValue, pitchParamValue, bankParamValue);
		}
		native private void getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(long pNativeObject, long yawA, long pitchA, long bankA, long yawB, long pitchB, long bankB, double timeRatio, long yaw, long pitch, long bank);
		protected void getEuler_NoVirtual(com.earthview.world.spatial.math.Degree yawA, com.earthview.world.spatial.math.Degree pitchA, com.earthview.world.spatial.math.Degree bankA, com.earthview.world.spatial.math.Degree yawB, com.earthview.world.spatial.math.Degree pitchB, com.earthview.world.spatial.math.Degree bankB, double timeRatio, com.earthview.world.spatial.math.Degree yaw, com.earthview.world.spatial.math.Degree pitch, com.earthview.world.spatial.math.Degree bank)
		{
			long yawAParamValue = yawA.nativeObject.pointer;
			long pitchAParamValue = pitchA.nativeObject.pointer;
			long bankAParamValue = bankA.nativeObject.pointer;
			long yawBParamValue = yawB.nativeObject.pointer;
			long pitchBParamValue = pitchB.nativeObject.pointer;
			long bankBParamValue = bankB.nativeObject.pointer;
			double timeRatioParamValue = timeRatio;
			long yawParamValue = yaw.nativeObject.pointer;
			long pitchParamValue = pitch.nativeObject.pointer;
			long bankParamValue = bank.nativeObject.pointer;
			getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(this.nativeObject.pointer, yawAParamValue, pitchAParamValue, bankAParamValue, yawBParamValue, pitchBParamValue, bankBParamValue, timeRatioParamValue, yawParamValue, pitchParamValue, bankParamValue);
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

		public DynamicAnimationListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public DynamicAnimationListener(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		/**
		 * 关键帧插值
		 * @param t 动画轨迹
		 * @param timeIndex 时间索引
		 * @param kf 插值结果
		 * @return 标识是否插值成功
		 */
		public boolean getInterpolatedKeyFrame(com.earthview.world.graphic.AnimationTrack t, com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
		{
			return super.getInterpolatedKeyFrame_NoVirtual(t, timeIndex, kf);
		}
		
		native protected void register_setAltitudeMode_AltitudeMode(long pNativeObject, String method);
		native protected void register_getAltitudeMode_void(long pNativeObject, String method);
		native protected void register_getRadius_CSphereTransformKeyFrame(long pNativeObject, String method);
		native protected void register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
		native protected void register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(long pNativeObject, String method);
		native protected void register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_setAltitudeMode_AltitudeMode(this.nativeObject.pointer, "setAltitudeMode_AltitudeMode_callback");
				this.register_getAltitudeMode_void(this.nativeObject.pointer, "getAltitudeMode_void_callback");
				this.register_getRadius_CSphereTransformKeyFrame(this.nativeObject.pointer, "getRadius_CSphereTransformKeyFrame_callback");
				this.register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback");
				this.register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.nativeObject.pointer, "getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback");
				this.register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(this.nativeObject.pointer, "getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback");
			}
		}
		
		public static DynamicAnimationListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			DynamicAnimationListener obj = null;
 			if(baseObj instanceof DynamicAnimationListener)
			{
				obj = (DynamicAnimationListener)baseObj;
			} else {
				obj = new DynamicAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CDynamicAnimationListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class DynamicAnimationListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			DynamicAnimationListener emptyInstance = new DynamicAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 动态目标构造函数
	 * @param name 唯一标识名称
	 * @param ref_manager 场景管理器
	 * @param ref_camera 相机
	 * @param scutcheonLineColor 标牌连接线颜色
	 * @param scutcheonFrameColor 标牌边框颜色
	 * @param scutcheonTextColor 标牌字体颜色
	 * @param scutcheonLineLength 标牌延伸线长度
	 * @param scutcheonLineMatName 标牌连接线材质名称
	 * @param scutcheonFrameMatName 标牌边框材质名称
	 * @param scutcheonOverlayMatName 标牌底图纹理材质名称
	 * @param ref_modelObjectManager 父容器对象,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public DynamicModelObject(String name, com.earthview.world.graphic.SceneManager ref_manager, com.earthview.world.spatial3d.GlobeCamera ref_camera, com.earthview.world.graphic.ColourValue scutcheonLineColor, com.earthview.world.graphic.ColourValue scutcheonFrameColor, com.earthview.world.graphic.ColourValue scutcheonTextColor, double scutcheonLineLength, String scutcheonLineMatName, String scutcheonFrameMatName, String scutcheonOverlayMatName, com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager ref_modelObjectManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_managerPtr = new BasePointer(ref_manager);
		list.add("ref_manager", ref_managerPtr.get());
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer scutcheonLineColorPtr = new BasePointer(scutcheonLineColor);
		list.add("scutcheonLineColor", scutcheonLineColorPtr.get());
		BasePointer scutcheonFrameColorPtr = new BasePointer(scutcheonFrameColor);
		list.add("scutcheonFrameColor", scutcheonFrameColorPtr.get());
		BasePointer scutcheonTextColorPtr = new BasePointer(scutcheonTextColor);
		list.add("scutcheonTextColor", scutcheonTextColorPtr.get());
		BasePointer scutcheonLineLengthPtr = new BasePointer(scutcheonLineLength);
		list.add("scutcheonLineLength", scutcheonLineLengthPtr.get());
		BasePointer scutcheonLineMatNamePtr = new BasePointer(scutcheonLineMatName);
		list.add("scutcheonLineMatName", scutcheonLineMatNamePtr.get());
		BasePointer scutcheonFrameMatNamePtr = new BasePointer(scutcheonFrameMatName);
		list.add("scutcheonFrameMatName", scutcheonFrameMatNamePtr.get());
		BasePointer scutcheonOverlayMatNamePtr = new BasePointer(scutcheonOverlayMatName);
		list.add("scutcheonOverlayMatName", scutcheonOverlayMatNamePtr.get());
		BasePointer ref_modelObjectManagerPtr = new BasePointer(ref_modelObjectManager);
		list.add("ref_modelObjectManager", ref_modelObjectManagerPtr.get());
		Create("JCDynamicModelObjectProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicModelObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setIsLoading_ev_bool(long pNativeObject, boolean loading);
	public void setIsLoading(boolean loading)
	{
		boolean loadingParamValue = loading;
		setIsLoading_ev_bool(this.nativeObject.pointer, loadingParamValue);
	}
	native private boolean isLoading_void(long pNativeObject);
	public boolean isLoading()
	{
		boolean returnValue = isLoading_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  boolean addResourceListener_CDynamicModelObjectResourceListener_callback(long ref_resourceListener)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectResourceListener ref_resourceListenerParamValue = (ref_resourceListener == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectResourceListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_resourceListenerParamValue != null)
		{
		ref_resourceListenerParamValue.setDelegate(true);
		ref_resourceListenerParamValue.setInstancePointer(new InstancePointer(ref_resourceListener));
		IClassFactory ref_resourceListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_resourceListenerParamValue.getCppInstanceTypeName());
		if (ref_resourceListenerParamValueClassFactory != null)
		{
			ref_resourceListenerParamValue.setDelegate(true);
			ref_resourceListenerParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectResourceListener)ref_resourceListenerParamValueClassFactory.create();
			ref_resourceListenerParamValue.setDelegate(true);
			ref_resourceListenerParamValue.setInstancePointer(new InstancePointer(ref_resourceListener));
		}
		}
		boolean returnValue = addResourceListener(ref_resourceListenerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean addResourceListener_CDynamicModelObjectResourceListener(long pNativeObject, long ref_resourceListener);
	/**
	 * 添加资源监听
	 * @param ref_resourceListener 要添加的资源监听
	 */
	public boolean addResourceListener(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectResourceListener ref_resourceListener)
	{
		long ref_resourceListenerParamValue = (ref_resourceListener == null ? 0L : ref_resourceListener.nativeObject.pointer);
		boolean returnValue = addResourceListener_CDynamicModelObjectResourceListener(this.nativeObject.pointer, ref_resourceListenerParamValue);
		return returnValue;
	}
	native private boolean addResourceListener_CDynamicModelObjectResourceListener_NoVirtual(long pNativeObject, long ref_resourceListener);
	protected boolean addResourceListener_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectResourceListener ref_resourceListener)
	{
		long ref_resourceListenerParamValue = (ref_resourceListener == null ? 0L : ref_resourceListener.nativeObject.pointer);
		boolean returnValue = addResourceListener_CDynamicModelObjectResourceListener_NoVirtual(this.nativeObject.pointer, ref_resourceListenerParamValue);
		return returnValue;
	}

	protected  boolean removeResourceListener_EVString_callback(String name)
	{
		String nameParamValue = name;
		boolean returnValue = removeResourceListener(nameParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeResourceListener_EVString(long pNativeObject, String name);
	/**
	 * 删除资源监听
	 * @param name 要删除的资源监听名称
	 */
	public boolean removeResourceListener(String name)
	{
		String nameParamValue = name;
		boolean returnValue = removeResourceListener_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private boolean removeResourceListener_EVString_NoVirtual(long pNativeObject, String name);
	protected boolean removeResourceListener_NoVirtual(String name)
	{
		String nameParamValue = name;
		boolean returnValue = removeResourceListener_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取动目标唯一标识名称
	 * @return 标唯一标识名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void createGlobeNodeTrackAnimation_EVString(long pNativeObject, String name);
	/**
	 * 创建轨迹动画对象
	 * @param name 名称
	 */
	public void createGlobeNodeTrackAnimation(String name)
	{
		String nameParamValue = name;
		createGlobeNodeTrackAnimation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setEnabledToGetHeading_ev_bool(long pNativeObject, boolean isEnable);
	/**
	 * 设置是否获取动目标朝向
	 * @param value 是否获取动目标朝向
	 */
	public void setEnabledToGetHeading(boolean isEnable)
	{
		boolean isEnableParamValue = isEnable;
		setEnabledToGetHeading_ev_bool(this.nativeObject.pointer, isEnableParamValue);
	}
	native private boolean getEnabledToGetHeading_void(long pNativeObject);
	/**
	 * 获取是否获取动目标朝向
	 * @return 是否获取动目标朝向
	 */
	public boolean getEnabledToGetHeading()
	{
		boolean returnValue = getEnabledToGetHeading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFlySpeed_ev_real64(long pNativeObject, double speed);
	/**
	 * 设置轨迹动画飞行速度
	 * @param speed 飞行速度
	 */
	public void setFlySpeed(double speed)
	{
		double speedParamValue = speed;
		setFlySpeed_ev_real64(this.nativeObject.pointer, speedParamValue);
	}
	native private double getFlySpeed_void(long pNativeObject);
	/**
	 * 获取轨迹动画飞行速度
	 * @return 轨迹动画飞行速度
	 */
	public double getFlySpeed()
	{
		double returnValue = getFlySpeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterpolate_ev_bool(long pNativeObject, boolean interpolate);
	/**
	 * 设置轨迹动画是否进行插值
	 * @param interpolate 是否插值
	 */
	public void setInterpolate(boolean interpolate)
	{
		boolean interpolateParamValue = interpolate;
		setInterpolate_ev_bool(this.nativeObject.pointer, interpolateParamValue);
	}
	native private boolean getInterpolate_void(long pNativeObject);
	/**
	 * 获取轨迹动画是否进行插值
	 * @return 轨迹动画是否进行插值
	 */
	public boolean getInterpolate()
	{
		boolean returnValue = getInterpolate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterpolateStartPos_ev_real64(long pNativeObject, double pos);
	/**
	 * 设置轨迹动画插值起始点位置（大于0.5，会产生两端交叉现象）
	 * @param pos 插值起始点
	 */
	public void setInterpolateStartPos(double pos)
	{
		double posParamValue = pos;
		setInterpolateStartPos_ev_real64(this.nativeObject.pointer, posParamValue);
	}
	native private double getInterpolateStartPos_void(long pNativeObject);
	/**
	 * 获取轨迹动画插值起始点位置
	 * @return 插值起始点
	 */
	public double getInterpolateStartPos()
	{
		double returnValue = getInterpolateStartPos_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterpolateSmoothFactor_ev_real64(long pNativeObject, double smoothFactor);
	/**
	 * 设置轨迹动画插值平滑系数（值越小越平滑)
	 * @param smoothFactor 插值平滑系数
	 */
	public void setInterpolateSmoothFactor(double smoothFactor)
	{
		double smoothFactorParamValue = smoothFactor;
		setInterpolateSmoothFactor_ev_real64(this.nativeObject.pointer, smoothFactorParamValue);
	}
	native private double getInterpolateSmoothFactor_void(long pNativeObject);
	/**
	 * 获取轨迹动画插值平滑系数（值越小越平滑)
	 * @return 插值平滑系数
	 */
	public double getInterpolateSmoothFactor()
	{
		double returnValue = getInterpolateSmoothFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getGlobeAnimationLodStrategyItemEnable_void(long pNativeObject);
	/**
	 * 获取是否启用轨迹动画节点的LOD策略
	 * @return 是否启用轨迹动画节点的LOD策略
	 */
	public boolean getGlobeAnimationLodStrategyItemEnable()
	{
		boolean returnValue = getGlobeAnimationLodStrategyItemEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobeAnimationLodStrategyItemEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用轨迹动画节点的LOD策略
	 * @param enable 是否启用轨迹动画节点的LOD策略
	 */
	public void setGlobeAnimationLodStrategyItemEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setGlobeAnimationLodStrategyItemEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getModelLodStrategyItemEnable_void(long pNativeObject);
	/**
	 * 获取是否启用LOD策略
	 * @return 是否启用LOD策略
	 */
	public boolean getModelLodStrategyItemEnable()
	{
		boolean returnValue = getModelLodStrategyItemEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelLodStrategyItemEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用LOD策略
	 * @param enable 是否启用LOD策略
	 */
	public void setModelLodStrategyItemEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setModelLodStrategyItemEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getScutcheonLodStrategyItemEnable_void(long pNativeObject);
	/**
	 * 获取是否启用LOD策略
	 * @return 是否启用LOD策略
	 */
	public boolean getScutcheonLodStrategyItemEnable()
	{
		boolean returnValue = getScutcheonLodStrategyItemEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScutcheonLodStrategyItemEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用LOD策略
	 * @param enable 是否启用LOD策略
	 */
	public void setScutcheonLodStrategyItemEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setScutcheonLodStrategyItemEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getRibbonTrailLodStrategyItemEnable_void(long pNativeObject);
	/**
	 * 获取是否启用LOD策略
	 * @return 是否启用LOD策略
	 */
	public boolean getRibbonTrailLodStrategyItemEnable()
	{
		boolean returnValue = getRibbonTrailLodStrategyItemEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRibbonTrailLodStrategyItemEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用LOD策略
	 * @param enable 是否启用LOD策略
	 */
	public void setRibbonTrailLodStrategyItemEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setRibbonTrailLodStrategyItemEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getParticleLodStrategyItemEnable_void(long pNativeObject);
	/**
	 * 获取是否启用LOD策略
	 * @return 是否启用LOD策略
	 */
	public boolean getParticleLodStrategyItemEnable()
	{
		boolean returnValue = getParticleLodStrategyItemEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setParticleLodStrategyItemEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用LOD策略
	 * @param enable 是否启用LOD策略
	 */
	public void setParticleLodStrategyItemEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setParticleLodStrategyItemEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getTrackTrailLodStrategyItemEnable_void(long pNativeObject);
	/**
	 * 获取是否启用LOD策略
	 * @return 是否启用LOD策略
	 */
	public boolean getTrackTrailLodStrategyItemEnable()
	{
		boolean returnValue = getTrackTrailLodStrategyItemEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTrackTrailLodStrategyItemEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用LOD策略
	 * @param enable 是否启用LOD策略
	 */
	public void setTrackTrailLodStrategyItemEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setTrackTrailLodStrategyItemEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setGlobeAnimationLodStrategyItemValue_Real_Real(long pNativeObject, double minVisibleValue, double maxVisibleValue);
	/**
	 * 设置轨迹动画LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void setGlobeAnimationLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
	{
		double minVisibleValueParamValue = minVisibleValue;
		double maxVisibleValueParamValue = maxVisibleValue;
		setGlobeAnimationLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getGlobeAnimationLodStrategyItemValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取指定名称的动态目标轨迹动画LOD的最小及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void getGlobeAnimationLodStrategyItemValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getGlobeAnimationLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getGlobeAnimationLodStrategyItemSquareValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取指定名称的动态目标轨迹动画LOD的最小及最大可见距离的平方
	 * @param minVisibleValue 最小可见距离平方
	 * @param maxVisibleValue 最大可见距离平方
	 */
	public void getGlobeAnimationLodStrategyItemSquareValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getGlobeAnimationLodStrategyItemSquareValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void setModelLodStrategyItemValue_Real_Real(long pNativeObject, double minVisibleValue, double maxVisibleValue);
	/**
	 * 设置模型LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void setModelLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
	{
		double minVisibleValueParamValue = minVisibleValue;
		double maxVisibleValueParamValue = maxVisibleValue;
		setModelLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getModelLodStrategyItemValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取指定名称的动态目标模型LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void getModelLodStrategyItemValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getModelLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getModelLodStrategyItemSquareValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取指定名称的动态目标模型LOD子项目的最小以及最大可见距离平方
	 * @param minVisibleValue 最小可见距离平方
	 * @param maxVisibleValue 最大可见距离平方
	 */
	public void getModelLodStrategyItemSquareValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getModelLodStrategyItemSquareValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void setParticleLodStrategyItemValue_Real_Real(long pNativeObject, double minVisibleValue, double maxVisibleValue);
	/**
	 * 设置特效LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void setParticleLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
	{
		double minVisibleValueParamValue = minVisibleValue;
		double maxVisibleValueParamValue = maxVisibleValue;
		setParticleLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getParticleLodStrategyItemValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取指定名称的动态目标特效LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void getParticleLodStrategyItemValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getParticleLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getParticleLodStrategyItemSquareValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取指定名称的动态目标特效LOD子项目的最小以及最大可见距离平方
	 * @param minVisibleValue 最小可见距离平方
	 * @param maxVisibleValue 最大可见距离平方
	 */
	public void getParticleLodStrategyItemSquareValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getParticleLodStrategyItemSquareValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void setScutcheonLodStrategyItemValue_Real_Real(long pNativeObject, double minVisibleValue, double maxVisibleValue);
	/**
	 * 设置标牌LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void setScutcheonLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
	{
		double minVisibleValueParamValue = minVisibleValue;
		double maxVisibleValueParamValue = maxVisibleValue;
		setScutcheonLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getScutcheonLodStrategyItemValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取标牌LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void getScutcheonLodStrategyItemValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getScutcheonLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getScutcheonLodStrategyItemSquareValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取标牌LOD子项目的最小以及最大可见距离平方
	 * @param minVisibleValue 最小可见距离平方
	 * @param maxVisibleValue 最大可见距离平方
	 */
	public void getScutcheonLodStrategyItemSquareValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getScutcheonLodStrategyItemSquareValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void setTrackTrailLodStrategyItemValue_Real_Real(long pNativeObject, double minVisibleValue, double maxVisibleValue);
	/**
	 * 设置航迹LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void setTrackTrailLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
	{
		double minVisibleValueParamValue = minVisibleValue;
		double maxVisibleValueParamValue = maxVisibleValue;
		setTrackTrailLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getTrackTrailLodStrategyItemValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取航迹LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void getTrackTrailLodStrategyItemValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getTrackTrailLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getTrackTrailLodStrategyItemSquareValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取航迹LOD子项目的最小以及最大可见距离平方
	 * @param minVisibleValue 最小可见距离平方
	 * @param maxVisibleValue 最大可见距离平方
	 */
	public void getTrackTrailLodStrategyItemSquareValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getTrackTrailLodStrategyItemSquareValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void setRibbonTrailLodStrategyItemValue_Real_Real(long pNativeObject, double minVisibleValue, double maxVisibleValue);
	/**
	 * 设置飘带LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void setRibbonTrailLodStrategyItemValue(double minVisibleValue, double maxVisibleValue)
	{
		double minVisibleValueParamValue = minVisibleValue;
		double maxVisibleValueParamValue = maxVisibleValue;
		setRibbonTrailLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getRibbonTrailLodStrategyItemValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取飘带LOD子项目的最小以及最大可见距离
	 * @param minVisibleValue 最小可见距离
	 * @param maxVisibleValue 最大可见距离
	 */
	public void getRibbonTrailLodStrategyItemValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getRibbonTrailLodStrategyItemValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void getRibbonTrailLodStrategyItemSquareValue_Real_Real(long pNativeObject, long minVisibleValue, long maxVisibleValue);
	/**
	 * 获取飘带LOD子项目的最小以及最大可见距离平方
	 * @param minVisibleValue 最小可见距离平方
	 * @param maxVisibleValue 最大可见距离平方
	 */
	public void getRibbonTrailLodStrategyItemSquareValue(DoublePointer minVisibleValue, DoublePointer maxVisibleValue)
	{
		long minVisibleValueParamValue = minVisibleValue.nativeObject.pointer;
		long maxVisibleValueParamValue = maxVisibleValue.nativeObject.pointer;
		getRibbonTrailLodStrategyItemSquareValue_Real_Real(this.nativeObject.pointer, minVisibleValueParamValue, maxVisibleValueParamValue);
	}
	native private void createCameraNodeTrackAnimation_EVString(long pNativeObject, String name);
	/**
	 * 创建相机动画对象
	 * @param name 名称
	 */
	public void createCameraNodeTrackAnimation(String name)
	{
		String nameParamValue = name;
		createCameraNodeTrackAnimation_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void startCameraNodeTrack_void(long pNativeObject);
	/**
	 * 启动相机动画
	 */
	public void startCameraNodeTrack()
	{
		startCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void startGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 启动轨迹动画
	 * @param  
	 */
	public void startGlobeNodeTrack()
	{
		startGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private boolean canStartGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 是否可以启动轨迹动画
	 * @return 是否可以启动轨迹动画
	 */
	public boolean canStartGlobeNodeTrack()
	{
		boolean returnValue = canStartGlobeNodeTrack_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean canStartCameraNodeTrack_void(long pNativeObject);
	/**
	 * 是否可以启动相机动画
	 * @return 是否可以启动相机动画
	 */
	public boolean canStartCameraNodeTrack()
	{
		boolean returnValue = canStartCameraNodeTrack_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addGlobeNodeTrackPoint_CGlobeControlPoint(long pNativeObject, long globeControlPoint);
	/**
	 * 添加轨迹动画关键控制点
	 * @param globeControlPoint 控制点
	 */
	public void addGlobeNodeTrackPoint(com.earthview.world.spatial3d.GlobeControlPoint globeControlPoint)
	{
		long globeControlPointParamValue = globeControlPoint.nativeObject.pointer;
		addGlobeNodeTrackPoint_CGlobeControlPoint(this.nativeObject.pointer, globeControlPointParamValue);
	}
	native private void addGlobeNodeTrackPoints_CGlobeControlPointSet(long pNativeObject, long points);
	/**
	 * 添加一组轨迹动画关键控制点
	 * @param points 一组控制点
	 */
	public void addGlobeNodeTrackPoints(com.earthview.industryengine.dynamicmodellibrary.GlobeControlPointSet points)
	{
		long pointsParamValue = points.nativeObject.pointer;
		addGlobeNodeTrackPoints_CGlobeControlPointSet(this.nativeObject.pointer, pointsParamValue);
	}
	native private void addGlobeNodeTrackPoints_CGlobeControlPointMap(long pNativeObject, long points);
	/**
	 * 添加一组特定关键帧时间的轨迹动画关键控制点
	 * @param points 一组控制点
	 */
	public void addGlobeNodeTrackPoints(com.earthview.world.spatial3d.GlobeControlPointMap points)
	{
		long pointsParamValue = points.nativeObject.pointer;
		addGlobeNodeTrackPoints_CGlobeControlPointMap(this.nativeObject.pointer, pointsParamValue);
	}
	native private void clearAllGlobeNodeTrackPoints_void(long pNativeObject);
	/**
	 * 清除所有轨迹动画关键控制点
	 */
	public void clearAllGlobeNodeTrackPoints()
	{
		clearAllGlobeNodeTrackPoints_void(this.nativeObject.pointer);
	}
	native private void refreshGlobeNodeTrackAnimation_void(long pNativeObject);
	/**
	 * 刷新轨迹动画关键帧
	 */
	public void refreshGlobeNodeTrackAnimation()
	{
		refreshGlobeNodeTrackAnimation_void(this.nativeObject.pointer);
	}
	native private void addCameraNodeTrackPoint_CCameraAnimationParam(long pNativeObject, long point);
	/**
	 * 添加相机动画关键控制点
	 * @param cameraControlPoint 控制点参数
	 */
	public void addCameraNodeTrackPoint(com.earthview.industryengine.dynamicmodellibrary.CameraAnimationParam point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addCameraNodeTrackPoint_CCameraAnimationParam(this.nativeObject.pointer, pointParamValue);
	}
	native private void addCameraNodeTrackPoints_CCameraAnimationParamSet(long pNativeObject, long points);
	/**
	 * 添加一组相机动画关键控制点
	 * @param points 一组控制点
	 */
	public void addCameraNodeTrackPoints(com.earthview.industryengine.dynamicmodellibrary.CameraAnimationParamSet points)
	{
		long pointsParamValue = points.nativeObject.pointer;
		addCameraNodeTrackPoints_CCameraAnimationParamSet(this.nativeObject.pointer, pointsParamValue);
	}
	native private void clearAllCameraNodeTrackPoints_void(long pNativeObject);
	/**
	 * 清除所有相机动画关键控制点
	 */
	public void clearAllCameraNodeTrackPoints()
	{
		clearAllCameraNodeTrackPoints_void(this.nativeObject.pointer);
	}
	native private void refreshCameraNodeTrackAnimation_void(long pNativeObject);
	/**
	 * 刷新相机动画关键帧
	 */
	public void refreshCameraNodeTrackAnimation()
	{
		refreshCameraNodeTrackAnimation_void(this.nativeObject.pointer);
	}
	native private void setModelScale_CVector3(long pNativeObject, long scale);
	/**
	 * 设置模型对象缩放系数
	 * @param scale 模型对象缩放系数
	 */
	public void setModelScale(com.earthview.world.spatial.math.Vector3 scale)
	{
		long scaleParamValue = scale.nativeObject.pointer;
		setModelScale_CVector3(this.nativeObject.pointer, scaleParamValue);
	}
	native private long getModelScale_void(long pNativeObject);
	/**
	 * 获取模型对象缩放系数
	 * @return 模型对象缩放系数
	 */
	public com.earthview.world.spatial.math.Vector3 getModelScale()
	{
		long returnValue = getModelScale_void(this.nativeObject.pointer);
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
	native private void setModelLocalOffsetVector_CVector3(long pNativeObject, long offsetVector);
	/**
	 * 设置模型对象局部坐标系偏移量
	 * @param offsetVector 局部坐标系偏移量
	 */
	public void setModelLocalOffsetVector(com.earthview.world.spatial.math.Vector3 offsetVector)
	{
		long offsetVectorParamValue = offsetVector.nativeObject.pointer;
		setModelLocalOffsetVector_CVector3(this.nativeObject.pointer, offsetVectorParamValue);
	}
	native private long getModelLocalOffsetVector_void(long pNativeObject);
	/**
	 * 获取模型局部坐标系偏移量
	 * @return 局部坐标系偏移量
	 */
	public com.earthview.world.spatial.math.Vector3 getModelLocalOffsetVector()
	{
		long returnValue = getModelLocalOffsetVector_void(this.nativeObject.pointer);
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
	native private void setModelRotateDegree_CVector3(long pNativeObject, long rotateDegree);
	/**
	 * 设置模型旋转角度
	 * @param rotateDegree 绕XYZ轴旋转角度
	 */
	public void setModelRotateDegree(com.earthview.world.spatial.math.Vector3 rotateDegree)
	{
		long rotateDegreeParamValue = rotateDegree.nativeObject.pointer;
		setModelRotateDegree_CVector3(this.nativeObject.pointer, rotateDegreeParamValue);
	}
	native private long getModelRotateDegree_void(long pNativeObject);
	/**
	 * 获取模型旋转角度
	 * @return 模型旋转角度
	 */
	public com.earthview.world.spatial.math.Vector3 getModelRotateDegree()
	{
		long returnValue = getModelRotateDegree_void(this.nativeObject.pointer);
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
	native private void setModelVisible_bool(long pNativeObject, boolean modelVisible);
	/**
	 * 设置模型对象是否可见
	 * @param modelVisible 模型对象是否可见
	 */
	public void setModelVisible(boolean modelVisible)
	{
		boolean modelVisibleParamValue = modelVisible;
		setModelVisible_bool(this.nativeObject.pointer, modelVisibleParamValue);
	}
	native private boolean getModelVisible_void(long pNativeObject);
	/**
	 * 获取模型对象是否可见
	 * @return true为可见，false为不可见
	 */
	public boolean getModelVisible()
	{
		boolean returnValue = getModelVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScutcheonVisible_bool(long pNativeObject, boolean visible);
	/**
	 * 设置标牌是否可见
	 * @param visible 标牌对象是否可见
	 */
	public void setScutcheonVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setScutcheonVisible_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean getScutcheonVisible_void(long pNativeObject);
	/**
	 * 获取标牌是否可见
	 * @return 标牌对象是否可见
	 */
	public boolean getScutcheonVisible()
	{
		boolean returnValue = getScutcheonVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScutcheonLineColor_CColourValue(long pNativeObject, long lineColor);
	/**
	 * 设置标牌连接线颜色
	 * @param textColor 标牌连接线颜色
	 */
	public void setScutcheonLineColor(com.earthview.world.graphic.ColourValue lineColor)
	{
		long lineColorParamValue = lineColor.nativeObject.pointer;
		setScutcheonLineColor_CColourValue(this.nativeObject.pointer, lineColorParamValue);
	}
	native private long getScutcheonLineColor_void(long pNativeObject);
	/**
	 * 获取标牌连接线颜色
	 * @return 标牌连接线颜色
	 */
	public com.earthview.world.graphic.ColourValue getScutcheonLineColor()
	{
		long returnValue = getScutcheonLineColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setScutcheonLineLength_Real(long pNativeObject, double lineLength);
	/**
	 * 设置标牌连接线长度
	 * @param lineLength 标牌连接线长度
	 */
	public void setScutcheonLineLength(double lineLength)
	{
		double lineLengthParamValue = lineLength;
		setScutcheonLineLength_Real(this.nativeObject.pointer, lineLengthParamValue);
	}
	native private double getScutcheonLineLength_void(long pNativeObject);
	/**
	 * 获取标牌连接线长度
	 * @return 标牌连接线长度
	 */
	public double getScutcheonLineLength()
	{
		double returnValue = getScutcheonLineLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScutcheonTextColor_CColourValue(long pNativeObject, long textColor);
	/**
	 * 设置标牌字体颜色
	 * @param textColor 标牌字体颜色
	 */
	public void setScutcheonTextColor(com.earthview.world.graphic.ColourValue textColor)
	{
		long textColorParamValue = textColor.nativeObject.pointer;
		setScutcheonTextColor_CColourValue(this.nativeObject.pointer, textColorParamValue);
	}
	native private long getScutcheonTextColor_void(long pNativeObject);
	/**
	 * 获取标牌字体颜色
	 * @return 标牌字体颜色
	 */
	public com.earthview.world.graphic.ColourValue getScutcheonTextColor()
	{
		long returnValue = getScutcheonTextColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setScutcheonCaption_EVString(long pNativeObject, String caption);
	/**
	 * 设置标牌描述信息
	 * @param caption 标牌描述信息
	 */
	public void setScutcheonCaption(String caption)
	{
		String captionParamValue = caption;
		setScutcheonCaption_EVString(this.nativeObject.pointer, captionParamValue);
	}
	native private String getScutcheonCaption_void(long pNativeObject);
	/**
	 * 获取标牌描述信息
	 * @return 标牌描述信息
	 */
	public String getScutcheonCaption()
	{
		String returnValue = getScutcheonCaption_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getScutcheonPosition_void(long pNativeObject);
	/**
	 * 获取标牌地理位置
	 * @return 标牌地理位置
	 */
	public com.earthview.world.spatial.math.Vector3 getScutcheonPosition()
	{
		long returnValue = getScutcheonPosition_void(this.nativeObject.pointer);
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
	native private void setScutcheonFontSize_ev_byte(long pNativeObject, short size);
	/**
	 * 设置标牌字体大小
	 * @param size 标牌字体大小
	 */
	public void setScutcheonFontSize(short size)
	{
		short sizeParamValue = size;
		setScutcheonFontSize_ev_byte(this.nativeObject.pointer, sizeParamValue);
	}
	native private short getScutcheonFontSize_void(long pNativeObject);
	/**
	 * 设置标牌字体大小
	 * @return 标牌字体大小
	 */
	public short getScutcheonFontSize()
	{
		short returnValue = getScutcheonFontSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScutcheonFontName_EVString(long pNativeObject, String fontName);
	/**
	 * 设置标牌字体名称
	 * @param fontName 标牌字体名称
	 */
	public void setScutcheonFontName(String fontName)
	{
		String fontNameParamValue = fontName;
		setScutcheonFontName_EVString(this.nativeObject.pointer, fontNameParamValue);
	}
	native private String getScutcheonFontName_void(long pNativeObject);
	/**
	 * 获取标牌字体名称
	 * @return 标牌字体名称
	 */
	public String getScutcheonFontName()
	{
		String returnValue = getScutcheonFontName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getScutcheon_void(long pNativeObject);
	/**
	 * 获取标牌对象
	 * @return 标牌对象
	 */
	public com.earthview.industryengine.industrygraphic.ScutcheonText getScutcheon()
	{
		long returnValue = getScutcheon_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.industrygraphic.ScutcheonText __returnValue = new com.earthview.industryengine.industrygraphic.ScutcheonText(CreatedWhenConstruct.CWC_NotToCreate, "CScutcheonText");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.industryengine.industrygraphic.ScutcheonText)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScutcheonText");
		}
		return __returnValue;
	}
	native private void lockModelObject_void(long pNativeObject);
	/**
	 * 锁定模型
	 */
	public void lockModelObject()
	{
		lockModelObject_void(this.nativeObject.pointer);
	}
	native private void unlockModelObject_void(long pNativeObject);
	/**
	 * 解除锁定模型
	 */
	public void unlockModelObject()
	{
		unlockModelObject_void(this.nativeObject.pointer);
	}
	native private void setLockDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置模型锁定距离
	 * @param distance 模型锁定距离
	 */
	public void setLockDistance(double distance)
	{
		double distanceParamValue = distance;
		setLockDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private double getLockDistance_void(long pNativeObject);
	/**
	 * 获取模型锁定距离
	 * @return 模型锁定距离
	 */
	public double getLockDistance()
	{
		double returnValue = getLockDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLockTilt_CDegree(long pNativeObject, long tilt);
	/**
	 * 设置模型锁定俯仰角
	 * @param tilt 模型锁定俯仰角
	 */
	public void setLockTilt(com.earthview.world.spatial.math.Degree tilt)
	{
		long tiltParamValue = tilt.nativeObject.pointer;
		setLockTilt_CDegree(this.nativeObject.pointer, tiltParamValue);
	}
	native private long getLockTilt_void(long pNativeObject);
	/**
	 * 获取模型锁定俯仰角
	 * @return 模型锁定俯仰角
	 */
	public com.earthview.world.spatial.math.Degree getLockTilt()
	{
		long returnValue = getLockTilt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private void setIsLockDistance_ev_bool(long pNativeObject, boolean locked);
	/**
	 * 设置是否锁定模型观察距离
	 * @param locked 是否锁定
	 */
	public void setIsLockDistance(boolean locked)
	{
		boolean lockedParamValue = locked;
		setIsLockDistance_ev_bool(this.nativeObject.pointer, lockedParamValue);
	}
	native private boolean getIsLockDistance_void(long pNativeObject);
	/**
	 * 获取是否锁定模型观察距离
	 * @return 是否锁定模型观察距离
	 */
	public boolean getIsLockDistance()
	{
		boolean returnValue = getIsLockDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsLockTilt_ev_bool(long pNativeObject, boolean locked);
	/**
	 * 设置是否锁定模型俯仰角
	 * @param locked 是否锁定
	 */
	public void setIsLockTilt(boolean locked)
	{
		boolean lockedParamValue = locked;
		setIsLockTilt_ev_bool(this.nativeObject.pointer, lockedParamValue);
	}
	native private boolean getIsLockTilt_void(long pNativeObject);
	/**
	 * 获取是否锁定模型俯仰角
	 * @return 是否锁定
	 */
	public boolean getIsLockTilt()
	{
		boolean returnValue = getIsLockTilt_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsLockHeading_ev_bool(long pNativeObject, boolean locked);
	/**
	 * 设置是否锁定模型偏航角
	 * @param locked 是否锁定
	 */
	public void setIsLockHeading(boolean locked)
	{
		boolean lockedParamValue = locked;
		setIsLockHeading_ev_bool(this.nativeObject.pointer, lockedParamValue);
	}
	native private boolean getIsLockHeading_void(long pNativeObject);
	/**
	 * 获取是否锁定模型偏航角
	 * @return 是否锁定
	 */
	public boolean getIsLockHeading()
	{
		boolean returnValue = getIsLockHeading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelHighLightColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置模型高亮
	 * @param color 高亮颜色
	 */
	public void setModelHighLightColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setModelHighLightColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private long getModelHighLightColor_void(long pNativeObject);
	/**
	 * 获取模型高亮颜色
	 * @return 高亮颜色
	 */
	public com.earthview.world.graphic.ColourValue getModelHighLightColor()
	{
		long returnValue = getModelHighLightColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private boolean getModelIsHighLight_void(long pNativeObject);
	/**
	 * 获取模型是否处于高亮状态
	 * @return 是否高亮
	 */
	public boolean getModelIsHighLight()
	{
		boolean returnValue = getModelIsHighLight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setModelIsHighLight_ev_bool(long pNativeObject, boolean highLight);
	/**
	 * 设置模型是否处于高亮状态
	 * @param highLight 是否高亮
	 */
	public void setModelIsHighLight(boolean highLight)
	{
		boolean highLightParamValue = highLight;
		setModelIsHighLight_ev_bool(this.nativeObject.pointer, highLightParamValue);
	}
	native private void setSubEntityVisible_ev_int32_ev_bool(long pNativeObject, int subEntityIndex, boolean visible);
	/**
	 * 设置模型部件是否可见
	 * @param subEntityIndex 部件索引
	 * @param visible 是否可见
	 */
	public void setSubEntityVisible(int subEntityIndex, boolean visible)
	{
		int subEntityIndexParamValue = subEntityIndex;
		boolean visibleParamValue = visible;
		setSubEntityVisible_ev_int32_ev_bool(this.nativeObject.pointer, subEntityIndexParamValue, visibleParamValue);
	}
	native private boolean getSubEntityVisible_ev_int32(long pNativeObject, int subEntityIndex);
	/**
	 * 获取模型部件是否可见
	 * @param subEntityIndex 部件索引
	 * @return 是否可见
	 */
	public boolean getSubEntityVisible(int subEntityIndex)
	{
		int subEntityIndexParamValue = subEntityIndex;
		boolean returnValue = getSubEntityVisible_ev_int32(this.nativeObject.pointer, subEntityIndexParamValue);
		return returnValue;
	}
	native private void setSubEntityParticleVisible_bool_EVString_EVString(long pNativeObject, boolean visible, String subEntityName, String particleAliasName);
	/**
	 * 设置部件粒子特效是否可见
	 * @param visible 是否可见
	 * @param submeshName 部件名称
	 * @param particleAliasName 在部件上绑定特效的别名
	 */
	public void setSubEntityParticleVisible(boolean visible, String subEntityName, String particleAliasName)
	{
		boolean visibleParamValue = visible;
		String subEntityNameParamValue = subEntityName;
		String particleAliasNameParamValue = particleAliasName;
		setSubEntityParticleVisible_bool_EVString_EVString(this.nativeObject.pointer, visibleParamValue, subEntityNameParamValue, particleAliasNameParamValue);
	}
	native private void setSubEntityParticleVisible_bool_ev_int32_EVString(long pNativeObject, boolean visible, int subEntityIndex, String particleAliasName);
	/**
	 * 设置部件粒子特效是否可见
	 * @param visible 是否可见
	 * @param subEntityIndex 部件索引
	 * @param particleAliasName 在部件上绑定特效的别名
	 */
	public void setSubEntityParticleVisible(boolean visible, int subEntityIndex, String particleAliasName)
	{
		boolean visibleParamValue = visible;
		int subEntityIndexParamValue = subEntityIndex;
		String particleAliasNameParamValue = particleAliasName;
		setSubEntityParticleVisible_bool_ev_int32_EVString(this.nativeObject.pointer, visibleParamValue, subEntityIndexParamValue, particleAliasNameParamValue);
	}
	native private void setSubEntityAllParticleVisible_bool_ev_int32(long pNativeObject, boolean visible, int subEntityIndex);
	/**
	 * 设置部件粒子特效是否可见
	 * @param visible 是否可见
	 * @param subEntityIndex 部件索引
	 */
	public void setSubEntityAllParticleVisible(boolean visible, int subEntityIndex)
	{
		boolean visibleParamValue = visible;
		int subEntityIndexParamValue = subEntityIndex;
		setSubEntityAllParticleVisible_bool_ev_int32(this.nativeObject.pointer, visibleParamValue, subEntityIndexParamValue);
	}
	native private void setSubEntityAllParticleVisible_bool_EVString(long pNativeObject, boolean visible, String subEntityName);
	/**
	 * 设置部件粒子特效是否可见
	 * @param visible 是否可见
	 * @param subEntityName 部件名称
	 */
	public void setSubEntityAllParticleVisible(boolean visible, String subEntityName)
	{
		boolean visibleParamValue = visible;
		String subEntityNameParamValue = subEntityName;
		setSubEntityAllParticleVisible_bool_EVString(this.nativeObject.pointer, visibleParamValue, subEntityNameParamValue);
	}
	native private void setParticleVisible_bool(long pNativeObject, boolean visible);
	/**
	 * 设置所有粒子是否可见
	 * @param visible 是否可见
	 */
	public void setParticleVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setParticleVisible_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean getParticleVisible_void(long pNativeObject);
	/**
	 * 获取所有粒子是否可见
	 * @return 是否可见
	 */
	public boolean getParticleVisible()
	{
		boolean returnValue = getParticleVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getSubEntityParticleVisible_EVString_EVString(long pNativeObject, String subEntityName, String particleAliasName);
	/**
	 * 获取部件粒子特效是否可见
	 * @param subEntityName 部件名称
	 * @param particleAliasName 在部件上绑定特效的别名
	 * @return 是否可见
	 */
	public boolean getSubEntityParticleVisible(String subEntityName, String particleAliasName)
	{
		String subEntityNameParamValue = subEntityName;
		String particleAliasNameParamValue = particleAliasName;
		boolean returnValue = getSubEntityParticleVisible_EVString_EVString(this.nativeObject.pointer, subEntityNameParamValue, particleAliasNameParamValue);
		return returnValue;
	}
	native private boolean getSubEntityParticleVisible_ev_int32_EVString(long pNativeObject, int subEntityIndex, String particleAliasName);
	/**
	 * 获取部件粒子特效是否可见
	 * @param subEntityIndex 部件索引
	 * @param particleAliasName 在部件上绑定特效的别名
	 * @return 是否可见
	 */
	public boolean getSubEntityParticleVisible(int subEntityIndex, String particleAliasName)
	{
		int subEntityIndexParamValue = subEntityIndex;
		String particleAliasNameParamValue = particleAliasName;
		boolean returnValue = getSubEntityParticleVisible_ev_int32_EVString(this.nativeObject.pointer, subEntityIndexParamValue, particleAliasNameParamValue);
		return returnValue;
	}
	native private void setSubEntityRibbonTrailVisible_bool_EVString_EVString(long pNativeObject, boolean visible, String subEntityName, String ribbonAliasName);
	/**
	 * 设置部件飘带是否可见
	 * @param visible 是否可见
	 * @param submeshName 部件名称
	 * @param ribbonAliasName 在部件上绑定飘带的别名
	 */
	public void setSubEntityRibbonTrailVisible(boolean visible, String subEntityName, String ribbonAliasName)
	{
		boolean visibleParamValue = visible;
		String subEntityNameParamValue = subEntityName;
		String ribbonAliasNameParamValue = ribbonAliasName;
		setSubEntityRibbonTrailVisible_bool_EVString_EVString(this.nativeObject.pointer, visibleParamValue, subEntityNameParamValue, ribbonAliasNameParamValue);
	}
	native private void setSubEntityRibbonTrailVisible_bool_ev_int32_EVString(long pNativeObject, boolean visible, int subEntityIndex, String ribbonAliasName);
	/**
	 * 设置部件粒子特效是否可见
	 * @param visible 是否可见
	 * @param subEntityIndex 部件索引
	 * @param ribbonAliasName 在部件上绑定飘带的别名
	 */
	public void setSubEntityRibbonTrailVisible(boolean visible, int subEntityIndex, String ribbonAliasName)
	{
		boolean visibleParamValue = visible;
		int subEntityIndexParamValue = subEntityIndex;
		String ribbonAliasNameParamValue = ribbonAliasName;
		setSubEntityRibbonTrailVisible_bool_ev_int32_EVString(this.nativeObject.pointer, visibleParamValue, subEntityIndexParamValue, ribbonAliasNameParamValue);
	}
	native private void setSubEntityAllRibbonTrailVisible_bool_EVString(long pNativeObject, boolean visible, String subEntityName);
	/**
	 * 设置部件飘带是否可见
	 * @param visible 是否可见
	 * @param submeshName 部件名称
	 */
	public void setSubEntityAllRibbonTrailVisible(boolean visible, String subEntityName)
	{
		boolean visibleParamValue = visible;
		String subEntityNameParamValue = subEntityName;
		setSubEntityAllRibbonTrailVisible_bool_EVString(this.nativeObject.pointer, visibleParamValue, subEntityNameParamValue);
	}
	native private void setSubEntityAllRibbonTrailVisible_bool_ev_int32(long pNativeObject, boolean visible, int subEntityIndex);
	/**
	 * 设置部件粒子特效是否可见
	 * @param visible 是否可见
	 * @param subEntityIndex 部件索引
	 */
	public void setSubEntityAllRibbonTrailVisible(boolean visible, int subEntityIndex)
	{
		boolean visibleParamValue = visible;
		int subEntityIndexParamValue = subEntityIndex;
		setSubEntityAllRibbonTrailVisible_bool_ev_int32(this.nativeObject.pointer, visibleParamValue, subEntityIndexParamValue);
	}
	native private boolean getSubEntityRibbonTrailVisible_EVString_EVString(long pNativeObject, String subEntityName, String ribbonAliasName);
	/**
	 * 获取部件粒子特效是否可见
	 * @param subEntityName 部件名称
	 * @param ribbonAliasName 在部件上绑定飘带的别名
	 * @return 是否可见
	 */
	public boolean getSubEntityRibbonTrailVisible(String subEntityName, String ribbonAliasName)
	{
		String subEntityNameParamValue = subEntityName;
		String ribbonAliasNameParamValue = ribbonAliasName;
		boolean returnValue = getSubEntityRibbonTrailVisible_EVString_EVString(this.nativeObject.pointer, subEntityNameParamValue, ribbonAliasNameParamValue);
		return returnValue;
	}
	native private boolean getSubEntityRibbonTrailVisible_ev_int32_EVString(long pNativeObject, int subEntityIndex, String ribbonAliasName);
	/**
	 * 获取部件粒子特效是否可见
	 * @param subEntityIndex 部件索引
	 * @param ribbonAliasName 在部件上绑定飘带的别名
	 * @return 是否可见
	 */
	public boolean getSubEntityRibbonTrailVisible(int subEntityIndex, String ribbonAliasName)
	{
		int subEntityIndexParamValue = subEntityIndex;
		String ribbonAliasNameParamValue = ribbonAliasName;
		boolean returnValue = getSubEntityRibbonTrailVisible_ev_int32_EVString(this.nativeObject.pointer, subEntityIndexParamValue, ribbonAliasNameParamValue);
		return returnValue;
	}
	native private long getSubEntityRibbonTrailObjectMap_ev_int32(long pNativeObject, int subEntityIndex);
	/**
	 * 获取子部件上绑定的飘带对象集合
	 * @param subEntityIndex 部件索引
	 * @return 子部件上绑定的飘带对象集合
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getSubEntityRibbonTrailObjectMap(int subEntityIndex)
	{
		int subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubEntityRibbonTrailObjectMap_ev_int32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}
	native private long getSubEntityParticleObjectMap_ev_int32(long pNativeObject, int subEntityIndex);
	/**
	 * 获取子部件上绑定的粒子特效对象集合
	 * @param subEntityIndex 部件索引
	 * @return 子部件上绑定的粒子特效对象集合
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getSubEntityParticleObjectMap(int subEntityIndex)
	{
		int subEntityIndexParamValue = subEntityIndex;
		long returnValue = getSubEntityParticleObjectMap_ev_int32(this.nativeObject.pointer, subEntityIndexParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private long getSubEntityRibbonTrailObjectMap_EVString(long pNativeObject, String subEntityName);
	/**
	 * 获取子部件上绑定的飘带对象集合
	 * @param subEntityName 部件名称
	 * @return 子部件上绑定的飘带对象集合
	 */
	public com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap getSubEntityRibbonTrailObjectMap(String subEntityName)
	{
		String subEntityNameParamValue = subEntityName;
		long returnValue = getSubEntityRibbonTrailObjectMap_EVString(this.nativeObject.pointer, subEntityNameParamValue);
		com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.RibbonTrailObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RibbonTrailObjectMap");
		}
		return __returnValue;
	}
	native private long getSubEntityParticleObjectMap_EVString(long pNativeObject, String subEntityName);
	/**
	 * 获取子部件上绑定的粒子特效对象集合
	 * @param subEntityName 部件名称
	 * @return 子部件上绑定的粒子特效对象集合
	 */
	public com.earthview.world.spatial3d.modelmanager.EffectObjectMap getSubEntityParticleObjectMap(String subEntityName)
	{
		String subEntityNameParamValue = subEntityName;
		long returnValue = getSubEntityParticleObjectMap_EVString(this.nativeObject.pointer, subEntityNameParamValue);
		com.earthview.world.spatial3d.modelmanager.EffectObjectMap __returnValue = new com.earthview.world.spatial3d.modelmanager.EffectObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.EffectObjectMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EffectObjectMap");
		}
		return __returnValue;
	}
	native private int getSubEntityCount_void(long pNativeObject);
	/**
	 * 获取子部件数目
	 * @return 子部件数目
	 */
	public int getSubEntityCount()
	{
		int returnValue = getSubEntityCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBindedParticleSubEntityIndexVector_void(long pNativeObject);
	/**
	 * 获取绑定特效的子部件索引
	 * @return 绑定特效的子部件索引
	 */
	public com.earthview.world.core.IntVector getBindedParticleSubEntityIndexVector()
	{
		long returnValue = getBindedParticleSubEntityIndexVector_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private long getBindedRibbonTrailSubEntityIndexVector_void(long pNativeObject);
	/**
	 * 获取绑定特效的子部件索引
	 * @return 绑定特效的子部件索引
	 */
	public com.earthview.world.core.IntVector getBindedRibbonTrailSubEntityIndexVector()
	{
		long returnValue = getBindedRibbonTrailSubEntityIndexVector_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	native private void stopGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 停止轨迹动画
	 */
	public void stopGlobeNodeTrack()
	{
		stopGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void pauseGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 暂停轨迹动画
	 */
	public void pauseGlobeNodeTrack()
	{
		pauseGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void stopCameraNodeTrack_void(long pNativeObject);
	/**
	 * 停止相机动画
	 */
	public void stopCameraNodeTrack()
	{
		stopCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void pauseCameraNodeTrack_void(long pNativeObject);
	/**
	 * 暂停相机动画
	 */
	public void pauseCameraNodeTrack()
	{
		pauseCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void continueCameraNodeTrack_void(long pNativeObject);
	/**
	 * 继续相机动画
	 */
	public void continueCameraNodeTrack()
	{
		continueCameraNodeTrack_void(this.nativeObject.pointer);
	}
	native private void continueGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 继续轨迹动画
	 */
	public void continueGlobeNodeTrack()
	{
		continueGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void setGlobeNodeTrackCurrentFrameTime_ev_real64(long pNativeObject, double curKeyFrameTime);
	/**
	 * 设置轨迹动画当前帧的时间
	 * @param curKeyFrameTime 当前关键帧时间
	 */
	public void setGlobeNodeTrackCurrentFrameTime(double curKeyFrameTime)
	{
		double curKeyFrameTimeParamValue = curKeyFrameTime;
		setGlobeNodeTrackCurrentFrameTime_ev_real64(this.nativeObject.pointer, curKeyFrameTimeParamValue);
	}
	native private double getGlobeNodeTrackCurrentFrameTime_void(long pNativeObject);
	/**
	 * 获取轨迹动画当前帧的时间
	 * @return 当前关键帧时间
	 */
	public double getGlobeNodeTrackCurrentFrameTime()
	{
		double returnValue = getGlobeNodeTrackCurrentFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraNodeTrackCurrentFrameTime_ev_real64(long pNativeObject, double curKeyFrameTime);
	/**
	 * 设置相机动画当前帧的时间
	 * @param curKeyFrameTime 当前关键帧时间
	 */
	public void setCameraNodeTrackCurrentFrameTime(double curKeyFrameTime)
	{
		double curKeyFrameTimeParamValue = curKeyFrameTime;
		setCameraNodeTrackCurrentFrameTime_ev_real64(this.nativeObject.pointer, curKeyFrameTimeParamValue);
	}
	native private double getCameraNodeTrackCurrentFrameTime_void(long pNativeObject);
	/**
	 * 获取相机动画当前帧的时间
	 * @return 当前关键帧时间
	 */
	public double getCameraNodeTrackCurrentFrameTime()
	{
		double returnValue = getCameraNodeTrackCurrentFrameTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCameraNodeTrackTimeRatio_void(long pNativeObject);
	/**
	 * 获取相机动画的播放速度比率
	 * @return 相机动画的播放速度比率
	 */
	public double getCameraNodeTrackTimeRatio()
	{
		double returnValue = getCameraNodeTrackTimeRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraNodeTrackTimeRatio_ev_real64(long pNativeObject, double timeRatio);
	/**
	 * 设置相机动画的播放速度比率
	 * @param timeRatio 相机动画的播放速度比率
	 */
	public void setCameraNodeTrackTimeRatio(double timeRatio)
	{
		double timeRatioParamValue = timeRatio;
		setCameraNodeTrackTimeRatio_ev_real64(this.nativeObject.pointer, timeRatioParamValue);
	}
	native private double getGlobeNodeTrackTimeRatio_void(long pNativeObject);
	/**
	 * 获取轨迹动画的播放速度比率
	 * @return 轨迹动画的播放速度比率
	 */
	public double getGlobeNodeTrackTimeRatio()
	{
		double returnValue = getGlobeNodeTrackTimeRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobeNodeTrackTimeRatio_ev_real64(long pNativeObject, double timeRatio);
	/**
	 * 设置轨迹动画的播放速度比率
	 * @param timeRatio 轨迹动画的播放速度比率
	 */
	public void setGlobeNodeTrackTimeRatio(double timeRatio)
	{
		double timeRatioParamValue = timeRatio;
		setGlobeNodeTrackTimeRatio_ev_real64(this.nativeObject.pointer, timeRatioParamValue);
	}
	native private void setGlobeNodeTrackIsLoop_ev_bool(long pNativeObject, boolean loop);
	/**
	 * 设置轨迹动画是否循环播放
	 * @param loop 是否循环
	 */
	public void setGlobeNodeTrackIsLoop(boolean loop)
	{
		boolean loopParamValue = loop;
		setGlobeNodeTrackIsLoop_ev_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private boolean getGlobeNodeTrackIsLoop_void(long pNativeObject);
	/**
	 * 获取轨迹动画是否循环播放
	 * @return 是否循环
	 */
	public boolean getGlobeNodeTrackIsLoop()
	{
		boolean returnValue = getGlobeNodeTrackIsLoop_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setGlobeNodeTrackAltitudeMode_AltitudeMode_callback(int altitudeMode)
	{
		com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeModeParamValue = com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(altitudeMode);
		setGlobeNodeTrackAltitudeMode(altitudeModeParamValue);
	}

	native private void setGlobeNodeTrackAltitudeMode_AltitudeMode(long pNativeObject, int altitudeMode);
	/**
	 * 设置轨迹动画高度模式
	 * @param altitudeMode 高度模式
	 */
	public void setGlobeNodeTrackAltitudeMode(com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeMode)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		setGlobeNodeTrackAltitudeMode_AltitudeMode(this.nativeObject.pointer, altitudeModeParamValue);
	}
	native private void setGlobeNodeTrackAltitudeMode_AltitudeMode_NoVirtual(long pNativeObject, int altitudeMode);
	protected void setGlobeNodeTrackAltitudeMode_NoVirtual(com.earthview.world.spatial3d.Flyparam.AltitudeMode altitudeMode)
	{
		int altitudeModeParamValue = altitudeMode.getValue();
		setGlobeNodeTrackAltitudeMode_AltitudeMode_NoVirtual(this.nativeObject.pointer, altitudeModeParamValue);
	}

	protected  int getGlobeNodeTrackAltitudeMode_void_callback()
	{
		com.earthview.world.spatial3d.Flyparam.AltitudeMode returnValue = getGlobeNodeTrackAltitudeMode();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getGlobeNodeTrackAltitudeMode_void(long pNativeObject);
	/**
	 * 获取轨迹动画高度模式
	 * @return 高度模式
	 */
	public com.earthview.world.spatial3d.Flyparam.AltitudeMode getGlobeNodeTrackAltitudeMode()
	{
		int returnValue = getGlobeNodeTrackAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(returnValue);
	}
	native private int getGlobeNodeTrackAltitudeMode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.Flyparam.AltitudeMode getGlobeNodeTrackAltitudeMode_NoVirtual()
	{
		int returnValue = getGlobeNodeTrackAltitudeMode_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.Flyparam.AltitudeMode.toEnum(returnValue);
	}

	native private void setCameraNodeTrackIsLoop_ev_bool(long pNativeObject, boolean loop);
	/**
	 * 设置相机动画是否循环播放
	 * @param loop 是否循环
	 */
	public void setCameraNodeTrackIsLoop(boolean loop)
	{
		boolean loopParamValue = loop;
		setCameraNodeTrackIsLoop_ev_bool(this.nativeObject.pointer, loopParamValue);
	}
	native private boolean getCameraNodeTrackIsLoop_void(long pNativeObject);
	/**
	 * 获取相机动画是否循环播放
	 * @return 是否循环
	 */
	public boolean getCameraNodeTrackIsLoop()
	{
		boolean returnValue = getCameraNodeTrackIsLoop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraNodeTrackInterpolationMode_InterpolationMode(long pNativeObject, int interpolationmode);
	/**
	 * 设置相机动画插值模式
	 * @param interpolationmode 插值模式
	 */
	public void setCameraNodeTrackInterpolationMode(com.earthview.world.graphic.Animation.InterpolationMode interpolationmode)
	{
		int interpolationmodeParamValue = interpolationmode.getValue();
		setCameraNodeTrackInterpolationMode_InterpolationMode(this.nativeObject.pointer, interpolationmodeParamValue);
	}
	native private int getCameraNodeTrackInterpolationMode_void(long pNativeObject);
	/**
	 * 获取相机动画插值模式
	 * @param  
	 * @return 插值模式
	 */
	public com.earthview.world.graphic.Animation.InterpolationMode getCameraNodeTrackInterpolationMode()
	{
		int returnValue = getCameraNodeTrackInterpolationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Animation.InterpolationMode.toEnum(returnValue);
	}
	native private void setCameraNodeTrackRotationInterpolationMode_RotationInterpolationMode(long pNativeObject, int rotationInterpolationMode);
	/**
	 * 设置相机动画旋转插值模式
	 * @param rotationInterpolationMode 旋转插值模式
	 */
	public void setCameraNodeTrackRotationInterpolationMode(com.earthview.world.graphic.Animation.RotationInterpolationMode rotationInterpolationMode)
	{
		int rotationInterpolationModeParamValue = rotationInterpolationMode.getValue();
		setCameraNodeTrackRotationInterpolationMode_RotationInterpolationMode(this.nativeObject.pointer, rotationInterpolationModeParamValue);
	}
	native private int getCameraNodeTrackRotationInterpolationMode_void(long pNativeObject);
	/**
	 * 获取相机动画旋转插值模式
	 * @return 旋转插值模式
	 */
	public com.earthview.world.graphic.Animation.RotationInterpolationMode getCameraNodeTrackRotationInterpolationMode()
	{
		int returnValue = getCameraNodeTrackRotationInterpolationMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.Animation.RotationInterpolationMode.toEnum(returnValue);
	}
	native private boolean getRibbonTrailVisible_void(long pNativeObject);
	/**
	 * 获取飘带是否可见
	 * @return 是否可见
	 */
	public boolean getRibbonTrailVisible()
	{
		boolean returnValue = getRibbonTrailVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRibbonTrailVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置飘带是否可见
	 * @param visible 是否可见
	 */
	public void setRibbonTrailVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setRibbonTrailVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean IsPositionChanged_void(long pNativeObject);
	/**
	 * 计算模型位置是否改变
	 * @return 模型位置是否改变
	 */
	public boolean IsPositionChanged()
	{
		boolean returnValue = IsPositionChanged_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSceneNode_void(long pNativeObject);
	/**
	 * 获取轨迹动画节点（该节点通过渲染系统内部设置其节点属性，外部设置无效）
	 * @return 轨迹动画场景节点
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
	native private long getModelAxisAlignedBox_void(long pNativeObject);
	/**
	 * 获取模型世界坐标系下的包围盒
	 * @return 模型包围盒
	 */
	public com.earthview.world.spatial.math.AxisAlignedBox getModelAxisAlignedBox()
	{
		long returnValue = getModelAxisAlignedBox_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private long getModelLocalMatrix_void(long pNativeObject);
	/**
	 * 获取模型局部坐标系下的变换矩阵
	 * @return 模型局部坐标系下变换矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 getModelLocalMatrix()
	{
		long returnValue = getModelLocalMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private double getBoundingRadius_void(long pNativeObject);
	/**
	 * 获取模型最大外接圆半径
	 * @return 模型最大外接圆半径
	 */
	public double getBoundingRadius()
	{
		double returnValue = getBoundingRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCameraNodeTrackLocalCenter_void(long pNativeObject);
	/**
	 * 获取相机动画局部观察中心
	 * @return 相机动画局部观察中心
	 */
	public com.earthview.world.spatial.math.Vector3 getCameraNodeTrackLocalCenter()
	{
		long returnValue = getCameraNodeTrackLocalCenter_void(this.nativeObject.pointer);
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
	native private void setCameraNodeTrackLocalCenter_CVector3(long pNativeObject, long localCenter);
	/**
	 * 设置相机动画局部观察中心
	 * @param localCenter 相机动画局部观察中心
	 */
	public void setCameraNodeTrackLocalCenter(com.earthview.world.spatial.math.Vector3 localCenter)
	{
		long localCenterParamValue = localCenter.nativeObject.pointer;
		setCameraNodeTrackLocalCenter_CVector3(this.nativeObject.pointer, localCenterParamValue);
	}
	native private void setReflectable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否具备海洋反射效果
	 * @param enable 是否具备海洋反射效果
	 */
	public void setReflectable(boolean enable)
	{
		boolean enableParamValue = enable;
		setReflectable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getReflectable_void(long pNativeObject);
	/**
	 * 获取是否具备海洋反射效果
	 * @return 是否具备海洋反射效果
	 */
	public boolean getReflectable()
	{
		boolean returnValue = getReflectable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRefractable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否具备海洋折射效果
	 * @param enable 是否具备海洋折射效果
	 */
	public void setRefractable(boolean enable)
	{
		boolean enableParamValue = enable;
		setRefractable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getRefractable_void(long pNativeObject);
	/**
	 * 获取是否具备海洋折射效果
	 * @param enable 是否具备海洋折射效果
	 * @return 是否具备海洋折射效果
	 */
	public boolean getRefractable()
	{
		boolean returnValue = getRefractable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(long pNativeObject, long ref_listener);
	/**
	 * 设置轨迹动画监听
	 * @param ref_listener 轨迹动画监听,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setGlobeNodeTrackAnimationListener(com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getGlobeNodeTrackAnimationListener_void(long pNativeObject);
	/**
	 * 获取轨迹动画监听
	 * @return 轨迹动画监听
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
	native private void addGlobeNodeTrackEvent_CDynamicObjectEvent(long pNativeObject, long ref_dynamicObjectEvent);
	/**
	 * 添加轨迹动画相关事件
	 * @param ref_dynamicObjectEvent 事件,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void addGlobeNodeTrackEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent ref_dynamicObjectEvent)
	{
		long ref_dynamicObjectEventParamValue = (ref_dynamicObjectEvent == null ? 0L : ref_dynamicObjectEvent.nativeObject.pointer);
		addGlobeNodeTrackEvent_CDynamicObjectEvent(this.nativeObject.pointer, ref_dynamicObjectEventParamValue);
	}
	native private void removeGlobeNodeTrackEvent_CDynamicObjectEvent(long pNativeObject, long dynamicObjectEvent);
	/**
	 * 删除轨迹动画相关事件
	 * @param dynamicObjectEvent 事件
	 */
	public void removeGlobeNodeTrackEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent dynamicObjectEvent)
	{
		long dynamicObjectEventParamValue = (dynamicObjectEvent == null ? 0L : dynamicObjectEvent.nativeObject.pointer);
		removeGlobeNodeTrackEvent_CDynamicObjectEvent(this.nativeObject.pointer, dynamicObjectEventParamValue);
	}
	native private void resetGlobeNodeTrackEvents_void(long pNativeObject);
	/**
	 * 重置轨迹动画相关事件的状态
	 */
	public void resetGlobeNodeTrackEvents()
	{
		resetGlobeNodeTrackEvents_void(this.nativeObject.pointer);
	}
	native private void addCameraNodeTrackEvent_CDynamicObjectEvent(long pNativeObject, long ref_dynamicObjectEvent);
	/**
	 * 添加相机动画相关事件
	 * @param ref_dynamicObjectEvent 事件,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void addCameraNodeTrackEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent ref_dynamicObjectEvent)
	{
		long ref_dynamicObjectEventParamValue = (ref_dynamicObjectEvent == null ? 0L : ref_dynamicObjectEvent.nativeObject.pointer);
		addCameraNodeTrackEvent_CDynamicObjectEvent(this.nativeObject.pointer, ref_dynamicObjectEventParamValue);
	}
	native private void removeCameraNodeTrackEvent_CDynamicObjectEvent(long pNativeObject, long dynamicObjectEvent);
	/**
	 * 删除轨迹动画相关事件
	 * @param dynamicObjectEvent 事件
	 */
	public void removeCameraNodeTrackEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent dynamicObjectEvent)
	{
		long dynamicObjectEventParamValue = (dynamicObjectEvent == null ? 0L : dynamicObjectEvent.nativeObject.pointer);
		removeCameraNodeTrackEvent_CDynamicObjectEvent(this.nativeObject.pointer, dynamicObjectEventParamValue);
	}
	native private void resetCameraNodeTrackEvents_void(long pNativeObject);
	/**
	 * 重置轨迹动画相关事件的状态
	 */
	public void resetCameraNodeTrackEvents()
	{
		resetCameraNodeTrackEvents_void(this.nativeObject.pointer);
	}
	native private long getModelBaseObject_void(long pNativeObject);
	/**
	 * 获取模型基础对象
	 * @return 模型基础对象
	 */
	public com.earthview.world.spatial3d.modelmanager.ModelBaseObject getModelBaseObject()
	{
		long returnValue = getModelBaseObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.modelmanager.ModelBaseObject __returnValue = new com.earthview.world.spatial3d.modelmanager.ModelBaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CModelBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.modelmanager.ModelBaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelBaseObject");
		}
		return __returnValue;
	}
	native private boolean bindModelParam_IDataSource_EVString_ModelType(long pNativeObject, long ref_dataSource, String meshName, int modelType);
	/**
	 * 绑定模型参数
	 * @param ref_dataSource 数据源
	 * @param meshName 模型名称
	 * @param modelType 模型显示类型
	 * @return 是否绑定成功
	 */
	public boolean bindModelParam(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, String meshName, com.earthview.world.spatial3d.ModelType modelType)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		String meshNameParamValue = meshName;
		int modelTypeParamValue = modelType.getValue();
		boolean returnValue = bindModelParam_IDataSource_EVString_ModelType(this.nativeObject.pointer, ref_dataSourceParamValue, meshNameParamValue, modelTypeParamValue);
		return returnValue;
	}
	native private boolean bindModelParam_IDataSource_ev_int32_ModelType(long pNativeObject, long ref_dataSource, int meshIndex, int modelType);
	/**
	 * 绑定模型参数
	 * @param ref_dataSource 数据源
	 * @param meshIndex 模型索引
	 * @param modelType 模型显示类型
	 * @return 是否绑定成功
	 */
	public boolean bindModelParam(com.earthview.world.spatial.geodataset.Idatasource ref_dataSource, int meshIndex, com.earthview.world.spatial3d.ModelType modelType)
	{
		long ref_dataSourceParamValue = (ref_dataSource == null ? 0L : ref_dataSource.nativeObject.pointer);
		int meshIndexParamValue = meshIndex;
		int modelTypeParamValue = modelType.getValue();
		boolean returnValue = bindModelParam_IDataSource_ev_int32_ModelType(this.nativeObject.pointer, ref_dataSourceParamValue, meshIndexParamValue, modelTypeParamValue);
		return returnValue;
	}
	native private boolean bindModelBaseObject_CModelBaseObject(long pNativeObject, long ref_modelBaseObject);
	/**
	 * 绑定模型
	 * @param ref_modelBaseObject 模型对象
	 * @return 是否绑定成功
	 */
	public boolean bindModelBaseObject(com.earthview.world.spatial3d.modelmanager.ModelBaseObject ref_modelBaseObject)
	{
		long ref_modelBaseObjectParamValue = (ref_modelBaseObject == null ? 0L : ref_modelBaseObject.nativeObject.pointer);
		boolean returnValue = bindModelBaseObject_CModelBaseObject(this.nativeObject.pointer, ref_modelBaseObjectParamValue);
		return returnValue;
	}
	native private boolean unBindModel_void(long pNativeObject);
	/**
	 * 解除绑定模型
	 * @return 是否解除绑定成功
	 */
	public boolean unBindModel()
	{
		boolean returnValue = unBindModel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNeedUpdate_ev_bool(long pNativeObject, boolean needUpdate);
	/**
	 * 设置是否需要刷新动态目标的状态
	 * @param needUpdate 是否需要刷新动态目标的状态
	 */
	public void setNeedUpdate(boolean needUpdate)
	{
		boolean needUpdateParamValue = needUpdate;
		setNeedUpdate_ev_bool(this.nativeObject.pointer, needUpdateParamValue);
	}
	native private boolean getNeedUpdate_void(long pNativeObject);
	/**
	 * 获取是否需要刷新动态目标的状态
	 * @return 是否需要刷新动态目标的状态
	 */
	public boolean getNeedUpdate()
	{
		boolean returnValue = getNeedUpdate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getTrackTrailVisible_void(long pNativeObject);
	/**
	 * 获取航迹是否可见
	 * @return 是否可见
	 */
	public boolean getTrackTrailVisible()
	{
		boolean returnValue = getTrackTrailVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTrackTrailVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置航迹是否可见
	 * @param visible 是否可见
	 */
	public void setTrackTrailVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setTrackTrailVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setTrackTrailDisplayPointNum_ev_int32(long pNativeObject, int number);
	/**
	 * 设置航迹点显示数目
	 * @param number 航迹点显示数目
	 */
	public void setTrackTrailDisplayPointNum(int number)
	{
		int numberParamValue = number;
		setTrackTrailDisplayPointNum_ev_int32(this.nativeObject.pointer, numberParamValue);
	}
	native private int getTrackTrailDisplayPointNum_void(long pNativeObject);
	/**
	 * 获取航迹点显示数目
	 * @return 航迹点显示数目
	 */
	public int getTrackTrailDisplayPointNum()
	{
		int returnValue = getTrackTrailDisplayPointNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTrackTrailDisplayMode_EVDisplayMode(long pNativeObject, int displayMode);
	/**
	 * 设置航迹显示模式
	 * @param displayMode 显示模式
	 */
	public void setTrackTrailDisplayMode(com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode displayMode)
	{
		int displayModeParamValue = displayMode.getValue();
		setTrackTrailDisplayMode_EVDisplayMode(this.nativeObject.pointer, displayModeParamValue);
	}
	native private int getTrackTrailDisplayMode_void(long pNativeObject);
	/**
	 * 获取航迹显示模式
	 * @return 航迹显示模式
	 */
	public com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode getTrackTrailDisplayMode()
	{
		int returnValue = getTrackTrailDisplayMode_void(this.nativeObject.pointer);
		return com.earthview.industryengine.industrygraphic.PolylineFeature.EVDisplayMode.toEnum(returnValue);
	}
	native private void setTrackTrailSymbol_ISymbol(long pNativeObject, long lineSymbol);
	/**
	 * 设置航迹显示风格
	 * @param lineSymbol 显示风格
	 */
	public void setTrackTrailSymbol(com.earthview.world.spatial.display.Isymbol lineSymbol)
	{
		long lineSymbolParamValue = (lineSymbol == null ? 0L : lineSymbol.nativeObject.pointer);
		setTrackTrailSymbol_ISymbol(this.nativeObject.pointer, lineSymbolParamValue);
	}
	native private long getTrackTrailSymbol_void(long pNativeObject);
	/**
	 * 获取航迹显示风格
	 * @return 航迹显示风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTrackTrailSymbol()
	{
		long returnValue = getTrackTrailSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setIsTrackTrailHighLine_ev_bool(long pNativeObject, boolean isHighLine);
	/**
	 * 设置航迹是否显示为视高线
	 * @param isHighLine 是否显示为视高线
	 */
	public void setIsTrackTrailHighLine(boolean isHighLine)
	{
		boolean isHighLineParamValue = isHighLine;
		setIsTrackTrailHighLine_ev_bool(this.nativeObject.pointer, isHighLineParamValue);
	}
	native private boolean getIsTrackTrailHighLine_void(long pNativeObject);
	/**
	 * 获取航迹是否显示为视高线
	 * @return 是否显示为视高线
	 */
	public boolean getIsTrackTrailHighLine()
	{
		boolean returnValue = getIsTrackTrailHighLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHighLineColorInfo_CRgbColor_CRgbColor(long pNativeObject, long staticHighLineColor, long dynamicHighLineColor);
	/**
	 * 设置视高线显示颜色
	 * @param staticHighLineColor 静态部分的颜色
	 * @param dynamicHighLineColor 动态部分的颜色
	 */
	public void setHighLineColorInfo(com.earthview.world.spatial.display.RgbColor staticHighLineColor, com.earthview.world.spatial.display.RgbColor dynamicHighLineColor)
	{
		long staticHighLineColorParamValue = (staticHighLineColor == null ? 0L : staticHighLineColor.nativeObject.pointer);
		long dynamicHighLineColorParamValue = (dynamicHighLineColor == null ? 0L : dynamicHighLineColor.nativeObject.pointer);
		setHighLineColorInfo_CRgbColor_CRgbColor(this.nativeObject.pointer, staticHighLineColorParamValue, dynamicHighLineColorParamValue);
	}
	native private void setHighLineDistance_ev_real64(long pNativeObject, double highLineDistance);
	/**
	 * 设置视高线间距
	 * @param highLineDistance 间距
	 */
	public void setHighLineDistance(double highLineDistance)
	{
		double highLineDistanceParamValue = highLineDistance;
		setHighLineDistance_ev_real64(this.nativeObject.pointer, highLineDistanceParamValue);
	}
	native private double getHighLineDistance_void(long pNativeObject);
	/**
	 * 获取视高线间距
	 * @return 视高线间距
	 */
	public double getHighLineDistance()
	{
		double returnValue = getHighLineDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTrackTrailSpatialReference_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置航迹参考坐标系
	 * @param ref_sr 参考坐标系,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void setTrackTrailSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setTrackTrailSpatialReference_ISpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private long getTrackTrailSpatialReference_void(long pNativeObject);
	/**
	 * 获取航迹参考坐标系
	 * @return 参考坐标系
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getTrackTrailSpatialReference()
	{
		long returnValue = getTrackTrailSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	protected  void removeAllTrackTrailPoint_void_callback()
	{
		removeAllTrackTrailPoint();
	}

	native private void removeAllTrackTrailPoint_void(long pNativeObject);
	/**
	 * 删除所有航迹点
	 */
	public void removeAllTrackTrailPoint()
	{
		removeAllTrackTrailPoint_void(this.nativeObject.pointer);
	}
	native private void removeAllTrackTrailPoint_void_NoVirtual(long pNativeObject);
	protected void removeAllTrackTrailPoint_NoVirtual()
	{
		removeAllTrackTrailPoint_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void addTrackTrailPoint_CCoordinate_callback(long point)
	{
		com.earthview.world.spatial.geometry.Coordinate pointParamValue = new com.earthview.world.spatial.geometry.Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		pointParamValue.setDelegate(true);
		pointParamValue.setInstancePointer(new InstancePointer(point));
		IClassFactory pointParamValueClassFactory = GlobalClassFactoryMap.get(pointParamValue.getCppInstanceTypeName());
		if (pointParamValueClassFactory != null)
		{
			pointParamValue.setDelegate(true);
			pointParamValue = (com.earthview.world.spatial.geometry.Coordinate)pointParamValueClassFactory.create();
			pointParamValue.setDelegate(true);
			pointParamValue.setInstancePointer(new InstancePointer(point));
		}
		addTrackTrailPoint(pointParamValue);
	}

	native private void addTrackTrailPoint_CCoordinate(long pNativeObject, long point);
	/**
	 * 增加航迹点
	 * @param point 要添加的航迹点
	 */
	public void addTrackTrailPoint(com.earthview.world.spatial.geometry.Coordinate point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addTrackTrailPoint_CCoordinate(this.nativeObject.pointer, pointParamValue);
	}
	native private void addTrackTrailPoint_CCoordinate_NoVirtual(long pNativeObject, long point);
	protected void addTrackTrailPoint_NoVirtual(com.earthview.world.spatial.geometry.Coordinate point)
	{
		long pointParamValue = point.nativeObject.pointer;
		addTrackTrailPoint_CCoordinate_NoVirtual(this.nativeObject.pointer, pointParamValue);
	}

	protected  long getCurrentNodeScale_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getCurrentNodeScale();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentNodeScale_void(long pNativeObject);
	/**
	 * 获取轨迹动画节点当前的显示比例
	 * @return 显示比例
	 */
	public com.earthview.world.spatial.math.Vector3 getCurrentNodeScale()
	{
		long returnValue = getCurrentNodeScale_void(this.nativeObject.pointer);
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
	native private long getCurrentNodeScale_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getCurrentNodeScale_NoVirtual()
	{
		long returnValue = getCurrentNodeScale_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getCurrentNodePosition_void_callback()
	{
		com.earthview.world.spatial.math.Vector3 returnValue = getCurrentNodePosition();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentNodePosition_void(long pNativeObject);
	/**
	 * 获取轨迹动画节点当前的位置
	 * @return 显示位置
	 */
	public com.earthview.world.spatial.math.Vector3 getCurrentNodePosition()
	{
		long returnValue = getCurrentNodePosition_void(this.nativeObject.pointer);
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
	native private long getCurrentNodePosition_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Vector3 getCurrentNodePosition_NoVirtual()
	{
		long returnValue = getCurrentNodePosition_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getCurrentNodeQuaternion_void_callback()
	{
		com.earthview.world.spatial.math.Quaternion returnValue = getCurrentNodeQuaternion();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCurrentNodeQuaternion_void(long pNativeObject);
	/**
	 * 获取轨迹动画节点当前的四元数
	 * @return 动画节点四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getCurrentNodeQuaternion()
	{
		long returnValue = getCurrentNodeQuaternion_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getCurrentNodeQuaternion_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Quaternion getCurrentNodeQuaternion_NoVirtual()
	{
		long returnValue = getCurrentNodeQuaternion_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}

	protected  void setGlobeAnimationsetEnabled_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setGlobeAnimationsetEnabled(enableParamValue);
	}

	native private void setGlobeAnimationsetEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置轨迹动画是否处于休眠状态
	 * @param enable 轨迹动画是否处于休眠状态
	 */
	public void setGlobeAnimationsetEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setGlobeAnimationsetEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setGlobeAnimationsetEnabled_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setGlobeAnimationsetEnabled_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setGlobeAnimationsetEnabled_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getGlobeAnimationsetEnabled_void_callback()
	{
		boolean returnValue = getGlobeAnimationsetEnabled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getGlobeAnimationsetEnabled_void(long pNativeObject);
	/**
	 * 获取轨迹动画是否处于休眠状态
	 * @return 轨迹动画是否处于休眠状态
	 */
	public boolean getGlobeAnimationsetEnabled()
	{
		boolean returnValue = getGlobeAnimationsetEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getGlobeAnimationsetEnabled_void_NoVirtual(long pNativeObject);
	protected boolean getGlobeAnimationsetEnabled_NoVirtual()
	{
		boolean returnValue = getGlobeAnimationsetEnabled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setGlobeAnimationsetArouseFrequency_ev_real64_callback(double frequency)
	{
		double frequencyParamValue = frequency;
		setGlobeAnimationsetArouseFrequency(frequencyParamValue);
	}

	native private void setGlobeAnimationsetArouseFrequency_ev_real64(long pNativeObject, double frequency);
	/**
	 * 设置轨迹动画的自动唤醒频率
	 * @param frequency 唤醒频率
	 */
	public void setGlobeAnimationsetArouseFrequency(double frequency)
	{
		double frequencyParamValue = frequency;
		setGlobeAnimationsetArouseFrequency_ev_real64(this.nativeObject.pointer, frequencyParamValue);
	}
	native private void setGlobeAnimationsetArouseFrequency_ev_real64_NoVirtual(long pNativeObject, double frequency);
	protected void setGlobeAnimationsetArouseFrequency_NoVirtual(double frequency)
	{
		double frequencyParamValue = frequency;
		setGlobeAnimationsetArouseFrequency_ev_real64_NoVirtual(this.nativeObject.pointer, frequencyParamValue);
	}

	protected  double getGlobeAnimationsetArouseFrequency_void_callback()
	{
		double returnValue = getGlobeAnimationsetArouseFrequency();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getGlobeAnimationsetArouseFrequency_void(long pNativeObject);
	/**
	 * 获取轨迹动画的自动唤醒频率
	 * @return 唤醒频率
	 */
	public double getGlobeAnimationsetArouseFrequency()
	{
		double returnValue = getGlobeAnimationsetArouseFrequency_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getGlobeAnimationsetArouseFrequency_void_NoVirtual(long pNativeObject);
	protected double getGlobeAnimationsetArouseFrequency_NoVirtual()
	{
		double returnValue = getGlobeAnimationsetArouseFrequency_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void forceArouseGlobeAnimation_void_callback()
	{
		forceArouseGlobeAnimation();
	}

	native private void forceArouseGlobeAnimation_void(long pNativeObject);
	/**
	 * 强制唤醒轨迹动画
	 */
	public void forceArouseGlobeAnimation()
	{
		forceArouseGlobeAnimation_void(this.nativeObject.pointer);
	}
	native private void forceArouseGlobeAnimation_void_NoVirtual(long pNativeObject);
	protected void forceArouseGlobeAnimation_NoVirtual()
	{
		forceArouseGlobeAnimation_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setModelEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setModelEnable(enableParamValue);
	}

	native private void setModelEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用模型
	 * @param enable 是否启用
	 */
	public void setModelEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setModelEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setModelEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setModelEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setModelEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getModelEnable_void_callback()
	{
		boolean returnValue = getModelEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getModelEnable_void(long pNativeObject);
	/**
	 * 获取是否启用模型
	 * @return 是否启用
	 */
	public boolean getModelEnable()
	{
		boolean returnValue = getModelEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getModelEnable_void_NoVirtual(long pNativeObject);
	protected boolean getModelEnable_NoVirtual()
	{
		boolean returnValue = getModelEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setParticleEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setParticleEnable(enableParamValue);
	}

	native private void setParticleEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用粒子
	 * @param enable 是否启用
	 */
	public void setParticleEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setParticleEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setParticleEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setParticleEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setParticleEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getParticleEnable_void_callback()
	{
		boolean returnValue = getParticleEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getParticleEnable_void(long pNativeObject);
	/**
	 * 获取是否启用粒子
	 * @return 是否启用
	 */
	public boolean getParticleEnable()
	{
		boolean returnValue = getParticleEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getParticleEnable_void_NoVirtual(long pNativeObject);
	protected boolean getParticleEnable_NoVirtual()
	{
		boolean returnValue = getParticleEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setRibbonTrailEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setRibbonTrailEnable(enableParamValue);
	}

	native private void setRibbonTrailEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用飘带
	 * @param enable 是否启用
	 */
	public void setRibbonTrailEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setRibbonTrailEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setRibbonTrailEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setRibbonTrailEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setRibbonTrailEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getRibbonTrailEnable_void_callback()
	{
		boolean returnValue = getRibbonTrailEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getRibbonTrailEnable_void(long pNativeObject);
	/**
	 * 获取是否启用飘带
	 * @return 是否启用
	 */
	public boolean getRibbonTrailEnable()
	{
		boolean returnValue = getRibbonTrailEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getRibbonTrailEnable_void_NoVirtual(long pNativeObject);
	protected boolean getRibbonTrailEnable_NoVirtual()
	{
		boolean returnValue = getRibbonTrailEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setScutcheonEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setScutcheonEnable(enableParamValue);
	}

	native private void setScutcheonEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用标牌
	 * @param enable 是否启用
	 */
	public void setScutcheonEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setScutcheonEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setScutcheonEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setScutcheonEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setScutcheonEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getScutcheonEnable_void_callback()
	{
		boolean returnValue = getScutcheonEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getScutcheonEnable_void(long pNativeObject);
	/**
	 * 获取是否启用标牌
	 * @return 是否启用
	 */
	public boolean getScutcheonEnable()
	{
		boolean returnValue = getScutcheonEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getScutcheonEnable_void_NoVirtual(long pNativeObject);
	protected boolean getScutcheonEnable_NoVirtual()
	{
		boolean returnValue = getScutcheonEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setTrackTrailEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setTrackTrailEnable(enableParamValue);
	}

	native private void setTrackTrailEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用航迹
	 * @param enable 是否启用
	 */
	public void setTrackTrailEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setTrackTrailEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setTrackTrailEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setTrackTrailEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setTrackTrailEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getTrackTrailEnable_void_callback()
	{
		boolean returnValue = getTrackTrailEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTrackTrailEnable_void(long pNativeObject);
	/**
	 * 获取是否启用航迹
	 * @return 是否启用
	 */
	public boolean getTrackTrailEnable()
	{
		boolean returnValue = getTrackTrailEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getTrackTrailEnable_void_NoVirtual(long pNativeObject);
	protected boolean getTrackTrailEnable_NoVirtual()
	{
		boolean returnValue = getTrackTrailEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean getPixelModeEnable_void_callback()
	{
		boolean returnValue = getPixelModeEnable();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getPixelModeEnable_void(long pNativeObject);
	/**
	 * 获取是否启用像素显示模式
	 * @return 是否启用
	 */
	public boolean getPixelModeEnable()
	{
		boolean returnValue = getPixelModeEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getPixelModeEnable_void_NoVirtual(long pNativeObject);
	protected boolean getPixelModeEnable_NoVirtual()
	{
		boolean returnValue = getPixelModeEnable_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPixelModeEnable_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setPixelModeEnable(enableParamValue);
	}

	native private void setPixelModeEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否启用像素显示模式
	 * @param enable 是否启用像素显示模式
	 */
	public void setPixelModeEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setPixelModeEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setPixelModeEnable_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setPixelModeEnable_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setPixelModeEnable_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  double getPixelModeScaleRatio_void_callback()
	{
		double returnValue = getPixelModeScaleRatio();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getPixelModeScaleRatio_void(long pNativeObject);
	/**
	 * 获取像素模式显示比例系数
	 * @return 像素模式显示比例系数
	 */
	public double getPixelModeScaleRatio()
	{
		double returnValue = getPixelModeScaleRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPixelModeScaleRatio_void_NoVirtual(long pNativeObject);
	protected double getPixelModeScaleRatio_NoVirtual()
	{
		double returnValue = getPixelModeScaleRatio_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setPixelModeScaleRatio_Real_callback(double scaleRatio)
	{
		double scaleRatioParamValue = scaleRatio;
		setPixelModeScaleRatio(scaleRatioParamValue);
	}

	native private void setPixelModeScaleRatio_Real(long pNativeObject, double scaleRatio);
	/**
	 * 设置像素模式显示比例系数
	 * @param enable 像素模式显示比例系数
	 */
	public void setPixelModeScaleRatio(double scaleRatio)
	{
		double scaleRatioParamValue = scaleRatio;
		setPixelModeScaleRatio_Real(this.nativeObject.pointer, scaleRatioParamValue);
	}
	native private void setPixelModeScaleRatio_Real_NoVirtual(long pNativeObject, double scaleRatio);
	protected void setPixelModeScaleRatio_NoVirtual(double scaleRatio)
	{
		double scaleRatioParamValue = scaleRatio;
		setPixelModeScaleRatio_Real_NoVirtual(this.nativeObject.pointer, scaleRatioParamValue);
	}

	protected  void setCameraNodeTrackOnLineMode_ev_bool_callback(boolean enable)
	{
		boolean enableParamValue = enable;
		setCameraNodeTrackOnLineMode(enableParamValue);
	}

	native private void setCameraNodeTrackOnLineMode_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置相机动画是否开启在线模式
	 * @param enable 是否开启在线模式
	 */
	public void setCameraNodeTrackOnLineMode(boolean enable)
	{
		boolean enableParamValue = enable;
		setCameraNodeTrackOnLineMode_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setCameraNodeTrackOnLineMode_ev_bool_NoVirtual(long pNativeObject, boolean enable);
	protected void setCameraNodeTrackOnLineMode_NoVirtual(boolean enable)
	{
		boolean enableParamValue = enable;
		setCameraNodeTrackOnLineMode_ev_bool_NoVirtual(this.nativeObject.pointer, enableParamValue);
	}

	protected  boolean getCameraNodeTrackOnLineMode_void_callback()
	{
		boolean returnValue = getCameraNodeTrackOnLineMode();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getCameraNodeTrackOnLineMode_void(long pNativeObject);
	/**
	 * 获取相机动画是否开启在线模式
	 * @return 是否开启在线模式
	 */
	public boolean getCameraNodeTrackOnLineMode()
	{
		boolean returnValue = getCameraNodeTrackOnLineMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCameraNodeTrackOnLineMode_void_NoVirtual(long pNativeObject);
	protected boolean getCameraNodeTrackOnLineMode_NoVirtual()
	{
		boolean returnValue = getCameraNodeTrackOnLineMode_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public DynamicModelObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicModelObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addResourceListener_CDynamicModelObjectResourceListener(long pNativeObject, String method);
	native protected void register_removeResourceListener_EVString(long pNativeObject, String method);
	native protected void register_setGlobeNodeTrackAltitudeMode_AltitudeMode(long pNativeObject, String method);
	native protected void register_getGlobeNodeTrackAltitudeMode_void(long pNativeObject, String method);
	native protected void register_removeAllTrackTrailPoint_void(long pNativeObject, String method);
	native protected void register_addTrackTrailPoint_CCoordinate(long pNativeObject, String method);
	native protected void register_getCurrentNodeScale_void(long pNativeObject, String method);
	native protected void register_getCurrentNodePosition_void(long pNativeObject, String method);
	native protected void register_getCurrentNodeQuaternion_void(long pNativeObject, String method);
	native protected void register_setGlobeAnimationsetEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_getGlobeAnimationsetEnabled_void(long pNativeObject, String method);
	native protected void register_setGlobeAnimationsetArouseFrequency_ev_real64(long pNativeObject, String method);
	native protected void register_getGlobeAnimationsetArouseFrequency_void(long pNativeObject, String method);
	native protected void register_forceArouseGlobeAnimation_void(long pNativeObject, String method);
	native protected void register_setModelEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getModelEnable_void(long pNativeObject, String method);
	native protected void register_setParticleEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getParticleEnable_void(long pNativeObject, String method);
	native protected void register_setRibbonTrailEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getRibbonTrailEnable_void(long pNativeObject, String method);
	native protected void register_setScutcheonEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getScutcheonEnable_void(long pNativeObject, String method);
	native protected void register_setTrackTrailEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getTrackTrailEnable_void(long pNativeObject, String method);
	native protected void register_getPixelModeEnable_void(long pNativeObject, String method);
	native protected void register_setPixelModeEnable_ev_bool(long pNativeObject, String method);
	native protected void register_getPixelModeScaleRatio_void(long pNativeObject, String method);
	native protected void register_setPixelModeScaleRatio_Real(long pNativeObject, String method);
	native protected void register_setCameraNodeTrackOnLineMode_ev_bool(long pNativeObject, String method);
	native protected void register_getCameraNodeTrackOnLineMode_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addResourceListener_CDynamicModelObjectResourceListener(this.nativeObject.pointer, "addResourceListener_CDynamicModelObjectResourceListener_callback");
			this.register_removeResourceListener_EVString(this.nativeObject.pointer, "removeResourceListener_EVString_callback");
			this.register_setGlobeNodeTrackAltitudeMode_AltitudeMode(this.nativeObject.pointer, "setGlobeNodeTrackAltitudeMode_AltitudeMode_callback");
			this.register_getGlobeNodeTrackAltitudeMode_void(this.nativeObject.pointer, "getGlobeNodeTrackAltitudeMode_void_callback");
			this.register_removeAllTrackTrailPoint_void(this.nativeObject.pointer, "removeAllTrackTrailPoint_void_callback");
			this.register_addTrackTrailPoint_CCoordinate(this.nativeObject.pointer, "addTrackTrailPoint_CCoordinate_callback");
			this.register_getCurrentNodeScale_void(this.nativeObject.pointer, "getCurrentNodeScale_void_callback");
			this.register_getCurrentNodePosition_void(this.nativeObject.pointer, "getCurrentNodePosition_void_callback");
			this.register_getCurrentNodeQuaternion_void(this.nativeObject.pointer, "getCurrentNodeQuaternion_void_callback");
			this.register_setGlobeAnimationsetEnabled_ev_bool(this.nativeObject.pointer, "setGlobeAnimationsetEnabled_ev_bool_callback");
			this.register_getGlobeAnimationsetEnabled_void(this.nativeObject.pointer, "getGlobeAnimationsetEnabled_void_callback");
			this.register_setGlobeAnimationsetArouseFrequency_ev_real64(this.nativeObject.pointer, "setGlobeAnimationsetArouseFrequency_ev_real64_callback");
			this.register_getGlobeAnimationsetArouseFrequency_void(this.nativeObject.pointer, "getGlobeAnimationsetArouseFrequency_void_callback");
			this.register_forceArouseGlobeAnimation_void(this.nativeObject.pointer, "forceArouseGlobeAnimation_void_callback");
			this.register_setModelEnable_ev_bool(this.nativeObject.pointer, "setModelEnable_ev_bool_callback");
			this.register_getModelEnable_void(this.nativeObject.pointer, "getModelEnable_void_callback");
			this.register_setParticleEnable_ev_bool(this.nativeObject.pointer, "setParticleEnable_ev_bool_callback");
			this.register_getParticleEnable_void(this.nativeObject.pointer, "getParticleEnable_void_callback");
			this.register_setRibbonTrailEnable_ev_bool(this.nativeObject.pointer, "setRibbonTrailEnable_ev_bool_callback");
			this.register_getRibbonTrailEnable_void(this.nativeObject.pointer, "getRibbonTrailEnable_void_callback");
			this.register_setScutcheonEnable_ev_bool(this.nativeObject.pointer, "setScutcheonEnable_ev_bool_callback");
			this.register_getScutcheonEnable_void(this.nativeObject.pointer, "getScutcheonEnable_void_callback");
			this.register_setTrackTrailEnable_ev_bool(this.nativeObject.pointer, "setTrackTrailEnable_ev_bool_callback");
			this.register_getTrackTrailEnable_void(this.nativeObject.pointer, "getTrackTrailEnable_void_callback");
			this.register_getPixelModeEnable_void(this.nativeObject.pointer, "getPixelModeEnable_void_callback");
			this.register_setPixelModeEnable_ev_bool(this.nativeObject.pointer, "setPixelModeEnable_ev_bool_callback");
			this.register_getPixelModeScaleRatio_void(this.nativeObject.pointer, "getPixelModeScaleRatio_void_callback");
			this.register_setPixelModeScaleRatio_Real(this.nativeObject.pointer, "setPixelModeScaleRatio_Real_callback");
			this.register_setCameraNodeTrackOnLineMode_ev_bool(this.nativeObject.pointer, "setCameraNodeTrackOnLineMode_ev_bool_callback");
			this.register_getCameraNodeTrackOnLineMode_void(this.nativeObject.pointer, "getCameraNodeTrackOnLineMode_void_callback");
		}
	}
	
	public static DynamicModelObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicModelObject obj = null;
 		if(baseObj instanceof DynamicModelObject)
		{
			obj = (DynamicModelObject)baseObj;
		} else {
			obj = new DynamicModelObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicModelObject");
			obj.increaseCast();
		}

		return obj;
	}
}
