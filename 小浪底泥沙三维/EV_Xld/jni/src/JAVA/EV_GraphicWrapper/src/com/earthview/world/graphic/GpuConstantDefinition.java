package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuConstantDefinition extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuConstantDefinition", new GpuConstantDefinitionClassFactory());
	}

	native private int get_constType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuConstantType get_constType()
	{
		int jniValue = get_constType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.GpuConstantType.toEnum(jniValue);
	}
	
	native private void set_constType_GpuConstantType (long pNativeObject, int value);
	public void set_constType(com.earthview.world.graphic.GpuConstantType constType)
	{
		int constTypeParamValue = constType.getValue();
		
		set_constType_GpuConstantType(this.nativeObject.pointer, constTypeParamValue);
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
	
	native private long get_logicalIndex_void(long pNativeObject);
	public long get_logicalIndex()
	{
		long jniValue = get_logicalIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_logicalIndex_ev_size_t (long pNativeObject, long value);
	public void set_logicalIndex(long logicalIndex)
	{
		long logicalIndexParamValue = logicalIndex;
		
		set_logicalIndex_ev_size_t(this.nativeObject.pointer, logicalIndexParamValue);
	}
	
	native private long get_elementSize_void(long pNativeObject);
	public long get_elementSize()
	{
		long jniValue = get_elementSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_elementSize_ev_size_t (long pNativeObject, long value);
	public void set_elementSize(long elementSize)
	{
		long elementSizeParamValue = elementSize;
		
		set_elementSize_ev_size_t(this.nativeObject.pointer, elementSizeParamValue);
	}
	
	native private long get_arraySize_void(long pNativeObject);
	public long get_arraySize()
	{
		long jniValue = get_arraySize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_arraySize_ev_size_t (long pNativeObject, long value);
	public void set_arraySize(long arraySize)
	{
		long arraySizeParamValue = arraySize;
		
		set_arraySize_ev_size_t(this.nativeObject.pointer, arraySizeParamValue);
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
	
	native private boolean isFloat_void(long pNativeObject);
	public boolean isFloat()
	{
		boolean returnValue = isFloat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static boolean isFloat_GpuConstantType(int c);
	public static boolean isFloat(com.earthview.world.graphic.GpuConstantType c)
	{
		int cParamValue = c.getValue();
		boolean returnValue = isFloat_GpuConstantType(cParamValue);
		return returnValue;
	}
	native private boolean isSampler_void(long pNativeObject);
	public boolean isSampler()
	{
		boolean returnValue = isSampler_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static boolean isSampler_GpuConstantType(int c);
	public static boolean isSampler(com.earthview.world.graphic.GpuConstantType c)
	{
		int cParamValue = c.getValue();
		boolean returnValue = isSampler_GpuConstantType(cParamValue);
		return returnValue;
	}
	native private static long getElementSize_GpuConstantType_ev_bool(int ctype, boolean padToMultiplesOf4);
	public static long getElementSize(com.earthview.world.graphic.GpuConstantType ctype, boolean padToMultiplesOf4)
	{
		int ctypeParamValue = ctype.getValue();
		boolean padToMultiplesOf4ParamValue = padToMultiplesOf4;
		long returnValue = getElementSize_GpuConstantType_ev_bool(ctypeParamValue, padToMultiplesOf4ParamValue);
		return returnValue;
	}
	public GpuConstantDefinition() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuConstantDefinition", null);
	}

	public GpuConstantDefinition(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuConstantDefinition(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuConstantDefinition fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuConstantDefinition obj = null;
 		if(baseObj instanceof GpuConstantDefinition)
		{
			obj = (GpuConstantDefinition)baseObj;
		} else {
			obj = new GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuConstantDefinition");
			obj.increaseCast();
		}

		return obj;
	}
}
