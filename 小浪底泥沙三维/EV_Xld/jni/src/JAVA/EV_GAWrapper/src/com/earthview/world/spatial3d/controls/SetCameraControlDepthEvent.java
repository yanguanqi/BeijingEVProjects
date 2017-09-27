package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraControlDepthEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent", new SetCameraControlDepthEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SetCameraControlDepthEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraControlDepthEvent", null);
	}

	/**
	 * 构造函数
	 * @param cameraControlDepth 相机固定的深度
	 */
	public SetCameraControlDepthEvent(double cameraControlDepth) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cameraControlDepthPtr = new BasePointer(cameraControlDepth);
		list.add("cameraControlDepth", cameraControlDepthPtr.get());
		Create("CSetCameraControlDepthEvent", list);
	}

	native private void OperatorAssign_CSetCameraControlDepthEvent(long pNativeObject, long rhs);
	public void OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CSetCameraControlDepthEvent(this.nativeObject.pointer, rhsParamValue);
	}
	public SetCameraControlDepthEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraControlDepthEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraControlDepthEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraControlDepthEvent obj = null;
 		if(baseObj instanceof SetCameraControlDepthEvent)
		{
			obj = (SetCameraControlDepthEvent)baseObj;
		} else {
			obj = new SetCameraControlDepthEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraControlDepthEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
