package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AngleDistanceMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CAngleDistanceMap", new AngleDistanceMapClassFactory());
	}

	public AngleDistanceMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAngleDistanceMap", null);
	}

	native private boolean push_ev_int32_ev_real64(long pNativeObject, int key, double val);
	public boolean push(int key, double val)
	{
		int keyParamValue = key;
		double valParamValue = val;
		boolean returnValue = push_ev_int32_ev_real64(this.nativeObject.pointer, keyParamValue, valParamValue);
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
	public DoublePointer OperatorIndex(int key)
	{
		int keyParamValue = key;
		long returnValue = OperatorIndex_ev_int32(this.nativeObject.pointer, keyParamValue);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_ev_int32(long pNativeObject, int key);
	public DoublePointer get(int key)
	{
		int keyParamValue = key;
		long returnValue = get_ev_int32(this.nativeObject.pointer, keyParamValue);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
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
	public AngleDistanceMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AngleDistanceMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AngleDistanceMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AngleDistanceMap obj = null;
 		if(baseObj instanceof AngleDistanceMap)
		{
			obj = (AngleDistanceMap)baseObj;
		} else {
			obj = new AngleDistanceMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAngleDistanceMap");
			obj.increaseCast();
		}

		return obj;
	}
}
