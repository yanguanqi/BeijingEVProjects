package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnimationControllerFunction extends com.earthview.world.graphic.ControllerFunction {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationControllerFunction", new AnimationControllerFunctionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimationControllerFunctionProxy", new AnimationControllerFunctionClassFactory());
	}

	public AnimationControllerFunction(double sequenceTime) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sequenceTimePtr = new BasePointer(sequenceTime);
		list.add("sequenceTime", sequenceTimePtr.get());
		Create("JCAnimationControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public AnimationControllerFunction(double sequenceTime, double timeOffset) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sequenceTimePtr = new BasePointer(sequenceTime);
		list.add("sequenceTime", sequenceTimePtr.get());
		BasePointer timeOffsetPtr = new BasePointer(timeOffset);
		list.add("timeOffset", timeOffsetPtr.get());
		Create("JCAnimationControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationControllerFunction".equals(this.getClass().getName()))
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

	native private void setTime_Real(long pNativeObject, double timeVal);
	public void setTime(double timeVal)
	{
		double timeValParamValue = timeVal;
		setTime_Real(this.nativeObject.pointer, timeValParamValue);
	}
	native private void setSequenceTime_Real(long pNativeObject, double seqVal);
	public void setSequenceTime(double seqVal)
	{
		double seqValParamValue = seqVal;
		setSequenceTime_Real(this.nativeObject.pointer, seqValParamValue);
	}
	public AnimationControllerFunction(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationControllerFunction(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculate_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculate_Real(this.nativeObject.pointer, "calculate_Real_callback");
		}
	}
	
	public static AnimationControllerFunction fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationControllerFunction obj = null;
 		if(baseObj instanceof AnimationControllerFunction)
		{
			obj = (AnimationControllerFunction)baseObj;
		} else {
			obj = new AnimationControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationControllerFunction");
			obj.increaseCast();
		}

		return obj;
	}
}
