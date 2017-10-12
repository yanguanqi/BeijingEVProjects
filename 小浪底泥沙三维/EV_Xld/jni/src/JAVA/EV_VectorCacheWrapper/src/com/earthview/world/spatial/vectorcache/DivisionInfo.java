package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 分块信息
 */
public final class DivisionInfo extends RemoteNativeObject {

	public DivisionInfo(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public DivisionInfo(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public DivisionInfo() {
		super(new InstancePointer(Create()),false);
	}
	native private int get_nStartLevel_void(long pNativeObject);
	public int get_nStartLevel()
	{
		int jniValue = get_nStartLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nStartLevel_ev_int32 (long pNativeObject, int value);
	public void set_nStartLevel(int nStartLevel)
	{
		int nStartLevelParamValue = nStartLevel;
		
		set_nStartLevel_ev_int32(this.nativeObject.pointer, nStartLevelParamValue);
	}
	
	native private int get_nEndLevel_void(long pNativeObject);
	public int get_nEndLevel()
	{
		int jniValue = get_nEndLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nEndLevel_ev_int32 (long pNativeObject, int value);
	public void set_nEndLevel(int nEndLevel)
	{
		int nEndLevelParamValue = nEndLevel;
		
		set_nEndLevel_ev_int32(this.nativeObject.pointer, nEndLevelParamValue);
	}
	
	native private int get_nBaseLevel_void(long pNativeObject);
	public int get_nBaseLevel()
	{
		int jniValue = get_nBaseLevel_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nBaseLevel_ev_int32 (long pNativeObject, int value);
	public void set_nBaseLevel(int nBaseLevel)
	{
		int nBaseLevelParamValue = nBaseLevel;
		
		set_nBaseLevel_ev_int32(this.nativeObject.pointer, nBaseLevelParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
