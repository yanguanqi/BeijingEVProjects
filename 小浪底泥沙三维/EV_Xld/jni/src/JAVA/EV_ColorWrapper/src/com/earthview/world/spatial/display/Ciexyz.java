package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 结构体CIEXYZ的值
 */
public final class Ciexyz extends RemoteNativeObject {

	public Ciexyz(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Ciexyz(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Ciexyz() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_X_void(long pNativeObject);
	public double get_X()
	{
		double jniValue = get_X_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_X_ev_real64 (long pNativeObject, double value);
	public void set_X(double X)
	{
		double XParamValue = X;
		
		set_X_ev_real64(this.nativeObject.pointer, XParamValue);
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
	
	native private double get_Z_void(long pNativeObject);
	public double get_Z()
	{
		double jniValue = get_Z_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Z_ev_real64 (long pNativeObject, double value);
	public void set_Z(double Z)
	{
		double ZParamValue = Z;
		
		set_Z_ev_real64(this.nativeObject.pointer, ZParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
