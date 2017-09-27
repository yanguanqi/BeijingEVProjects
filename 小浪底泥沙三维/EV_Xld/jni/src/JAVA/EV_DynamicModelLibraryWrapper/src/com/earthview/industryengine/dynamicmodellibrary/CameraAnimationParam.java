package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 相机动画控制点参数对象
 */
public class CameraAnimationParam extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam", new CameraAnimationParamClassFactory());
	}

	/**
	 * 构造相机动画控制点参数
	 */
	public CameraAnimationParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCameraAnimationParam", null);
	}

	native private double get_Time_void(long pNativeObject);
	public double get_Time()
	{
		double jniValue = get_Time_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Time_ev_real64 (long pNativeObject, double value);
	public void set_Time(double Time)
	{
		double TimeParamValue = Time;
		
		set_Time_ev_real64(this.nativeObject.pointer, TimeParamValue);
	}
	
	native private long get_Position_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_Position()
	{
		long jniValue = get_Position_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_Position_CVector3 (long pNativeObject, long value);
	public void set_Position(com.earthview.world.spatial.math.Vector3 Position)
	{
		long PositionParamValue = Position.nativeObject.pointer;
		
		set_Position_CVector3(this.nativeObject.pointer, PositionParamValue);
	}
	
	native private long get_Yaw_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_Yaw()
	{
		long jniValue = get_Yaw_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_Yaw_CDegree (long pNativeObject, long value);
	public void set_Yaw(com.earthview.world.spatial.math.Degree Yaw)
	{
		long YawParamValue = Yaw.nativeObject.pointer;
		
		set_Yaw_CDegree(this.nativeObject.pointer, YawParamValue);
	}
	
	native private long get_Pitch_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_Pitch()
	{
		long jniValue = get_Pitch_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_Pitch_CDegree (long pNativeObject, long value);
	public void set_Pitch(com.earthview.world.spatial.math.Degree Pitch)
	{
		long PitchParamValue = Pitch.nativeObject.pointer;
		
		set_Pitch_CDegree(this.nativeObject.pointer, PitchParamValue);
	}
	
	native private long get_Roll_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_Roll()
	{
		long jniValue = get_Roll_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_Roll_CDegree (long pNativeObject, long value);
	public void set_Roll(com.earthview.world.spatial.math.Degree Roll)
	{
		long RollParamValue = Roll.nativeObject.pointer;
		
		set_Roll_CDegree(this.nativeObject.pointer, RollParamValue);
	}
	
	native private long get_Scale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_Scale()
	{
		long jniValue = get_Scale_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_Scale_CVector3 (long pNativeObject, long value);
	public void set_Scale(com.earthview.world.spatial.math.Vector3 Scale)
	{
		long ScaleParamValue = Scale.nativeObject.pointer;
		
		set_Scale_CVector3(this.nativeObject.pointer, ScaleParamValue);
	}
	
	public CameraAnimationParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CameraAnimationParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CameraAnimationParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CameraAnimationParam obj = null;
 		if(baseObj instanceof CameraAnimationParam)
		{
			obj = (CameraAnimationParam)baseObj;
		} else {
			obj = new CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCameraAnimationParam");
			obj.increaseCast();
		}

		return obj;
	}
}
