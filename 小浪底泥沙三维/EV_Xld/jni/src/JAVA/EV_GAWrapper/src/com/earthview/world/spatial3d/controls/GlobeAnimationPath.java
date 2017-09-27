package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAnimationPath extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeAnimationPath", new GlobeAnimationPathClassFactory());
	}

	public enum LOOPMODE implements INativeEnum<LOOPMODE> {
		lOOP(LOOPMODEHelper.ENUM_VALUES[0]),
		NOLOOP(LOOPMODEHelper.ENUM_VALUES[1]);
		private int value;
		LOOPMODE(int i) {
			this.value = i;
		}
		public LOOPMODE getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LOOPMODE toEnum(int retval) {
			if(retval == lOOP.value){
				return lOOP;
			}
			else if(retval == NOLOOP.value){
				return NOLOOP;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LOOPMODEHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	///typedef EarthView::World::Core::map<ev_real64,EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint> ControlPoints;
	//// <summary>
	//// 构造函数
	//// </summary>
	//// <param name="loopMode">循环模式</param>
	//// <param name="radious">半径</param>
	//// <returns></returns>
	public GlobeAnimationPath(com.earthview.world.spatial3d.controls.GlobeAnimationPath.LOOPMODE loopMode, double radious) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer loopModePtr = new BasePointer(loopMode);
		list.add("loopMode", loopModePtr.get());
		BasePointer radiousPtr = new BasePointer(radious);
		list.add("radious", radiousPtr.get());
		Create("CGlobeAnimationPath", list);
	}

	/**
	 * 构造函数
	 */
	public GlobeAnimationPath() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeAnimationPath", null);
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清空控制点
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void insert_ev_real64_CGlobeAnimationControlPoint(long pNativeObject, double time, long controlPoint);
	/**
	 * 增加控制点
	 * @param time 时间
	 * @param controlPoint 控制点
	 */
	public void insert(double time, com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint controlPoint)
	{
		double timeParamValue = time;
		long controlPointParamValue = controlPoint.nativeObject.pointer;
		insert_ev_real64_CGlobeAnimationControlPoint(this.nativeObject.pointer, timeParamValue, controlPointParamValue);
	}
	native private double getFirstTime_void(long pNativeObject);
	/**
	 * 取得第一个时间
	 */
	public double getFirstTime()
	{
		double returnValue = getFirstTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getEndTime_void(long pNativeObject);
	/**
	 * 取得最后一个时间
	 */
	public double getEndTime()
	{
		double returnValue = getEndTime_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getPeriod_void(long pNativeObject);
	/**
	 * 取得总时间段
	 */
	public double getPeriod()
	{
		double returnValue = getPeriod_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getControlPointCount_void(long pNativeObject);
	/**
	 * 取得控制点数目
	 */
	public int getControlPointCount()
	{
		int returnValue = getControlPointCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVelocity_ev_real64(long pNativeObject, double velocity);
	/**
	 * 设置速度
	 * @param velocity 速度
	 */
	public void setVelocity(double velocity)
	{
		double velocityParamValue = velocity;
		setVelocity_ev_real64(this.nativeObject.pointer, velocityParamValue);
	}
	native private double getVelocity_void(long pNativeObject);
	/**
	 * 获取速度
	 */
	public double getVelocity()
	{
		double returnValue = getVelocity_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getInterpolaterdControlPoint_ev_real64_ev_bool(long pNativeObject, double time, boolean isEven);
	/**
	 * 由时间获取插值点
	 * @param velocity 速度
	 */
	public com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint getInterpolaterdControlPoint(double time, boolean isEven)
	{
		double timeParamValue = time;
		boolean isEvenParamValue = isEven;
		long returnValue = getInterpolaterdControlPoint_ev_real64_ev_bool(this.nativeObject.pointer, timeParamValue, isEvenParamValue);
		com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint __returnValue = new com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeAnimationControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeAnimationControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeAnimationControlPoint");
		}
		return __returnValue;
	}
	native private long getControlPoints_void(long pNativeObject);
	/**
	 * 返回控制点集合
	 */
	public com.earthview.world.spatial3d.controls.AnimationControlPointMap getControlPoints()
	{
		long returnValue = getControlPoints_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.controls.AnimationControlPointMap __returnValue = new com.earthview.world.spatial3d.controls.AnimationControlPointMap(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationControlPointMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.AnimationControlPointMap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationControlPointMap");
		}
		return __returnValue;
	}
	public GlobeAnimationPath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeAnimationPath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeAnimationPath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeAnimationPath obj = null;
 		if(baseObj instanceof GlobeAnimationPath)
		{
			obj = (GlobeAnimationPath)baseObj;
		} else {
			obj = new GlobeAnimationPath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeAnimationPath");
			obj.increaseCast();
		}

		return obj;
	}
}
