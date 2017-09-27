package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class ComponentUnit extends RemoteNativeObject {

	public ComponentUnit(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public ComponentUnit(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public ComponentUnit() {
		super(new InstancePointer(Create()),false);
	}
	native private long get_SubEntityIndex_void(long pNativeObject);
	public long get_SubEntityIndex()
	{
		long jniValue = get_SubEntityIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_SubEntityIndex_ev_uint32 (long pNativeObject, long value);
	public void set_SubEntityIndex(long SubEntityIndex)
	{
		long SubEntityIndexParamValue = SubEntityIndex;
		
		set_SubEntityIndex_ev_uint32(this.nativeObject.pointer, SubEntityIndexParamValue);
	}
	
	native private int get_IndexBegun_void(long pNativeObject);
	public int get_IndexBegun()
	{
		int jniValue = get_IndexBegun_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_IndexBegun_ev_int32 (long pNativeObject, int value);
	public void set_IndexBegun(int IndexBegun)
	{
		int IndexBegunParamValue = IndexBegun;
		
		set_IndexBegun_ev_int32(this.nativeObject.pointer, IndexBegunParamValue);
	}
	
	native private int get_IndexEnd_void(long pNativeObject);
	public int get_IndexEnd()
	{
		int jniValue = get_IndexEnd_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_IndexEnd_ev_int32 (long pNativeObject, int value);
	public void set_IndexEnd(int IndexEnd)
	{
		int IndexEndParamValue = IndexEnd;
		
		set_IndexEnd_ev_int32(this.nativeObject.pointer, IndexEndParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
