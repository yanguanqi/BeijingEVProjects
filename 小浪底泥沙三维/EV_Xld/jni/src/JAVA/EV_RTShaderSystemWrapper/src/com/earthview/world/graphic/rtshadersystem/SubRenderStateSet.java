package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef set<EarthView::World::Graphic::RTShaderSystem::CSubRenderState*> 					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet;
public class SubRenderStateSet extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet", new SubRenderStateSetClassFactory());
	}

	public SubRenderStateSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SubRenderStateSet", null);
	}

	native private void insert_CSubRenderState(long pNativeObject, long val);
	public void insert(com.earthview.world.graphic.rtshadersystem.SubRenderState val)
	{
		long valParamValue = (val == null ? 0L : val.nativeObject.pointer);
		insert_CSubRenderState(this.nativeObject.pointer, valParamValue);
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long erase_CSubRenderState(long pNativeObject, long key);
	public long erase(NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.SubRenderState> key)
	{
		long keyParamValue = key.nativeObject.pointer;
		long returnValue = erase_CSubRenderState(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long count_CSubRenderState(long pNativeObject, long key);
	public long count(NativeObjectPointer<com.earthview.world.graphic.rtshadersystem.SubRenderState> key)
	{
		long keyParamValue = key.nativeObject.pointer;
		long returnValue = count_CSubRenderState(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long max_size_void(long pNativeObject);
	public long max_size()
	{
		long returnValue = max_size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void swap_SubRenderStateSet(long pNativeObject, long other);
	public void swap(com.earthview.world.graphic.rtshadersystem.SubRenderStateSet other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_SubRenderStateSet(this.nativeObject.pointer, otherParamValue);
	}
	public SubRenderStateSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubRenderStateSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubRenderStateSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubRenderStateSet obj = null;
 		if(baseObj instanceof SubRenderStateSet)
		{
			obj = (SubRenderStateSet)baseObj;
		} else {
			obj = new SubRenderStateSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SubRenderStateSet");
			obj.increaseCast();
		}

		return obj;
	}
}
