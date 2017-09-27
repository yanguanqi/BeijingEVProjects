package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloatConstantList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::FloatConstantList", new FloatConstantListClassFactory());
	}

	public FloatConstantList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FloatConstantList", null);
	}

	native private void push_back_ev_real32(long pNativeObject, float t);
	public void push_back(float t)
	{
		float tParamValue = t;
		push_back_ev_real32(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public FloatPointer front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public FloatPointer back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_ev_real32(long pNativeObject, long pos, float t);
	public void insert(long pos, float t)
	{
		long posParamValue = pos;
		float tParamValue = t;
		insert_ev_uint32_ev_real32(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	public FloatPointer OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public FloatPointer at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public FloatConstantList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FloatConstantList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FloatConstantList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FloatConstantList obj = null;
 		if(baseObj instanceof FloatConstantList)
		{
			obj = (FloatConstantList)baseObj;
		} else {
			obj = new FloatConstantList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FloatConstantList");
			obj.increaseCast();
		}

		return obj;
	}
}
