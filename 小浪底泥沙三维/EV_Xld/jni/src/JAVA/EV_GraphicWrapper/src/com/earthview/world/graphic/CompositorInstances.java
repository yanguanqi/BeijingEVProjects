package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Data types
public class CompositorInstances extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CompositorInstances", new CompositorInstancesClassFactory());
	}

	public CompositorInstances() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CompositorInstances", null);
	}

	native private void push_back_CCompositorInstance(long pNativeObject, long ref_t);
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.CompositorInstance> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CCompositorInstance(this.nativeObject.pointer, ref_tParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.CompositorInstance> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.CompositorInstance> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositorInstance>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public NativeObjectPointer<com.earthview.world.graphic.CompositorInstance> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.CompositorInstance> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.CompositorInstance>(new InstancePointer(returnValue));
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
	public CompositorInstances(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorInstances(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompositorInstances fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorInstances obj = null;
 		if(baseObj instanceof CompositorInstances)
		{
			obj = (CompositorInstances)baseObj;
		} else {
			obj = new CompositorInstances(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CompositorInstances");
			obj.increaseCast();
		}

		return obj;
	}
}
