package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntConstantList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::IntConstantList", new IntConstantListClassFactory());
	}

	public IntConstantList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("IntConstantList", null);
	}

	native private void push_back_ev_int32(long pNativeObject, int t);
	public void push_back(int t)
	{
		int tParamValue = t;
		push_back_ev_int32(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public IntegerPointer front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public IntegerPointer back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_ev_int32(long pNativeObject, long pos, int t);
	public void insert(long pos, int t)
	{
		long posParamValue = pos;
		int tParamValue = t;
		insert_ev_uint32_ev_int32(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public IntegerPointer OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public IntegerPointer at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		IntegerPointer __returnValue = new IntegerPointer(new InstancePointer(returnValue));
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
	public IntConstantList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IntConstantList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IntConstantList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IntConstantList obj = null;
 		if(baseObj instanceof IntConstantList)
		{
			obj = (IntConstantList)baseObj;
		} else {
			obj = new IntConstantList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IntConstantList");
			obj.increaseCast();
		}

		return obj;
	}
}
