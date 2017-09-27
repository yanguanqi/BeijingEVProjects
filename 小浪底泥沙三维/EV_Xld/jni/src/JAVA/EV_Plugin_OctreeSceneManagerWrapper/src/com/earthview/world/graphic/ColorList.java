package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef list< ev_uint32 > ColorList;
public class ColorList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ColorList", new ColorListClassFactory());
	}

	public ColorList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ColorList", null);
	}

	native private void push_back_ev_uint32(long pNativeObject, long t);
	public void push_back(long t)
	{
		long tParamValue = t;
		push_back_ev_uint32(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_ev_uint32(long pNativeObject, long t);
	public void push_front(long t)
	{
		long tParamValue = t;
		push_front_ev_uint32(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private void pop_front_void(long pNativeObject);
	public void pop_front()
	{
		pop_front_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public UIntegerPointer front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public UIntegerPointer back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public UIntegerPointer at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		UIntegerPointer __returnValue = new UIntegerPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_ev_uint32(long pNativeObject, long pos, long t);
	public void insert(long pos, long t)
	{
		long posParamValue = pos;
		long tParamValue = t;
		insert_ev_uint32_ev_uint32(this.nativeObject.pointer, posParamValue, tParamValue);
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
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public ColorList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColorList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ColorList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColorList obj = null;
 		if(baseObj instanceof ColorList)
		{
			obj = (ColorList)baseObj;
		} else {
			obj = new ColorList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ColorList");
			obj.increaseCast();
		}

		return obj;
	}
}
