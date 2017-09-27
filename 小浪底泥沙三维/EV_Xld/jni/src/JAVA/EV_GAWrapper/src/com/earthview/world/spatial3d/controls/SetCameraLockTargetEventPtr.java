package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraLockTargetEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr", new SetCameraLockTargetEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SetCameraLockTargetEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSetCameraLockTargetEventPtr", null);
	}

	public SetCameraLockTargetEventPtr(com.earthview.world.spatial3d.controls.SetCameraLockTargetEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CSetCameraLockTargetEventPtr", list);
	}

	public SetCameraLockTargetEventPtr(com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CSetCameraLockTargetEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.SetCameraLockTargetEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.SetCameraLockTargetEvent __returnValue = new com.earthview.world.spatial3d.controls.SetCameraLockTargetEvent(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraLockTargetEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraLockTargetEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraLockTargetEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSetCameraLockTargetEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CSetCameraLockTargetEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr __returnValue = new com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraLockTargetEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraLockTargetEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CSetCameraLockTargetEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.SetCameraLockTargetEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CSetCameraLockTargetEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr __returnValue = new com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSetCameraLockTargetEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.SetCameraLockTargetEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSetCameraLockTargetEventPtr");
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
	public SetCameraLockTargetEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SetCameraLockTargetEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SetCameraLockTargetEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SetCameraLockTargetEventPtr obj = null;
 		if(baseObj instanceof SetCameraLockTargetEventPtr)
		{
			obj = (SetCameraLockTargetEventPtr)baseObj;
		} else {
			obj = new SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSetCameraLockTargetEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
