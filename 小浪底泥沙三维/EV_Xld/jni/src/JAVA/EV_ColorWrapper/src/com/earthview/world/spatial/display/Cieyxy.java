package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 结构体CIEYxy的值
 */
public final class Cieyxy extends RemoteNativeObject {

	public Cieyxy(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Cieyxy(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Cieyxy() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_Y_void(long pNativeObject);
	public double get_Y()
	{
		double jniValue = get_Y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Y_ev_real64 (long pNativeObject, double value);
	public void set_Y(double Y)
	{
		double YParamValue = Y;
		
		set_Y_ev_real64(this.nativeObject.pointer, YParamValue);
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
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
