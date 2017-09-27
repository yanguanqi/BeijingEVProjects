package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CreateHighLevelGpuProgramScriptCompilerEvent extends com.earthview.world.graphic.ScriptCompilerEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent", new CreateHighLevelGpuProgramScriptCompilerEventClassFactory());
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
	
	native private String get_mResourceGroup_void(long pNativeObject);
	public String get_mResourceGroup()
	{
		String jniValue = get_mResourceGroup_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mResourceGroup_EVString (long pNativeObject, String value);
	public void set_mResourceGroup(String mResourceGroup)
	{
		String mResourceGroupParamValue = mResourceGroup;
		
		set_mResourceGroup_EVString(this.nativeObject.pointer, mResourceGroupParamValue);
	}
	
	native private String get_mSource_void(long pNativeObject);
	public String get_mSource()
	{
		String jniValue = get_mSource_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mSource_EVString (long pNativeObject, String value);
	public void set_mSource(String mSource)
	{
		String mSourceParamValue = mSource;
		
		set_mSource_EVString(this.nativeObject.pointer, mSourceParamValue);
	}
	
	native private String get_mLanguage_void(long pNativeObject);
	public String get_mLanguage()
	{
		String jniValue = get_mLanguage_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mLanguage_EVString (long pNativeObject, String value);
	public void set_mLanguage(String mLanguage)
	{
		String mLanguageParamValue = mLanguage;
		
		set_mLanguage_EVString(this.nativeObject.pointer, mLanguageParamValue);
	}
	
	native private String get_mFile_void(long pNativeObject);
	public String get_mFile()
	{
		String jniValue = get_mFile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFile_EVString (long pNativeObject, String value);
	public void set_mFile(String mFile)
	{
		String mFileParamValue = mFile;
		
		set_mFile_EVString(this.nativeObject.pointer, mFileParamValue);
	}
	
	native private int get_mProgramType_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramType get_mProgramType()
	{
		int jniValue = get_mProgramType_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.GpuProgramType.toEnum(jniValue);
	}
	
	native private void set_mProgramType_GpuProgramType (long pNativeObject, int value);
	public void set_mProgramType(com.earthview.world.graphic.GpuProgramType mProgramType)
	{
		int mProgramTypeParamValue = mProgramType.getValue();
		
		set_mProgramType_GpuProgramType(this.nativeObject.pointer, mProgramTypeParamValue);
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
	
	public CreateHighLevelGpuProgramScriptCompilerEvent(String file, String name, String resourceGroup, String source, String language, com.earthview.world.graphic.GpuProgramType programType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer filePtr = new BasePointer(file);
		list.add("file", filePtr.get());
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer resourceGroupPtr = new BasePointer(resourceGroup);
		list.add("resourceGroup", resourceGroupPtr.get());
		BasePointer sourcePtr = new BasePointer(source);
		list.add("source", sourcePtr.get());
		BasePointer languagePtr = new BasePointer(language);
		list.add("language", languagePtr.get());
		BasePointer programTypePtr = new BasePointer(programType);
		list.add("programType", programTypePtr.get());
		Create("CCreateHighLevelGpuProgramScriptCompilerEvent", list);
	}

	public CreateHighLevelGpuProgramScriptCompilerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CreateHighLevelGpuProgramScriptCompilerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CreateHighLevelGpuProgramScriptCompilerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CreateHighLevelGpuProgramScriptCompilerEvent obj = null;
 		if(baseObj instanceof CreateHighLevelGpuProgramScriptCompilerEvent)
		{
			obj = (CreateHighLevelGpuProgramScriptCompilerEvent)baseObj;
		} else {
			obj = new CreateHighLevelGpuProgramScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCreateHighLevelGpuProgramScriptCompilerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
