package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作的抽象类型.派生类需要重新实现redo()和undo()方法.当用户调用COperationManager::undo()时,该类的undo()方法会被调用
 */
public class LayoutOperation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutOperation", new LayoutOperationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutOperationProxy", new LayoutOperationClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LayoutOperation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayoutOperationProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.layout.controls.LayoutOperation".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取操作的名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public LayoutOperation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutOperation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
		}
	}
	
	public static LayoutOperation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutOperation obj = null;
 		if(baseObj instanceof LayoutOperation)
		{
			obj = (LayoutOperation)baseObj;
		} else {
			obj = new LayoutOperation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutOperation");
			obj.increaseCast();
		}

		return obj;
	}
}
