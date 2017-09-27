package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatitudeLonitudeTextBoxVisibleEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr", new LatitudeLonitudeTextBoxVisibleEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LatitudeLonitudeTextBoxVisibleEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLatitudeLonitudeTextBoxVisibleEventPtr", null);
	}

	public LatitudeLonitudeTextBoxVisibleEventPtr(com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CLatitudeLonitudeTextBoxVisibleEventPtr", list);
	}

	public LatitudeLonitudeTextBoxVisibleEventPtr(com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CLatitudeLonitudeTextBoxVisibleEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEvent __returnValue = new com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate, "CLatitudeLonitudeTextBoxVisibleEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatitudeLonitudeTextBoxVisibleEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CLatitudeLonitudeTextBoxVisibleEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CLatitudeLonitudeTextBoxVisibleEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr __returnValue = new com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CLatitudeLonitudeTextBoxVisibleEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatitudeLonitudeTextBoxVisibleEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CLatitudeLonitudeTextBoxVisibleEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CLatitudeLonitudeTextBoxVisibleEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr __returnValue = new com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CLatitudeLonitudeTextBoxVisibleEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.LatitudeLonitudeTextBoxVisibleEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatitudeLonitudeTextBoxVisibleEventPtr");
		}
		return __returnValue;
	}
	native private long toCGUIEventPtr_void(long pNativeObject);
	/**
	 * 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
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
	public LatitudeLonitudeTextBoxVisibleEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatitudeLonitudeTextBoxVisibleEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LatitudeLonitudeTextBoxVisibleEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatitudeLonitudeTextBoxVisibleEventPtr obj = null;
 		if(baseObj instanceof LatitudeLonitudeTextBoxVisibleEventPtr)
		{
			obj = (LatitudeLonitudeTextBoxVisibleEventPtr)baseObj;
		} else {
			obj = new LatitudeLonitudeTextBoxVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatitudeLonitudeTextBoxVisibleEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
