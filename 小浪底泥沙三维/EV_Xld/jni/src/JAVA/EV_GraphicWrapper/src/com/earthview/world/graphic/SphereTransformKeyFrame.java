package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereTransformKeyFrame extends com.earthview.world.graphic.KeyFrame {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSphereTransformKeyFrame", new SphereTransformKeyFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCSphereTransformKeyFrameProxy", new SphereTransformKeyFrameClassFactory());
	}

	/**
	 * 构造函数
	 * @param parent 动画轨迹对象
	 * @param time 变换的关键帧时间点
	 */
	public SphereTransformKeyFrame(com.earthview.world.graphic.AnimationTrack ref_parent, double time) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		Create("JCSphereTransformKeyFrameProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.SphereTransformKeyFrame".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void setLatiude_ev_real64_callback(double latitude)
	{
		double latitudeParamValue = latitude;
		setLatiude(latitudeParamValue);
	}

	native private void setLatiude_ev_real64(long pNativeObject, double latitude);
	/**
	 * 设置纬度
	 * @param latitude 纬度
	 */
	public void setLatiude(double latitude)
	{
		double latitudeParamValue = latitude;
		setLatiude_ev_real64(this.nativeObject.pointer, latitudeParamValue);
	}
	native private void setLatiude_ev_real64_NoVirtual(long pNativeObject, double latitude);
	protected void setLatiude_NoVirtual(double latitude)
	{
		double latitudeParamValue = latitude;
		setLatiude_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue);
	}

	native private double getLatiude_void(long pNativeObject);
	/**
	 * 获取纬度
	 */
	public double getLatiude()
	{
		double returnValue = getLatiude_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setLongitude_ev_real64_callback(double longitude)
	{
		double longitudeParamValue = longitude;
		setLongitude(longitudeParamValue);
	}

	native private void setLongitude_ev_real64(long pNativeObject, double longitude);
	/**
	 * 设置经度
	 * @param longitude 经度
	 */
	public void setLongitude(double longitude)
	{
		double longitudeParamValue = longitude;
		setLongitude_ev_real64(this.nativeObject.pointer, longitudeParamValue);
	}
	native private void setLongitude_ev_real64_NoVirtual(long pNativeObject, double longitude);
	protected void setLongitude_NoVirtual(double longitude)
	{
		double longitudeParamValue = longitude;
		setLongitude_ev_real64_NoVirtual(this.nativeObject.pointer, longitudeParamValue);
	}

	native private double getLongitude_void(long pNativeObject);
	/**
	 * 获取经度
	 */
	public double getLongitude()
	{
		double returnValue = getLongitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void setHeading_ev_real64_callback(double heading)
	{
		double headingParamValue = heading;
		setHeading(headingParamValue);
	}

	native private void setHeading_ev_real64(long pNativeObject, double heading);
	/**
	 * 设置偏航角
	 * @param heading 偏航角
	 */
	public void setHeading(double heading)
	{
		double headingParamValue = heading;
		setHeading_ev_real64(this.nativeObject.pointer, headingParamValue);
	}
	native private void setHeading_ev_real64_NoVirtual(long pNativeObject, double heading);
	protected void setHeading_NoVirtual(double heading)
	{
		double headingParamValue = heading;
		setHeading_ev_real64_NoVirtual(this.nativeObject.pointer, headingParamValue);
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
	protected  void setRadius_ev_real64_callback(double radius)
	{
		double radiusParamValue = radius;
		setRadius(radiusParamValue);
	}

	native private void setRadius_ev_real64(long pNativeObject, double radius);
	/**
	 * 设置半径
	 * @param radius 半径
	 */
	public void setRadius(double radius)
	{
		double radiusParamValue = radius;
		setRadius_ev_real64(this.nativeObject.pointer, radiusParamValue);
	}
	native private void setRadius_ev_real64_NoVirtual(long pNativeObject, double radius);
	protected void setRadius_NoVirtual(double radius)
	{
		double radiusParamValue = radius;
		setRadius_ev_real64_NoVirtual(this.nativeObject.pointer, radiusParamValue);
	}

	protected  double getRadius_void_callback()
	{
		double returnValue = getRadius();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRadius_void(long pNativeObject);
	/**
	 * 获取半径
	 */
	public double getRadius()
	{
		double returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRadius_void_NoVirtual(long pNativeObject);
	protected double getRadius_NoVirtual()
	{
		double returnValue = getRadius_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setYaw_CDegree_callback(long yaw)
	{
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
		setYaw(yawParamValue);
	}

	native private void setYaw_CDegree(long pNativeObject, long yaw);
	/**
	 * 设置yaw角
	 * @param yaw yaw角
	 */
	public void setYaw(com.earthview.world.spatial.math.Degree yaw)
	{
		long yawParamValue = yaw.nativeObject.pointer;
		setYaw_CDegree(this.nativeObject.pointer, yawParamValue);
	}
	native private void setYaw_CDegree_NoVirtual(long pNativeObject, long yaw);
	protected void setYaw_NoVirtual(com.earthview.world.spatial.math.Degree yaw)
	{
		long yawParamValue = yaw.nativeObject.pointer;
		setYaw_CDegree_NoVirtual(this.nativeObject.pointer, yawParamValue);
	}

	protected  long getYaw_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getYaw();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getYaw_void(long pNativeObject);
	/**
	 * 获取yaw角
	 */
	public com.earthview.world.spatial.math.Degree getYaw()
	{
		long returnValue = getYaw_void(this.nativeObject.pointer);
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
	native private long getYaw_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getYaw_NoVirtual()
	{
		long returnValue = getYaw_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setPitch_CDegree_callback(long pitch)
	{
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
		setPitch(pitchParamValue);
	}

	native private void setPitch_CDegree(long pNativeObject, long pitch);
	/**
	 * 设置pitch角
	 * @param pitch pitch角
	 */
	public void setPitch(com.earthview.world.spatial.math.Degree pitch)
	{
		long pitchParamValue = pitch.nativeObject.pointer;
		setPitch_CDegree(this.nativeObject.pointer, pitchParamValue);
	}
	native private void setPitch_CDegree_NoVirtual(long pNativeObject, long pitch);
	protected void setPitch_NoVirtual(com.earthview.world.spatial.math.Degree pitch)
	{
		long pitchParamValue = pitch.nativeObject.pointer;
		setPitch_CDegree_NoVirtual(this.nativeObject.pointer, pitchParamValue);
	}

	protected  long getPitch_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getPitch();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPitch_void(long pNativeObject);
	/**
	 * 获取pitch角
	 */
	public com.earthview.world.spatial.math.Degree getPitch()
	{
		long returnValue = getPitch_void(this.nativeObject.pointer);
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
	native private long getPitch_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getPitch_NoVirtual()
	{
		long returnValue = getPitch_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setRoll_CDegree_callback(long roll)
	{
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
		setRoll(rollParamValue);
	}

	native private void setRoll_CDegree(long pNativeObject, long roll);
	/**
	 * 设置roll角
	 * @param bank roll角
	 */
	public void setRoll(com.earthview.world.spatial.math.Degree roll)
	{
		long rollParamValue = roll.nativeObject.pointer;
		setRoll_CDegree(this.nativeObject.pointer, rollParamValue);
	}
	native private void setRoll_CDegree_NoVirtual(long pNativeObject, long roll);
	protected void setRoll_NoVirtual(com.earthview.world.spatial.math.Degree roll)
	{
		long rollParamValue = roll.nativeObject.pointer;
		setRoll_CDegree_NoVirtual(this.nativeObject.pointer, rollParamValue);
	}

	protected  long getRoll_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getRoll();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getRoll_void(long pNativeObject);
	/**
	 * 获取roll角
	 */
	public com.earthview.world.spatial.math.Degree getRoll()
	{
		long returnValue = getRoll_void(this.nativeObject.pointer);
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
	native private long getRoll_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getRoll_NoVirtual()
	{
		long returnValue = getRoll_void_NoVirtual(this.nativeObject.pointer);
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

	native private long _clone_CAnimationTrack(long pNativeObject, long ref_newParent);
	public com.earthview.world.graphic.KeyFrame _clone(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}
	native private long _clone_CAnimationTrack_NoVirtual(long pNativeObject, long ref_newParent);
	protected com.earthview.world.graphic.KeyFrame _clone_NoVirtual(com.earthview.world.graphic.AnimationTrack ref_newParent)
	{
		long ref_newParentParamValue = (ref_newParent == null ? 0L : ref_newParent.nativeObject.pointer);
		long returnValue = _clone_CAnimationTrack_NoVirtual(this.nativeObject.pointer, ref_newParentParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.KeyFrame __returnValue = new com.earthview.world.graphic.KeyFrame(CreatedWhenConstruct.CWC_NotToCreate, "CKeyFrame");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.KeyFrame)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKeyFrame");
		}
		return __returnValue;
	}

	public SphereTransformKeyFrame(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SphereTransformKeyFrame(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setLatiude_ev_real64(long pNativeObject, String method);
	native protected void register_setLongitude_ev_real64(long pNativeObject, String method);
	native protected void register_setHeading_ev_real64(long pNativeObject, String method);
	native protected void register_setRadius_ev_real64(long pNativeObject, String method);
	native protected void register_getRadius_void(long pNativeObject, String method);
	native protected void register_setYaw_CDegree(long pNativeObject, String method);
	native protected void register_getYaw_void(long pNativeObject, String method);
	native protected void register_setPitch_CDegree(long pNativeObject, String method);
	native protected void register_getPitch_void(long pNativeObject, String method);
	native protected void register_setRoll_CDegree(long pNativeObject, String method);
	native protected void register_getRoll_void(long pNativeObject, String method);
	native protected void register__clone_CAnimationTrack(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setLatiude_ev_real64(this.nativeObject.pointer, "setLatiude_ev_real64_callback");
			this.register_setLongitude_ev_real64(this.nativeObject.pointer, "setLongitude_ev_real64_callback");
			this.register_setHeading_ev_real64(this.nativeObject.pointer, "setHeading_ev_real64_callback");
			this.register_setRadius_ev_real64(this.nativeObject.pointer, "setRadius_ev_real64_callback");
			this.register_getRadius_void(this.nativeObject.pointer, "getRadius_void_callback");
			this.register_setYaw_CDegree(this.nativeObject.pointer, "setYaw_CDegree_callback");
			this.register_getYaw_void(this.nativeObject.pointer, "getYaw_void_callback");
			this.register_setPitch_CDegree(this.nativeObject.pointer, "setPitch_CDegree_callback");
			this.register_getPitch_void(this.nativeObject.pointer, "getPitch_void_callback");
			this.register_setRoll_CDegree(this.nativeObject.pointer, "setRoll_CDegree_callback");
			this.register_getRoll_void(this.nativeObject.pointer, "getRoll_void_callback");
			this.register__clone_CAnimationTrack(this.nativeObject.pointer, "_clone_CAnimationTrack_callback");
		}
	}
	
	public static SphereTransformKeyFrame fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SphereTransformKeyFrame obj = null;
 		if(baseObj instanceof SphereTransformKeyFrame)
		{
			obj = (SphereTransformKeyFrame)baseObj;
		} else {
			obj = new SphereTransformKeyFrame(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSphereTransformKeyFrame");
			obj.increaseCast();
		}

		return obj;
	}
}
