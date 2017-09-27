package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptLoader extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScriptLoader", new ScriptLoaderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCScriptLoaderProxy", new ScriptLoaderClassFactory());
	}

	public ScriptLoader() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScriptLoaderProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ScriptLoader".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getScriptPatterns_void_callback()
	{
		com.earthview.world.core.StringVector returnValue = getScriptPatterns();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getScriptPatterns_void(long pNativeObject);
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

	protected  void parseScript_DataStreamPtr_EVString_callback(long stream, String groupName)
	{
		com.earthview.world.core.DataStreamPtr streamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		String groupNameParamValue = groupName;
		parseScript(streamParamValue, groupNameParamValue);
	}

	native private void parseScript_DataStreamPtr_EVString(long pNativeObject, long stream, String groupName);
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

	protected  double getLoadingOrder_void_callback()
	{
		double returnValue = getLoadingOrder();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getLoadingOrder_void(long pNativeObject);
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

	public ScriptLoader(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptLoader(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ScriptLoader fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptLoader obj = null;
 		if(baseObj instanceof ScriptLoader)
		{
			obj = (ScriptLoader)baseObj;
		} else {
			obj = new ScriptLoader(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScriptLoader");
			obj.increaseCast();
		}

		return obj;
	}
}
