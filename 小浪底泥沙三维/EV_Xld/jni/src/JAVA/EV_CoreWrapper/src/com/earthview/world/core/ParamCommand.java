package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParamCommand extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CParamCommand", new ParamCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCParamCommandProxy", new ParamCommandClassFactory());
	}

	public ParamCommand() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCParamCommandProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.ParamCommand".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String doGet_void_callback(long target)
	{
		VoidPointer targetParamValue = (target == 0L ? null : new VoidPointer(new InstancePointer(target)));
		String returnValue = doGet(targetParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String doGet_void(long pNativeObject, long target);
	public String doGet(VoidPointer target)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		String returnValue = doGet_void(this.nativeObject.pointer, targetParamValue);
		return returnValue;
	}
	native private String doGet_void_NoVirtual(long pNativeObject, long target);
	protected String doGet_NoVirtual(VoidPointer target)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		String returnValue = doGet_void_NoVirtual(this.nativeObject.pointer, targetParamValue);
		return returnValue;
	}

	protected  void doSet_void_EVString_callback(long target, String val)
	{
		VoidPointer targetParamValue = (target == 0L ? null : new VoidPointer(new InstancePointer(target)));
		String valParamValue = val;
		doSet(targetParamValue, valParamValue);
	}

	native private void doSet_void_EVString(long pNativeObject, long target, String val);
	public void doSet(VoidPointer target, String val)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		String valParamValue = val;
		doSet_void_EVString(this.nativeObject.pointer, targetParamValue, valParamValue);
	}
	native private void doSet_void_EVString_NoVirtual(long pNativeObject, long target, String val);
	protected void doSet_NoVirtual(VoidPointer target, String val)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		String valParamValue = val;
		doSet_void_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue);
	}

	protected  boolean trySet_void_EVString_EVString_callback(long target, String val, long reason)
	{
		VoidPointer targetParamValue = (target == 0L ? null : new VoidPointer(new InstancePointer(target)));
		String valParamValue = val;
		StringPointer reasonParamValue = new StringPointer(new InstancePointer(reason));
		boolean returnValue = trySet(targetParamValue, valParamValue, reasonParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean trySet_void_EVString_EVString(long pNativeObject, long target, String val, long reason);
	/// 在doSet之前测试一次值是否有效。
	public boolean trySet(VoidPointer target, String val, StringPointer reason)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		String valParamValue = val;
		long reasonParamValue = reason.nativeObject.pointer;
		boolean returnValue = trySet_void_EVString_EVString(this.nativeObject.pointer, targetParamValue, valParamValue, reasonParamValue);
		return returnValue;
	}
	native private boolean trySet_void_EVString_EVString_NoVirtual(long pNativeObject, long target, String val, long reason);
	protected boolean trySet_NoVirtual(VoidPointer target, String val, StringPointer reason)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		String valParamValue = val;
		long reasonParamValue = reason.nativeObject.pointer;
		boolean returnValue = trySet_void_EVString_EVString_NoVirtual(this.nativeObject.pointer, targetParamValue, valParamValue, reasonParamValue);
		return returnValue;
	}

	public ParamCommand(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParamCommand(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_doGet_void(long pNativeObject, String method);
	native protected void register_doSet_void_EVString(long pNativeObject, String method);
	native protected void register_trySet_void_EVString_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_doGet_void(this.nativeObject.pointer, "doGet_void_callback");
			this.register_doSet_void_EVString(this.nativeObject.pointer, "doSet_void_EVString_callback");
			this.register_trySet_void_EVString_EVString(this.nativeObject.pointer, "trySet_void_EVString_EVString_callback");
		}
	}
	
	public static ParamCommand fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParamCommand obj = null;
 		if(baseObj instanceof ParamCommand)
		{
			obj = (ParamCommand)baseObj;
		} else {
			obj = new ParamCommand(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CParamCommand");
			obj.increaseCast();
		}

		return obj;
	}
}
