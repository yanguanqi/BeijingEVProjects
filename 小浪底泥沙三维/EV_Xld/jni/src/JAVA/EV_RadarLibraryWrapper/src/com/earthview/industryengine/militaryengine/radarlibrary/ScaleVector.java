package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class ScaleVector extends RemoteNativeObject {

	public ScaleVector(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public ScaleVector(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public ScaleVector() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_verticalAngle_void(long pNativeObject);
	public double get_verticalAngle()
	{
		double jniValue = get_verticalAngle_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_verticalAngle_Real (long pNativeObject, double value);
	public void set_verticalAngle(double verticalAngle)
	{
		double verticalAngleParamValue = verticalAngle;
		
		set_verticalAngle_Real(this.nativeObject.pointer, verticalAngleParamValue);
	}
	
	native private double get_powerScale_void(long pNativeObject);
	public double get_powerScale()
	{
		double jniValue = get_powerScale_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_powerScale_Real (long pNativeObject, double value);
	public void set_powerScale(double powerScale)
	{
		double powerScaleParamValue = powerScale;
		
		set_powerScale_Real(this.nativeObject.pointer, powerScaleParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
