package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef vector<EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr>		UniformParameterList;
public class UniformParameterList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::UniformParameterList", new UniformParameterListClassFactory());
	}

	public UniformParameterList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("UniformParameterList", null);
	}

	native private void push_back_UniformParameterPtr(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.rtshadersystem.UniformParameterPtr t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_UniformParameterPtr(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate, "UniformParameterPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate, "UniformParameterPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_UniformParameterPtr(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.world.graphic.rtshadersystem.UniformParameterPtr t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_UniformParameterPtr(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate, "UniformParameterPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public com.earthview.world.graphic.rtshadersystem.UniformParameterPtr at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.graphic.rtshadersystem.UniformParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate, "UniformParameterPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameterPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "UniformParameterPtr");
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
	public UniformParameterList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UniformParameterList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UniformParameterList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UniformParameterList obj = null;
 		if(baseObj instanceof UniformParameterList)
		{
			obj = (UniformParameterList)baseObj;
		} else {
			obj = new UniformParameterList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "UniformParameterList");
			obj.increaseCast();
		}

		return obj;
	}
}
