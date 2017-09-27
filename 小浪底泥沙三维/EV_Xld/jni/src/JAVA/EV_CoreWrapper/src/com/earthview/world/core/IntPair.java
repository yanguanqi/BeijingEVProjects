package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public final class IntPair extends RemoteNativeObject {

	public IntPair(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public IntPair(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public IntPair() {
		super(new InstancePointer(Create()),false);
	}
	native private int get_first_void(long pNativeObject);
	public int get_first()
	{
		int jniValue = get_first_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_first_ev_int32 (long pNativeObject, int value);
	public void set_first(int first)
	{
		int firstParamValue = first;
		
		set_first_ev_int32(this.nativeObject.pointer, firstParamValue);
	}
	
	native private int get_second_void(long pNativeObject);
	public int get_second()
	{
		int jniValue = get_second_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_second_ev_int32 (long pNativeObject, int value);
	public void set_second(int second)
	{
		int secondParamValue = second;
		
		set_second_ev_int32(this.nativeObject.pointer, secondParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
