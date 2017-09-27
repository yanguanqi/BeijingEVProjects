package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 时刻与进度百分比的键值对
 */
public class TimeRatePair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CTimeRatePair", new TimeRatePairClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TimeRatePair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTimeRatePair", null);
	}

	native private double get_mfirst_void(long pNativeObject);
	public double get_mfirst()
	{
		double jniValue = get_mfirst_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mfirst_ev_real64 (long pNativeObject, double value);
	public void set_mfirst(double mfirst)
	{
		double mfirstParamValue = mfirst;
		
		set_mfirst_ev_real64(this.nativeObject.pointer, mfirstParamValue);
	}
	
	native private double get_msecond_void(long pNativeObject);
	public double get_msecond()
	{
		double jniValue = get_msecond_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_msecond_ev_real64 (long pNativeObject, double value);
	public void set_msecond(double msecond)
	{
		double msecondParamValue = msecond;
		
		set_msecond_ev_real64(this.nativeObject.pointer, msecondParamValue);
	}
	
	public TimeRatePair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TimeRatePair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TimeRatePair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TimeRatePair obj = null;
 		if(baseObj instanceof TimeRatePair)
		{
			obj = (TimeRatePair)baseObj;
		} else {
			obj = new TimeRatePair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTimeRatePair");
			obj.increaseCast();
		}

		return obj;
	}
}
