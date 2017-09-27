package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapViewArgs extends com.earthview.world.spatial.Iviewargs {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMapViewArgs", new MapViewArgsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCMapViewArgsProxy", new MapViewArgsClassFactory());
	}

	public MapViewArgs() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMapViewArgsProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.MapViewArgs".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.spatial.Iviewargs.ViewArgsType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.Iviewargs.ViewArgsType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Iviewargs.ViewArgsType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.Iviewargs.ViewArgsType.toEnum(returnValue);
	}

	native private double get_centerX_void(long pNativeObject);
	public double get_centerX()
	{
		double jniValue = get_centerX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_centerX_ev_real64 (long pNativeObject, double value);
	public void set_centerX(double centerX)
	{
		double centerXParamValue = centerX;
		
		set_centerX_ev_real64(this.nativeObject.pointer, centerXParamValue);
	}
	
	native private double get_centerY_void(long pNativeObject);
	public double get_centerY()
	{
		double jniValue = get_centerY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_centerY_ev_real64 (long pNativeObject, double value);
	public void set_centerY(double centerY)
	{
		double centerYParamValue = centerY;
		
		set_centerY_ev_real64(this.nativeObject.pointer, centerYParamValue);
	}
	
	native private double get_heading_void(long pNativeObject);
	public double get_heading()
	{
		double jniValue = get_heading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_heading_ev_real64 (long pNativeObject, double value);
	public void set_heading(double heading)
	{
		double headingParamValue = heading;
		
		set_heading_ev_real64(this.nativeObject.pointer, headingParamValue);
	}
	
	native private double get_scale_void(long pNativeObject);
	public double get_scale()
	{
		double jniValue = get_scale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_scale_ev_real64 (long pNativeObject, double value);
	public void set_scale(double scale)
	{
		double scaleParamValue = scale;
		
		set_scale_ev_real64(this.nativeObject.pointer, scaleParamValue);
	}
	
	native private double get_minLat_void(long pNativeObject);
	public double get_minLat()
	{
		double jniValue = get_minLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minLat_ev_real64 (long pNativeObject, double value);
	public void set_minLat(double minLat)
	{
		double minLatParamValue = minLat;
		
		set_minLat_ev_real64(this.nativeObject.pointer, minLatParamValue);
	}
	
	native private double get_minLon_void(long pNativeObject);
	public double get_minLon()
	{
		double jniValue = get_minLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minLon_ev_real64 (long pNativeObject, double value);
	public void set_minLon(double minLon)
	{
		double minLonParamValue = minLon;
		
		set_minLon_ev_real64(this.nativeObject.pointer, minLonParamValue);
	}
	
	native private double get_maxLat_void(long pNativeObject);
	public double get_maxLat()
	{
		double jniValue = get_maxLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maxLat_ev_real64 (long pNativeObject, double value);
	public void set_maxLat(double maxLat)
	{
		double maxLatParamValue = maxLat;
		
		set_maxLat_ev_real64(this.nativeObject.pointer, maxLatParamValue);
	}
	
	native private double get_maxLon_void(long pNativeObject);
	public double get_maxLon()
	{
		double jniValue = get_maxLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maxLon_ev_real64 (long pNativeObject, double value);
	public void set_maxLon(double maxLon)
	{
		double maxLonParamValue = maxLon;
		
		set_maxLon_ev_real64(this.nativeObject.pointer, maxLonParamValue);
	}
	
	public MapViewArgs(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapViewArgs(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static MapViewArgs fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapViewArgs obj = null;
 		if(baseObj instanceof MapViewArgs)
		{
			obj = (MapViewArgs)baseObj;
		} else {
			obj = new MapViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapViewArgs");
			obj.increaseCast();
		}

		return obj;
	}
}
