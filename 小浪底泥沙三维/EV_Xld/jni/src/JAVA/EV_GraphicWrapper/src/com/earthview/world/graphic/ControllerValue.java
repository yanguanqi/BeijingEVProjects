package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////template <typename T>
public class ControllerValue extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CControllerValue", new ControllerValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCControllerValueProxy", new ControllerValueClassFactory());
	}

	public ControllerValue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCControllerValueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  double getValue_void_callback()
	{
		double returnValue = getValue();
		double __returnValue = returnValue;
		return __returnValue;
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

	protected  void setValue_Real_callback(double value)
	{
		double valueParamValue = value;
		setValue(valueParamValue);
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

	public ControllerValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControllerValue(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static ControllerValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControllerValue obj = null;
 		if(baseObj instanceof ControllerValue)
		{
			obj = (ControllerValue)baseObj;
		} else {
			obj = new ControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControllerValue");
			obj.increaseCast();
		}

		return obj;
	}
}
