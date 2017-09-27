package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
//// CController functions
////-----------------------------------------------------------------------
public class PassthroughControllerFunction extends com.earthview.world.graphic.ControllerFunction {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPassthroughControllerFunction", new PassthroughControllerFunctionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPassthroughControllerFunctionProxy", new PassthroughControllerFunctionClassFactory());
	}

	public PassthroughControllerFunction() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPassthroughControllerFunctionProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PassthroughControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public PassthroughControllerFunction(boolean deltaInput) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer deltaInputPtr = new BasePointer(deltaInput);
		list.add("deltaInput", deltaInputPtr.get());
		Create("JCPassthroughControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PassthroughControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double calculate_Real(long pNativeObject, double source);
	public double calculate(double source)
	{
		double sourceParamValue = source;
		double returnValue = calculate_Real(this.nativeObject.pointer, sourceParamValue);
		return returnValue;
	}
	native private double calculate_Real_NoVirtual(long pNativeObject, double source);
	protected double calculate_NoVirtual(double source)
	{
		double sourceParamValue = source;
		double returnValue = calculate_Real_NoVirtual(this.nativeObject.pointer, sourceParamValue);
		return returnValue;
	}

	public PassthroughControllerFunction(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PassthroughControllerFunction(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculate_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculate_Real(this.nativeObject.pointer, "calculate_Real_callback");
		}
	}
	
	public static PassthroughControllerFunction fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PassthroughControllerFunction obj = null;
 		if(baseObj instanceof PassthroughControllerFunction)
		{
			obj = (PassthroughControllerFunction)baseObj;
		} else {
			obj = new PassthroughControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPassthroughControllerFunction");
			obj.increaseCast();
		}

		return obj;
	}
}
