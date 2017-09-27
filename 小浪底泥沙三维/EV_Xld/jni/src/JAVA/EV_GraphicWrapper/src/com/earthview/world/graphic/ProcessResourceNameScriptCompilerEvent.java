package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProcessResourceNameScriptCompilerEvent extends com.earthview.world.graphic.ScriptCompilerEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent", new ProcessResourceNameScriptCompilerEventClassFactory());
	}

	public enum ResourceType implements INativeEnum<ResourceType> {
		TEXTURE(ResourceTypeHelper.ENUM_VALUES[0]),
		MATERIAL(ResourceTypeHelper.ENUM_VALUES[1]),
		GPU_PROGRAM(ResourceTypeHelper.ENUM_VALUES[2]),
		COMPOSITOR(ResourceTypeHelper.ENUM_VALUES[3]);
		private int value;
		ResourceType(int i) {
			this.value = i;
		}
		public ResourceType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ResourceType toEnum(int retval) {
			if(retval == TEXTURE.value){
				return TEXTURE;
			}
			else if(retval == MATERIAL.value){
				return MATERIAL;
			}
			else if(retval == GPU_PROGRAM.value){
				return GPU_PROGRAM;
			}
			else if(retval == COMPOSITOR.value){
				return COMPOSITOR;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ResourceTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private int get_mResourceType_void(long pNativeObject);
	public com.earthview.world.graphic.ProcessResourceNameScriptCompilerEvent.ResourceType get_mResourceType()
	{
		int jniValue = get_mResourceType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.ProcessResourceNameScriptCompilerEvent.ResourceType.toEnum(jniValue);
	}
	
	native private void set_mResourceType_ResourceType (long pNativeObject, int value);
	public void set_mResourceType(com.earthview.world.graphic.ProcessResourceNameScriptCompilerEvent.ResourceType mResourceType)
	{
		int mResourceTypeParamValue = mResourceType.getValue();
		
		set_mResourceType_ResourceType(this.nativeObject.pointer, mResourceTypeParamValue);
	}
	
	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private static String get_eventType_void();
	public static String get_eventType()
	{
		String jniValue = get_eventType_void();
		
		return jniValue;
	}
	
	native private static void set_eventType_EVString (String value);
	public static void set_eventType(String eventType)
	{
		String eventTypeParamValue = eventType;
		
		set_eventType_EVString(eventTypeParamValue);
	}
	
	public ProcessResourceNameScriptCompilerEvent(com.earthview.world.graphic.ProcessResourceNameScriptCompilerEvent.ResourceType resourceType, String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer resourceTypePtr = new BasePointer(resourceType);
		list.add("resourceType", resourceTypePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("CProcessResourceNameScriptCompilerEvent", list);
	}

	public ProcessResourceNameScriptCompilerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProcessResourceNameScriptCompilerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ProcessResourceNameScriptCompilerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProcessResourceNameScriptCompilerEvent obj = null;
 		if(baseObj instanceof ProcessResourceNameScriptCompilerEvent)
		{
			obj = (ProcessResourceNameScriptCompilerEvent)baseObj;
		} else {
			obj = new ProcessResourceNameScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProcessResourceNameScriptCompilerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
