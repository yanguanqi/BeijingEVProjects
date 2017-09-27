package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PageInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::PageInfo", new PageInfoClassFactory());
	}

	native private boolean get_isPreDefine_void(long pNativeObject);
	public boolean get_isPreDefine()
	{
		boolean jniValue = get_isPreDefine_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isPreDefine_ev_bool (long pNativeObject, boolean value);
	public void set_isPreDefine(boolean isPreDefine)
	{
		boolean isPreDefineParamValue = isPreDefine;
		
		set_isPreDefine_ev_bool(this.nativeObject.pointer, isPreDefineParamValue);
	}
	
	native private int get_evPageSize_void(long pNativeObject);
	public com.earthview.world.spatial.carto.EVPageSize get_evPageSize()
	{
		int jniValue = get_evPageSize_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.carto.EVPageSize.toEnum(jniValue);
	}
	
	native private void set_evPageSize_EVPageSize (long pNativeObject, int value);
	public void set_evPageSize(com.earthview.world.spatial.carto.EVPageSize evPageSize)
	{
		int evPageSizeParamValue = evPageSize.getValue();
		
		set_evPageSize_EVPageSize(this.nativeObject.pointer, evPageSizeParamValue);
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
	
	native private double get_width_void(long pNativeObject);
	public double get_width()
	{
		double jniValue = get_width_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_width_ev_real64 (long pNativeObject, double value);
	public void set_width(double width)
	{
		double widthParamValue = width;
		
		set_width_ev_real64(this.nativeObject.pointer, widthParamValue);
	}
	
	native private double get_height_void(long pNativeObject);
	public double get_height()
	{
		double jniValue = get_height_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_height_ev_real64 (long pNativeObject, double value);
	public void set_height(double height)
	{
		double heightParamValue = height;
		
		set_height_ev_real64(this.nativeObject.pointer, heightParamValue);
	}
	
	public PageInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("PageInfo", null);
	}

	public PageInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PageInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PageInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PageInfo obj = null;
 		if(baseObj instanceof PageInfo)
		{
			obj = (PageInfo)baseObj;
		} else {
			obj = new PageInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "PageInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
