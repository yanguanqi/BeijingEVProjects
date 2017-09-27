package com.earthview.world.graphic.emittercommands;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 粒子发射器的命令对象获得/设置发射粒子的发射器名称
 */
public class CmdEmittedEmitter extends com.earthview.world.core.ParamCommand {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::EmitterCommands::CCmdEmittedEmitter", new CmdEmittedEmitterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::EmitterCommands::JCCmdEmittedEmitterProxy", new CmdEmittedEmitterClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public CmdEmittedEmitter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCmdEmittedEmitterProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.emittercommands.CmdEmittedEmitter".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String doGet_void(long pNativeObject, long target);
	/**
	 * 获得发射粒子的发射器的名称
	 * @param target 
	 * @return 返回发射粒子的发射器的名称
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
	 * 设置发射粒子的发射器的名称
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

	public CmdEmittedEmitter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CmdEmittedEmitter(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static CmdEmittedEmitter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CmdEmittedEmitter obj = null;
 		if(baseObj instanceof CmdEmittedEmitter)
		{
			obj = (CmdEmittedEmitter)baseObj;
		} else {
			obj = new CmdEmittedEmitter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCmdEmittedEmitter");
			obj.increaseCast();
		}

		return obj;
	}
}
