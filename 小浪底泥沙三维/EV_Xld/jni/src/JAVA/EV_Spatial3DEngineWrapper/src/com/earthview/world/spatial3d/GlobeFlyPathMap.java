package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPathMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeFlyPathMap", new GlobeFlyPathMapClassFactory());
	}

	public GlobeFlyPathMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyPathMap", null);
	}

	native private boolean push_EVString_CGlobeFlyPathPtr(long pNativeObject, String key, long val);
	public boolean push(String key, com.earthview.world.spatial3d.GlobeFlyPathPtr val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_CGlobeFlyPathPtr(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	public com.earthview.world.spatial3d.GlobeFlyPathPtr OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.GlobeFlyPathPtr __returnValue = new com.earthview.world.spatial3d.GlobeFlyPathPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPathPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeFlyPathPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPathPtr");
		}
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public com.earthview.world.spatial3d.GlobeFlyPathPtr get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		com.earthview.world.spatial3d.GlobeFlyPathPtr __returnValue = new com.earthview.world.spatial3d.GlobeFlyPathPtr(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeFlyPathPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeFlyPathPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeFlyPathPtr");
		}
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public GlobeFlyPathMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyPathMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyPathMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyPathMap obj = null;
 		if(baseObj instanceof GlobeFlyPathMap)
		{
			obj = (GlobeFlyPathMap)baseObj;
		} else {
			obj = new GlobeFlyPathMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyPathMap");
			obj.increaseCast();
		}

		return obj;
	}
}
