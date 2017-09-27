package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
public class WaveformControllerFunction extends com.earthview.world.graphic.ControllerFunction {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CWaveformControllerFunction", new WaveformControllerFunctionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCWaveformControllerFunctionProxy", new WaveformControllerFunctionClassFactory());
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType, double base) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		BasePointer basePtr = new BasePointer(base);
		list.add("base", basePtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType, double base, double frequency) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		BasePointer basePtr = new BasePointer(base);
		list.add("base", basePtr.get());
		BasePointer frequencyPtr = new BasePointer(frequency);
		list.add("frequency", frequencyPtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType, double base, double frequency, double phase) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		BasePointer basePtr = new BasePointer(base);
		list.add("base", basePtr.get());
		BasePointer frequencyPtr = new BasePointer(frequency);
		list.add("frequency", frequencyPtr.get());
		BasePointer phasePtr = new BasePointer(phase);
		list.add("phase", phasePtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType, double base, double frequency, double phase, double amplitude) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		BasePointer basePtr = new BasePointer(base);
		list.add("base", basePtr.get());
		BasePointer frequencyPtr = new BasePointer(frequency);
		list.add("frequency", frequencyPtr.get());
		BasePointer phasePtr = new BasePointer(phase);
		list.add("phase", phasePtr.get());
		BasePointer amplitudePtr = new BasePointer(amplitude);
		list.add("amplitude", amplitudePtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType, double base, double frequency, double phase, double amplitude, boolean deltaInput) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		BasePointer basePtr = new BasePointer(base);
		list.add("base", basePtr.get());
		BasePointer frequencyPtr = new BasePointer(frequency);
		list.add("frequency", frequencyPtr.get());
		BasePointer phasePtr = new BasePointer(phase);
		list.add("phase", phasePtr.get());
		BasePointer amplitudePtr = new BasePointer(amplitude);
		list.add("amplitude", amplitudePtr.get());
		BasePointer deltaInputPtr = new BasePointer(deltaInput);
		list.add("deltaInput", deltaInputPtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public WaveformControllerFunction(com.earthview.world.graphic.WaveformType wType, double base, double frequency, double phase, double amplitude, boolean deltaInput, double dutyCycle) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer wTypePtr = new BasePointer(wType);
		list.add("wType", wTypePtr.get());
		BasePointer basePtr = new BasePointer(base);
		list.add("base", basePtr.get());
		BasePointer frequencyPtr = new BasePointer(frequency);
		list.add("frequency", frequencyPtr.get());
		BasePointer phasePtr = new BasePointer(phase);
		list.add("phase", phasePtr.get());
		BasePointer amplitudePtr = new BasePointer(amplitude);
		list.add("amplitude", amplitudePtr.get());
		BasePointer deltaInputPtr = new BasePointer(deltaInput);
		list.add("deltaInput", deltaInputPtr.get());
		BasePointer dutyCyclePtr = new BasePointer(dutyCycle);
		list.add("dutyCycle", dutyCyclePtr.get());
		Create("JCWaveformControllerFunctionProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.WaveformControllerFunction".equals(this.getClass().getName()))
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

	public WaveformControllerFunction(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WaveformControllerFunction(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_calculate_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_calculate_Real(this.nativeObject.pointer, "calculate_Real_callback");
		}
	}
	
	public static WaveformControllerFunction fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WaveformControllerFunction obj = null;
 		if(baseObj instanceof WaveformControllerFunction)
		{
			obj = (WaveformControllerFunction)baseObj;
		} else {
			obj = new WaveformControllerFunction(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWaveformControllerFunction");
			obj.increaseCast();
		}

		return obj;
	}
}
