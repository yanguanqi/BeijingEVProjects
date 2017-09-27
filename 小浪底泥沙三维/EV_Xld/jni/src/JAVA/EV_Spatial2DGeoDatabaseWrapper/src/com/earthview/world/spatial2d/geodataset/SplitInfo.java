package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///by jiang 2013 08 04
public final class SplitInfo extends RemoteNativeObject {

	public SplitInfo(InstancePointer pointer, boolean remote) {
		super(pointer, remote);
	}
	
	public SplitInfo(InstancePointer pInstance) {
		super(pInstance);
	}
	
	native private static long Create();
	public SplitInfo() {
		super(new InstancePointer(Create()),false);
	}
	native private long get_start_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point get_start()
	{
		long jniValue = get_start_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	
	native private void set_start_CPoint (long pNativeObject, long value);
	public void set_start(com.earthview.world.spatial.geometry.Point start)
	{
		long startParamValue = (start == null ? 0L : start.nativeObject.pointer);
		
		set_start_CPoint(this.nativeObject.pointer, startParamValue);
	}
	
	native private long get_end_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Point get_end()
	{
		long jniValue = get_end_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	
	native private void set_end_CPoint (long pNativeObject, long value);
	public void set_end(com.earthview.world.spatial.geometry.Point end)
	{
		long endParamValue = (end == null ? 0L : end.nativeObject.pointer);
		
		set_end_CPoint(this.nativeObject.pointer, endParamValue);
	}
	
	native private long get_subEdge_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.LineString get_subEdge()
	{
		long jniValue = get_subEdge_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.LineString __returnValue = new com.earthview.world.spatial.geometry.LineString(CreatedWhenConstruct.CWC_NotToCreate, "CLineString");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.LineString)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLineString");
		}
		return __returnValue;
	}
	
	native private void set_subEdge_CLineString (long pNativeObject, long value);
	public void set_subEdge(com.earthview.world.spatial.geometry.LineString subEdge)
	{
		long subEdgeParamValue = (subEdge == null ? 0L : subEdge.nativeObject.pointer);
		
		set_subEdge_CLineString(this.nativeObject.pointer, subEdgeParamValue);
	}
	
	native private double get_ratio_void(long pNativeObject);
	public double get_ratio()
	{
		double jniValue = get_ratio_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ratio_ev_real64 (long pNativeObject, double value);
	public void set_ratio(double ratio)
	{
		double ratioParamValue = ratio;
		
		set_ratio_ev_real64(this.nativeObject.pointer, ratioParamValue);
	}
	
	
	native private static void Destroy(long pNativeObject);
	public void destroyNativeObject() {
		Destroy(this.nativeObject.pointer);
	}
}
