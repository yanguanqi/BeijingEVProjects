package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Sgscripttranslator extends com.earthview.world.graphic.ScriptTranslator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator", new SgscripttranslatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCSGScriptTranslatorProxy", new SgscripttranslatorClassFactory());
	}

	public Sgscripttranslator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSGScriptTranslatorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.Sgscripttranslator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void translate_CScriptCompiler_AbstractNodePtr(long pNativeObject, long compiler, long node);
	public void translate(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.AbstractNodePtr node)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long nodeParamValue = node.nativeObject.pointer;
		translate_CScriptCompiler_AbstractNodePtr(this.nativeObject.pointer, compilerParamValue, nodeParamValue);
	}
	native private void translate_CScriptCompiler_AbstractNodePtr_NoVirtual(long pNativeObject, long compiler, long node);
	protected void translate_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.AbstractNodePtr node)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long nodeParamValue = node.nativeObject.pointer;
		translate_CScriptCompiler_AbstractNodePtr_NoVirtual(this.nativeObject.pointer, compilerParamValue, nodeParamValue);
	}

	protected  long getGeneratedSubRenderState_EVString_callback(String typeName)
	{
		String typeNameParamValue = typeName;
		com.earthview.world.graphic.rtshadersystem.SubRenderState returnValue = getGeneratedSubRenderState(typeNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getGeneratedSubRenderState_EVString(long pNativeObject, String typeName);
	public com.earthview.world.graphic.rtshadersystem.SubRenderState getGeneratedSubRenderState(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = getGeneratedSubRenderState_EVString(this.nativeObject.pointer, typeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderState");
		}
		return __returnValue;
	}
	native private long getGeneratedSubRenderState_EVString_NoVirtual(long pNativeObject, String typeName);
	protected com.earthview.world.graphic.rtshadersystem.SubRenderState getGeneratedSubRenderState_NoVirtual(String typeName)
	{
		String typeNameParamValue = typeName;
		long returnValue = getGeneratedSubRenderState_EVString_NoVirtual(this.nativeObject.pointer, typeNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderState __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderState(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderState");
		}
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.graphic.ScriptTranslator ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptTranslator __returnValue = new com.earthview.world.graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate, "CScriptTranslator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTranslator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptTranslator");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ScriptTranslator ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptTranslator __returnValue = new com.earthview.world.graphic.ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate, "CScriptTranslator");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTranslator)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptTranslator");
		}
		return __returnValue;
	}

	public Sgscripttranslator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Sgscripttranslator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getGeneratedSubRenderState_EVString(long pNativeObject, String method);
	native protected void register_translate_CScriptCompiler_AbstractNodePtr(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getGeneratedSubRenderState_EVString(this.nativeObject.pointer, "getGeneratedSubRenderState_EVString_callback");
			this.register_translate_CScriptCompiler_AbstractNodePtr(this.nativeObject.pointer, "translate_CScriptCompiler_AbstractNodePtr_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static Sgscripttranslator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Sgscripttranslator obj = null;
 		if(baseObj instanceof Sgscripttranslator)
		{
			obj = (Sgscripttranslator)baseObj;
		} else {
			obj = new Sgscripttranslator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSGScriptTranslator");
			obj.increaseCast();
		}

		return obj;
	}
}
