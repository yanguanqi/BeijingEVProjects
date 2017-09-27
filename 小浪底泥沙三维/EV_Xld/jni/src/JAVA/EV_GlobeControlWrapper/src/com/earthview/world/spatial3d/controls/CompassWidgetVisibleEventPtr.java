package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompassWidgetVisibleEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEventPtr", new CompassWidgetVisibleEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public CompassWidgetVisibleEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCompassWidgetVisibleEventPtr", null);
	}

	public CompassWidgetVisibleEventPtr(com.earthview.world.spatial3d.controls.CompassWidgetVisibleEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CCompassWidgetVisibleEventPtr", list);
	}

	public CompassWidgetVisibleEventPtr(com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CCompassWidgetVisibleEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.CompassWidgetVisibleEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.CompassWidgetVisibleEvent __returnValue = new com.earthview.world.spatial3d.controls.CompassWidgetVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate, "CCompassWidgetVisibleEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.CompassWidgetVisibleEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompassWidgetVisibleEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CCompassWidgetVisibleEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CCompassWidgetVisibleEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr __returnValue = new com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CCompassWidgetVisibleEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompassWidgetVisibleEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CCompassWidgetVisibleEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.CompassWidgetVisibleEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CCompassWidgetVisibleEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr __returnValue = new com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CCompassWidgetVisibleEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.CompassWidgetVisibleEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompassWidgetVisibleEventPtr");
		}
		return __returnValue;
	}
	native private long toCGUIEventPtr_void(long pNativeObject);
	/**
	 * 转换为EarthView::World::Spatial::SystemUI::CGUIEventPtr
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
	public CompassWidgetVisibleEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompassWidgetVisibleEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompassWidgetVisibleEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompassWidgetVisibleEventPtr obj = null;
 		if(baseObj instanceof CompassWidgetVisibleEventPtr)
		{
			obj = (CompassWidgetVisibleEventPtr)baseObj;
		} else {
			obj = new CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompassWidgetVisibleEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
