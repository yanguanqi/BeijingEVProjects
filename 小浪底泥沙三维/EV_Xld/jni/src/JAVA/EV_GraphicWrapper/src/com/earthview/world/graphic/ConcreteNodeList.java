package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef list<EarthView::World::Graphic::ConcreteNodePtr> EarthView::World::Graphic::ConcreteNodeList;
public class ConcreteNodeList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConcreteNodeList", new ConcreteNodeListClassFactory());
	}

	public ConcreteNodeList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ConcreteNodeList", null);
	}

	native private void push_back_ConcreteNodePtr(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.ConcreteNodePtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_ConcreteNodePtr(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_ConcreteNodePtr(long pNativeObject, long t);
	public void push_front(com.earthview.world.graphic.ConcreteNodePtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_ConcreteNodePtr(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.graphic.ConcreteNodePtr front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ConcreteNodePtr __returnValue = new com.earthview.world.graphic.ConcreteNodePtr(CreatedWhenConstruct.CWC_NotToCreate, "ConcreteNodePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodePtr");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.graphic.ConcreteNodePtr back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ConcreteNodePtr __returnValue = new com.earthview.world.graphic.ConcreteNodePtr(CreatedWhenConstruct.CWC_NotToCreate, "ConcreteNodePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodePtr");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public com.earthview.world.graphic.ConcreteNodePtr at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.graphic.ConcreteNodePtr __returnValue = new com.earthview.world.graphic.ConcreteNodePtr(CreatedWhenConstruct.CWC_NotToCreate, "ConcreteNodePtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodePtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodePtr");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_ConcreteNodePtr(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.graphic.ConcreteNodePtr t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_ConcreteNodePtr(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public ConcreteNodeList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConcreteNodeList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConcreteNodeList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConcreteNodeList obj = null;
 		if(baseObj instanceof ConcreteNodeList)
		{
			obj = (ConcreteNodeList)baseObj;
		} else {
			obj = new ConcreteNodeList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConcreteNodeList");
			obj.increaseCast();
		}

		return obj;
	}
}
