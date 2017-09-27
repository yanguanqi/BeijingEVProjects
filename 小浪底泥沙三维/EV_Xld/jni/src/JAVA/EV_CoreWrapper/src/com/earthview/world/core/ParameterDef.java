package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

//// Definition of a parameter supported by a CStringInterface class, for introspection
public class ParameterDef extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CParameterDef", new ParameterDefClassFactory());
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
	
	native private String get_description_void(long pNativeObject);
	public String get_description()
	{
		String jniValue = get_description_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_description_EVString (long pNativeObject, String value);
	public void set_description(String description)
	{
		String descriptionParamValue = description;
		
		set_description_EVString(this.nativeObject.pointer, descriptionParamValue);
	}
	
	native private int get_paramType_void(long pNativeObject);
	public com.earthview.world.core.ParameterType get_paramType()
	{
		int jniValue = get_paramType_void(this.nativeObject.pointer);
		
		return com.earthview.world.core.ParameterType.toEnum(jniValue);
	}
	
	native private void set_paramType_ParameterType (long pNativeObject, int value);
	public void set_paramType(com.earthview.world.core.ParameterType paramType)
	{
		int paramTypeParamValue = paramType.getValue();
		
		set_paramType_ParameterType(this.nativeObject.pointer, paramTypeParamValue);
	}
	
	native private boolean get_mbReadOnly_void(long pNativeObject);
	public boolean get_mbReadOnly()
	{
		boolean jniValue = get_mbReadOnly_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbReadOnly_ev_bool (long pNativeObject, boolean value);
	public void set_mbReadOnly(boolean mbReadOnly)
	{
		boolean mbReadOnlyParamValue = mbReadOnly;
		
		set_mbReadOnly_ev_bool(this.nativeObject.pointer, mbReadOnlyParamValue);
	}
	
	native private boolean get_mbEnabled_void(long pNativeObject);
	public boolean get_mbEnabled()
	{
		boolean jniValue = get_mbEnabled_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mbEnabled_ev_bool (long pNativeObject, boolean value);
	public void set_mbEnabled(boolean mbEnabled)
	{
		boolean mbEnabledParamValue = mbEnabled;
		
		set_mbEnabled_ev_bool(this.nativeObject.pointer, mbEnabledParamValue);
	}
	
	public ParameterDef() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CParameterDef", null);
	}

	public ParameterDef(String newName, String newDescription, com.earthview.world.core.ParameterType newType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer newNamePtr = new BasePointer(newName);
		list.add("newName", newNamePtr.get());
		BasePointer newDescriptionPtr = new BasePointer(newDescription);
		list.add("newDescription", newDescriptionPtr.get());
		BasePointer newTypePtr = new BasePointer(newType);
		list.add("newType", newTypePtr.get());
		Create("CParameterDef", list);
	}

	public ParameterDef(String newName, String newDescription, com.earthview.world.core.ParameterType newType, boolean readonly, boolean enabled) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer newNamePtr = new BasePointer(newName);
		list.add("newName", newNamePtr.get());
		BasePointer newDescriptionPtr = new BasePointer(newDescription);
		list.add("newDescription", newDescriptionPtr.get());
		BasePointer newTypePtr = new BasePointer(newType);
		list.add("newType", newTypePtr.get());
		BasePointer readonlyPtr = new BasePointer(readonly);
		list.add("readonly", readonlyPtr.get());
		BasePointer enabledPtr = new BasePointer(enabled);
		list.add("enabled", enabledPtr.get());
		Create("CParameterDef", list);
	}

	native private void release_void(long pNativeObject);
	public void release()
	{
		release_void(this.nativeObject.pointer);
	}
	native private void setParameter_ev_int32_ev_int32_ev_int32(long pNativeObject, int min, int max, int singleStep);
	public void setParameter(int min, int max, int singleStep)
	{
		int minParamValue = min;
		int maxParamValue = max;
		int singleStepParamValue = singleStep;
		setParameter_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, minParamValue, maxParamValue, singleStepParamValue);
	}
	native private void setParameter_ev_real64_ev_real64_ev_uint8_ev_real64(long pNativeObject, double min, double max, short decimals, double singleStep);
	public void setParameter(double min, double max, short decimals, double singleStep)
	{
		double minParamValue = min;
		double maxParamValue = max;
		short decimalsParamValue = decimals;
		double singleStepParamValue = singleStep;
		setParameter_ev_real64_ev_real64_ev_uint8_ev_real64(this.nativeObject.pointer, minParamValue, maxParamValue, decimalsParamValue, singleStepParamValue);
	}
	native private void setParameter_StringVector(long pNativeObject, long options);
	public void setParameter(com.earthview.world.core.StringVector options)
	{
		long optionsParamValue = options.nativeObject.pointer;
		setParameter_StringVector(this.nativeObject.pointer, optionsParamValue);
	}
	public ParameterDef(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParameterDef(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParameterDef fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParameterDef obj = null;
 		if(baseObj instanceof ParameterDef)
		{
			obj = (ParameterDef)baseObj;
		} else {
			obj = new ParameterDef(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParameterDef");
			obj.increaseCast();
		}

		return obj;
	}
}
