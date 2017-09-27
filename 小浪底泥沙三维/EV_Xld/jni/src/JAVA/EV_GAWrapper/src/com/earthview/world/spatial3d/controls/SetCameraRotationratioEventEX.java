package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraRotationratioEventEX extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX", new SetCameraRotationratioEventEXClassFactory());
	}

	public SetCameraRotationratioEventEX() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraRotationratioEventEX", null);
	}

	public SetCameraRotationratioEventEX(double rotationratio) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rotationratioPtr = new BasePointer(rotationratio);
		list.add("rotationratio", rotationratioPtr.get());
		Create("CSetCameraRotationratioEventEX", list);
	}

	native private double get_mrotationratio_void(long pNativeObject);
	public double get_mrotationratio()
	{
		double jniValue = get_mrotationratio_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mrotationratio_ev_real64 (long pNativeObject, double value);
	public void set_mrotationratio(double mrotationratio)
	{
		double mrotationratioParamValue = mrotationratio;
		
		set_mrotationratio_ev_real64(this.nativeObject.pointer, mrotationratioParamValue);
	}
	
	public SetCameraRotationratioEventEX(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraRotationratioEventEX(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraRotationratioEventEX fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraRotationratioEventEX obj = null;
 		if(baseObj instanceof SetCameraRotationratioEventEX)
		{
			obj = (SetCameraRotationratioEventEX)baseObj;
		} else {
			obj = new SetCameraRotationratioEventEX(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraRotationratioEventEX");
			obj.increaseCast();
		}

		return obj;
	}
}
