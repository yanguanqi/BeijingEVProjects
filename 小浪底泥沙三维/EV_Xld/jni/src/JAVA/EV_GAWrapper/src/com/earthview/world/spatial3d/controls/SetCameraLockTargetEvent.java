package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraLockTargetEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent", new SetCameraLockTargetEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SetCameraLockTargetEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraLockTargetEvent", null);
	}

	native private void setCameraLockTarget_CSceneNode(long pNativeObject, long lockTarget);
	/**
	 * /设置相机要锁定的目标结点/
	 * @param lockTarget 锁定的目标
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param distance 相机距离目标点之间的距离
	 * @param lockTarget 锁定的目标
	 */
	public void setCameraLockTarget(com.earthview.world.graphic.SceneNode lockTarget)
	{
		long lockTargetParamValue = (lockTarget == null ? 0L : lockTarget.nativeObject.pointer);
		setCameraLockTarget_CSceneNode(this.nativeObject.pointer, lockTargetParamValue);
	}
	native private long getCameraLockTarget_void(long pNativeObject);
	/**
	 * 获取相机要锁定的目标结点
	 */
	public com.earthview.world.graphic.SceneNode getCameraLockTarget()
	{
		long returnValue = getCameraLockTarget_void(this.nativeObject.pointer);
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
	native private boolean hasSetLockTarget_void(long pNativeObject);
	/**
	 * 是否设置了锁定的目标结点
	 */
	public boolean hasSetLockTarget()
	{
		boolean returnValue = hasSetLockTarget_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraLockHeading_CDegree(long pNativeObject, long headingt);
	/**
	 * 设置相机锁定的偏航角
	 * @param headingt 锁定的偏航角
	 */
	public void setCameraLockHeading(com.earthview.world.spatial.math.Degree headingt)
	{
		long headingtParamValue = headingt.nativeObject.pointer;
		setCameraLockHeading_CDegree(this.nativeObject.pointer, headingtParamValue);
	}
	native private long getCameraLockHeading_void(long pNativeObject);
	/**
	 * 获取相机要锁定的偏航角
	 */
	public com.earthview.world.spatial.math.Degree getCameraLockHeading()
	{
		long returnValue = getCameraLockHeading_void(this.nativeObject.pointer);
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
	native private boolean hasSetLockHeading_void(long pNativeObject);
	/**
	 * 是否设置了锁定的偏航角
	 */
	public boolean hasSetLockHeading()
	{
		boolean returnValue = hasSetLockHeading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraLockTilt_CDegree(long pNativeObject, long tilt);
	/**
	 * 设置相机锁定的倾角
	 * @param tilt 锁定的倾角
	 */
	public void setCameraLockTilt(com.earthview.world.spatial.math.Degree tilt)
	{
		long tiltParamValue = tilt.nativeObject.pointer;
		setCameraLockTilt_CDegree(this.nativeObject.pointer, tiltParamValue);
	}
	native private long getCameraLockTilt_void(long pNativeObject);
	/**
	 * 获取相机要锁定的倾角
	 */
	public com.earthview.world.spatial.math.Degree getCameraLockTilt()
	{
		long returnValue = getCameraLockTilt_void(this.nativeObject.pointer);
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
	native private boolean hasSetLockTilt_void(long pNativeObject);
	/**
	 * 是否设置了锁定的倾角
	 */
	public boolean hasSetLockTilt()
	{
		boolean returnValue = hasSetLockTilt_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraLockDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 设置相机锁定的距离
	 * @param distance 锁定的距离
	 */
	public void setCameraLockDistance(double distance)
	{
		double distanceParamValue = distance;
		setCameraLockDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private double getCameraLockDistance_void(long pNativeObject);
	/**
	 * 获取相机要锁定的距离
	 */
	public double getCameraLockDistance()
	{
		double returnValue = getCameraLockDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasSetLockDistance_void(long pNativeObject);
	/**
	 * 是否设置了锁定的距离
	 */
	public boolean hasSetLockDistance()
	{
		boolean returnValue = hasSetLockDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraLockMode_ev_bool(long pNativeObject, boolean isThirdPersonMode);
	/**
	 * 设置相机的锁定模式
	 * @param isThirdPersonMode 是否为第三人称
	 */
	public void setCameraLockMode(boolean isThirdPersonMode)
	{
		boolean isThirdPersonModeParamValue = isThirdPersonMode;
		setCameraLockMode_ev_bool(this.nativeObject.pointer, isThirdPersonModeParamValue);
	}
	native private boolean hasSetLockMode_void(long pNativeObject);
	/**
	 * 是否设置了锁定的模式
	 */
	public boolean hasSetLockMode()
	{
		boolean returnValue = hasSetLockMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean get_mbCanChangeTilt_void(long pNativeObject);
	public boolean get_mbCanChangeTilt()
	{
		boolean jniValue = get_mbCanChangeTilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbCanChangeTilt_ev_bool (long pNativeObject, boolean value);
	public void set_mbCanChangeTilt(boolean mbCanChangeTilt)
	{
		boolean mbCanChangeTiltParamValue = mbCanChangeTilt;
		
		set_mbCanChangeTilt_ev_bool(this.nativeObject.pointer, mbCanChangeTiltParamValue);
	}
	
	native private boolean get_mbCanChangeHeading_void(long pNativeObject);
	public boolean get_mbCanChangeHeading()
	{
		boolean jniValue = get_mbCanChangeHeading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbCanChangeHeading_ev_bool (long pNativeObject, boolean value);
	public void set_mbCanChangeHeading(boolean mbCanChangeHeading)
	{
		boolean mbCanChangeHeadingParamValue = mbCanChangeHeading;
		
		set_mbCanChangeHeading_ev_bool(this.nativeObject.pointer, mbCanChangeHeadingParamValue);
	}
	
	native private boolean get_mbCanChangeDistance_void(long pNativeObject);
	public boolean get_mbCanChangeDistance()
	{
		boolean jniValue = get_mbCanChangeDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbCanChangeDistance_ev_bool (long pNativeObject, boolean value);
	public void set_mbCanChangeDistance(boolean mbCanChangeDistance)
	{
		boolean mbCanChangeDistanceParamValue = mbCanChangeDistance;
		
		set_mbCanChangeDistance_ev_bool(this.nativeObject.pointer, mbCanChangeDistanceParamValue);
	}
	
	native private boolean get_mIsThirdPersonMode_void(long pNativeObject);
	public boolean get_mIsThirdPersonMode()
	{
		boolean jniValue = get_mIsThirdPersonMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsThirdPersonMode_ev_bool (long pNativeObject, boolean value);
	public void set_mIsThirdPersonMode(boolean mIsThirdPersonMode)
	{
		boolean mIsThirdPersonModeParamValue = mIsThirdPersonMode;
		
		set_mIsThirdPersonMode_ev_bool(this.nativeObject.pointer, mIsThirdPersonModeParamValue);
	}
	
	public SetCameraLockTargetEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraLockTargetEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraLockTargetEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraLockTargetEvent obj = null;
 		if(baseObj instanceof SetCameraLockTargetEvent)
		{
			obj = (SetCameraLockTargetEvent)baseObj;
		} else {
			obj = new SetCameraLockTargetEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraLockTargetEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
