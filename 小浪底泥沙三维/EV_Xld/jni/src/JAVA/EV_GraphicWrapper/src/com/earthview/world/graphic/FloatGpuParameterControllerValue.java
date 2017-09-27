package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
public class FloatGpuParameterControllerValue extends com.earthview.world.graphic.ControllerValue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFloatGpuParameterControllerValue", new FloatGpuParameterControllerValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFloatGpuParameterControllerValueProxy", new FloatGpuParameterControllerValueClassFactory());
	}

	public FloatGpuParameterControllerValue(com.earthview.world.graphic.GpuProgramParametersSharedPtr params, long index) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer paramsPtr = new BasePointer(params);
		list.add("params", paramsPtr.get());
		BasePointer indexPtr = new BasePointer(index);
		list.add("index", indexPtr.get());
		Create("JCFloatGpuParameterControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.FloatGpuParameterControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getValue_void(long pNativeObject);
	public double getValue()
	{
		double returnValue = getValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getValue_void_NoVirtual(long pNativeObject);
	protected double getValue_NoVirtual()
	{
		double returnValue = getValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setValue_Real(long pNativeObject, double value);
	public void setValue(double value)
	{
		double valueParamValue = value;
		setValue_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private void setValue_Real_NoVirtual(long pNativeObject, double value);
	protected void setValue_NoVirtual(double value)
	{
		double valueParamValue = value;
		setValue_Real_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	public FloatGpuParameterControllerValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FloatGpuParameterControllerValue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getValue_void(long pNativeObject, String method);
	native protected void register_setValue_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getValue_void(this.nativeObject.pointer, "getValue_void_callback");
			this.register_setValue_Real(this.nativeObject.pointer, "setValue_Real_callback");
		}
	}
	
	public static FloatGpuParameterControllerValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FloatGpuParameterControllerValue obj = null;
 		if(baseObj instanceof FloatGpuParameterControllerValue)
		{
			obj = (FloatGpuParameterControllerValue)baseObj;
		} else {
			obj = new FloatGpuParameterControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFloatGpuParameterControllerValue");
			obj.increaseCast();
		}

		return obj;
	}
}
