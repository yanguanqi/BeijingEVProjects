package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuNamedConstantsPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuNamedConstantsPtr", new GpuNamedConstantsPtrClassFactory());
	}

	public GpuNamedConstantsPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuNamedConstantsPtr", null);
	}

	public GpuNamedConstantsPtr(com.earthview.world.graphic.GpuNamedConstants ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("GpuNamedConstantsPtr", list);
	}

	public GpuNamedConstantsPtr(com.earthview.world.graphic.GpuNamedConstants ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("GpuNamedConstantsPtr", list);
	}

	public GpuNamedConstantsPtr(com.earthview.world.graphic.GpuNamedConstantsPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("GpuNamedConstantsPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.GpuNamedConstants get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuNamedConstants __returnValue = new com.earthview.world.graphic.GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate, "GpuNamedConstants");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuNamedConstants)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuNamedConstants");
		}
		return __returnValue;
	}
	public GpuNamedConstantsPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuNamedConstantsPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuNamedConstantsPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuNamedConstantsPtr obj = null;
 		if(baseObj instanceof GpuNamedConstantsPtr)
		{
			obj = (GpuNamedConstantsPtr)baseObj;
		} else {
			obj = new GpuNamedConstantsPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuNamedConstantsPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
