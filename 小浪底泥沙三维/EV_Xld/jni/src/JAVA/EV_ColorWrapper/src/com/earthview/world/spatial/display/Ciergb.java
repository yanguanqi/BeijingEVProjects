package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 结构体CIERGB的值
 */
public final class Ciergb extends RemoteNativeObject {

	public Ciergb(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Ciergb(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Ciergb() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_R_void(long pNativeObject);
	public double get_R()
	{
		double jniValue = get_R_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_R_ev_real64 (long pNativeObject, double value);
	public void set_R(double R)
	{
		double RParamValue = R;
		
		set_R_ev_real64(this.nativeObject.pointer, RParamValue);
	}
	
	native private double get_G_void(long pNativeObject);
	public double get_G()
	{
		double jniValue = get_G_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_G_ev_real64 (long pNativeObject, double value);
	public void set_G(double G)
	{
		double GParamValue = G;
		
		set_G_ev_real64(this.nativeObject.pointer, GParamValue);
	}
	
	native private double get_B_void(long pNativeObject);
	public double get_B()
	{
		double jniValue = get_B_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_B_ev_real64 (long pNativeObject, double value);
	public void set_B(double B)
	{
		double BParamValue = B;
		
		set_B_ev_real64(this.nativeObject.pointer, BParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
