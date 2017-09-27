package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public final class Taggridmarker extends RemoteNativeObject {

	public Taggridmarker(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public Taggridmarker(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public Taggridmarker() {
		super(new InstancePointer(Create()),false);
	}
	native private double get_dfPoint_void(long pNativeObject);
	public double get_dfPoint()
	{
		double jniValue = get_dfPoint_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_dfPoint_double (long pNativeObject, double value);
	public void set_dfPoint(double dfPoint)
	{
		double dfPointParamValue = dfPoint;
		
		set_dfPoint_double(this.nativeObject.pointer, dfPointParamValue);
	}
	
	native private int get_nRow_void(long pNativeObject);
	public int get_nRow()
	{
		int jniValue = get_nRow_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nRow_int (long pNativeObject, int value);
	public void set_nRow(int nRow)
	{
		int nRowParamValue = nRow;
		
		set_nRow_int(this.nativeObject.pointer, nRowParamValue);
	}
	
	native private int get_nCol_void(long pNativeObject);
	public int get_nCol()
	{
		int jniValue = get_nCol_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nCol_int (long pNativeObject, int value);
	public void set_nCol(int nCol)
	{
		int nColParamValue = nCol;
		
		set_nCol_int(this.nativeObject.pointer, nColParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
