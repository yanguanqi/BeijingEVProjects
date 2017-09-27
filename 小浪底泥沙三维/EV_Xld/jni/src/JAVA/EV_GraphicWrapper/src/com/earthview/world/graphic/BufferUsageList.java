package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Define a list of usage flags
///typedef vector<EarthView::World::Graphic::CHardwareBuffer::Usage> EarthView::World::Graphic::BufferUsageList;
public class BufferUsageList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::BufferUsageList", new BufferUsageListClassFactory());
	}

	public BufferUsageList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("BufferUsageList", null);
	}

	native private void push_back_Usage(long pNativeObject, int t);
	public void push_back(com.earthview.world.graphic.HardwareBuffer.Usage t)
	{
		int tParamValue = t.getValue();
		push_back_Usage(this.nativeObject.pointer, tParamValue);
	}
	native private void insert_ev_uint32_Usage(long pNativeObject, long pos, int t);
	public void insert(long pos, com.earthview.world.graphic.HardwareBuffer.Usage t)
	{
		long posParamValue = pos;
		int tParamValue = t.getValue();
		insert_ev_uint32_Usage(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void erase_ev_uint32(long pNativeObject, long pos);
	public void erase(long pos)
	{
		long posParamValue = pos;
		erase_ev_uint32(this.nativeObject.pointer, posParamValue);
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	public EnumPointer OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public EnumPointer at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
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
	public BufferUsageList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BufferUsageList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BufferUsageList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BufferUsageList obj = null;
 		if(baseObj instanceof BufferUsageList)
		{
			obj = (BufferUsageList)baseObj;
		} else {
			obj = new BufferUsageList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "BufferUsageList");
			obj.increaseCast();
		}

		return obj;
	}
}
