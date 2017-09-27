package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS比例限制描述类
 */
public final class Ogcwmsscalehint extends RemoteNativeObject {

	public Ogcwmsscalehint(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Ogcwmsscalehint(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Ogcwmsscalehint() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_dfMax_void(long pNativeObject);
	public double get_dfMax()
	{
		double jniValue = get_dfMax_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dfMax_ev_real64 (long pNativeObject, double value);
	public void set_dfMax(double dfMax)
	{
		double dfMaxParamValue = dfMax;
		
		set_dfMax_ev_real64(this.nativeObject.pointer, dfMaxParamValue);
	}
	
	native private double get_dfMin_void(long pNativeObject);
	public double get_dfMin()
	{
		double jniValue = get_dfMin_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dfMin_ev_real64 (long pNativeObject, double value);
	public void set_dfMin(double dfMin)
	{
		double dfMinParamValue = dfMin;
		
		set_dfMin_ev_real64(this.nativeObject.pointer, dfMinParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
