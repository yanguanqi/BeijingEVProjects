package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 				硬件缓冲区索引
 */
public class GeoIndex extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoIndex", new GeoIndexClassFactory());
	}

	public GeoIndex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GeoIndex", null);
	}

	public GeoIndex(com.earthview.world.spatial.GeoIndex geoIndex) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer geoIndexPtr = new BasePointer(geoIndex);
		list.add("geoIndex", geoIndexPtr.get());
		Create("GeoIndex", list);
	}

	native private long get_HardwareBufferNO_void(long pNativeObject);
	public long get_HardwareBufferNO()
	{
		long jniValue = get_HardwareBufferNO_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_HardwareBufferNO_ev_uint32 (long pNativeObject, long value);
	public void set_HardwareBufferNO(long HardwareBufferNO)
	{
		long HardwareBufferNOParamValue = HardwareBufferNO;
		
		set_HardwareBufferNO_ev_uint32(this.nativeObject.pointer, HardwareBufferNOParamValue);
	}
	
	native private long get_HardwareBufferBeginIndex_void(long pNativeObject);
	public long get_HardwareBufferBeginIndex()
	{
		long jniValue = get_HardwareBufferBeginIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_HardwareBufferBeginIndex_ev_uint32 (long pNativeObject, long value);
	public void set_HardwareBufferBeginIndex(long HardwareBufferBeginIndex)
	{
		long HardwareBufferBeginIndexParamValue = HardwareBufferBeginIndex;
		
		set_HardwareBufferBeginIndex_ev_uint32(this.nativeObject.pointer, HardwareBufferBeginIndexParamValue);
	}
	
	native private long get_HardwareBufferEndIndex_void(long pNativeObject);
	public long get_HardwareBufferEndIndex()
	{
		long jniValue = get_HardwareBufferEndIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_HardwareBufferEndIndex_ev_uint32 (long pNativeObject, long value);
	public void set_HardwareBufferEndIndex(long HardwareBufferEndIndex)
	{
		long HardwareBufferEndIndexParamValue = HardwareBufferEndIndex;
		
		set_HardwareBufferEndIndex_ev_uint32(this.nativeObject.pointer, HardwareBufferEndIndexParamValue);
	}
	
	public GeoIndex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoIndex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoIndex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoIndex obj = null;
 		if(baseObj instanceof GeoIndex)
		{
			obj = (GeoIndex)baseObj;
		} else {
			obj = new GeoIndex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GeoIndex");
			obj.increaseCast();
		}

		return obj;
	}
}
