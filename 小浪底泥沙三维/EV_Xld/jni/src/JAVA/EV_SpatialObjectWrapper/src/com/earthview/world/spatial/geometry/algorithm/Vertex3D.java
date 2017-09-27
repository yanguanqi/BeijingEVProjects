package com.earthview.world.spatial.geometry.algorithm;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Vertex3D extends RemoteNativeObject {

	public Vertex3D(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Vertex3D(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Vertex3D() {
		super(new InstancePointer(Create()),false);
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
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
