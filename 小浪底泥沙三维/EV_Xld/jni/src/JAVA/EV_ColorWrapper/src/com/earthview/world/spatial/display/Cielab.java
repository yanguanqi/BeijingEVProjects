package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 结构体CIELab的值
 */
public final class Cielab extends RemoteNativeObject {

	public Cielab(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Cielab(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Cielab() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_L_void(long pNativeObject);
	public double get_L()
	{
		double jniValue = get_L_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_L_ev_real64 (long pNativeObject, double value);
	public void set_L(double L)
	{
		double LParamValue = L;
		
		set_L_ev_real64(this.nativeObject.pointer, LParamValue);
	}
	
	native private double get_a_void(long pNativeObject);
	public double get_a()
	{
		double jniValue = get_a_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_a_ev_real64 (long pNativeObject, double value);
	public void set_a(double a)
	{
		double aParamValue = a;
		
		set_a_ev_real64(this.nativeObject.pointer, aParamValue);
	}
	
	native private double get_b_void(long pNativeObject);
	public double get_b()
	{
		double jniValue = get_b_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_b_ev_real64 (long pNativeObject, double value);
	public void set_b(double b)
	{
		double bParamValue = b;
		
		set_b_ev_real64(this.nativeObject.pointer, bParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
