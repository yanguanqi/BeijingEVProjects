package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 粒子发射器的命令对象获得/设置每个粒子生存周期参数
 */
public class CmdTTL extends com.earthview.world.core.ParamCommand {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::EmitterCommands::CCmdTTL", new CmdTTLClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::EmitterCommands::JCCmdTTLProxy", new CmdTTLClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CmdTTL() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCmdTTLProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.emittercommands.CmdTTL".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String doGet_void(long pNativeObject, long target);
	/**
	 * 获得EVString类型的粒子生存周期值
	 * @param target 
	 * @return 返回EVString类型的粒子生存周期值
	 */
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

	native private void doSet_void_EVString(long pNativeObject, long target, String val);
	/**
	 * 设置发射粒子生存周期的值
	 * @param target 
	 * @param val 
	 */
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

	public CmdTTL(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CmdTTL(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/// 在doSet之前测试一次值是否有效。
	public boolean trySet(VoidPointer target, String val, StringPointer reason)
	{
		return super.trySet_NoVirtual(target, val, reason);
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
	
	public static CmdTTL fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CmdTTL obj = null;
 		if(baseObj instanceof CmdTTL)
		{
			obj = (CmdTTL)baseObj;
		} else {
			obj = new CmdTTL(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCmdTTL");
			obj.increaseCast();
		}

		return obj;
	}
}
