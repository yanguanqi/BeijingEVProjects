package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////template <typename T>
public class ControllerFunction extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CControllerFunction", new ControllerFunctionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCControllerFunctionProxy", new ControllerFunctionClassFactory());
	}

	public ControllerFunction(boolean deltaInput) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer deltaInputPtr = new BasePointer(deltaInput);
		list.add("deltaInput", deltaInputPtr.get());
		Create("JCControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  double calculate_Real_callback(double sourceValue)
	{
		double sourceValueParamValue = sourceValue;
		double returnValue = calculate(sourceValueParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double calculate_Real(long pNativeObject, double sourceValue);
	public double calculate(double sourceValue)
	{
		double sourceValueParamValue = sourceValue;
		double returnValue = calculate_Real(this.nativeObject.pointer, sourceValueParamValue);
		return returnValue;
	}
	native private double calculate_Real_NoVirtual(long pNativeObject, double sourceValue);
	protected double calculate_NoVirtual(double sourceValue)
	{
		double sourceValueParamValue = sourceValue;
		double returnValue = calculate_Real_NoVirtual(this.nativeObject.pointer, sourceValueParamValue);
		return returnValue;
	}

	public ControllerFunction(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControllerFunction(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculate_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculate_Real(this.nativeObject.pointer, "calculate_Real_callback");
		}
	}
	
	public static ControllerFunction fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControllerFunction obj = null;
 		if(baseObj instanceof ControllerFunction)
		{
			obj = (ControllerFunction)baseObj;
		} else {
			obj = new ControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControllerFunction");
			obj.increaseCast();
		}

		return obj;
	}
}
