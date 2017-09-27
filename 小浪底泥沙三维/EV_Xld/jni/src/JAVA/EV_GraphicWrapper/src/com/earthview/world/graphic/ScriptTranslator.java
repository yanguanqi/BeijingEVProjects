package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///enum SceneBlendFactor;
public class ScriptTranslator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptTranslator", new ScriptTranslatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCScriptTranslatorProxy", new ScriptTranslatorClassFactory());
	}

	public ScriptTranslator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScriptTranslatorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ScriptTranslator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void translate_CScriptCompiler_AbstractNodePtr_callback(long compiler, long node)
	{
		com.earthview.world.graphic.ScriptCompiler compilerParamValue = (compiler == 0L ? null : new com.earthview.world.graphic.ScriptCompiler(CreatedWhenConstruct.CWC_NotToCreate));
		if(compilerParamValue != null)
		{
		compilerParamValue.setDelegate(true);
		compilerParamValue.setInstancePointer(new InstancePointer(compiler));
		IClassFactory compilerParamValueClassFactory = GlobalClassFactoryMap.get(compilerParamValue.getCppInstanceTypeName());
		if (compilerParamValueClassFactory != null)
		{
			compilerParamValue.setDelegate(true);
			compilerParamValue = (com.earthview.world.graphic.ScriptCompiler)compilerParamValueClassFactory.create();
			compilerParamValue.setDelegate(true);
			compilerParamValue.setInstancePointer(new InstancePointer(compiler));
		}
		}
		com.earthview.world.graphic.AbstractNodePtr nodeParamValue = new com.earthview.world.graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
		nodeParamValue.setDelegate(true);
		nodeParamValue.setInstancePointer(new InstancePointer(node));
		IClassFactory nodeParamValueClassFactory = GlobalClassFactoryMap.get(nodeParamValue.getCppInstanceTypeName());
		if (nodeParamValueClassFactory != null)
		{
			nodeParamValue.setDelegate(true);
			nodeParamValue = (com.earthview.world.graphic.AbstractNodePtr)nodeParamValueClassFactory.create();
			nodeParamValue.setDelegate(true);
			nodeParamValue.setInstancePointer(new InstancePointer(node));
		}
		translate(compilerParamValue, nodeParamValue);
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.graphic.ScriptTranslator returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
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

	public ScriptTranslator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptTranslator(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ScriptTranslator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptTranslator obj = null;
 		if(baseObj instanceof ScriptTranslator)
		{
			obj = (ScriptTranslator)baseObj;
		} else {
			obj = new ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptTranslator");
			obj.increaseCast();
		}

		return obj;
	}
}
