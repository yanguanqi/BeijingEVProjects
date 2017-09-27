package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraRotationratioEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr", new SetCameraRotationratioEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SetCameraRotationratioEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraRotationratioEventPtr", null);
	}

	public SetCameraRotationratioEventPtr(com.earthview.world.spatial3d.controls.SetCameraRotationratioEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CSetCameraRotationratioEventPtr", list);
	}

	public SetCameraRotationratioEventPtr(com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CSetCameraRotationratioEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.SetCameraRotationratioEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.SetCameraRotationratioEvent __returnValue = new com.earthview.world.spatial3d.controls.SetCameraRotationratioEvent(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraRotationratioEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraRotationratioEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraRotationratioEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSetCameraRotationratioEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CSetCameraRotationratioEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr __returnValue = new com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraRotationratioEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraRotationratioEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSetCameraRotationratioEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraRotationratioEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CSetCameraRotationratioEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr __returnValue = new com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraRotationratioEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraRotationratioEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraRotationratioEventPtr");
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
	public SetCameraRotationratioEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraRotationratioEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraRotationratioEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraRotationratioEventPtr obj = null;
 		if(baseObj instanceof SetCameraRotationratioEventPtr)
		{
			obj = (SetCameraRotationratioEventPtr)baseObj;
		} else {
			obj = new SetCameraRotationratioEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraRotationratioEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
