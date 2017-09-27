package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef vector<EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*>					FunctionAtomInstanceList;
public class FunctionAtomInstanceList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList", new FunctionAtomInstanceListClassFactory());
	}

	public FunctionAtomInstanceList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FunctionAtomInstanceList", null);
	}

	native private void push_back_CFunctionAtom(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.rtshadersystem.FunctionAtom t)
	{
		long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
		push_back_CFunctionAtom(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CFunctionAtom(long pNativeObject, long pos, long t);
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CFunctionAtom(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.FunctionAtom>(new InstancePointer(returnValue));
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
	public FunctionAtomInstanceList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FunctionAtomInstanceList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FunctionAtomInstanceList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FunctionAtomInstanceList obj = null;
 		if(baseObj instanceof FunctionAtomInstanceList)
		{
			obj = (FunctionAtomInstanceList)baseObj;
		} else {
			obj = new FunctionAtomInstanceList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FunctionAtomInstanceList");
			obj.increaseCast();
		}

		return obj;
	}
}
