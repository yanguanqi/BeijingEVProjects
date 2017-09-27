package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 根据坐标值(经纬度)获取DEM数据
 */
public class Altitude3DListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAltitude3DListener", new Altitude3DListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAltitude3DListenerProxy", new Altitude3DListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Altitude3DListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAltitude3DListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Altitude3DListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  double getAltitude_ev_real64_ev_real64_callback(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getAltitude(latitudeParamValue, longitudeParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAltitude_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude);
	/**
	 * 根据经纬度获取指定点的高程
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @return 高程值
	 */
	public double getAltitude(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getAltitude_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private double getAltitude_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude);
	protected double getAltitude_NoVirtual(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getAltitude_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}

	native private int getDemMode_void(long pNativeObject);
	/**
	 * 获取高程模式
	 * @return 获取高程模式
	 */
	public com.earthview.world.spatial3d.analysis.GetAltitudeStyle getDemMode()
	{
		int returnValue = getDemMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.GetAltitudeStyle.toEnum(returnValue);
	}
	native private void setDemMode_GetAltitudeStyle(long pNativeObject, int value);
	/**
	 * 设置获取高程模式
	 * @param value 获取高程模式
	 */
	public void setDemMode(com.earthview.world.spatial3d.analysis.GetAltitudeStyle value)
	{
		int valueParamValue = value.getValue();
		setDemMode_GetAltitudeStyle(this.nativeObject.pointer, valueParamValue);
	}
	native private double getInterval_void(long pNativeObject);
	/**
	 * 获取插值间隔距离
	 * @param  
	 * @return 插值间隔距离
	 */
	public double getInterval()
	{
		double returnValue = getInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterval_ev_real64(long pNativeObject, double value);
	/**
	 * 设置插值间隔距离
	 * @param value 插值间隔距离
	 */
	public void setInterval(double value)
	{
		double valueParamValue = value;
		setInterval_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	public Altitude3DListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Altitude3DListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getAltitude_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitude_ev_real64_ev_real64(this.nativeObject.pointer, "getAltitude_ev_real64_ev_real64_callback");
		}
	}
	
	public static Altitude3DListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Altitude3DListener obj = null;
 		if(baseObj instanceof Altitude3DListener)
		{
			obj = (Altitude3DListener)baseObj;
		} else {
			obj = new Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAltitude3DListener");
			obj.increaseCast();
		}

		return obj;
	}
}
