package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 天气控制点类
 */
public class WeatherControlPoint extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Effect3D::CWeatherControlPoint", new WeatherControlPointClassFactory());
	}

	public WeatherControlPoint(com.earthview.world.core.CoreTime time, com.earthview.world.spatial.effect3d.EVWeatherType type) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer timePtr = new BasePointer(time);
		list.add("time", timePtr.get());
		BasePointer typePtr = new BasePointer(type);
		list.add("type", typePtr.get());
		Create("CWeatherControlPoint", list);
	}

	native private long get_mTime_void(long pNativeObject);
	public com.earthview.world.core.CoreTime get_mTime()
	{
		long jniValue = get_mTime_void(this.nativeObject.pointer);
		
		com.earthview.world.core.CoreTime __returnValue = new com.earthview.world.core.CoreTime(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CoreTime)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CCoreTime");
		}
		return __returnValue;
	}
	
	native private void set_mTime_CCoreTime (long pNativeObject, long value);
	public void set_mTime(com.earthview.world.core.CoreTime mTime)
	{
		long mTimeParamValue = mTime.nativeObject.pointer;
		
		set_mTime_CCoreTime(this.nativeObject.pointer, mTimeParamValue);
	}
	
	native private int get_mWeatherType_void(long pNativeObject);
	public com.earthview.world.spatial.effect3d.EVWeatherType get_mWeatherType()
	{
		int jniValue = get_mWeatherType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.effect3d.EVWeatherType.toEnum(jniValue);
	}
	
	native private void set_mWeatherType_EVWeatherType (long pNativeObject, int value);
	public void set_mWeatherType(com.earthview.world.spatial.effect3d.EVWeatherType mWeatherType)
	{
		int mWeatherTypeParamValue = mWeatherType.getValue();
		
		set_mWeatherType_EVWeatherType(this.nativeObject.pointer, mWeatherTypeParamValue);
	}
	
	public WeatherControlPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WeatherControlPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WeatherControlPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WeatherControlPoint obj = null;
 		if(baseObj instanceof WeatherControlPoint)
		{
			obj = (WeatherControlPoint)baseObj;
		} else {
			obj = new WeatherControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWeatherControlPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
