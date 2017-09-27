package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneQueryResultMovableListEx extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneQueryResultMovableListEx", new SceneQueryResultMovableListExClassFactory());
	}

	public SceneQueryResultMovableListEx() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SceneQueryResultMovableListEx", null);
	}

	native private void push_back_SceneQueryResultEntry(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.SceneQueryResultEntry t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_SceneQueryResultEntry(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_SceneQueryResultEntry(long pNativeObject, long t);
	public void push_front(com.earthview.world.graphic.SceneQueryResultEntry t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_SceneQueryResultEntry(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.graphic.SceneQueryResultEntry front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResultEntry __returnValue = new com.earthview.world.graphic.SceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultEntry");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.graphic.SceneQueryResultEntry back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.SceneQueryResultEntry __returnValue = new com.earthview.world.graphic.SceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultEntry");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public com.earthview.world.graphic.SceneQueryResultEntry at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.graphic.SceneQueryResultEntry __returnValue = new com.earthview.world.graphic.SceneQueryResultEntry(CreatedWhenConstruct.CWC_NotToCreate, "SceneQueryResultEntry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneQueryResultEntry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "SceneQueryResultEntry");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_SceneQueryResultEntry(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.graphic.SceneQueryResultEntry t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_SceneQueryResultEntry(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public SceneQueryResultMovableListEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneQueryResultMovableListEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SceneQueryResultMovableListEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneQueryResultMovableListEx obj = null;
 		if(baseObj instanceof SceneQueryResultMovableListEx)
		{
			obj = (SceneQueryResultMovableListEx)baseObj;
		} else {
			obj = new SceneQueryResultMovableListEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SceneQueryResultMovableListEx");
			obj.increaseCast();
		}

		return obj;
	}
}
