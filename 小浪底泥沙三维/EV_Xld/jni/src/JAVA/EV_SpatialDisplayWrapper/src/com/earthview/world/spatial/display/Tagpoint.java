package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Tagpoint extends RemoteNativeObject {

	public Tagpoint(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Tagpoint(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Tagpoint() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_x_void(long pNativeObject);
	public double get_x()
	{
		double jniValue = get_x_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x_double (long pNativeObject, double value);
	public void set_x(double x)
	{
		double xParamValue = x;
		
		set_x_double(this.nativeObject.pointer, xParamValue);
	}
	
	native private double get_y_void(long pNativeObject);
	public double get_y()
	{
		double jniValue = get_y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y_double (long pNativeObject, double value);
	public void set_y(double y)
	{
		double yParamValue = y;
		
		set_y_double(this.nativeObject.pointer, yParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
