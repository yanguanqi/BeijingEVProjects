package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetLockInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetLockInfo", new DatasetLockInfoClassFactory());
	}

	public DatasetLockInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDatasetLockInfo", null);
	}

	native private String get_mDatasetName_void(long pNativeObject);
	public String get_mDatasetName()
	{
		String jniValue = get_mDatasetName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDatasetName_EVString (long pNativeObject, String value);
	public void set_mDatasetName(String mDatasetName)
	{
		String mDatasetNameParamValue = mDatasetName;
		
		set_mDatasetName_EVString(this.nativeObject.pointer, mDatasetNameParamValue);
	}
	
	native private String get_mGuid_void(long pNativeObject);
	public String get_mGuid()
	{
		String jniValue = get_mGuid_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mGuid_EVString (long pNativeObject, String value);
	public void set_mGuid(String mGuid)
	{
		String mGuidParamValue = mGuid;
		
		set_mGuid_EVString(this.nativeObject.pointer, mGuidParamValue);
	}
	
	native private String get_mTypeName_void(long pNativeObject);
	public String get_mTypeName()
	{
		String jniValue = get_mTypeName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTypeName_EVString (long pNativeObject, String value);
	public void set_mTypeName(String mTypeName)
	{
		String mTypeNameParamValue = mTypeName;
		
		set_mTypeName_EVString(this.nativeObject.pointer, mTypeNameParamValue);
	}
	
	native private int get_mEVID_void(long pNativeObject);
	public int get_mEVID()
	{
		int jniValue = get_mEVID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEVID_ev_int32 (long pNativeObject, int value);
	public void set_mEVID(int mEVID)
	{
		int mEVIDParamValue = mEVID;
		
		set_mEVID_ev_int32(this.nativeObject.pointer, mEVIDParamValue);
	}
	
	native private int get_mType_void(long pNativeObject);
	public int get_mType()
	{
		int jniValue = get_mType_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mType_ev_int32 (long pNativeObject, int value);
	public void set_mType(int mType)
	{
		int mTypeParamValue = mType;
		
		set_mType_ev_int32(this.nativeObject.pointer, mTypeParamValue);
	}
	
	public DatasetLockInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DatasetLockInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DatasetLockInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DatasetLockInfo obj = null;
 		if(baseObj instanceof DatasetLockInfo)
		{
			obj = (DatasetLockInfo)baseObj;
		} else {
			obj = new DatasetLockInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDatasetLockInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
