package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

////typedef map<EVString, EarthView::World::Core::CParamCommand* > ParamCommandMap;
public class ParamCommandMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::ParamCommandMap", new ParamCommandMapClassFactory());
	}

	public ParamCommandMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ParamCommandMap", null);
	}

	native private boolean push_EVString_CParamCommand(long pNativeObject, String key, long val);
	public boolean push(String key, NativeObjectPointer<com.earthview.world.core.ParamCommand> val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_CParamCommand(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	public NativeObjectPointer<com.earthview.world.core.ParamCommand> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.core.ParamCommand> __returnValue = new NativeObjectPointer<com.earthview.world.core.ParamCommand>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public NativeObjectPointer<com.earthview.world.core.ParamCommand> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.core.ParamCommand> __returnValue = new NativeObjectPointer<com.earthview.world.core.ParamCommand>(new InstancePointer(returnValue));
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
	public ParamCommandMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParamCommandMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParamCommandMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParamCommandMap obj = null;
 		if(baseObj instanceof ParamCommandMap)
		{
			obj = (ParamCommandMap)baseObj;
		} else {
			obj = new ParamCommandMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ParamCommandMap");
			obj.increaseCast();
		}

		return obj;
	}
}
