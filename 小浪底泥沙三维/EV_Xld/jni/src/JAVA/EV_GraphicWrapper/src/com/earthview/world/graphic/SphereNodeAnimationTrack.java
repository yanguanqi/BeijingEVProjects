package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereNodeAnimationTrack extends com.earthview.world.graphic.AnimationTrack {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSphereNodeAnimationTrack", new SphereNodeAnimationTrackClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSphereNodeAnimationTrackProxy", new SphereNodeAnimationTrackClassFactory());
	}

	public static class SphereNodeAnimationTrackListener extends com.earthview.world.graphic.AnimationTrack.AnimationTrackListener {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener", new SphereNodeAnimationTrackListenerClassFactory());
			GlobalClassFactoryMap.put("EarthView::World::Graphic::CSphereNodeAnimationTrack::JCSphereNodeAnimationTrackListenerProxy", new SphereNodeAnimationTrackListenerClassFactory());
		}

		/**
		 * 构造函数
		 * @param  
		 */
		public SphereNodeAnimationTrackListener() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("JCSphereNodeAnimationTrackListenerProxy", null, true);
			this.registerCallback();
			if (!"com.earthview.world.graphic.SphereNodeAnimationTrack$SphereNodeAnimationTrackListener".equals(this.getClass().getName()))
			{
				this.setCustomExtend(true);
			}
		}

		protected  double getRadius_CSphereTransformKeyFrame_callback(long kf)
		{
			com.earthview.world.graphic.SphereTransformKeyFrame kfParamValue = (kf == 0L ? null : new com.earthview.world.graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate));
			if(kfParamValue != null)
			{
			kfParamValue.setDelegate(true);
			kfParamValue.setInstancePointer(new InstancePointer(kf));
			IClassFactory kfParamValueClassFactory = GlobalClassFactoryMap.get(kfParamValue.getCppInstanceTypeName());
			if (kfParamValueClassFactory != null)
			{
				kfParamValue.setDelegate(true);
				kfParamValue = (com.earthview.world.graphic.SphereTransformKeyFrame)kfParamValueClassFactory.create();
				kfParamValue.setDelegate(true);
				kfParamValue.setInstancePointer(new InstancePointer(kf));
			}
			}
			double returnValue = getRadius(kfParamValue);
			double __returnValue = returnValue;
			return __returnValue;
		}

		native private double getRadius_CSphereTransformKeyFrame(long pNativeObject, long kf);
		/**
		 * 关键帧插值
		 * @param t 动画轨迹
		 * @param timeIndex 时间索引
		 * @param kf 插值结果
		 * @return 标识是否插值成功
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

		protected  double getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback(double latA, double lonA, double latB, double lonB)
		{
			double latAParamValue = latA;
			double lonAParamValue = lonA;
			double latBParamValue = latB;
			double lonBParamValue = lonB;
			double returnValue = getHeading(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
			double __returnValue = returnValue;
			return __returnValue;
		}

		native private double getHeading_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latA, double lonA, double latB, double lonB);
		/**
		 * 根据两个控制点计算heading角
		 * @param latA 第一个纬度
		 * @param lonA 第一个经度
		 * @param latB 第二个纬度
		 * @param lonB 第二个经度
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

		protected  void getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback(long yawA, long pitchA, long rollA, long yawB, long pitchB, long rollB, double timeRatio, long yaw, long pitch, long roll)
		{
			com.earthview.world.spatial.math.Degree yawAParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			yawAParamValue.setDelegate(true);
			yawAParamValue.setInstancePointer(new InstancePointer(yawA));
			IClassFactory yawAParamValueClassFactory = GlobalClassFactoryMap.get(yawAParamValue.getCppInstanceTypeName());
			if (yawAParamValueClassFactory != null)
			{
				yawAParamValue.setDelegate(true);
				yawAParamValue = (com.earthview.world.spatial.math.Degree)yawAParamValueClassFactory.create();
				yawAParamValue.setDelegate(true);
				yawAParamValue.setInstancePointer(new InstancePointer(yawA));
			}
			com.earthview.world.spatial.math.Degree pitchAParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			pitchAParamValue.setDelegate(true);
			pitchAParamValue.setInstancePointer(new InstancePointer(pitchA));
			IClassFactory pitchAParamValueClassFactory = GlobalClassFactoryMap.get(pitchAParamValue.getCppInstanceTypeName());
			if (pitchAParamValueClassFactory != null)
			{
				pitchAParamValue.setDelegate(true);
				pitchAParamValue = (com.earthview.world.spatial.math.Degree)pitchAParamValueClassFactory.create();
				pitchAParamValue.setDelegate(true);
				pitchAParamValue.setInstancePointer(new InstancePointer(pitchA));
			}
			com.earthview.world.spatial.math.Degree rollAParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			rollAParamValue.setDelegate(true);
			rollAParamValue.setInstancePointer(new InstancePointer(rollA));
			IClassFactory rollAParamValueClassFactory = GlobalClassFactoryMap.get(rollAParamValue.getCppInstanceTypeName());
			if (rollAParamValueClassFactory != null)
			{
				rollAParamValue.setDelegate(true);
				rollAParamValue = (com.earthview.world.spatial.math.Degree)rollAParamValueClassFactory.create();
				rollAParamValue.setDelegate(true);
				rollAParamValue.setInstancePointer(new InstancePointer(rollA));
			}
			com.earthview.world.spatial.math.Degree yawBParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			yawBParamValue.setDelegate(true);
			yawBParamValue.setInstancePointer(new InstancePointer(yawB));
			IClassFactory yawBParamValueClassFactory = GlobalClassFactoryMap.get(yawBParamValue.getCppInstanceTypeName());
			if (yawBParamValueClassFactory != null)
			{
				yawBParamValue.setDelegate(true);
				yawBParamValue = (com.earthview.world.spatial.math.Degree)yawBParamValueClassFactory.create();
				yawBParamValue.setDelegate(true);
				yawBParamValue.setInstancePointer(new InstancePointer(yawB));
			}
			com.earthview.world.spatial.math.Degree pitchBParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			pitchBParamValue.setDelegate(true);
			pitchBParamValue.setInstancePointer(new InstancePointer(pitchB));
			IClassFactory pitchBParamValueClassFactory = GlobalClassFactoryMap.get(pitchBParamValue.getCppInstanceTypeName());
			if (pitchBParamValueClassFactory != null)
			{
				pitchBParamValue.setDelegate(true);
				pitchBParamValue = (com.earthview.world.spatial.math.Degree)pitchBParamValueClassFactory.create();
				pitchBParamValue.setDelegate(true);
				pitchBParamValue.setInstancePointer(new InstancePointer(pitchB));
			}
			com.earthview.world.spatial.math.Degree rollBParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			rollBParamValue.setDelegate(true);
			rollBParamValue.setInstancePointer(new InstancePointer(rollB));
			IClassFactory rollBParamValueClassFactory = GlobalClassFactoryMap.get(rollBParamValue.getCppInstanceTypeName());
			if (rollBParamValueClassFactory != null)
			{
				rollBParamValue.setDelegate(true);
				rollBParamValue = (com.earthview.world.spatial.math.Degree)rollBParamValueClassFactory.create();
				rollBParamValue.setDelegate(true);
				rollBParamValue.setInstancePointer(new InstancePointer(rollB));
			}
			double timeRatioParamValue = timeRatio;
			com.earthview.world.spatial.math.Degree yawParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			yawParamValue.setDelegate(true);
			yawParamValue.setInstancePointer(new InstancePointer(yaw));
			IClassFactory yawParamValueClassFactory = GlobalClassFactoryMap.get(yawParamValue.getCppInstanceTypeName());
			if (yawParamValueClassFactory != null)
			{
				yawParamValue.setDelegate(true);
				yawParamValue = (com.earthview.world.spatial.math.Degree)yawParamValueClassFactory.create();
				yawParamValue.setDelegate(true);
				yawParamValue.setInstancePointer(new InstancePointer(yaw));
			}
			com.earthview.world.spatial.math.Degree pitchParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			pitchParamValue.setDelegate(true);
			pitchParamValue.setInstancePointer(new InstancePointer(pitch));
			IClassFactory pitchParamValueClassFactory = GlobalClassFactoryMap.get(pitchParamValue.getCppInstanceTypeName());
			if (pitchParamValueClassFactory != null)
			{
				pitchParamValue.setDelegate(true);
				pitchParamValue = (com.earthview.world.spatial.math.Degree)pitchParamValueClassFactory.create();
				pitchParamValue.setDelegate(true);
				pitchParamValue.setInstancePointer(new InstancePointer(pitch));
			}
			com.earthview.world.spatial.math.Degree rollParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
			rollParamValue.setDelegate(true);
			rollParamValue.setInstancePointer(new InstancePointer(roll));
			IClassFactory rollParamValueClassFactory = GlobalClassFactoryMap.get(rollParamValue.getCppInstanceTypeName());
			if (rollParamValueClassFactory != null)
			{
				rollParamValue.setDelegate(true);
				rollParamValue = (com.earthview.world.spatial.math.Degree)rollParamValueClassFactory.create();
				rollParamValue.setDelegate(true);
				rollParamValue.setInstancePointer(new InstancePointer(roll));
			}
			getEuler(yawAParamValue, pitchAParamValue, rollAParamValue, yawBParamValue, pitchBParamValue, rollBParamValue, timeRatioParamValue, yawParamValue, pitchParamValue, rollParamValue);
		}

		native private void getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(long pNativeObject, long yawA, long pitchA, long rollA, long yawB, long pitchB, long rollB, double timeRatio, long yaw, long pitch, long roll);
		/**
		 * 计算当前帧的欧拉角
		 * @param yawA 第一个关键帧的yaw角
		 * @param pitchA 第一个关键帧的pitch角
		 * @param rollA 第一个关键帧的roll角
		 * @param yawB 第二个关键帧的yaw角
		 * @param pitchB 第二个关键帧的pitch角
		 * @param rollB 第二个关键帧的roll角
		 * @param timeRatio 时间比例
		 * @param yaw 返回的yaw角
		 * @param pitch 返回的pitch角
		 * @param roll 返回的roll角
		 */
		public void getEuler(com.earthview.world.spatial.math.Degree yawA, com.earthview.world.spatial.math.Degree pitchA, com.earthview.world.spatial.math.Degree rollA, com.earthview.world.spatial.math.Degree yawB, com.earthview.world.spatial.math.Degree pitchB, com.earthview.world.spatial.math.Degree rollB, double timeRatio, com.earthview.world.spatial.math.Degree yaw, com.earthview.world.spatial.math.Degree pitch, com.earthview.world.spatial.math.Degree roll)
		{
			long yawAParamValue = yawA.nativeObject.pointer;
			long pitchAParamValue = pitchA.nativeObject.pointer;
			long rollAParamValue = rollA.nativeObject.pointer;
			long yawBParamValue = yawB.nativeObject.pointer;
			long pitchBParamValue = pitchB.nativeObject.pointer;
			long rollBParamValue = rollB.nativeObject.pointer;
			double timeRatioParamValue = timeRatio;
			long yawParamValue = yaw.nativeObject.pointer;
			long pitchParamValue = pitch.nativeObject.pointer;
			long rollParamValue = roll.nativeObject.pointer;
			getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.nativeObject.pointer, yawAParamValue, pitchAParamValue, rollAParamValue, yawBParamValue, pitchBParamValue, rollBParamValue, timeRatioParamValue, yawParamValue, pitchParamValue, rollParamValue);
		}
		native private void getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(long pNativeObject, long yawA, long pitchA, long rollA, long yawB, long pitchB, long rollB, double timeRatio, long yaw, long pitch, long roll);
		protected void getEuler_NoVirtual(com.earthview.world.spatial.math.Degree yawA, com.earthview.world.spatial.math.Degree pitchA, com.earthview.world.spatial.math.Degree rollA, com.earthview.world.spatial.math.Degree yawB, com.earthview.world.spatial.math.Degree pitchB, com.earthview.world.spatial.math.Degree rollB, double timeRatio, com.earthview.world.spatial.math.Degree yaw, com.earthview.world.spatial.math.Degree pitch, com.earthview.world.spatial.math.Degree roll)
		{
			long yawAParamValue = yawA.nativeObject.pointer;
			long pitchAParamValue = pitchA.nativeObject.pointer;
			long rollAParamValue = rollA.nativeObject.pointer;
			long yawBParamValue = yawB.nativeObject.pointer;
			long pitchBParamValue = pitchB.nativeObject.pointer;
			long rollBParamValue = rollB.nativeObject.pointer;
			double timeRatioParamValue = timeRatio;
			long yawParamValue = yaw.nativeObject.pointer;
			long pitchParamValue = pitch.nativeObject.pointer;
			long rollParamValue = roll.nativeObject.pointer;
			getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(this.nativeObject.pointer, yawAParamValue, pitchAParamValue, rollAParamValue, yawBParamValue, pitchBParamValue, rollBParamValue, timeRatioParamValue, yawParamValue, pitchParamValue, rollParamValue);
		}

		native private void setEnabledToGetRadius_ev_bool(long pNativeObject, boolean enableGetRadius);
		/**
		 * 设置是否启用获取半径功能
		 * @param enableGetRadius 是否启用
		 */
		public void setEnabledToGetRadius(boolean enableGetRadius)
		{
			boolean enableGetRadiusParamValue = enableGetRadius;
			setEnabledToGetRadius_ev_bool(this.nativeObject.pointer, enableGetRadiusParamValue);
		}
		native private boolean getEnabledToGetRadius_void(long pNativeObject);
		/**
		 * 获取是否启用获取半径功能
		 */
		public boolean getEnabledToGetRadius()
		{
			boolean returnValue = getEnabledToGetRadius_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void setEnabledToGetHeading_ev_bool(long pNativeObject, boolean enableGetHeading);
		/**
		 * 设置是否启用获取偏航角功能
		 * @param enableGetHeading 是否启用
		 */
		public void setEnabledToGetHeading(boolean enableGetHeading)
		{
			boolean enableGetHeadingParamValue = enableGetHeading;
			setEnabledToGetHeading_ev_bool(this.nativeObject.pointer, enableGetHeadingParamValue);
		}
		native private boolean getEnabledToGetHeading_void(long pNativeObject);
		/**
		 * 获取是否启用获取偏航角功能
		 */
		public boolean getEnabledToGetHeading()
		{
			boolean returnValue = getEnabledToGetHeading_void(this.nativeObject.pointer);
			return returnValue;
		}
		native private void setEnabledToGetEuler_ev_bool(long pNativeObject, boolean enableGetEuler);
		/**
		 * 设置是否启用计算欧拉角功能
		 * @param enableGetEuler 是否启用
		 */
		public void setEnabledToGetEuler(boolean enableGetEuler)
		{
			boolean enableGetEulerParamValue = enableGetEuler;
			setEnabledToGetEuler_ev_bool(this.nativeObject.pointer, enableGetEulerParamValue);
		}
		native private boolean getEnabledToGetEuler_void(long pNativeObject);
		/**
		 * 获取是否启用计算欧拉角功能
		 */
		public boolean getEnabledToGetEuler()
		{
			boolean returnValue = getEnabledToGetEuler_void(this.nativeObject.pointer);
			return returnValue;
		}
		public SphereNodeAnimationTrackListener(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SphereNodeAnimationTrackListener(CreatedWhenConstruct cwc, String classNameStr) {
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
		
		native protected void register_getRadius_CSphereTransformKeyFrame(long pNativeObject, String method);
		native protected void register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
		native protected void register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(long pNativeObject, String method);
		native protected void register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(long pNativeObject, String method);
		
		public void registerCallback(){
			if (!this.nativeObject.equals(InstancePointer.ZERO)){
				this.register_getRadius_CSphereTransformKeyFrame(this.nativeObject.pointer, "getRadius_CSphereTransformKeyFrame_callback");
				this.register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback");
				this.register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(this.nativeObject.pointer, "getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback");
				this.register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame(this.nativeObject.pointer, "getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback");
			}
		}
		
		public static SphereNodeAnimationTrackListener fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SphereNodeAnimationTrackListener obj = null;
 			if(baseObj instanceof SphereNodeAnimationTrackListener)
			{
				obj = (SphereNodeAnimationTrackListener)baseObj;
			} else {
				obj = new SphereNodeAnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CSphereNodeAnimationTrackListener");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SphereNodeAnimationTrackListenerClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SphereNodeAnimationTrackListener emptyInstance = new SphereNodeAnimationTrackListener(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 */
	public SphereNodeAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		Create("JCSphereNodeAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SphereNodeAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param parent 动画对象
	 * @param handle 数字动画标识
	 * @param targetNode 目标节点对象
	 */
	public SphereNodeAnimationTrack(com.earthview.world.graphic.Animation ref_parent, int handle, com.earthview.world.graphic.Node ref_targetNode) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer handlePtr = new BasePointer(handle);
		list.add("handle", handlePtr.get());
		BasePointer ref_targetNodePtr = new BasePointer(ref_targetNode);
		list.add("ref_targetNode", ref_targetNodePtr.get());
		Create("JCSphereNodeAnimationTrackProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SphereNodeAnimationTrack".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createNodeKeyFrame_Real_callback(double timePos)
	{
		double timePosParamValue = timePos;
		com.earthview.world.graphic.SphereTransformKeyFrame returnValue = createNodeKeyFrame(timePosParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createNodeKeyFrame_Real(long pNativeObject, double timePos);
	/**
	 * 创建新的节点动画关键帧
	 * @param timePos 时间点
	 * @return 返回变换帧指针
	 */
	public com.earthview.world.graphic.SphereTransformKeyFrame createNodeKeyFrame(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createNodeKeyFrame_Real(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereTransformKeyFrame __returnValue = new com.earthview.world.graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CSphereTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereTransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereTransformKeyFrame");
		}
		return __returnValue;
	}
	native private long createNodeKeyFrame_Real_NoVirtual(long pNativeObject, double timePos);
	protected com.earthview.world.graphic.SphereTransformKeyFrame createNodeKeyFrame_NoVirtual(double timePos)
	{
		double timePosParamValue = timePos;
		long returnValue = createNodeKeyFrame_Real_NoVirtual(this.nativeObject.pointer, timePosParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereTransformKeyFrame __returnValue = new com.earthview.world.graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CSphereTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereTransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereTransformKeyFrame");
		}
		return __returnValue;
	}

	protected  long getAssociatedNode_void_callback()
	{
		com.earthview.world.graphic.Node returnValue = getAssociatedNode();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAssociatedNode_void(long pNativeObject);
	/**
	 * 获得节点动画轨迹相关节点对象
	 * @param  
	 * @return 相关节点对象
	 */
	public com.earthview.world.graphic.Node getAssociatedNode()
	{
		long returnValue = getAssociatedNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}
	native private long getAssociatedNode_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.Node getAssociatedNode_NoVirtual()
	{
		long returnValue = getAssociatedNode_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Node __returnValue = new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate, "CNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Node)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CNode");
		}
		return __returnValue;
	}

	protected  void setAssociatedNode_CNode_callback(long ref_node)
	{
		com.earthview.world.graphic.Node ref_nodeParamValue = (ref_node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_nodeParamValue != null)
		{
		ref_nodeParamValue.setDelegate(true);
		ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		IClassFactory ref_nodeParamValueClassFactory = GlobalClassFactoryMap.get(ref_nodeParamValue.getCppInstanceTypeName());
		if (ref_nodeParamValueClassFactory != null)
		{
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue = (com.earthview.world.graphic.Node)ref_nodeParamValueClassFactory.create();
			ref_nodeParamValue.setDelegate(true);
			ref_nodeParamValue.setInstancePointer(new InstancePointer(ref_node));
		}
		}
		setAssociatedNode(ref_nodeParamValue);
	}

	native private void setAssociatedNode_CNode(long pNativeObject, long ref_node);
	/**
	 * 设置节点动画轨迹相关节点对象
	 * @param node 相关节点对象
	 */
	public void setAssociatedNode(com.earthview.world.graphic.Node ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		setAssociatedNode_CNode(this.nativeObject.pointer, ref_nodeParamValue);
	}
	native private void setAssociatedNode_CNode_NoVirtual(long pNativeObject, long ref_node);
	protected void setAssociatedNode_NoVirtual(com.earthview.world.graphic.Node ref_node)
	{
		long ref_nodeParamValue = (ref_node == null ? 0L : ref_node.nativeObject.pointer);
		setAssociatedNode_CNode_NoVirtual(this.nativeObject.pointer, ref_nodeParamValue);
	}

	protected  void applyToNode_CNode_CTimeIndex_Real_Real_callback(long node, long timeIndex, double weight, double scale)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToNode(nodeParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	native private void applyToNode_CNode_CTimeIndex_Real_Real(long pNativeObject, long node, long timeIndex, double weight, double scale);
	/**
	 * 动画轨迹应用到特定的节点
	 * @param node 节点
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 * @param scale 动画大小变化比例
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToNode_CNode_CTimeIndex_Real_Real(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}
	native private void applyToNode_CNode_CTimeIndex_Real_Real_NoVirtual(long pNativeObject, long node, long timeIndex, double weight, double scale);
	protected void applyToNode_NoVirtual(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		applyToNode_CNode_CTimeIndex_Real_Real_NoVirtual(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	protected  void applyToNode_CNode_CTimeIndex_Real_callback(long node, long timeIndex, double weight)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		double weightParamValue = weight;
		applyToNode(nodeParamValue, timeIndexParamValue, weightParamValue);
	}

	native private void applyToNode_CNode_CTimeIndex_Real(long pNativeObject, long node, long timeIndex, double weight);
	/**
	 * 动画轨迹应用到特定的节点
	 * @param node 节点
	 * @param timeIndex 时间索引
	 * @param weight 权重
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToNode_CNode_CTimeIndex_Real(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue);
	}
	native private void applyToNode_CNode_CTimeIndex_Real_NoVirtual(long pNativeObject, long node, long timeIndex, double weight);
	protected void applyToNode_NoVirtual(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		applyToNode_CNode_CTimeIndex_Real_NoVirtual(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue, weightParamValue);
	}

	protected  void applyToNode_CNode_CTimeIndex_callback(long node, long timeIndex)
	{
		com.earthview.world.graphic.Node nodeParamValue = (node == 0L ? null : new com.earthview.world.graphic.Node(CreatedWhenConstruct.CWC_NotToCreate));
		if(nodeParamValue != null)
		{
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.Node)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		}
		com.earthview.world.graphic.TimeIndex timeIndexParamValue = new com.earthview.world.graphic.TimeIndex(CreatedWhenConstruct.CWC_NotToCreate);
		timeIndexParamValue.setDelegate(true);
		timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		IClassFactory timeIndexParamValueClassFactory = GlobalClassFactoryMap.get(timeIndexParamValue.getCppInstanceTypeName());
		if (timeIndexParamValueClassFactory != null)
		{
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue = (com.earthview.world.graphic.TimeIndex)timeIndexParamValueClassFactory.create();
			timeIndexParamValue.setDelegate(true);
			timeIndexParamValue.setInstancePointer(new InstancePointer(timeIndex));
		}
		applyToNode(nodeParamValue, timeIndexParamValue);
	}

	native private void applyToNode_CNode_CTimeIndex(long pNativeObject, long node, long timeIndex);
	/**
	 * 动画轨迹应用到特定的节点
	 * @param node 节点
	 * @param timeIndex 时间索引
	 */
	public void applyToNode(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToNode_CNode_CTimeIndex(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue);
	}
	native private void applyToNode_CNode_CTimeIndex_NoVirtual(long pNativeObject, long node, long timeIndex);
	protected void applyToNode_NoVirtual(com.earthview.world.graphic.Node node, com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long nodeParamValue = (node == null ? 0L : node.nativeObject.pointer);
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		applyToNode_CNode_CTimeIndex_NoVirtual(this.nativeObject.pointer, nodeParamValue, timeIndexParamValue);
	}

	native private void getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(long pNativeObject, long timeIndex, long kf);
	/**
	 * 关键帧插值
	 * @param timeIndex 时间索引
	 * @param kf 插值结果
	 */
	public void getInterpolatedKeyFrame(com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
		getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(this.nativeObject.pointer, timeIndexParamValue, kfParamValue);
	}
	native private void getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_NoVirtual(long pNativeObject, long timeIndex, long kf);
	protected void getInterpolatedKeyFrame_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, com.earthview.world.graphic.KeyFrame kf)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		long kfParamValue = (kf == null ? 0L : kf.nativeObject.pointer);
		getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, kfParamValue);
	}

	native private void apply_CTimeIndex_Real_Real(long pNativeObject, long timeIndex, double weight, double scale);
	/**
	 * 对特定的节点动画帧应用动画轨迹
	 * @param timeIndex 时间索引
	 * @param weight 动画轨迹影响权重
	 * @param scale 动画大小变换比例
	 */
	public void apply(com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply_CTimeIndex_Real_Real(this.nativeObject.pointer, timeIndexParamValue, weightParamValue, scaleParamValue);
	}
	native private void apply_CTimeIndex_Real_Real_NoVirtual(long pNativeObject, long timeIndex, double weight, double scale);
	protected void apply_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, double weight, double scale)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		double scaleParamValue = scale;
		apply_CTimeIndex_Real_Real_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, weightParamValue, scaleParamValue);
	}

	native private void apply_CTimeIndex_Real(long pNativeObject, long timeIndex, double weight);
	/**
	 * 对特定的节点动画帧应用动画轨迹
	 * @param timeIndex 时间索引
	 * @param weight 动画轨迹影响权重
	 */
	public void apply(com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		apply_CTimeIndex_Real(this.nativeObject.pointer, timeIndexParamValue, weightParamValue);
	}
	native private void apply_CTimeIndex_Real_NoVirtual(long pNativeObject, long timeIndex, double weight);
	protected void apply_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex, double weight)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		double weightParamValue = weight;
		apply_CTimeIndex_Real_NoVirtual(this.nativeObject.pointer, timeIndexParamValue, weightParamValue);
	}

	native private void apply_CTimeIndex(long pNativeObject, long timeIndex);
	/**
	 * 对特定的节点动画帧应用动画轨迹
	 * @param timeIndex 时间索引
	 */
	public void apply(com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		apply_CTimeIndex(this.nativeObject.pointer, timeIndexParamValue);
	}
	native private void apply_CTimeIndex_NoVirtual(long pNativeObject, long timeIndex);
	protected void apply_NoVirtual(com.earthview.world.graphic.TimeIndex timeIndex)
	{
		long timeIndexParamValue = timeIndex.nativeObject.pointer;
		apply_CTimeIndex_NoVirtual(this.nativeObject.pointer, timeIndexParamValue);
	}

	native private void _keyFrameDataChanged_void(long pNativeObject);
	/**
	 * 通知动画轨迹动画帧已经改变
	 * @param  
	 */
	public void _keyFrameDataChanged()
	{
		_keyFrameDataChanged_void(this.nativeObject.pointer);
	}
	native private void _keyFrameDataChanged_void_NoVirtual(long pNativeObject);
	protected void _keyFrameDataChanged_NoVirtual()
	{
		_keyFrameDataChanged_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getNodeKeyFrame_ev_uint16_callback(int index)
	{
		int indexParamValue = index;
		com.earthview.world.graphic.SphereTransformKeyFrame returnValue = getNodeKeyFrame(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getNodeKeyFrame_ev_uint16(long pNativeObject, int index);
	/**
	 * 根据索引返回节点动画
	 * @param index 动画索引
	 * @return 返回变换节点动画
	 */
	public com.earthview.world.graphic.SphereTransformKeyFrame getNodeKeyFrame(int index)
	{
		int indexParamValue = index;
		long returnValue = getNodeKeyFrame_ev_uint16(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereTransformKeyFrame __returnValue = new com.earthview.world.graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CSphereTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereTransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereTransformKeyFrame");
		}
		return __returnValue;
	}
	native private long getNodeKeyFrame_ev_uint16_NoVirtual(long pNativeObject, int index);
	protected com.earthview.world.graphic.SphereTransformKeyFrame getNodeKeyFrame_NoVirtual(int index)
	{
		int indexParamValue = index;
		long returnValue = getNodeKeyFrame_ev_uint16_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereTransformKeyFrame __returnValue = new com.earthview.world.graphic.SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CSphereTransformKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereTransformKeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereTransformKeyFrame");
		}
		return __returnValue;
	}

	native private long _clone_CAnimation(long pNativeObject, long newParent);
	/**
	 * /clone节点动画轨迹/
	 * @param  
	 * @param  
	 * @param newParent 所属动画序列
	 * @return 数字动画轨迹指针
	 */
	public com.earthview.world.graphic.SphereNodeAnimationTrack _clone(com.earthview.world.graphic.Animation newParent)
	{
		long newParentParamValue = (newParent == null ? 0L : newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimation(this.nativeObject.pointer, newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SphereNodeAnimationTrack __returnValue = new com.earthview.world.graphic.SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate, "CSphereNodeAnimationTrack");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SphereNodeAnimationTrack)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSphereNodeAnimationTrack");
		}
		return __returnValue;
	}
	native private void setListener_CAnimationTrackListener(long pNativeObject, long ref_l);
	public void setListener(com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		setListener_CAnimationTrackListener(this.nativeObject.pointer, ref_lParamValue);
	}
	native private void setListener_CAnimationTrackListener_NoVirtual(long pNativeObject, long ref_l);
	protected void setListener_NoVirtual(com.earthview.world.graphic.AnimationTrack.AnimationTrackListener ref_l)
	{
		long ref_lParamValue = (ref_l == null ? 0L : ref_l.nativeObject.pointer);
		setListener_CAnimationTrackListener_NoVirtual(this.nativeObject.pointer, ref_lParamValue);
	}

	native private void _applyBaseKeyFrame_CKeyFrame(long pNativeObject, long base);
	/**
	 * 应用关键帧
	 * @param newParent 所属动画序列
	 * @return 数字动画轨迹指针
	 */
	public void _applyBaseKeyFrame(com.earthview.world.graphic.KeyFrame base)
	{
		long baseParamValue = (base == null ? 0L : base.nativeObject.pointer);
		_applyBaseKeyFrame_CKeyFrame(this.nativeObject.pointer, baseParamValue);
	}
	native private void _applyBaseKeyFrame_CKeyFrame_NoVirtual(long pNativeObject, long base);
	protected void _applyBaseKeyFrame_NoVirtual(com.earthview.world.graphic.KeyFrame base)
	{
		long baseParamValue = (base == null ? 0L : base.nativeObject.pointer);
		_applyBaseKeyFrame_CKeyFrame_NoVirtual(this.nativeObject.pointer, baseParamValue);
	}

	native private long createKeyFrameImpl_Real(long pNativeObject, double time);
	/**
	 * 创建关键帧执行实例
	 * @param time 动画时间
	 * @return 关键帧对象
	 */
	public com.earthview.world.graphic.KeyFrame createKeyFrameImpl(double time)
	{
		double timeParamValue = time;
		long returnValue = createKeyFrameImpl_Real(this.nativeObject.pointer, timeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long createKeyFrameImpl_Real_NoVirtual(long pNativeObject, double time);
	protected com.earthview.world.graphic.KeyFrame createKeyFrameImpl_NoVirtual(double time)
	{
		double timeParamValue = time;
		long returnValue = createKeyFrameImpl_Real_NoVirtual(this.nativeObject.pointer, timeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	public SphereNodeAnimationTrack(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SphereNodeAnimationTrack(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 返回动画中关键帧数量
	 * @param  
	 * @return 关键帧数量
	 */
	public int getNumKeyFrames()
	{
		return super.getNumKeyFrames_NoVirtual();
	}
	/**
	 * 根据索引获得关键帧
	 * @param index 关键帧索引
	 * @return 关键帧指针
	 */
	public com.earthview.world.graphic.KeyFrame getKeyFrame(int index)
	{
		return super.getKeyFrame_NoVirtual(index);
	}
	/**
	 * 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引
	 * @param timeIndex 时间索引
	 * @param keyFrame1 关键帧1
	 * @param keyFrame2 关键帧2
	 * @param firstKeyIndex 关键帧索引
	 * @return 前后两关键帧之间的时间距离
	 */
	public double getKeyFramesAtTime(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2, UShortPointer firstKeyIndex)
	{
		return super.getKeyFramesAtTime_NoVirtual(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
	}
	/**
	 * 返回某时间点前后激活状态的关键帧，及从当前时间点开始的帧索引，当前关键帧索引0
	 * @param timeIndex 时间索引
	 * @param keyFrame1 关键帧1
	 * @param keyFrame2 关键帧2
	 * @return 前后两关键帧之间的时间距离
	 */
	public double getKeyFramesAtTime(com.earthview.world.graphic.TimeIndex timeIndex, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame1, NativeObjectPointer<com.earthview.world.graphic.KeyFrame> keyFrame2)
	{
		return super.getKeyFramesAtTime_NoVirtual(timeIndex, keyFrame1, keyFrame2);
	}
	/**
	 * 在给定的时间点创建关键帧
	 * @param timePos 时间点
	 * @return 创建的关键帧
	 */
	public com.earthview.world.graphic.KeyFrame createKeyFrame(double timePos)
	{
		return super.createKeyFrame_NoVirtual(timePos);
	}
	/**
	 * 根据索引删除关键帧
	 * @param index 关键帧索引
	 */
	public void removeKeyFrame(int index)
	{
		super.removeKeyFrame_NoVirtual(index);
	}
	/**
	 * 删除所有关键帧
	 * @param 0 0
	 */
	public void removeAllKeyFrames()
	{
		super.removeAllKeyFrames_NoVirtual();
	}
	/**
	 * 判断动画轨迹是否含有效帧
	 * @param  
	 * @return 存在返回true，否则false
	 */
	public boolean hasNonZeroKeyFrames()
	{
		return super.hasNonZeroKeyFrames_NoVirtual();
	}
	/**
	 * 通过删除相同关键帧优化动画轨迹
	 * @param  
	 */
	public void optimise()
	{
		super.optimise_NoVirtual();
	}
	/**
	 * 以唯一、有序的排列方式收集关键帧时间
	 * @param keyFrameTimes 关键帧时间对象
	 */
	public void _collectKeyFrameTimes(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		super._collectKeyFrameTimes_NoVirtual(keyFrameTimes);
	}
	/**
	 * 创建关键帧时间索引集合
	 * @param keyFrameTimes 关键帧时间对象
	 */
	public void _buildKeyFrameIndexMap(com.earthview.world.graphic.AnimationTrack.KeyFrameTimes keyFrameTimes)
	{
		super._buildKeyFrameIndexMap_NoVirtual(keyFrameTimes);
	}
	/**
	 * clone动画轨迹
	 * @param clone 动画轨迹
	 */
	public void populateClone(com.earthview.world.graphic.AnimationTrack clone)
	{
		super.populateClone_NoVirtual(clone);
	}
	
	native protected void register_createNodeKeyFrame_Real(long pNativeObject, String method);
	native protected void register_getAssociatedNode_void(long pNativeObject, String method);
	native protected void register_setAssociatedNode_CNode(long pNativeObject, String method);
	native protected void register_applyToNode_CNode_CTimeIndex_Real_Real(long pNativeObject, String method);
	native protected void register_applyToNode_CNode_CTimeIndex_Real(long pNativeObject, String method);
	native protected void register_applyToNode_CNode_CTimeIndex(long pNativeObject, String method);
	native protected void register_getNodeKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_getNumKeyFrames_void(long pNativeObject, String method);
	native protected void register_getKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame(long pNativeObject, String method);
	native protected void register_createKeyFrame_Real(long pNativeObject, String method);
	native protected void register_removeKeyFrame_ev_uint16(long pNativeObject, String method);
	native protected void register_removeAllKeyFrames_void(long pNativeObject, String method);
	native protected void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(long pNativeObject, String method);
	native protected void register_apply_CTimeIndex_Real_Real(long pNativeObject, String method);
	native protected void register_apply_CTimeIndex_Real(long pNativeObject, String method);
	native protected void register_apply_CTimeIndex(long pNativeObject, String method);
	native protected void register__keyFrameDataChanged_void(long pNativeObject, String method);
	native protected void register_hasNonZeroKeyFrames_void(long pNativeObject, String method);
	native protected void register_optimise_void(long pNativeObject, String method);
	native protected void register__collectKeyFrameTimes_KeyFrameTimes(long pNativeObject, String method);
	native protected void register__buildKeyFrameIndexMap_KeyFrameTimes(long pNativeObject, String method);
	native protected void register__applyBaseKeyFrame_CKeyFrame(long pNativeObject, String method);
	native protected void register_setListener_CAnimationTrackListener(long pNativeObject, String method);
	native protected void register_createKeyFrameImpl_Real(long pNativeObject, String method);
	native protected void register_populateClone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createNodeKeyFrame_Real(this.nativeObject.pointer, "createNodeKeyFrame_Real_callback");
			this.register_getAssociatedNode_void(this.nativeObject.pointer, "getAssociatedNode_void_callback");
			this.register_setAssociatedNode_CNode(this.nativeObject.pointer, "setAssociatedNode_CNode_callback");
			this.register_applyToNode_CNode_CTimeIndex_Real_Real(this.nativeObject.pointer, "applyToNode_CNode_CTimeIndex_Real_Real_callback");
			this.register_applyToNode_CNode_CTimeIndex_Real(this.nativeObject.pointer, "applyToNode_CNode_CTimeIndex_Real_callback");
			this.register_applyToNode_CNode_CTimeIndex(this.nativeObject.pointer, "applyToNode_CNode_CTimeIndex_callback");
			this.register_getNodeKeyFrame_ev_uint16(this.nativeObject.pointer, "getNodeKeyFrame_ev_uint16_callback");
			this.register_getNumKeyFrames_void(this.nativeObject.pointer, "getNumKeyFrames_void_callback");
			this.register_getKeyFrame_ev_uint16(this.nativeObject.pointer, "getKeyFrame_ev_uint16_callback");
			this.register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(this.nativeObject.pointer, "getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
			this.register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame(this.nativeObject.pointer, "getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
			this.register_createKeyFrame_Real(this.nativeObject.pointer, "createKeyFrame_Real_callback");
			this.register_removeKeyFrame_ev_uint16(this.nativeObject.pointer, "removeKeyFrame_ev_uint16_callback");
			this.register_removeAllKeyFrames_void(this.nativeObject.pointer, "removeAllKeyFrames_void_callback");
			this.register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame(this.nativeObject.pointer, "getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
			this.register_apply_CTimeIndex_Real_Real(this.nativeObject.pointer, "apply_CTimeIndex_Real_Real_callback");
			this.register_apply_CTimeIndex_Real(this.nativeObject.pointer, "apply_CTimeIndex_Real_callback");
			this.register_apply_CTimeIndex(this.nativeObject.pointer, "apply_CTimeIndex_callback");
			this.register__keyFrameDataChanged_void(this.nativeObject.pointer, "_keyFrameDataChanged_void_callback");
			this.register_hasNonZeroKeyFrames_void(this.nativeObject.pointer, "hasNonZeroKeyFrames_void_callback");
			this.register_optimise_void(this.nativeObject.pointer, "optimise_void_callback");
			this.register__collectKeyFrameTimes_KeyFrameTimes(this.nativeObject.pointer, "_collectKeyFrameTimes_KeyFrameTimes_callback");
			this.register__buildKeyFrameIndexMap_KeyFrameTimes(this.nativeObject.pointer, "_buildKeyFrameIndexMap_KeyFrameTimes_callback");
			this.register__applyBaseKeyFrame_CKeyFrame(this.nativeObject.pointer, "_applyBaseKeyFrame_CKeyFrame_callback");
			this.register_setListener_CAnimationTrackListener(this.nativeObject.pointer, "setListener_CAnimationTrackListener_callback");
			this.register_createKeyFrameImpl_Real(this.nativeObject.pointer, "createKeyFrameImpl_Real_callback");
			this.register_populateClone_CAnimationTrack(this.nativeObject.pointer, "populateClone_CAnimationTrack_callback");
		}
	}
	
	public static SphereNodeAnimationTrack fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SphereNodeAnimationTrack obj = null;
 		if(baseObj instanceof SphereNodeAnimationTrack)
		{
			obj = (SphereNodeAnimationTrack)baseObj;
		} else {
			obj = new SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSphereNodeAnimationTrack");
			obj.increaseCast();
		}

		return obj;
	}
}
