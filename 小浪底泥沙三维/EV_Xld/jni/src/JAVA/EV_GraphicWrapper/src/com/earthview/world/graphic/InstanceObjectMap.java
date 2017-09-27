package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceObjectMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CInstanceObjectMap", new InstanceObjectMapClassFactory());
	}

	public InstanceObjectMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CInstanceObjectMap", null);
	}

	native private boolean push_EVString_CInstanceObject(long pNativeObject, String key, long ref_val);
	public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.InstanceObject> ref_val)
	{
		String keyParamValue = key;
		long ref_valParamValue = ref_val.nativeObject.pointer;
		boolean returnValue = push_EVString_CInstanceObject(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.InstanceObject> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.InstanceObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstanceObject>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public NativeObjectPointer<com.earthview.world.graphic.InstanceObject> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.InstanceObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.InstanceObject>(new InstancePointer(returnValue));
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
	public InstanceObjectMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public InstanceObjectMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static InstanceObjectMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		InstanceObjectMap obj = null;
 		if(baseObj instanceof InstanceObjectMap)
		{
			obj = (InstanceObjectMap)baseObj;
		} else {
			obj = new InstanceObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CInstanceObjectMap");
			obj.increaseCast();
		}

		return obj;
	}
}
