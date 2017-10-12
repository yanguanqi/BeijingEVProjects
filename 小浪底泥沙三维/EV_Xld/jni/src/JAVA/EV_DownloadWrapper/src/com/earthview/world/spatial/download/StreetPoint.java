package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class StreetPoint extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetPoint", new StreetPointClassFactory());
	}

	public StreetPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CStreetPoint", null);
	}

	native private long get_mEVID_void(long pNativeObject);
	public long get_mEVID()
	{
		long jniValue = get_mEVID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEVID_ev_uint32 (long pNativeObject, long value);
	public void set_mEVID(long mEVID)
	{
		long mEVIDParamValue = mEVID;
		
		set_mEVID_ev_uint32(this.nativeObject.pointer, mEVIDParamValue);
	}
	
	native private long get_mNearEVID_void(long pNativeObject);
	public long get_mNearEVID()
	{
		long jniValue = get_mNearEVID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mNearEVID_ev_uint32 (long pNativeObject, long value);
	public void set_mNearEVID(long mNearEVID)
	{
		long mNearEVIDParamValue = mNearEVID;
		
		set_mNearEVID_ev_uint32(this.nativeObject.pointer, mNearEVIDParamValue);
	}
	
	native private long get_mTopoID_void(long pNativeObject);
	public long get_mTopoID()
	{
		long jniValue = get_mTopoID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTopoID_ev_uint32 (long pNativeObject, long value);
	public void set_mTopoID(long mTopoID)
	{
		long mTopoIDParamValue = mTopoID;
		
		set_mTopoID_ev_uint32(this.nativeObject.pointer, mTopoIDParamValue);
	}
	
	native private long get_mID_void(long pNativeObject);
	public long get_mID()
	{
		long jniValue = get_mID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mID_ev_uint32 (long pNativeObject, long value);
	public void set_mID(long mID)
	{
		long mIDParamValue = mID;
		
		set_mID_ev_uint32(this.nativeObject.pointer, mIDParamValue);
	}
	
	native private boolean get_mIsEdge_void(long pNativeObject);
	public boolean get_mIsEdge()
	{
		boolean jniValue = get_mIsEdge_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsEdge_ev_bool (long pNativeObject, boolean value);
	public void set_mIsEdge(boolean mIsEdge)
	{
		boolean mIsEdgeParamValue = mIsEdge;
		
		set_mIsEdge_ev_bool(this.nativeObject.pointer, mIsEdgeParamValue);
	}
	
	native private boolean get_mIsRepeated_void(long pNativeObject);
	public boolean get_mIsRepeated()
	{
		boolean jniValue = get_mIsRepeated_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsRepeated_ev_bool (long pNativeObject, boolean value);
	public void set_mIsRepeated(boolean mIsRepeated)
	{
		boolean mIsRepeatedParamValue = mIsRepeated;
		
		set_mIsRepeated_ev_bool(this.nativeObject.pointer, mIsRepeatedParamValue);
	}
	
	native private double get_mLon_void(long pNativeObject);
	public double get_mLon()
	{
		double jniValue = get_mLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLon_ev_real64 (long pNativeObject, double value);
	public void set_mLon(double mLon)
	{
		double mLonParamValue = mLon;
		
		set_mLon_ev_real64(this.nativeObject.pointer, mLonParamValue);
	}
	
	native private double get_mLat_void(long pNativeObject);
	public double get_mLat()
	{
		double jniValue = get_mLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLat_ev_real64 (long pNativeObject, double value);
	public void set_mLat(double mLat)
	{
		double mLatParamValue = mLat;
		
		set_mLat_ev_real64(this.nativeObject.pointer, mLatParamValue);
	}
	
	native private double get_mNearLon_void(long pNativeObject);
	public double get_mNearLon()
	{
		double jniValue = get_mNearLon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mNearLon_ev_real64 (long pNativeObject, double value);
	public void set_mNearLon(double mNearLon)
	{
		double mNearLonParamValue = mNearLon;
		
		set_mNearLon_ev_real64(this.nativeObject.pointer, mNearLonParamValue);
	}
	
	native private double get_mNearLat_void(long pNativeObject);
	public double get_mNearLat()
	{
		double jniValue = get_mNearLat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mNearLat_ev_real64 (long pNativeObject, double value);
	public void set_mNearLat(double mNearLat)
	{
		double mNearLatParamValue = mNearLat;
		
		set_mNearLat_ev_real64(this.nativeObject.pointer, mNearLatParamValue);
	}
	
	native private String get_mPhotoFile_void(long pNativeObject);
	public String get_mPhotoFile()
	{
		String jniValue = get_mPhotoFile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPhotoFile_EVString (long pNativeObject, String value);
	public void set_mPhotoFile(String mPhotoFile)
	{
		String mPhotoFileParamValue = mPhotoFile;
		
		set_mPhotoFile_EVString(this.nativeObject.pointer, mPhotoFileParamValue);
	}
	
	native private String get_mMapCode_void(long pNativeObject);
	public String get_mMapCode()
	{
		String jniValue = get_mMapCode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMapCode_EVString (long pNativeObject, String value);
	public void set_mMapCode(String mMapCode)
	{
		String mMapCodeParamValue = mMapCode;
		
		set_mMapCode_EVString(this.nativeObject.pointer, mMapCodeParamValue);
	}
	
	native private String get_mNearMapCode_void(long pNativeObject);
	public String get_mNearMapCode()
	{
		String jniValue = get_mNearMapCode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mNearMapCode_EVString (long pNativeObject, String value);
	public void set_mNearMapCode(String mNearMapCode)
	{
		String mNearMapCodeParamValue = mNearMapCode;
		
		set_mNearMapCode_EVString(this.nativeObject.pointer, mNearMapCodeParamValue);
	}
	
	native private String get_mExtendAtrri_void(long pNativeObject);
	public String get_mExtendAtrri()
	{
		String jniValue = get_mExtendAtrri_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mExtendAtrri_EVString (long pNativeObject, String value);
	public void set_mExtendAtrri(String mExtendAtrri)
	{
		String mExtendAtrriParamValue = mExtendAtrri;
		
		set_mExtendAtrri_EVString(this.nativeObject.pointer, mExtendAtrriParamValue);
	}
	
	native private boolean OperatorEquals_CStreetPoint(long pNativeObject, long rkStreetPoint);
	public boolean OperatorEquals(com.earthview.world.spatial.download.StreetPoint rkStreetPoint)
	{
		long rkStreetPointParamValue = rkStreetPoint.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CStreetPoint(this.nativeObject.pointer, rkStreetPointParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CStreetPoint(long pNativeObject, long rkStreetPoint);
	public boolean OperatorNotEquals(com.earthview.world.spatial.download.StreetPoint rkStreetPoint)
	{
		long rkStreetPointParamValue = rkStreetPoint.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CStreetPoint(this.nativeObject.pointer, rkStreetPointParamValue);
		return returnValue;
	}
	public StreetPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StreetPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static StreetPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StreetPoint obj = null;
 		if(baseObj instanceof StreetPoint)
		{
			obj = (StreetPoint)baseObj;
		} else {
			obj = new StreetPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStreetPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
