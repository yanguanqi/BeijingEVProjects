package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Container struct to allow params to safely & update shared list of logical buffer assignments
public class GpuLogicalBufferStruct extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuLogicalBufferStruct", new GpuLogicalBufferStructClassFactory());
	}

	native private long get_map_void(long pNativeObject);
	public com.earthview.world.graphic.GpuLogicalIndexUseMap get_map()
	{
		long jniValue = get_map_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.GpuLogicalIndexUseMap __returnValue = new com.earthview.world.graphic.GpuLogicalIndexUseMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuLogicalIndexUseMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuLogicalIndexUseMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuLogicalIndexUseMap");
		}
		return __returnValue;
	}
	
	native private void set_map_GpuLogicalIndexUseMap (long pNativeObject, long value);
	public void set_map(com.earthview.world.graphic.GpuLogicalIndexUseMap map)
	{
		long mapParamValue = map.nativeObject.pointer;
		
		set_map_GpuLogicalIndexUseMap(this.nativeObject.pointer, mapParamValue);
	}
	
	native private long get_bufferSize_void(long pNativeObject);
	public long get_bufferSize()
	{
		long jniValue = get_bufferSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_bufferSize_ev_size_t (long pNativeObject, long value);
	public void set_bufferSize(long bufferSize)
	{
		long bufferSizeParamValue = bufferSize;
		
		set_bufferSize_ev_size_t(this.nativeObject.pointer, bufferSizeParamValue);
	}
	
	public GpuLogicalBufferStruct() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuLogicalBufferStruct", null);
	}

	public GpuLogicalBufferStruct(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuLogicalBufferStruct(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuLogicalBufferStruct fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuLogicalBufferStruct obj = null;
 		if(baseObj instanceof GpuLogicalBufferStruct)
		{
			obj = (GpuLogicalBufferStruct)baseObj;
		} else {
			obj = new GpuLogicalBufferStruct(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuLogicalBufferStruct");
			obj.increaseCast();
		}

		return obj;
	}
}
