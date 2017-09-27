package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class ChangedEdge extends RemoteNativeObject {

	public ChangedEdge(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public ChangedEdge(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public ChangedEdge() {
		super(new InstancePointer(Create()),false);
	}
	native private int get_formerEID_void(long pNativeObject);
	public int get_formerEID()
	{
		int jniValue = get_formerEID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_formerEID_ev_int32 (long pNativeObject, int value);
	public void set_formerEID(int formerEID)
	{
		int formerEIDParamValue = formerEID;
		
		set_formerEID_ev_int32(this.nativeObject.pointer, formerEIDParamValue);
	}
	
	native private double get_formerLength_void(long pNativeObject);
	public double get_formerLength()
	{
		double jniValue = get_formerLength_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_formerLength_ev_real64 (long pNativeObject, double value);
	public void set_formerLength(double formerLength)
	{
		double formerLengthParamValue = formerLength;
		
		set_formerLength_ev_real64(this.nativeObject.pointer, formerLengthParamValue);
	}
	
	native private int get_newFEID_void(long pNativeObject);
	public int get_newFEID()
	{
		int jniValue = get_newFEID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_newFEID_ev_int32 (long pNativeObject, int value);
	public void set_newFEID(int newFEID)
	{
		int newFEIDParamValue = newFEID;
		
		set_newFEID_ev_int32(this.nativeObject.pointer, newFEIDParamValue);
	}
	
	native private double get_newFLength_void(long pNativeObject);
	public double get_newFLength()
	{
		double jniValue = get_newFLength_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_newFLength_ev_real64 (long pNativeObject, double value);
	public void set_newFLength(double newFLength)
	{
		double newFLengthParamValue = newFLength;
		
		set_newFLength_ev_real64(this.nativeObject.pointer, newFLengthParamValue);
	}
	
	native private int get_newTEID_void(long pNativeObject);
	public int get_newTEID()
	{
		int jniValue = get_newTEID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_newTEID_ev_int32 (long pNativeObject, int value);
	public void set_newTEID(int newTEID)
	{
		int newTEIDParamValue = newTEID;
		
		set_newTEID_ev_int32(this.nativeObject.pointer, newTEIDParamValue);
	}
	
	native private double get_newTLength_void(long pNativeObject);
	public double get_newTLength()
	{
		double jniValue = get_newTLength_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_newTLength_ev_real64 (long pNativeObject, double value);
	public void set_newTLength(double newTLength)
	{
		double newTLengthParamValue = newTLength;
		
		set_newTLength_ev_real64(this.nativeObject.pointer, newTLengthParamValue);
	}
	
	native private int get_inter_ID_void(long pNativeObject);
	public int get_inter_ID()
	{
		int jniValue = get_inter_ID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_inter_ID_ev_int32 (long pNativeObject, int value);
	public void set_inter_ID(int inter_ID)
	{
		int inter_IDParamValue = inter_ID;
		
		set_inter_ID_ev_int32(this.nativeObject.pointer, inter_IDParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
