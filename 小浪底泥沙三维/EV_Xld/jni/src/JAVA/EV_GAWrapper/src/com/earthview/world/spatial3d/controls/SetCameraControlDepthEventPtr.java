package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraControlDepthEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr", new SetCameraControlDepthEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SetCameraControlDepthEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraControlDepthEventPtr", null);
	}

	public SetCameraControlDepthEventPtr(com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CSetCameraControlDepthEventPtr", list);
	}

	public SetCameraControlDepthEventPtr(com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CSetCameraControlDepthEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent __returnValue = new com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraControlDepthEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraControlDepthEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSetCameraControlDepthEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CSetCameraControlDepthEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr __returnValue = new com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraControlDepthEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraControlDepthEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSetCameraControlDepthEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraControlDepthEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CSetCameraControlDepthEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr __returnValue = new com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraControlDepthEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraControlDepthEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraControlDepthEventPtr");
		}
		return __returnValue;
	}
	native private long toCGUIEventPtr_void(long pNativeObject);
	/**
	 * 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr对象
	 */
	public com.earthview.world.spatial.systemui.Guieventptr toCGUIEventPtr()
	{
		long returnValue = toCGUIEventPtr_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorConvertionCGUIEventPtr_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guieventptr OperatorConvertionCGUIEventPtr()
	{
		long returnValue = OperatorConvertionCGUIEventPtr_void(this.nativeObject.pointer);
		com.earthview.world.spatial.systemui.Guieventptr __returnValue = new com.earthview.world.spatial.systemui.Guieventptr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guieventptr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGUIEventPtr");
		}
		return __returnValue;
	}
	public SetCameraControlDepthEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraControlDepthEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraControlDepthEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraControlDepthEventPtr obj = null;
 		if(baseObj instanceof SetCameraControlDepthEventPtr)
		{
			obj = (SetCameraControlDepthEventPtr)baseObj;
		} else {
			obj = new SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraControlDepthEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
