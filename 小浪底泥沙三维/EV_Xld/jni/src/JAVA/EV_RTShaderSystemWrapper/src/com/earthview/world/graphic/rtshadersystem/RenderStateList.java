package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef vector<EarthView::World::Graphic::RTShaderSystem::CRenderState*> 				RenderStateList;
public class RenderStateList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::RenderStateList", new RenderStateListClassFactory());
	}

	public RenderStateList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderStateList", null);
	}

	native private void push_back_CRenderState(long pNativeObject, long t);
	public void push_back(com.earthview.world.graphic.rtshadersystem.RenderState t)
	{
		long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
		push_back_CRenderState(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CRenderState(long pNativeObject, long pos, long t);
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CRenderState(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.RenderState>(new InstancePointer(returnValue));
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
	native private void resize_ev_size_t_CRenderState(long pNativeObject, long newSize, long t);
	public void resize(long newSize, com.earthview.world.graphic.rtshadersystem.RenderState t)
	{
		long newSizeParamValue = newSize;
		long tParamValue = (t == null ? 0L : t.nativeObject.pointer);
		resize_ev_size_t_CRenderState(this.nativeObject.pointer, newSizeParamValue, tParamValue);
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
	public RenderStateList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderStateList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderStateList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderStateList obj = null;
 		if(baseObj instanceof RenderStateList)
		{
			obj = (RenderStateList)baseObj;
		} else {
			obj = new RenderStateList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderStateList");
			obj.increaseCast();
		}

		return obj;
	}
}
