package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Standard event types
public class PreApplyTextureAliasesScriptCompilerEvent extends com.earthview.world.graphic.ScriptCompilerEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent", new PreApplyTextureAliasesScriptCompilerEventClassFactory());
	}

	native private long get_mMaterial_void(long pNativeObject);
	public com.earthview.world.graphic.Material get_mMaterial()
	{
		long jniValue = get_mMaterial_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Material __returnValue = new com.earthview.world.graphic.Material(CreatedWhenConstruct.CWC_NotToCreate, "CMaterial");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Material)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMaterial");
		}
		return __returnValue;
	}
	
	native private void set_mMaterial_CMaterial (long pNativeObject, long value);
	public void set_mMaterial(com.earthview.world.graphic.Material mMaterial)
	{
		long mMaterialParamValue = (mMaterial == null ? 0L : mMaterial.nativeObject.pointer);
		
		set_mMaterial_CMaterial(this.nativeObject.pointer, mMaterialParamValue);
	}
	
	native private long get_mAliases_void(long pNativeObject);
	public com.earthview.world.core.CommonStringPairList get_mAliases()
	{
		long jniValue = get_mAliases_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.core.CommonStringPairList __returnValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate, "CommonStringPairList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CommonStringPairList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		}
		return __returnValue;
	}
	
	native private void set_mAliases_CommonStringPairList (long pNativeObject, long value);
	public void set_mAliases(com.earthview.world.core.CommonStringPairList mAliases)
	{
		long mAliasesParamValue = (mAliases == null ? 0L : mAliases.nativeObject.pointer);
		
		set_mAliases_CommonStringPairList(this.nativeObject.pointer, mAliasesParamValue);
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
	
	public PreApplyTextureAliasesScriptCompilerEvent(com.earthview.world.graphic.Material material, com.earthview.world.core.CommonStringPairList aliases) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer materialPtr = new BasePointer(material);
		list.add("material", materialPtr.get());
		BasePointer aliasesPtr = new BasePointer(aliases);
		list.add("aliases", aliasesPtr.get());
		Create("CPreApplyTextureAliasesScriptCompilerEvent", list);
	}

	public PreApplyTextureAliasesScriptCompilerEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PreApplyTextureAliasesScriptCompilerEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PreApplyTextureAliasesScriptCompilerEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PreApplyTextureAliasesScriptCompilerEvent obj = null;
 		if(baseObj instanceof PreApplyTextureAliasesScriptCompilerEvent)
		{
			obj = (PreApplyTextureAliasesScriptCompilerEvent)baseObj;
		} else {
			obj = new PreApplyTextureAliasesScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPreApplyTextureAliasesScriptCompilerEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
