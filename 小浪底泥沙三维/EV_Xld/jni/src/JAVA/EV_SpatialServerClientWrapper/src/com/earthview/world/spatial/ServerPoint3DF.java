package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的三维点坐标信息类
 */
public class ServerPoint3DF extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerPoint3DF", new ServerPoint3DFClassFactory());
	}

	native private double get_x_void(long pNativeObject);
	public double get_x()
	{
		double jniValue = get_x_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x_ev_real64 (long pNativeObject, double value);
	public void set_x(double x)
	{
		double xParamValue = x;
		
		set_x_ev_real64(this.nativeObject.pointer, xParamValue);
	}
	
	native private double get_y_void(long pNativeObject);
	public double get_y()
	{
		double jniValue = get_y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y_ev_real64 (long pNativeObject, double value);
	public void set_y(double y)
	{
		double yParamValue = y;
		
		set_y_ev_real64(this.nativeObject.pointer, yParamValue);
	}
	
	native private double get_z_void(long pNativeObject);
	public double get_z()
	{
		double jniValue = get_z_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z_ev_real64 (long pNativeObject, double value);
	public void set_z(double z)
	{
		double zParamValue = z;
		
		set_z_ev_real64(this.nativeObject.pointer, zParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public ServerPoint3DF() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerPoint3DF", null);
	}

	public ServerPoint3DF(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerPoint3DF(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerPoint3DF fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerPoint3DF obj = null;
 		if(baseObj instanceof ServerPoint3DF)
		{
			obj = (ServerPoint3DF)baseObj;
		} else {
			obj = new ServerPoint3DF(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerPoint3DF");
			obj.increaseCast();
		}

		return obj;
	}
}
