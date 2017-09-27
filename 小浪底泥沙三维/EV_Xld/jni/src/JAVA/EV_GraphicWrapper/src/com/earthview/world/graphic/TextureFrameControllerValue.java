package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
public class TextureFrameControllerValue extends com.earthview.world.graphic.ControllerValue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureFrameControllerValue", new TextureFrameControllerValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTextureFrameControllerValueProxy", new TextureFrameControllerValueClassFactory());
	}

	public TextureFrameControllerValue(com.earthview.world.graphic.TextureUnitState ref_t) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		Create("JCTextureFrameControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TextureFrameControllerValue".equals(this.getClass().getName()))
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

	public TextureFrameControllerValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureFrameControllerValue(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static TextureFrameControllerValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureFrameControllerValue obj = null;
 		if(baseObj instanceof TextureFrameControllerValue)
		{
			obj = (TextureFrameControllerValue)baseObj;
		} else {
			obj = new TextureFrameControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureFrameControllerValue");
			obj.increaseCast();
		}

		return obj;
	}
}
