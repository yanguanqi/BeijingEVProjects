package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// This class manages the builtin translators
public class BuiltinScriptTranslatorManager extends com.earthview.world.graphic.ScriptTranslatorManager {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CBuiltinScriptTranslatorManager", new BuiltinScriptTranslatorManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCBuiltinScriptTranslatorManagerProxy", new BuiltinScriptTranslatorManagerClassFactory());
	}

	public BuiltinScriptTranslatorManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBuiltinScriptTranslatorManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.BuiltinScriptTranslatorManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getNumTranslators_void(long pNativeObject);
	//// Returns the number of translators being managed
	public long getNumTranslators()
	{
		long returnValue = getNumTranslators_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getNumTranslators_void_NoVirtual(long pNativeObject);
	protected long getNumTranslators_NoVirtual()
	{
		long returnValue = getNumTranslators_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getTranslator_AbstractNodePtr(long pNativeObject, long node);
	//// Returns a manager for the given object abstract node, or null if it is not supported
	public com.earthview.world.graphic.ScriptTranslator getTranslator(com.earthview.world.graphic.AbstractNodePtr node)
	{
		long nodeParamValue = node.nativeObject.pointer;
		long returnValue = getTranslator_AbstractNodePtr(this.nativeObject.pointer, nodeParamValue);
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
	native private long getTranslator_AbstractNodePtr_NoVirtual(long pNativeObject, long node);
	protected com.earthview.world.graphic.ScriptTranslator getTranslator_NoVirtual(com.earthview.world.graphic.AbstractNodePtr node)
	{
		long nodeParamValue = node.nativeObject.pointer;
		long returnValue = getTranslator_AbstractNodePtr_NoVirtual(this.nativeObject.pointer, nodeParamValue);
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

	public BuiltinScriptTranslatorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BuiltinScriptTranslatorManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getNumTranslators_void(long pNativeObject, String method);
	native protected void register_getTranslator_AbstractNodePtr(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getNumTranslators_void(this.nativeObject.pointer, "getNumTranslators_void_callback");
			this.register_getTranslator_AbstractNodePtr(this.nativeObject.pointer, "getTranslator_AbstractNodePtr_callback");
		}
	}
	
	public static BuiltinScriptTranslatorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BuiltinScriptTranslatorManager obj = null;
 		if(baseObj instanceof BuiltinScriptTranslatorManager)
		{
			obj = (BuiltinScriptTranslatorManager)baseObj;
		} else {
			obj = new BuiltinScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBuiltinScriptTranslatorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
