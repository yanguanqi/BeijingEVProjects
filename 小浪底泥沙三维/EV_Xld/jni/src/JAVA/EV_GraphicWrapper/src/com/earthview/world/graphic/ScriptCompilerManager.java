package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptCompilerManager extends com.earthview.world.graphic.ScriptLoader {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptCompilerManager", new ScriptCompilerManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCScriptCompilerManagerProxy", new ScriptCompilerManagerClassFactory());
	}

	public ScriptCompilerManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScriptCompilerManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ScriptCompilerManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private static long getSingleton_void();
	public static com.earthview.world.graphic.ScriptCompilerManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.graphic.ScriptCompilerManager __returnValue = new com.earthview.world.graphic.ScriptCompilerManager(CreatedWhenConstruct.CWC_NotToCreate, "CScriptCompilerManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptCompilerManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptCompilerManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.graphic.ScriptCompilerManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptCompilerManager __returnValue = new com.earthview.world.graphic.ScriptCompilerManager(CreatedWhenConstruct.CWC_NotToCreate, "CScriptCompilerManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptCompilerManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptCompilerManager");
		}
		return __returnValue;
	}
	native private void setListener_CScriptCompilerListener(long pNativeObject, long ref_listener);
	//// Sets the listener used for compiler instances
	public void setListener(com.earthview.world.graphic.ScriptCompilerListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setListener_CScriptCompilerListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getListener_void(long pNativeObject);
	//// Returns the currently set listener used for compiler instances
	public com.earthview.world.graphic.ScriptCompilerListener getListener()
	{
		long returnValue = getListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptCompilerListener __returnValue = new com.earthview.world.graphic.ScriptCompilerListener(CreatedWhenConstruct.CWC_NotToCreate, "CScriptCompilerListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptCompilerListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CScriptCompilerListener");
		}
		return __returnValue;
	}
	native private void addTranslatorManager_CScriptTranslatorManager(long pNativeObject, long ref_man);
	//// Adds the given translator manager to the list of managers
	public void addTranslatorManager(com.earthview.world.graphic.ScriptTranslatorManager ref_man)
	{
		long ref_manParamValue = (ref_man == null ? 0L : ref_man.nativeObject.pointer);
		addTranslatorManager_CScriptTranslatorManager(this.nativeObject.pointer, ref_manParamValue);
	}
	native private void removeTranslatorManager_CScriptTranslatorManager(long pNativeObject, long man);
	//// Removes the given translator manager from the list of managers
	public void removeTranslatorManager(com.earthview.world.graphic.ScriptTranslatorManager man)
	{
		long manParamValue = (man == null ? 0L : man.nativeObject.pointer);
		removeTranslatorManager_CScriptTranslatorManager(this.nativeObject.pointer, manParamValue);
	}
	native private void clearTranslatorManagers_void(long pNativeObject);
	//// Clears all translator managers
	public void clearTranslatorManagers()
	{
		clearTranslatorManagers_void(this.nativeObject.pointer);
	}
	native private long getTranslator_AbstractNodePtr(long pNativeObject, long node);
	//// Retrieves a EarthView::World::Graphic::CScriptTranslator from the supported managers
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
	native private void addScriptPattern_EVString(long pNativeObject, String pattern);
	//// Adds a script extension that can be handled (e.g. *.material, *.pu, etc.)
	public void addScriptPattern(String pattern)
	{
		String patternParamValue = pattern;
		addScriptPattern_EVString(this.nativeObject.pointer, patternParamValue);
	}
	native private long getScriptPatterns_void(long pNativeObject);
	//// @copydoc CScriptLoader::getScriptPatterns
	public com.earthview.world.core.StringVector getScriptPatterns()
	{
		long returnValue = getScriptPatterns_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private long getScriptPatterns_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.StringVector getScriptPatterns_NoVirtual()
	{
		long returnValue = getScriptPatterns_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate, "StringVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}

	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
	//// @copydoc CScriptLoader::parseScript
	public void parseScript(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}
	native private void parseScript_DataStreamPtr_EVString_NoVirtual(long pNativeObject, long stream, String groupName);
	protected void parseScript_NoVirtual(com.earthview.world.core.DataStreamPtr stream, String groupName)
	{
		long streamParamValue = stream.nativeObject.pointer;
		String groupNameParamValue = groupName;
		parseScript_DataStreamPtr_EVString_NoVirtual(this.nativeObject.pointer, streamParamValue, groupNameParamValue);
	}

	native private double getLoadingOrder_void(long pNativeObject);
	//// @copydoc CScriptLoader::getLoadingOrder
	public double getLoadingOrder()
	{
		double returnValue = getLoadingOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getLoadingOrder_void_NoVirtual(long pNativeObject);
	protected double getLoadingOrder_NoVirtual()
	{
		double returnValue = getLoadingOrder_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public ScriptCompilerManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptCompilerManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getScriptPatterns_void(long pNativeObject, String method);
	native protected void register_parseScript_DataStreamPtr_EVString(long pNativeObject, String method);
	native protected void register_getLoadingOrder_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getScriptPatterns_void(this.nativeObject.pointer, "getScriptPatterns_void_callback");
			this.register_parseScript_DataStreamPtr_EVString(this.nativeObject.pointer, "parseScript_DataStreamPtr_EVString_callback");
			this.register_getLoadingOrder_void(this.nativeObject.pointer, "getLoadingOrder_void_callback");
		}
	}
	
	public static ScriptCompilerManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptCompilerManager obj = null;
 		if(baseObj instanceof ScriptCompilerManager)
		{
			obj = (ScriptCompilerManager)baseObj;
		} else {
			obj = new ScriptCompilerManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptCompilerManager");
			obj.increaseCast();
		}

		return obj;
	}
}
