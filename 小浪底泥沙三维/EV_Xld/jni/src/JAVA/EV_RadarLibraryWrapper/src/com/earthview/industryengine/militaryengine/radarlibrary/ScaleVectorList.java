package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleVectorList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList", new ScaleVectorListClassFactory());
	}

	public ScaleVectorList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CScaleVectorList", null);
	}

	native private void OperatorAssign_CScaleVectorList(long pNativeObject, long value);
	public void OperatorAssign(com.earthview.industryengine.militaryengine.radarlibrary.ScaleVectorList value)
	{
		long valueParamValue = value.nativeObject.pointer;
		OperatorAssign_CScaleVectorList(this.nativeObject.pointer, valueParamValue);
	}
	native private void push_back_ScaleVector(long pNativeObject, long value);
	public void push_back(com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector value)
	{
		long valueParamValue = (value == null ? 0L : value.nativeObject.pointer);
		push_back_ScaleVector(this.nativeObject.pointer, valueParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_ScaleVector(long pNativeObject, long pos, long value);
	public void insert(long pos, com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector value)
	{
		long posParamValue = pos;
		long valueParamValue = (value == null ? 0L : value.nativeObject.pointer);
		insert_ev_uint32_ScaleVector(this.nativeObject.pointer, posParamValue, valueParamValue);
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
	public com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector __returnValue = new com.earthview.industryengine.militaryengine.radarlibrary.ScaleVector(new InstancePointer(returnValue));
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
	public ScaleVectorList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScaleVectorList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScaleVectorList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScaleVectorList obj = null;
 		if(baseObj instanceof ScaleVectorList)
		{
			obj = (ScaleVectorList)baseObj;
		} else {
			obj = new ScaleVectorList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScaleVectorList");
			obj.increaseCast();
		}

		return obj;
	}
}
