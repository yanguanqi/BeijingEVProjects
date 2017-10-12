package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheFile extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CacheFile", new CacheFileClassFactory());
	}

	public CacheFile() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CacheFile", null);
	}

	native private String get_DataSourceMetaFullName_void(long pNativeObject);
	public String get_DataSourceMetaFullName()
	{
		String jniValue = get_DataSourceMetaFullName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_DataSourceMetaFullName_EVString (long pNativeObject, String value);
	public void set_DataSourceMetaFullName(String DataSourceMetaFullName)
	{
		String DataSourceMetaFullNameParamValue = DataSourceMetaFullName;
		
		set_DataSourceMetaFullName_EVString(this.nativeObject.pointer, DataSourceMetaFullNameParamValue);
	}
	
	native private String get_DatasetName_void(long pNativeObject);
	public String get_DatasetName()
	{
		String jniValue = get_DatasetName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_DatasetName_EVString (long pNativeObject, String value);
	public void set_DatasetName(String DatasetName)
	{
		String DatasetNameParamValue = DatasetName;
		
		set_DatasetName_EVString(this.nativeObject.pointer, DatasetNameParamValue);
	}
	
	native private String get_CacheFileName_void(long pNativeObject);
	public String get_CacheFileName()
	{
		String jniValue = get_CacheFileName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_CacheFileName_EVString (long pNativeObject, String value);
	public void set_CacheFileName(String CacheFileName)
	{
		String CacheFileNameParamValue = CacheFileName;
		
		set_CacheFileName_EVString(this.nativeObject.pointer, CacheFileNameParamValue);
	}
	
	public CacheFile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheFile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheFile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheFile obj = null;
 		if(baseObj instanceof CacheFile)
		{
			obj = (CacheFile)baseObj;
		} else {
			obj = new CacheFile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CacheFile");
			obj.increaseCast();
		}

		return obj;
	}
}
