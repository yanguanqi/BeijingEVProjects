package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAndZoomCameraEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr", new RotationAndZoomCameraEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RotationAndZoomCameraEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRotationAndZoomCameraEventPtr", null);
	}

	public RotationAndZoomCameraEventPtr(com.earthview.world.spatial3d.controls.RotationAndZoomCameraEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CRotationAndZoomCameraEventPtr", list);
	}

	public RotationAndZoomCameraEventPtr(com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CRotationAndZoomCameraEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.RotationAndZoomCameraEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.RotationAndZoomCameraEvent __returnValue = new com.earthview.world.spatial3d.controls.RotationAndZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate, "CRotationAndZoomCameraEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.RotationAndZoomCameraEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRotationAndZoomCameraEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CRotationAndZoomCameraEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CRotationAndZoomCameraEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr __returnValue = new com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CRotationAndZoomCameraEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRotationAndZoomCameraEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CRotationAndZoomCameraEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.RotationAndZoomCameraEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CRotationAndZoomCameraEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr __returnValue = new com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CRotationAndZoomCameraEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.RotationAndZoomCameraEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRotationAndZoomCameraEventPtr");
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
	public RotationAndZoomCameraEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotationAndZoomCameraEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RotationAndZoomCameraEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotationAndZoomCameraEventPtr obj = null;
 		if(baseObj instanceof RotationAndZoomCameraEventPtr)
		{
			obj = (RotationAndZoomCameraEventPtr)baseObj;
		} else {
			obj = new RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRotationAndZoomCameraEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
