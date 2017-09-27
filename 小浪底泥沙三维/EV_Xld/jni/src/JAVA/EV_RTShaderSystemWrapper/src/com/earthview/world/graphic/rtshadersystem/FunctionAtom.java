package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FunctionAtom extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::CFunctionAtom", new FunctionAtomClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::JCFunctionAtomProxy", new FunctionAtomClassFactory());
	}

	public FunctionAtom() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFunctionAtomProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.rtshadersystem.FunctionAtom".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getGroupExecutionOrder_void(long pNativeObject);
	public int getGroupExecutionOrder()
	{
		int returnValue = getGroupExecutionOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getInternalExecutionOrder_void(long pNativeObject);
	public int getInternalExecutionOrder()
	{
		int returnValue = getInternalExecutionOrder_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  String getFunctionAtomType_void_callback()
	{
		String returnValue = getFunctionAtomType();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFunctionAtomType_void(long pNativeObject);
	public String getFunctionAtomType()
	{
		String returnValue = getFunctionAtomType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFunctionAtomType_void_NoVirtual(long pNativeObject);
	protected String getFunctionAtomType_NoVirtual()
	{
		String returnValue = getFunctionAtomType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public FunctionAtom(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FunctionAtom(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getFunctionAtomType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFunctionAtomType_void(this.nativeObject.pointer, "getFunctionAtomType_void_callback");
		}
	}
	
	public static FunctionAtom fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FunctionAtom obj = null;
 		if(baseObj instanceof FunctionAtom)
		{
			obj = (FunctionAtom)baseObj;
		} else {
			obj = new FunctionAtom(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFunctionAtom");
			obj.increaseCast();
		}

		return obj;
	}
}
