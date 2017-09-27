package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
public class ScaleControllerFunction extends com.earthview.world.graphic.ControllerFunction {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CScaleControllerFunction", new ScaleControllerFunctionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCScaleControllerFunctionProxy", new ScaleControllerFunctionClassFactory());
	}

	public ScaleControllerFunction(double scalefactor, boolean deltaInput) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer scalefactorPtr = new BasePointer(scalefactor);
		list.add("scalefactor", scalefactorPtr.get());
		BasePointer deltaInputPtr = new BasePointer(deltaInput);
		list.add("deltaInput", deltaInputPtr.get());
		Create("JCScaleControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ScaleControllerFunction".equals(this.getClass().getName()))
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

	public ScaleControllerFunction(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScaleControllerFunction(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculate_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculate_Real(this.nativeObject.pointer, "calculate_Real_callback");
		}
	}
	
	public static ScaleControllerFunction fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScaleControllerFunction obj = null;
 		if(baseObj instanceof ScaleControllerFunction)
		{
			obj = (ScaleControllerFunction)baseObj;
		} else {
			obj = new ScaleControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScaleControllerFunction");
			obj.increaseCast();
		}

		return obj;
	}
}
