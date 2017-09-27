package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeDataList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::MeshOptimizeDataList", new MeshOptimizeDataListClassFactory());
	}

	public MeshOptimizeDataList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MeshOptimizeDataList", null);
	}

	native private void push_back_CMeshOptimizeData(long pNativeObject, long t);
	public void push_back(com.earthview.meshoptimize.MeshOptimizeData t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CMeshOptimizeData(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_CMeshOptimizeData(long pNativeObject, long t);
	public void push_front(com.earthview.meshoptimize.MeshOptimizeData t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_CMeshOptimizeData(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.meshoptimize.MeshOptimizeData front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.MeshOptimizeData __returnValue = new com.earthview.meshoptimize.MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate, "CMeshOptimizeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.MeshOptimizeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshOptimizeData");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	public com.earthview.meshoptimize.MeshOptimizeData back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.meshoptimize.MeshOptimizeData __returnValue = new com.earthview.meshoptimize.MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate, "CMeshOptimizeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.MeshOptimizeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshOptimizeData");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	public com.earthview.meshoptimize.MeshOptimizeData at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.meshoptimize.MeshOptimizeData __returnValue = new com.earthview.meshoptimize.MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate, "CMeshOptimizeData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.meshoptimize.MeshOptimizeData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshOptimizeData");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CMeshOptimizeData(long pNativeObject, long pos, long t);
	public void insert(long pos, com.earthview.meshoptimize.MeshOptimizeData t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CMeshOptimizeData(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public MeshOptimizeDataList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshOptimizeDataList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshOptimizeDataList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshOptimizeDataList obj = null;
 		if(baseObj instanceof MeshOptimizeDataList)
		{
			obj = (MeshOptimizeDataList)baseObj;
		} else {
			obj = new MeshOptimizeDataList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MeshOptimizeDataList");
			obj.increaseCast();
		}

		return obj;
	}
}
