package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PassTranslator extends com.earthview.world.graphic.ScriptTranslator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPassTranslator", new PassTranslatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPassTranslatorProxy", new PassTranslatorClassFactory());
	}

	public PassTranslator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPassTranslatorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PassTranslator".equals(this.getClass().getName()))
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

	public PassTranslator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PassTranslator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_translate_CScriptCompiler_AbstractNodePtr(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_translate_CScriptCompiler_AbstractNodePtr(this.nativeObject.pointer, "translate_CScriptCompiler_AbstractNodePtr_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static PassTranslator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PassTranslator obj = null;
 		if(baseObj instanceof PassTranslator)
		{
			obj = (PassTranslator)baseObj;
		} else {
			obj = new PassTranslator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPassTranslator");
			obj.increaseCast();
		}

		return obj;
	}
}
