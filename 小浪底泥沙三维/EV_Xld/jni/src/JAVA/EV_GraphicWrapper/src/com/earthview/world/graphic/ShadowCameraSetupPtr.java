package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowCameraSetupPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ShadowCameraSetupPtr", new ShadowCameraSetupPtrClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ShadowCameraSetupPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ShadowCameraSetupPtr", null);
	}

	public ShadowCameraSetupPtr(com.earthview.world.graphic.ShadowCameraSetup ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("ShadowCameraSetupPtr", list);
	}

	public ShadowCameraSetupPtr(com.earthview.world.graphic.ShadowCameraSetup ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("ShadowCameraSetupPtr", list);
	}

	public ShadowCameraSetupPtr(com.earthview.world.graphic.ShadowCameraSetupPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ShadowCameraSetupPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.ShadowCameraSetup get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ShadowCameraSetup __returnValue = new com.earthview.world.graphic.ShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate, "CShadowCameraSetup");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowCameraSetup)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CShadowCameraSetup");
		}
		return __returnValue;
	}
	public ShadowCameraSetupPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadowCameraSetupPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShadowCameraSetupPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadowCameraSetupPtr obj = null;
 		if(baseObj instanceof ShadowCameraSetupPtr)
		{
			obj = (ShadowCameraSetupPtr)baseObj;
		} else {
			obj = new ShadowCameraSetupPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ShadowCameraSetupPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
