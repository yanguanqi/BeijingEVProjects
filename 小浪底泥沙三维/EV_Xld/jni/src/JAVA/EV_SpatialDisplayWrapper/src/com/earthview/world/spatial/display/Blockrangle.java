package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Blockrangle extends RemoteNativeObject {

	public Blockrangle(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Blockrangle(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Blockrangle() {
		super(new InstancePointer(Create()),false);
	}
	native private int get_minVal_void(long pNativeObject);
	public int get_minVal()
	{
		int jniValue = get_minVal_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minVal_int (long pNativeObject, int value);
	public void set_minVal(int minVal)
	{
		int minValParamValue = minVal;
		
		set_minVal_int(this.nativeObject.pointer, minValParamValue);
	}
	
	native private int get_maxVal_void(long pNativeObject);
	public int get_maxVal()
	{
		int jniValue = get_maxVal_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maxVal_int (long pNativeObject, int value);
	public void set_maxVal(int maxVal)
	{
		int maxValParamValue = maxVal;
		
		set_maxVal_int(this.nativeObject.pointer, maxValParamValue);
	}
	
	native private int get_iD_void(long pNativeObject);
	public int get_iD()
	{
		int jniValue = get_iD_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_iD_int (long pNativeObject, int value);
	public void set_iD(int iD)
	{
		int iDParamValue = iD;
		
		set_iD_int(this.nativeObject.pointer, iDParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
