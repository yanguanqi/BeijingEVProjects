package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef list<EarthView::World::Graphic::AbstractNodePtr> EarthView::World::Graphic::AbstractNodeList;
public class AbstractNodeList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::AbstractNodeList", new AbstractNodeListClassFactory());
	}

	public AbstractNodeList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AbstractNodeList", null);
	}

	native private void push_back_AbstractNodePtr(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.AbstractNodePtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_AbstractNodePtr(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_AbstractNodePtr(long pNativeObject, long t);
	public void push_front(com.earthview.world.graphic.AbstractNodePtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_AbstractNodePtr(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.graphic.AbstractNodePtr front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.AbstractNodePtr __returnValue = new com.earthview.world.graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate, "AbstractNodePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodePtr");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodePtr back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.AbstractNodePtr __returnValue = new com.earthview.world.graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate, "AbstractNodePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodePtr");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public com.earthview.world.graphic.AbstractNodePtr at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.graphic.AbstractNodePtr __returnValue = new com.earthview.world.graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate, "AbstractNodePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodePtr");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_AbstractNodePtr(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.graphic.AbstractNodePtr t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_AbstractNodePtr(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public AbstractNodeList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AbstractNodeList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AbstractNodeList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AbstractNodeList obj = null;
 		if(baseObj instanceof AbstractNodeList)
		{
			obj = (AbstractNodeList)baseObj;
		} else {
			obj = new AbstractNodeList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AbstractNodeList");
			obj.increaseCast();
		}

		return obj;
	}
}
