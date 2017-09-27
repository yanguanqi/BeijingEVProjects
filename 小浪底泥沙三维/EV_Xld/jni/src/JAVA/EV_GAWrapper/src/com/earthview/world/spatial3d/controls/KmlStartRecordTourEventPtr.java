package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStartRecordTourEventPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr", new KmlStartRecordTourEventPtrClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlStartRecordTourEventPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlStartRecordTourEventPtr", null);
	}

	public KmlStartRecordTourEventPtr(com.earthview.world.spatial3d.controls.KmlStartRecordTourEvent rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CKmlStartRecordTourEventPtr", list);
	}

	public KmlStartRecordTourEventPtr(com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr tp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer tpPtr = new BasePointer(tp);
		list.add("tp", tpPtr.get());
		Create("CKmlStartRecordTourEventPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.KmlStartRecordTourEvent get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.KmlStartRecordTourEvent __returnValue = new com.earthview.world.spatial3d.controls.KmlStartRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate, "CKmlStartRecordTourEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.KmlStartRecordTourEvent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlStartRecordTourEvent");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CKmlStartRecordTourEventPtr(long pNativeObject, long r);
	public com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CKmlStartRecordTourEventPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr __returnValue = new com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CKmlStartRecordTourEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlStartRecordTourEventPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CKmlStartRecordTourEvent(long pNativeObject, long rep);
	public com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr OperatorAssign(com.earthview.world.spatial3d.controls.KmlStartRecordTourEvent rep)
	{
		long repParamValue = (rep == null ? 0L : rep.nativeObject.pointer);
		long returnValue = OperatorAssign_CKmlStartRecordTourEvent(this.nativeObject.pointer, repParamValue);
		com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr __returnValue = new com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate, "CKmlStartRecordTourEventPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.KmlStartRecordTourEventPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlStartRecordTourEventPtr");
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
	public KmlStartRecordTourEventPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlStartRecordTourEventPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlStartRecordTourEventPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlStartRecordTourEventPtr obj = null;
 		if(baseObj instanceof KmlStartRecordTourEventPtr)
		{
			obj = (KmlStartRecordTourEventPtr)baseObj;
		} else {
			obj = new KmlStartRecordTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlStartRecordTourEventPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
