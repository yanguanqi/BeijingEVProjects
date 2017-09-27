package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////-----------------------------------------------------------------------
public class TexCoordModifierControllerValue extends com.earthview.world.graphic.ControllerValue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTexCoordModifierControllerValue", new TexCoordModifierControllerValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCTexCoordModifierControllerValueProxy", new TexCoordModifierControllerValueClassFactory());
	}

	public TexCoordModifierControllerValue(com.earthview.world.graphic.TextureUnitState ref_t) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		Create("JCTexCoordModifierControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TexCoordModifierControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TexCoordModifierControllerValue(com.earthview.world.graphic.TextureUnitState ref_t, boolean translateU) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		BasePointer translateUPtr = new BasePointer(translateU);
		list.add("translateU", translateUPtr.get());
		Create("JCTexCoordModifierControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TexCoordModifierControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TexCoordModifierControllerValue(com.earthview.world.graphic.TextureUnitState ref_t, boolean translateU, boolean translateV) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		BasePointer translateUPtr = new BasePointer(translateU);
		list.add("translateU", translateUPtr.get());
		BasePointer translateVPtr = new BasePointer(translateV);
		list.add("translateV", translateVPtr.get());
		Create("JCTexCoordModifierControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TexCoordModifierControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TexCoordModifierControllerValue(com.earthview.world.graphic.TextureUnitState ref_t, boolean translateU, boolean translateV, boolean scaleU) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		BasePointer translateUPtr = new BasePointer(translateU);
		list.add("translateU", translateUPtr.get());
		BasePointer translateVPtr = new BasePointer(translateV);
		list.add("translateV", translateVPtr.get());
		BasePointer scaleUPtr = new BasePointer(scaleU);
		list.add("scaleU", scaleUPtr.get());
		Create("JCTexCoordModifierControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TexCoordModifierControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TexCoordModifierControllerValue(com.earthview.world.graphic.TextureUnitState ref_t, boolean translateU, boolean translateV, boolean scaleU, boolean scaleV) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		BasePointer translateUPtr = new BasePointer(translateU);
		list.add("translateU", translateUPtr.get());
		BasePointer translateVPtr = new BasePointer(translateV);
		list.add("translateV", translateVPtr.get());
		BasePointer scaleUPtr = new BasePointer(scaleU);
		list.add("scaleU", scaleUPtr.get());
		BasePointer scaleVPtr = new BasePointer(scaleV);
		list.add("scaleV", scaleVPtr.get());
		Create("JCTexCoordModifierControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TexCoordModifierControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public TexCoordModifierControllerValue(com.earthview.world.graphic.TextureUnitState ref_t, boolean translateU, boolean translateV, boolean scaleU, boolean scaleV, boolean rotate) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_tPtr = new BasePointer(ref_t);
		list.add("ref_t", ref_tPtr.get());
		BasePointer translateUPtr = new BasePointer(translateU);
		list.add("translateU", translateUPtr.get());
		BasePointer translateVPtr = new BasePointer(translateV);
		list.add("translateV", translateVPtr.get());
		BasePointer scaleUPtr = new BasePointer(scaleU);
		list.add("scaleU", scaleUPtr.get());
		BasePointer scaleVPtr = new BasePointer(scaleV);
		list.add("scaleV", scaleVPtr.get());
		BasePointer rotatePtr = new BasePointer(rotate);
		list.add("rotate", rotatePtr.get());
		Create("JCTexCoordModifierControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.TexCoordModifierControllerValue".equals(this.getClass().getName()))
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

	public TexCoordModifierControllerValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TexCoordModifierControllerValue(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static TexCoordModifierControllerValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TexCoordModifierControllerValue obj = null;
 		if(baseObj instanceof TexCoordModifierControllerValue)
		{
			obj = (TexCoordModifierControllerValue)baseObj;
		} else {
			obj = new TexCoordModifierControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTexCoordModifierControllerValue");
			obj.increaseCast();
		}

		return obj;
	}
}
