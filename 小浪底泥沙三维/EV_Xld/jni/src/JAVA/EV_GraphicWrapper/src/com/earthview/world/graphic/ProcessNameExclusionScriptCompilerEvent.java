package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProcessNameExclusionScriptCompilerEvent extends com.earthview.world.graphic.ScriptCompilerEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent", new ProcessNameExclusionScriptCompilerEventClassFactory());
	}

	native private String get_mClass_void(long pNativeObject);
	public String get_mClass()
	{
		String jniValue = get_mClass_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mClass_EVString (long pNativeObject, String value);
	public void set_mClass(String mClass)
	{
		String mClassParamValue = mClass;
		
		set_mClass_EVString(this.nativeObject.pointer, mClassParamValue);
	}
	
	native private long get_mParent_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNode get_mParent()
	{
		long jniValue = get_mParent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AbstractNode __returnValue = new com.earthview.world.graphic.AbstractNode(CreatedWhenConstruct.CWC_NotToCreate, "CAbstractNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAbstractNode");
		}
		return __returnValue;
	}
	
	native private void set_mParent_CAbstractNode (long pNativeObject, long value);
	public void set_mParent(com.earthview.world.graphic.AbstractNode mParent)
	{
		long mParentParamValue = (mParent == null ? 0L : mParent.nativeObject.pointer);
		
		set_mParent_CAbstractNode(this.nativeObject.pointer, mParentParamValue);
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
	
	public ProcessNameExclusionScriptCompilerEvent(String cls, com.earthview.world.graphic.AbstractNode ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer clsPtr = new BasePointer(cls);
		list.add("cls", clsPtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("CProcessNameExclusionScriptCompilerEvent", list);
	}

	public ProcessNameExclusionScriptCompilerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ProcessNameExclusionScriptCompilerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ProcessNameExclusionScriptCompilerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ProcessNameExclusionScriptCompilerEvent obj = null;
 		if(baseObj instanceof ProcessNameExclusionScriptCompilerEvent)
		{
			obj = (ProcessNameExclusionScriptCompilerEvent)baseObj;
		} else {
			obj = new ProcessNameExclusionScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CProcessNameExclusionScriptCompilerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
