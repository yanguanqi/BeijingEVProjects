package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class SphericalBoundingBox extends RemoteNativeObject {

	public SphericalBoundingBox(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public SphericalBoundingBox(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public SphericalBoundingBox() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_North_void(long pNativeObject);
	public double get_North()
	{
		double jniValue = get_North_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_North_ev_real64 (long pNativeObject, double value);
	public void set_North(double North)
	{
		double NorthParamValue = North;
		
		set_North_ev_real64(this.nativeObject.pointer, NorthParamValue);
	}
	
	native private double get_South_void(long pNativeObject);
	public double get_South()
	{
		double jniValue = get_South_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_South_ev_real64 (long pNativeObject, double value);
	public void set_South(double South)
	{
		double SouthParamValue = South;
		
		set_South_ev_real64(this.nativeObject.pointer, SouthParamValue);
	}
	
	native private double get_West_void(long pNativeObject);
	public double get_West()
	{
		double jniValue = get_West_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_West_ev_real64 (long pNativeObject, double value);
	public void set_West(double West)
	{
		double WestParamValue = West;
		
		set_West_ev_real64(this.nativeObject.pointer, WestParamValue);
	}
	
	native private double get_East_void(long pNativeObject);
	public double get_East()
	{
		double jniValue = get_East_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_East_ev_real64 (long pNativeObject, double value);
	public void set_East(double East)
	{
		double EastParamValue = East;
		
		set_East_ev_real64(this.nativeObject.pointer, EastParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
