package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuLogicalIndexUse extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuLogicalIndexUse", new GpuLogicalIndexUseClassFactory());
	}

	native private long get_physicalIndex_void(long pNativeObject);
	public long get_physicalIndex()
	{
		long jniValue = get_physicalIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_physicalIndex_ev_size_t (long pNativeObject, long value);
	public void set_physicalIndex(long physicalIndex)
	{
		long physicalIndexParamValue = physicalIndex;
		
		set_physicalIndex_ev_size_t(this.nativeObject.pointer, physicalIndexParamValue);
	}
	
	native private long get_currentSize_void(long pNativeObject);
	public long get_currentSize()
	{
		long jniValue = get_currentSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_currentSize_ev_size_t (long pNativeObject, long value);
	public void set_currentSize(long currentSize)
	{
		long currentSizeParamValue = currentSize;
		
		set_currentSize_ev_size_t(this.nativeObject.pointer, currentSizeParamValue);
	}
	
	native private int get_variability_void(long pNativeObject);
	public int get_variability()
	{
		int jniValue = get_variability_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_variability_ev_uint16 (long pNativeObject, int value);
	public void set_variability(int variability)
	{
		int variabilityParamValue = variability;
		
		set_variability_ev_uint16(this.nativeObject.pointer, variabilityParamValue);
	}
	
	public GpuLogicalIndexUse() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuLogicalIndexUse", null);
	}

	public GpuLogicalIndexUse(long bufIdx, long curSz, int v) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer bufIdxPtr = new BasePointer(bufIdx);
		list.add("bufIdx", bufIdxPtr.get());
		BasePointer curSzPtr = new BasePointer(curSz);
		list.add("curSz", curSzPtr.get());
		BasePointer vPtr = new BasePointer(v);
		list.add("v", vPtr.get());
		Create("GpuLogicalIndexUse", list);
	}

	public GpuLogicalIndexUse(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuLogicalIndexUse(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuLogicalIndexUse fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuLogicalIndexUse obj = null;
 		if(baseObj instanceof GpuLogicalIndexUse)
		{
			obj = (GpuLogicalIndexUse)baseObj;
		} else {
			obj = new GpuLogicalIndexUse(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuLogicalIndexUse");
			obj.increaseCast();
		}

		return obj;
	}
}
