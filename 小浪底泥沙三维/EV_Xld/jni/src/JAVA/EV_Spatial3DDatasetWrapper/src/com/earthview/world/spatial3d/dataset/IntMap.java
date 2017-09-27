package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntMap extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::IntMap", new IntMapClassFactory());
	}

	public IntMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("IntMap", null);
	}

	native private boolean push_ev_int32_ev_int32(long pNativeObject, int key, int val);
	public boolean push(int key, int val)
	{
		int keyParamValue = key;
		int valParamValue = val;
		boolean returnValue = push_ev_int32_ev_int32(this.nativeObject.pointer, keyParamValue, valParamValue);
		return returnValue;
	}
	native private boolean exist_ev_int32(long pNativeObject, int key);
	public boolean exist(int key)
	{
		int keyParamValue = key;
		boolean returnValue = exist_ev_int32(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_ev_int32(long pNativeObject, int key);
	public IntegerPointer OperatorIndex(int key)
	{
		int keyParamValue = key;
		long returnValue = OperatorIndex_ev_int32(this.nativeObject.pointer, keyParamValue);
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_ev_int32(long pNativeObject, int key);
	public IntegerPointer get(int key)
	{
		int keyParamValue = key;
		long returnValue = get_ev_int32(this.nativeObject.pointer, keyParamValue);
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_ev_int32(long pNativeObject, int key);
	public void erase(int key)
	{
		int keyParamValue = key;
		erase_ev_int32(this.nativeObject.pointer, keyParamValue);
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
	native private long getKeys_void(long pNativeObject);
	public com.earthview.world.core.IntVector getKeys()
	{
		long returnValue = getKeys_void(this.nativeObject.pointer);
		com.earthview.world.core.IntVector __returnValue = new com.earthview.world.core.IntVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.IntVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntVector");
		}
		return __returnValue;
	}
	public IntMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IntMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntMap obj = null;
 		if(baseObj instanceof IntMap)
		{
			obj = (IntMap)baseObj;
		} else {
			obj = new IntMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IntMap");
			obj.increaseCast();
		}

		return obj;
	}
}
