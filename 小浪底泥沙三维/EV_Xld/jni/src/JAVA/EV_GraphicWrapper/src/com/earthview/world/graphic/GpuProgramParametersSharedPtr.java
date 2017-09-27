package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Shared pointer used to hold references to EarthView::World::Graphic::CGpuProgramParameters instances
public class GpuProgramParametersSharedPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuProgramParametersSharedPtr", new GpuProgramParametersSharedPtrClassFactory());
	}

	public GpuProgramParametersSharedPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuProgramParametersSharedPtr", null);
	}

	public GpuProgramParametersSharedPtr(com.earthview.world.graphic.GpuProgramParameters rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("GpuProgramParametersSharedPtr", list);
	}

	public GpuProgramParametersSharedPtr(com.earthview.world.graphic.GpuProgramParameters rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("GpuProgramParametersSharedPtr", list);
	}

	public GpuProgramParametersSharedPtr(com.earthview.world.graphic.GpuProgramParametersSharedPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("GpuProgramParametersSharedPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParameters get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters __returnValue = new com.earthview.world.graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramParameters");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramParameters");
		}
		return __returnValue;
	}
	public GpuProgramParametersSharedPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuProgramParametersSharedPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuProgramParametersSharedPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuProgramParametersSharedPtr obj = null;
 		if(baseObj instanceof GpuProgramParametersSharedPtr)
		{
			obj = (GpuProgramParametersSharedPtr)baseObj;
		} else {
			obj = new GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuProgramParametersSharedPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
