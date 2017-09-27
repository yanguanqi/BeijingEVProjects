package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraRotationratioEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent", new SetCameraRotationratioEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SetCameraRotationratioEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraRotationratioEvent", null);
	}

	/**
	 * 计逄相机的旋转速度
	 * @param rotationratio 旋转速度
	 */
	public SetCameraRotationratioEvent(double rotationratio) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rotationratioPtr = new BasePointer(rotationratio);
		list.add("rotationratio", rotationratioPtr.get());
		Create("CSetCameraRotationratioEvent", list);
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
	
	public SetCameraRotationratioEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraRotationratioEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraRotationratioEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraRotationratioEvent obj = null;
 		if(baseObj instanceof SetCameraRotationratioEvent)
		{
			obj = (SetCameraRotationratioEvent)baseObj;
		} else {
			obj = new SetCameraRotationratioEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraRotationratioEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
