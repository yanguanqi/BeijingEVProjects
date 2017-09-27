package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptCompilerListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompilerListener", new ScriptCompilerListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCScriptCompilerListenerProxy", new ScriptCompilerListenerClassFactory());
	}

	public ScriptCompilerListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScriptCompilerListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ScriptCompilerListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long importFile_CScriptCompiler_EVString_callback(long compiler, String name)
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
		String nameParamValue = name;
		com.earthview.world.graphic.ConcreteNodeListPtr returnValue = importFile(compilerParamValue, nameParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long importFile_CScriptCompiler_EVString(long pNativeObject, long compiler, String name);
	//// Returns the concrete node list from the given file
	public com.earthview.world.graphic.ConcreteNodeListPtr importFile(com.earthview.world.graphic.ScriptCompiler compiler, String name)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = importFile_CScriptCompiler_EVString(this.nativeObject.pointer, compilerParamValue, nameParamValue);
		com.earthview.world.graphic.ConcreteNodeListPtr __returnValue = new com.earthview.world.graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		}
		return __returnValue;
	}
	native private long importFile_CScriptCompiler_EVString_NoVirtual(long pNativeObject, long compiler, String name);
	protected com.earthview.world.graphic.ConcreteNodeListPtr importFile_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, String name)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		String nameParamValue = name;
		long returnValue = importFile_CScriptCompiler_EVString_NoVirtual(this.nativeObject.pointer, compilerParamValue, nameParamValue);
		com.earthview.world.graphic.ConcreteNodeListPtr __returnValue = new com.earthview.world.graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodeListPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeListPtr");
		}
		return __returnValue;
	}

	protected  void preConversion_CScriptCompiler_ConcreteNodeListPtr_callback(long compiler, long nodes)
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
		com.earthview.world.graphic.ConcreteNodeListPtr nodesParamValue = new com.earthview.world.graphic.ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		nodesParamValue.setDelegate(true);
		nodesParamValue.setInstancePointer(new InstancePointer(nodes));
		IClassFactory nodesParamValueClassFactory = GlobalClassFactoryMap.get(nodesParamValue.getCppInstanceTypeName());
		if (nodesParamValueClassFactory != null)
		{
			nodesParamValue.setDelegate(true);
			nodesParamValue = (com.earthview.world.graphic.ConcreteNodeListPtr)nodesParamValueClassFactory.create();
			nodesParamValue.setDelegate(true);
			nodesParamValue.setInstancePointer(new InstancePointer(nodes));
		}
		preConversion(compilerParamValue, nodesParamValue);
	}

	native private void preConversion_CScriptCompiler_ConcreteNodeListPtr(long pNativeObject, long compiler, long nodes);
	//// Allows for responding to and overriding behavior before a CST is translated into an AST
	public void preConversion(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.ConcreteNodeListPtr nodes)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long nodesParamValue = nodes.nativeObject.pointer;
		preConversion_CScriptCompiler_ConcreteNodeListPtr(this.nativeObject.pointer, compilerParamValue, nodesParamValue);
	}
	native private void preConversion_CScriptCompiler_ConcreteNodeListPtr_NoVirtual(long pNativeObject, long compiler, long nodes);
	protected void preConversion_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.ConcreteNodeListPtr nodes)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long nodesParamValue = nodes.nativeObject.pointer;
		preConversion_CScriptCompiler_ConcreteNodeListPtr_NoVirtual(this.nativeObject.pointer, compilerParamValue, nodesParamValue);
	}

	protected  boolean postConversion_CScriptCompiler_AbstractNodeListPtr_callback(long compiler, long nodes)
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
		com.earthview.world.graphic.AbstractNodeListPtr nodesParamValue = new com.earthview.world.graphic.AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		nodesParamValue.setDelegate(true);
		nodesParamValue.setInstancePointer(new InstancePointer(nodes));
		IClassFactory nodesParamValueClassFactory = GlobalClassFactoryMap.get(nodesParamValue.getCppInstanceTypeName());
		if (nodesParamValueClassFactory != null)
		{
			nodesParamValue.setDelegate(true);
			nodesParamValue = (com.earthview.world.graphic.AbstractNodeListPtr)nodesParamValueClassFactory.create();
			nodesParamValue.setDelegate(true);
			nodesParamValue.setInstancePointer(new InstancePointer(nodes));
		}
		boolean returnValue = postConversion(compilerParamValue, nodesParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean postConversion_CScriptCompiler_AbstractNodeListPtr(long pNativeObject, long compiler, long nodes);
	//// Allows vetoing of continued compilation after the entire AST conversion process finishes
	public boolean postConversion(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.AbstractNodeListPtr nodes)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long nodesParamValue = nodes.nativeObject.pointer;
		boolean returnValue = postConversion_CScriptCompiler_AbstractNodeListPtr(this.nativeObject.pointer, compilerParamValue, nodesParamValue);
		return returnValue;
	}
	native private boolean postConversion_CScriptCompiler_AbstractNodeListPtr_NoVirtual(long pNativeObject, long compiler, long nodes);
	protected boolean postConversion_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.AbstractNodeListPtr nodes)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long nodesParamValue = nodes.nativeObject.pointer;
		boolean returnValue = postConversion_CScriptCompiler_AbstractNodeListPtr_NoVirtual(this.nativeObject.pointer, compilerParamValue, nodesParamValue);
		return returnValue;
	}

	protected  void handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback(long compiler, long code, String file, int line, String msg)
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
		long codeParamValue = code;
		String fileParamValue = file;
		int lineParamValue = line;
		String msgParamValue = msg;
		handleError(compilerParamValue, codeParamValue, fileParamValue, lineParamValue, msgParamValue);
	}

	native private void handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(long pNativeObject, long compiler, long code, String file, int line, String msg);
	//// Called when an error occurred
	public void handleError(com.earthview.world.graphic.ScriptCompiler compiler, long code, String file, int line, String msg)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long codeParamValue = code;
		String fileParamValue = file;
		int lineParamValue = line;
		String msgParamValue = msg;
		handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(this.nativeObject.pointer, compilerParamValue, codeParamValue, fileParamValue, lineParamValue, msgParamValue);
	}
	native private void handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_NoVirtual(long pNativeObject, long compiler, long code, String file, int line, String msg);
	protected void handleError_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, long code, String file, int line, String msg)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long codeParamValue = code;
		String fileParamValue = file;
		int lineParamValue = line;
		String msgParamValue = msg;
		handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_NoVirtual(this.nativeObject.pointer, compilerParamValue, codeParamValue, fileParamValue, lineParamValue, msgParamValue);
	}

	protected  boolean handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback(long compiler, long evt, long retval)
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
		com.earthview.world.graphic.ScriptCompilerEvent evtParamValue = (evt == 0L ? null : new com.earthview.world.graphic.ScriptCompilerEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(evtParamValue != null)
		{
		evtParamValue.setDelegate(true);
		evtParamValue.setInstancePointer(new InstancePointer(evt));
		IClassFactory evtParamValueClassFactory = GlobalClassFactoryMap.get(evtParamValue.getCppInstanceTypeName());
		if (evtParamValueClassFactory != null)
		{
			evtParamValue.setDelegate(true);
			evtParamValue = (com.earthview.world.graphic.ScriptCompilerEvent)evtParamValueClassFactory.create();
			evtParamValue.setDelegate(true);
			evtParamValue.setInstancePointer(new InstancePointer(evt));
		}
		}
		VoidPointer retvalParamValue = (retval == 0L ? null : new VoidPointer(new InstancePointer(retval)));
		boolean returnValue = handleEvent(compilerParamValue, evtParamValue, retvalParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleEvent_CScriptCompiler_CScriptCompilerEvent_void(long pNativeObject, long compiler, long evt, long retval);
	//// Called when an event occurs during translation, return true if handled
	public boolean handleEvent(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.ScriptCompilerEvent evt, VoidPointer retval)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long evtParamValue = (evt == null ? 0L : evt.nativeObject.pointer);
		long retvalParamValue = (retval == null ? 0L : retval.nativeObject.pointer);
		boolean returnValue = handleEvent_CScriptCompiler_CScriptCompilerEvent_void(this.nativeObject.pointer, compilerParamValue, evtParamValue, retvalParamValue);
		return returnValue;
	}
	native private boolean handleEvent_CScriptCompiler_CScriptCompilerEvent_void_NoVirtual(long pNativeObject, long compiler, long evt, long retval);
	protected boolean handleEvent_NoVirtual(com.earthview.world.graphic.ScriptCompiler compiler, com.earthview.world.graphic.ScriptCompilerEvent evt, VoidPointer retval)
	{
		long compilerParamValue = (compiler == null ? 0L : compiler.nativeObject.pointer);
		long evtParamValue = (evt == null ? 0L : evt.nativeObject.pointer);
		long retvalParamValue = (retval == null ? 0L : retval.nativeObject.pointer);
		boolean returnValue = handleEvent_CScriptCompiler_CScriptCompilerEvent_void_NoVirtual(this.nativeObject.pointer, compilerParamValue, evtParamValue, retvalParamValue);
		return returnValue;
	}

	public ScriptCompilerListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptCompilerListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_importFile_CScriptCompiler_EVString(long pNativeObject, String method);
	native protected void register_preConversion_CScriptCompiler_ConcreteNodeListPtr(long pNativeObject, String method);
	native protected void register_postConversion_CScriptCompiler_AbstractNodeListPtr(long pNativeObject, String method);
	native protected void register_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(long pNativeObject, String method);
	native protected void register_handleEvent_CScriptCompiler_CScriptCompilerEvent_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_importFile_CScriptCompiler_EVString(this.nativeObject.pointer, "importFile_CScriptCompiler_EVString_callback");
			this.register_preConversion_CScriptCompiler_ConcreteNodeListPtr(this.nativeObject.pointer, "preConversion_CScriptCompiler_ConcreteNodeListPtr_callback");
			this.register_postConversion_CScriptCompiler_AbstractNodeListPtr(this.nativeObject.pointer, "postConversion_CScriptCompiler_AbstractNodeListPtr_callback");
			this.register_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString(this.nativeObject.pointer, "handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback");
			this.register_handleEvent_CScriptCompiler_CScriptCompilerEvent_void(this.nativeObject.pointer, "handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback");
		}
	}
	
	public static ScriptCompilerListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptCompilerListener obj = null;
 		if(baseObj instanceof ScriptCompilerListener)
		{
			obj = (ScriptCompilerListener)baseObj;
		} else {
			obj = new ScriptCompilerListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptCompilerListener");
			obj.increaseCast();
		}

		return obj;
	}
}
