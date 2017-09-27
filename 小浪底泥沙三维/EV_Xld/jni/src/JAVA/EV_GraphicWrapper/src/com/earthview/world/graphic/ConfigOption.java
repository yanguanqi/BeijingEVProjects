package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConfigOption extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConfigOption", new ConfigOptionClassFactory());
	}

	public ConfigOption() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ConfigOption", null);
	}

	native private String get_name_void(long pNativeObject);
	public String get_name()
	{
		String jniValue = get_name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_name_EVString (long pNativeObject, String value);
	public void set_name(String name)
	{
		String nameParamValue = name;
		
		set_name_EVString(this.nativeObject.pointer, nameParamValue);
	}
	
	native private String get_currentValue_void(long pNativeObject);
	public String get_currentValue()
	{
		String jniValue = get_currentValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_currentValue_EVString (long pNativeObject, String value);
	public void set_currentValue(String currentValue)
	{
		String currentValueParamValue = currentValue;
		
		set_currentValue_EVString(this.nativeObject.pointer, currentValueParamValue);
	}
	
	native private long get_possibleValues_void(long pNativeObject);
	public com.earthview.world.core.StringVector get_possibleValues()
	{
		long jniValue = get_possibleValues_void(this.nativeObject.pointer);
		
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	
	native private void set_possibleValues_StringVector (long pNativeObject, long value);
	public void set_possibleValues(com.earthview.world.core.StringVector possibleValues)
	{
		long possibleValuesParamValue = possibleValues.nativeObject.pointer;
		
		set_possibleValues_StringVector(this.nativeObject.pointer, possibleValuesParamValue);
	}
	
	native private boolean get_immutable_void(long pNativeObject);
	public boolean get_immutable()
	{
		boolean jniValue = get_immutable_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_immutable_ev_bool (long pNativeObject, boolean value);
	public void set_immutable(boolean immutable)
	{
		boolean immutableParamValue = immutable;
		
		set_immutable_ev_bool(this.nativeObject.pointer, immutableParamValue);
	}
	
	public ConfigOption(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConfigOption(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConfigOption fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConfigOption obj = null;
 		if(baseObj instanceof ConfigOption)
		{
			obj = (ConfigOption)baseObj;
		} else {
			obj = new ConfigOption(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConfigOption");
			obj.increaseCast();
		}

		return obj;
	}
}
