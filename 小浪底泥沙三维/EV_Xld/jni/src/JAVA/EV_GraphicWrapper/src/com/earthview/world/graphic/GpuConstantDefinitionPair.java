package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::GpuConstantDefinitionMap> EarthView::World::Graphic::GpuConstantDefinitionIterator;
/// <summary>
///
///
/// </summary>
public class GpuConstantDefinitionPair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuConstantDefinitionPair", new GpuConstantDefinitionPairClassFactory());
	}

	public GpuConstantDefinitionPair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuConstantDefinitionPair", null);
	}

	native private String get_first_void(long pNativeObject);
	public String get_first()
	{
		String jniValue = get_first_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_first_EVString (long pNativeObject, String value);
	public void set_first(String first)
	{
		String firstParamValue = first;
		
		set_first_EVString(this.nativeObject.pointer, firstParamValue);
	}
	
	native private long get_second_void(long pNativeObject);
	public com.earthview.world.graphic.GpuConstantDefinition get_second()
	{
		long jniValue = get_second_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	
	native private void set_second_GpuConstantDefinition (long pNativeObject, long value);
	public void set_second(com.earthview.world.graphic.GpuConstantDefinition second)
	{
		long secondParamValue = second.nativeObject.pointer;
		
		set_second_GpuConstantDefinition(this.nativeObject.pointer, secondParamValue);
	}
	
	public GpuConstantDefinitionPair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuConstantDefinitionPair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuConstantDefinitionPair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuConstantDefinitionPair obj = null;
 		if(baseObj instanceof GpuConstantDefinitionPair)
		{
			obj = (GpuConstantDefinitionPair)baseObj;
		} else {
			obj = new GpuConstantDefinitionPair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuConstantDefinitionPair");
			obj.increaseCast();
		}

		return obj;
	}
}
