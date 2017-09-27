package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySceneQueryResult extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RaySceneQueryResult", new RaySceneQueryResultClassFactory());
	}

	public RaySceneQueryResult() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RaySceneQueryResult", null);
	}

	native private void push_back_RaySceneQueryResultEntry(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.RaySceneQueryResultEntry t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_RaySceneQueryResultEntry(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public com.earthview.world.graphic.RaySceneQueryResultEntry front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RaySceneQueryResultEntry __returnValue = new com.earthview.world.graphic.RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "RaySceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RaySceneQueryResultEntry");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.graphic.RaySceneQueryResultEntry back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.RaySceneQueryResultEntry __returnValue = new com.earthview.world.graphic.RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "RaySceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RaySceneQueryResultEntry");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_RaySceneQueryResultEntry(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.graphic.RaySceneQueryResultEntry t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_RaySceneQueryResultEntry(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void swap_RaySceneQueryResult(long pNativeObject, long res);
	public void swap(com.earthview.world.graphic.RaySceneQueryResult res)
	{
		long resParamValue = res.nativeObject.pointer;
		swap_RaySceneQueryResult(this.nativeObject.pointer, resParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	public com.earthview.world.graphic.RaySceneQueryResultEntry OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.RaySceneQueryResultEntry __returnValue = new com.earthview.world.graphic.RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "RaySceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RaySceneQueryResultEntry");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public com.earthview.world.graphic.RaySceneQueryResultEntry at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.RaySceneQueryResultEntry __returnValue = new com.earthview.world.graphic.RaySceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "RaySceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RaySceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "RaySceneQueryResultEntry");
		}
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
	public RaySceneQueryResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RaySceneQueryResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RaySceneQueryResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RaySceneQueryResult obj = null;
 		if(baseObj instanceof RaySceneQueryResult)
		{
			obj = (RaySceneQueryResult)baseObj;
		} else {
			obj = new RaySceneQueryResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RaySceneQueryResult");
			obj.increaseCast();
		}

		return obj;
	}
}
