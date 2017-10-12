package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 字段定义
 */
public class CacheFieldInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CCacheFieldInfo", new CacheFieldInfoClassFactory());
	}

	native private String get_strFieldName_void(long pNativeObject);
	public String get_strFieldName()
	{
		String jniValue = get_strFieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_strFieldName_EVString (long pNativeObject, String value);
	public void set_strFieldName(String strFieldName)
	{
		String strFieldNameParamValue = strFieldName;
		
		set_strFieldName_EVString(this.nativeObject.pointer, strFieldNameParamValue);
	}
	
	native private int get_nValueType_void(long pNativeObject);
	public com.earthview.world.spatial.vectorcache.EVVectorCacheFieldType get_nValueType()
	{
		int jniValue = get_nValueType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.vectorcache.EVVectorCacheFieldType.toEnum(jniValue);
	}
	
	native private void set_nValueType_EVVectorCacheFieldType (long pNativeObject, int value);
	public void set_nValueType(com.earthview.world.spatial.vectorcache.EVVectorCacheFieldType nValueType)
	{
		int nValueTypeParamValue = nValueType.getValue();
		
		set_nValueType_EVVectorCacheFieldType(this.nativeObject.pointer, nValueTypeParamValue);
	}
	
	native private int get_nSize_void(long pNativeObject);
	public int get_nSize()
	{
		int jniValue = get_nSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_nSize_ev_int32 (long pNativeObject, int value);
	public void set_nSize(int nSize)
	{
		int nSizeParamValue = nSize;
		
		set_nSize_ev_int32(this.nativeObject.pointer, nSizeParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public CacheFieldInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCacheFieldInfo", null);
	}

	public CacheFieldInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheFieldInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheFieldInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheFieldInfo obj = null;
 		if(baseObj instanceof CacheFieldInfo)
		{
			obj = (CacheFieldInfo)baseObj;
		} else {
			obj = new CacheFieldInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCacheFieldInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
