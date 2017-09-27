package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class VertexBoneAssignment extends RemoteNativeObject {

	public VertexBoneAssignment(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public VertexBoneAssignment(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public VertexBoneAssignment() {
		super(new InstancePointer(Create()),false);
	}
	native private long get_vertexIndex_void(long pNativeObject);
	public long get_vertexIndex()
	{
		long jniValue = get_vertexIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_vertexIndex_ev_uint32 (long pNativeObject, long value);
	public void set_vertexIndex(long vertexIndex)
	{
		long vertexIndexParamValue = vertexIndex;
		
		set_vertexIndex_ev_uint32(this.nativeObject.pointer, vertexIndexParamValue);
	}
	
	native private int get_boneIndex_void(long pNativeObject);
	public int get_boneIndex()
	{
		int jniValue = get_boneIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_boneIndex_ev_uint16 (long pNativeObject, int value);
	public void set_boneIndex(int boneIndex)
	{
		int boneIndexParamValue = boneIndex;
		
		set_boneIndex_ev_uint16(this.nativeObject.pointer, boneIndexParamValue);
	}
	
	native private double get_weight_void(long pNativeObject);
	public double get_weight()
	{
		double jniValue = get_weight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_weight_Real (long pNativeObject, double value);
	public void set_weight(double weight)
	{
		double weightParamValue = weight;
		
		set_weight_Real(this.nativeObject.pointer, weightParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
