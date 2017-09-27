package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr", new TiltCameraEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TiltCameraEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTiltCameraEventPtr", null);
	}

	public TiltCameraEventPtr(com.earthview.world.spatial3d.controls.TiltCameraEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CTiltCameraEventPtr", list);
	}

	public TiltCameraEventPtr(com.earthview.world.spatial3d.controls.TiltCameraEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CTiltCameraEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.TiltCameraEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.TiltCameraEvent __returnValue = new com.earthview.world.spatial3d.controls.TiltCameraEvent(CreatedWhenConstruct.CWC_NotToCreate, "CTiltCameraEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TiltCameraEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTiltCameraEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTiltCameraEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.TiltCameraEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.TiltCameraEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CTiltCameraEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.TiltCameraEventPtr __returnValue = new com.earthview.world.spatial3d.controls.TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CTiltCameraEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TiltCameraEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTiltCameraEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CTiltCameraEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.TiltCameraEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.TiltCameraEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CTiltCameraEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.TiltCameraEventPtr __returnValue = new com.earthview.world.spatial3d.controls.TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CTiltCameraEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.TiltCameraEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTiltCameraEventPtr");
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
	public TiltCameraEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TiltCameraEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TiltCameraEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TiltCameraEventPtr obj = null;
 		if(baseObj instanceof TiltCameraEventPtr)
		{
			obj = (TiltCameraEventPtr)baseObj;
		} else {
			obj = new TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTiltCameraEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
