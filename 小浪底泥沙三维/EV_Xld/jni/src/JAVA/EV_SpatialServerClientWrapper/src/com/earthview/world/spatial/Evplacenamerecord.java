package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的地名记录信息类
 */
public class Evplacenamerecord extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVPlaceNameRecord", new EvplacenamerecordClassFactory());
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
	
	native private String get_name_void(long pNativeObject);
	public String get_name()
	{
		String jniValue = get_name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_name_EVString (long pNativeObject, String value);
	public void set_name(String name)
	{
		String nameParamValue = name;
		
		set_name_EVString(this.nativeObject.pointer, nameParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public Evplacenamerecord() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEVPlaceNameRecord", null);
	}

	public Evplacenamerecord(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evplacenamerecord(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evplacenamerecord fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evplacenamerecord obj = null;
 		if(baseObj instanceof Evplacenamerecord)
		{
			obj = (Evplacenamerecord)baseObj;
		} else {
			obj = new Evplacenamerecord(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVPlaceNameRecord");
			obj.increaseCast();
		}

		return obj;
	}
}
