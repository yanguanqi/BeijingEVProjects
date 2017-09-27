package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef vector<EarthView::World::Graphic::ScriptTokenPtr> EarthView::World::Graphic::ScriptTokenList;
public class ScriptTokenList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ScriptTokenList", new ScriptTokenListClassFactory());
	}

	public ScriptTokenList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ScriptTokenList", null);
	}

	native private void push_back_ScriptTokenPtr(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.ScriptTokenPtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_ScriptTokenPtr(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public com.earthview.world.graphic.ScriptTokenPtr front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ScriptTokenPtr __returnValue = new com.earthview.world.graphic.ScriptTokenPtr(CreatedWhenConstruct.CWC_NotToCreate, "ScriptTokenPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTokenPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ScriptTokenPtr");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.graphic.ScriptTokenPtr back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ScriptTokenPtr __returnValue = new com.earthview.world.graphic.ScriptTokenPtr(CreatedWhenConstruct.CWC_NotToCreate, "ScriptTokenPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTokenPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ScriptTokenPtr");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_ScriptTokenPtr(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.graphic.ScriptTokenPtr t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_ScriptTokenPtr(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public com.earthview.world.graphic.ScriptTokenPtr OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.ScriptTokenPtr __returnValue = new com.earthview.world.graphic.ScriptTokenPtr(CreatedWhenConstruct.CWC_NotToCreate, "ScriptTokenPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTokenPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ScriptTokenPtr");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public com.earthview.world.graphic.ScriptTokenPtr at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.ScriptTokenPtr __returnValue = new com.earthview.world.graphic.ScriptTokenPtr(CreatedWhenConstruct.CWC_NotToCreate, "ScriptTokenPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTokenPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ScriptTokenPtr");
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
	public ScriptTokenList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptTokenList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptTokenList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptTokenList obj = null;
 		if(baseObj instanceof ScriptTokenList)
		{
			obj = (ScriptTokenList)baseObj;
		} else {
			obj = new ScriptTokenList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ScriptTokenList");
			obj.increaseCast();
		}

		return obj;
	}
}
