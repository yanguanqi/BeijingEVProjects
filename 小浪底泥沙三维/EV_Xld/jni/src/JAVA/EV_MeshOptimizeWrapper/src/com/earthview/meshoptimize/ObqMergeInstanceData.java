package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
public class ObqMergeInstanceData extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMergeInstanceData", new ObqMergeInstanceDataClassFactory());
	}

	public ObqMergeInstanceData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CObqMergeInstanceData", null);
	}

	native private double get_Lat_void(long pNativeObject);
	public double get_Lat()
	{
		double jniValue = get_Lat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Lat_ev_real64 (long pNativeObject, double value);
	public void set_Lat(double Lat)
	{
		double LatParamValue = Lat;
		
		set_Lat_ev_real64(this.nativeObject.pointer, LatParamValue);
	}
	
	native private double get_Lon_void(long pNativeObject);
	public double get_Lon()
	{
		double jniValue = get_Lon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Lon_ev_real64 (long pNativeObject, double value);
	public void set_Lon(double Lon)
	{
		double LonParamValue = Lon;
		
		set_Lon_ev_real64(this.nativeObject.pointer, LonParamValue);
	}
	
	native private double get_Alt_void(long pNativeObject);
	public double get_Alt()
	{
		double jniValue = get_Alt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Alt_ev_real64 (long pNativeObject, double value);
	public void set_Alt(double Alt)
	{
		double AltParamValue = Alt;
		
		set_Alt_ev_real64(this.nativeObject.pointer, AltParamValue);
	}
	
	native private long get_LocalTrans_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 get_LocalTrans()
	{
		long jniValue = get_LocalTrans_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	
	native private void set_LocalTrans_CMatrix4 (long pNativeObject, long value);
	public void set_LocalTrans(com.earthview.world.spatial.math.Matrix4 LocalTrans)
	{
		long LocalTransParamValue = LocalTrans.nativeObject.pointer;
		
		set_LocalTrans_CMatrix4(this.nativeObject.pointer, LocalTransParamValue);
	}
	
	native private String get_MeshxFilePath_void(long pNativeObject);
	public String get_MeshxFilePath()
	{
		String jniValue = get_MeshxFilePath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_MeshxFilePath_EVString (long pNativeObject, String value);
	public void set_MeshxFilePath(String MeshxFilePath)
	{
		String MeshxFilePathParamValue = MeshxFilePath;
		
		set_MeshxFilePath_EVString(this.nativeObject.pointer, MeshxFilePathParamValue);
	}
	
	native private long get_EVID_void(long pNativeObject);
	public long get_EVID()
	{
		long jniValue = get_EVID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_EVID_ev_uint32 (long pNativeObject, long value);
	public void set_EVID(long EVID)
	{
		long EVIDParamValue = EVID;
		
		set_EVID_ev_uint32(this.nativeObject.pointer, EVIDParamValue);
	}
	
	public ObqMergeInstanceData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ObqMergeInstanceData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ObqMergeInstanceData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ObqMergeInstanceData obj = null;
 		if(baseObj instanceof ObqMergeInstanceData)
		{
			obj = (ObqMergeInstanceData)baseObj;
		} else {
			obj = new ObqMergeInstanceData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CObqMergeInstanceData");
			obj.increaseCast();
		}

		return obj;
	}
}
