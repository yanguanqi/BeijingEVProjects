package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImagePtrList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ImagePtrList", new ImagePtrListClassFactory());
	}

	public ImagePtrList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ImagePtrList", null);
	}

	native private void push_back_CImage(long pNativeObject, long ref_t);
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.Image> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CImage(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.Image> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.Image> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Image>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public NativeObjectPointer<com.earthview.world.graphic.Image> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.Image> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Image>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CImage(long pNativeObject, long pos, long ref_t);
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Image> ref_t)
	{
		long posParamValue = pos;
		long ref_tParamValue = ref_t.nativeObject.pointer;
		insert_ev_uint32_CImage(this.nativeObject.pointer, posParamValue, ref_tParamValue);
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
	public NativeObjectPointer<com.earthview.world.graphic.Image> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Image> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Image>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	public NativeObjectPointer<com.earthview.world.graphic.Image> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Image> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Image>(new InstancePointer(returnValue));
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
	public ImagePtrList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImagePtrList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ImagePtrList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImagePtrList obj = null;
 		if(baseObj instanceof ImagePtrList)
		{
			obj = (ImagePtrList)baseObj;
		} else {
			obj = new ImagePtrList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ImagePtrList");
			obj.increaseCast();
		}

		return obj;
	}
}
