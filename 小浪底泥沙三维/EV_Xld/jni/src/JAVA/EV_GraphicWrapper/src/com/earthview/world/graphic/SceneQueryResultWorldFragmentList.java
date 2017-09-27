package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultWorldFragmentList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneQueryResultWorldFragmentList", new SceneQueryResultWorldFragmentListClassFactory());
	}

	public SceneQueryResultWorldFragmentList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneQueryResultWorldFragmentList", null);
	}

	native private void push_back_WorldFragment(long pNativeObject, long ref_t);
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_WorldFragment(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void push_front_WorldFragment(long pNativeObject, long ref_t);
	public void push_front(NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_front_WorldFragment(this.nativeObject.pointer, ref_tParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_WorldFragment(long pNativeObject, long pos, long ref_t);
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.SceneQuery.WorldFragment> ref_t)
	{
		long posParamValue = pos;
		long ref_tParamValue = ref_t.nativeObject.pointer;
		insert_ev_uint32_WorldFragment(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
	public SceneQueryResultWorldFragmentList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryResultWorldFragmentList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneQueryResultWorldFragmentList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryResultWorldFragmentList obj = null;
 		if(baseObj instanceof SceneQueryResultWorldFragmentList)
		{
			obj = (SceneQueryResultWorldFragmentList)baseObj;
		} else {
			obj = new SceneQueryResultWorldFragmentList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneQueryResultWorldFragmentList");
			obj.increaseCast();
		}

		return obj;
	}
}
