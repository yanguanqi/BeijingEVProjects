package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Shared pointer used to hold references to EarthView::World::Graphic::CGpuProgramParameters instances
public class GpuSharedParametersPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuSharedParametersPtr", new GpuSharedParametersPtrClassFactory());
	}

	public GpuSharedParametersPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuSharedParametersPtr", null);
	}

	public GpuSharedParametersPtr(com.earthview.world.graphic.GpuSharedParameters ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("GpuSharedParametersPtr", list);
	}

	public GpuSharedParametersPtr(com.earthview.world.graphic.GpuSharedParameters ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("GpuSharedParametersPtr", list);
	}

	public GpuSharedParametersPtr(com.earthview.world.graphic.GpuSharedParametersPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("GpuSharedParametersPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.GpuSharedParameters get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuSharedParameters __returnValue = new com.earthview.world.graphic.GpuSharedParameters(CreatedWhenConstruct.CWC_NotToCreate, "CGpuSharedParameters");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuSharedParameters)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuSharedParameters");
		}
		return __returnValue;
	}
	public GpuSharedParametersPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuSharedParametersPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuSharedParametersPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuSharedParametersPtr obj = null;
 		if(baseObj instanceof GpuSharedParametersPtr)
		{
			obj = (GpuSharedParametersPtr)baseObj;
		} else {
			obj = new GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuSharedParametersPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
