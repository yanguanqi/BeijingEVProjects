package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地理范围
 */
public final class GeoRect extends RemoteNativeObject {

	public GeoRect(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public GeoRect(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public GeoRect() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_xMin_void(long pNativeObject);
	public double get_xMin()
	{
		double jniValue = get_xMin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_xMin_ev_real64 (long pNativeObject, double value);
	public void set_xMin(double xMin)
	{
		double xMinParamValue = xMin;
		
		set_xMin_ev_real64(this.nativeObject.pointer, xMinParamValue);
	}
	
	native private double get_yMin_void(long pNativeObject);
	public double get_yMin()
	{
		double jniValue = get_yMin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_yMin_ev_real64 (long pNativeObject, double value);
	public void set_yMin(double yMin)
	{
		double yMinParamValue = yMin;
		
		set_yMin_ev_real64(this.nativeObject.pointer, yMinParamValue);
	}
	
	native private double get_xMax_void(long pNativeObject);
	public double get_xMax()
	{
		double jniValue = get_xMax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_xMax_ev_real64 (long pNativeObject, double value);
	public void set_xMax(double xMax)
	{
		double xMaxParamValue = xMax;
		
		set_xMax_ev_real64(this.nativeObject.pointer, xMaxParamValue);
	}
	
	native private double get_yMax_void(long pNativeObject);
	public double get_yMax()
	{
		double jniValue = get_yMax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_yMax_ev_real64 (long pNativeObject, double value);
	public void set_yMax(double yMax)
	{
		double yMaxParamValue = yMax;
		
		set_yMax_ev_real64(this.nativeObject.pointer, yMaxParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
