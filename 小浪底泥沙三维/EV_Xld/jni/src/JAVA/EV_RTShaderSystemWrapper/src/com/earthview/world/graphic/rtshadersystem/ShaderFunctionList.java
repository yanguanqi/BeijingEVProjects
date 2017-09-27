package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef vector<EarthView::World::Graphic::RTShaderSystem::CFunction*>						ShaderFunctionList;
public class ShaderFunctionList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::ShaderFunctionList", new ShaderFunctionListClassFactory());
	}

	public ShaderFunctionList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ShaderFunctionList", null);
	}

	native private void push_back_CFunction(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.rtshadersystem.Function t)
	{
		long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
		push_back_CFunction(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CFunction(long pNativeObject, long pos, long t);
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CFunction(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.Function>(new InstancePointer(returnValue));
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
	public ShaderFunctionList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShaderFunctionList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShaderFunctionList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShaderFunctionList obj = null;
 		if(baseObj instanceof ShaderFunctionList)
		{
			obj = (ShaderFunctionList)baseObj;
		} else {
			obj = new ShaderFunctionList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ShaderFunctionList");
			obj.increaseCast();
		}

		return obj;
	}
}
