package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Struct collecting together the information for named constants.
public class GpuNamedConstants extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuNamedConstants", new GpuNamedConstantsClassFactory());
	}

	native private long get_floatBufferSize_void(long pNativeObject);
	public long get_floatBufferSize()
	{
		long jniValue = get_floatBufferSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_floatBufferSize_ev_size_t (long pNativeObject, long value);
	public void set_floatBufferSize(long floatBufferSize)
	{
		long floatBufferSizeParamValue = floatBufferSize;
		
		set_floatBufferSize_ev_size_t(this.nativeObject.pointer, floatBufferSizeParamValue);
	}
	
	native private long get_intBufferSize_void(long pNativeObject);
	public long get_intBufferSize()
	{
		long jniValue = get_intBufferSize_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_intBufferSize_ev_size_t (long pNativeObject, long value);
	public void set_intBufferSize(long intBufferSize)
	{
		long intBufferSizeParamValue = intBufferSize;
		
		set_intBufferSize_ev_size_t(this.nativeObject.pointer, intBufferSizeParamValue);
	}
	
	native private long get_map_void(long pNativeObject);
	public com.earthview.world.graphic.GpuConstantDefinitionMap get_map()
	{
		long jniValue = get_map_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.GpuConstantDefinitionMap __returnValue = new com.earthview.world.graphic.GpuConstantDefinitionMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinitionMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionMap");
		}
		return __returnValue;
	}
	
	native private void set_map_GpuConstantDefinitionMap (long pNativeObject, long value);
	public void set_map(com.earthview.world.graphic.GpuConstantDefinitionMap map)
	{
		long mapParamValue = map.nativeObject.pointer;
		
		set_map_GpuConstantDefinitionMap(this.nativeObject.pointer, mapParamValue);
	}
	
	public GpuNamedConstants() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuNamedConstants", null);
	}

	native private void generateConstantDefinitionArrayEntries_EVString_GpuConstantDefinition(long pNativeObject, String paramName, long baseDef);
	public void generateConstantDefinitionArrayEntries(String paramName, com.earthview.world.graphic.GpuConstantDefinition baseDef)
	{
		String paramNameParamValue = paramName;
		long baseDefParamValue = baseDef.nativeObject.pointer;
		generateConstantDefinitionArrayEntries_EVString_GpuConstantDefinition(this.nativeObject.pointer, paramNameParamValue, baseDefParamValue);
	}
	native private static boolean getGenerateAllConstantDefinitionArrayEntries_void();
	//// Indicates whether all array entries will be generated and added to the definitions map
	public static boolean getGenerateAllConstantDefinitionArrayEntries()
	{
		boolean returnValue = getGenerateAllConstantDefinitionArrayEntries_void();
		return returnValue;
	}
	native private static void setGenerateAllConstantDefinitionArrayEntries_ev_bool(boolean generateAll);
	public static void setGenerateAllConstantDefinitionArrayEntries(boolean generateAll)
	{
		boolean generateAllParamValue = generateAll;
		setGenerateAllConstantDefinitionArrayEntries_ev_bool(generateAllParamValue);
	}
	native private void save_EVString(long pNativeObject, String filename);
	public void save(String filename)
	{
		String filenameParamValue = filename;
		save_EVString(this.nativeObject.pointer, filenameParamValue);
	}
	native private void load_DataStreamPtr(long pNativeObject, long stream);
	public void load(com.earthview.world.core.DataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		load_DataStreamPtr(this.nativeObject.pointer, streamParamValue);
	}
	public GpuNamedConstants(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuNamedConstants(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuNamedConstants fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuNamedConstants obj = null;
 		if(baseObj instanceof GpuNamedConstants)
		{
			obj = (GpuNamedConstants)baseObj;
		} else {
			obj = new GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuNamedConstants");
			obj.increaseCast();
		}

		return obj;
	}
}
