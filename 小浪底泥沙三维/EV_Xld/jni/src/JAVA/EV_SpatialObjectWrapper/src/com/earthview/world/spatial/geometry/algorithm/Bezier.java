package com.earthview.world.spatial.geometry.algorithm;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Bezier extends RemoteNativeObject {

	public Bezier(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Bezier(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Bezier() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_x1_void(long pNativeObject);
	public double get_x1()
	{
		double jniValue = get_x1_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x1_ev_real64 (long pNativeObject, double value);
	public void set_x1(double x1)
	{
		double x1ParamValue = x1;
		
		set_x1_ev_real64(this.nativeObject.pointer, x1ParamValue);
	}
	
	native private double get_y1_void(long pNativeObject);
	public double get_y1()
	{
		double jniValue = get_y1_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y1_ev_real64 (long pNativeObject, double value);
	public void set_y1(double y1)
	{
		double y1ParamValue = y1;
		
		set_y1_ev_real64(this.nativeObject.pointer, y1ParamValue);
	}
	
	native private double get_z1_void(long pNativeObject);
	public double get_z1()
	{
		double jniValue = get_z1_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z1_ev_real64 (long pNativeObject, double value);
	public void set_z1(double z1)
	{
		double z1ParamValue = z1;
		
		set_z1_ev_real64(this.nativeObject.pointer, z1ParamValue);
	}
	
	native private double get_x2_void(long pNativeObject);
	public double get_x2()
	{
		double jniValue = get_x2_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x2_ev_real64 (long pNativeObject, double value);
	public void set_x2(double x2)
	{
		double x2ParamValue = x2;
		
		set_x2_ev_real64(this.nativeObject.pointer, x2ParamValue);
	}
	
	native private double get_y2_void(long pNativeObject);
	public double get_y2()
	{
		double jniValue = get_y2_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y2_ev_real64 (long pNativeObject, double value);
	public void set_y2(double y2)
	{
		double y2ParamValue = y2;
		
		set_y2_ev_real64(this.nativeObject.pointer, y2ParamValue);
	}
	
	native private double get_z2_void(long pNativeObject);
	public double get_z2()
	{
		double jniValue = get_z2_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z2_ev_real64 (long pNativeObject, double value);
	public void set_z2(double z2)
	{
		double z2ParamValue = z2;
		
		set_z2_ev_real64(this.nativeObject.pointer, z2ParamValue);
	}
	
	native private double get_x3_void(long pNativeObject);
	public double get_x3()
	{
		double jniValue = get_x3_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x3_ev_real64 (long pNativeObject, double value);
	public void set_x3(double x3)
	{
		double x3ParamValue = x3;
		
		set_x3_ev_real64(this.nativeObject.pointer, x3ParamValue);
	}
	
	native private double get_y3_void(long pNativeObject);
	public double get_y3()
	{
		double jniValue = get_y3_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y3_ev_real64 (long pNativeObject, double value);
	public void set_y3(double y3)
	{
		double y3ParamValue = y3;
		
		set_y3_ev_real64(this.nativeObject.pointer, y3ParamValue);
	}
	
	native private double get_z3_void(long pNativeObject);
	public double get_z3()
	{
		double jniValue = get_z3_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z3_ev_real64 (long pNativeObject, double value);
	public void set_z3(double z3)
	{
		double z3ParamValue = z3;
		
		set_z3_ev_real64(this.nativeObject.pointer, z3ParamValue);
	}
	
	native private double get_x4_void(long pNativeObject);
	public double get_x4()
	{
		double jniValue = get_x4_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x4_ev_real64 (long pNativeObject, double value);
	public void set_x4(double x4)
	{
		double x4ParamValue = x4;
		
		set_x4_ev_real64(this.nativeObject.pointer, x4ParamValue);
	}
	
	native private double get_y4_void(long pNativeObject);
	public double get_y4()
	{
		double jniValue = get_y4_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y4_ev_real64 (long pNativeObject, double value);
	public void set_y4(double y4)
	{
		double y4ParamValue = y4;
		
		set_y4_ev_real64(this.nativeObject.pointer, y4ParamValue);
	}
	
	native private double get_z4_void(long pNativeObject);
	public double get_z4()
	{
		double jniValue = get_z4_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z4_ev_real64 (long pNativeObject, double value);
	public void set_z4(double z4)
	{
		double z4ParamValue = z4;
		
		set_z4_ev_real64(this.nativeObject.pointer, z4ParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
