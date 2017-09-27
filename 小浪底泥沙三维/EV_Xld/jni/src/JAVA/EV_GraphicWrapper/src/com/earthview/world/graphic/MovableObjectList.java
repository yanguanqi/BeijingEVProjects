package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 通过名称检索子对象
/// typedef map<EVString, EarthView::World::Graphic::CMovableObject*> MovableObjectList;
/// </summary>
public class MovableObjectList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::MovableObjectList", new MovableObjectListClassFactory());
	}

	public MovableObjectList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MovableObjectList", null);
	}

	native private boolean push_EVString_CMovableObject(long pNativeObject, String key, long val);
	public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.MovableObject> val)
	{
		String keyParamValue = key;
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = push_EVString_CMovableObject(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.MovableObject> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	public NativeObjectPointer<com.earthview.world.graphic.MovableObject> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.MovableObject> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.MovableObject>(new InstancePointer(returnValue));
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
	public MovableObjectList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MovableObjectList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MovableObjectList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MovableObjectList obj = null;
 		if(baseObj instanceof MovableObjectList)
		{
			obj = (MovableObjectList)baseObj;
		} else {
			obj = new MovableObjectList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MovableObjectList");
			obj.increaseCast();
		}

		return obj;
	}
}
