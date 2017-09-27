package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptTranslatorManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptTranslatorManager", new ScriptTranslatorManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCScriptTranslatorManagerProxy", new ScriptTranslatorManagerClassFactory());
	}

	public ScriptTranslatorManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScriptTranslatorManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ScriptTranslatorManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ScriptTranslatorManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ScriptTranslatorManager __returnValue = new com.earthview.world.graphic.ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate, "CScriptTranslatorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTranslatorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptTranslatorManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ScriptTranslatorManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptTranslatorManager __returnValue = new com.earthview.world.graphic.ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate, "CScriptTranslatorManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTranslatorManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptTranslatorManager");
		}
		return __returnValue;
	}
	protected  long getNumTranslators_void_callback()
	{
		long returnValue = getNumTranslators();
		long __returnValue = returnValue;
		return __returnValue;
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

	protected  long getTranslator_AbstractNodePtr_callback(long nodes)
	{
		com.earthview.world.graphic.AbstractNodePtr nodesParamValue = new com.earthview.world.graphic.AbstractNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
		nodesParamValue.setDelegate(true);
		nodesParamValue.setInstancePointer(new InstancePointer(nodes));
		IClassFactory nodesParamValueClassFactory = GlobalClassFactoryMap.get(nodesParamValue.getCppInstanceTypeName());
		if (nodesParamValueClassFactory != null)
		{
			nodesParamValue.setDelegate(true);
			nodesParamValue = (com.earthview.world.graphic.AbstractNodePtr)nodesParamValueClassFactory.create();
			nodesParamValue.setDelegate(true);
			nodesParamValue.setInstancePointer(new InstancePointer(nodes));
		}
		com.earthview.world.graphic.ScriptTranslator returnValue = getTranslator(nodesParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTranslator_AbstractNodePtr(long pNativeObject, long nodes);
	//// Returns a manager for the given object abstract node, or null if it is not supported
	public com.earthview.world.graphic.ScriptTranslator getTranslator(com.earthview.world.graphic.AbstractNodePtr nodes)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		long returnValue = getTranslator_AbstractNodePtr(this.nativeObject.pointer, nodesParamValue);
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
	native private long getTranslator_AbstractNodePtr_NoVirtual(long pNativeObject, long nodes);
	protected com.earthview.world.graphic.ScriptTranslator getTranslator_NoVirtual(com.earthview.world.graphic.AbstractNodePtr nodes)
	{
		long nodesParamValue = nodes.nativeObject.pointer;
		long returnValue = getTranslator_AbstractNodePtr_NoVirtual(this.nativeObject.pointer, nodesParamValue);
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

	public ScriptTranslatorManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptTranslatorManager(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ScriptTranslatorManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptTranslatorManager obj = null;
 		if(baseObj instanceof ScriptTranslatorManager)
		{
			obj = (ScriptTranslatorManager)baseObj;
		} else {
			obj = new ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptTranslatorManager");
			obj.increaseCast();
		}

		return obj;
	}
}
