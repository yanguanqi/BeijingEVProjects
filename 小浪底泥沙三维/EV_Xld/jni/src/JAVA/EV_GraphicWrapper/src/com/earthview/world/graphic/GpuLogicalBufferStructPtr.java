package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuLogicalBufferStructPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuLogicalBufferStructPtr", new GpuLogicalBufferStructPtrClassFactory());
	}

	public GpuLogicalBufferStructPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GpuLogicalBufferStructPtr", null);
	}

	public GpuLogicalBufferStructPtr(com.earthview.world.graphic.GpuLogicalBufferStruct ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("GpuLogicalBufferStructPtr", list);
	}

	public GpuLogicalBufferStructPtr(com.earthview.world.graphic.GpuLogicalBufferStruct ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("GpuLogicalBufferStructPtr", list);
	}

	public GpuLogicalBufferStructPtr(com.earthview.world.graphic.GpuLogicalBufferStructPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("GpuLogicalBufferStructPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.GpuLogicalBufferStruct get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuLogicalBufferStruct __returnValue = new com.earthview.world.graphic.GpuLogicalBufferStruct(CreatedWhenConstruct.CWC_NotToCreate, "GpuLogicalBufferStruct");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuLogicalBufferStruct)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuLogicalBufferStruct");
		}
		return __returnValue;
	}
	public GpuLogicalBufferStructPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuLogicalBufferStructPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuLogicalBufferStructPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuLogicalBufferStructPtr obj = null;
 		if(baseObj instanceof GpuLogicalBufferStructPtr)
		{
			obj = (GpuLogicalBufferStructPtr)baseObj;
		} else {
			obj = new GpuLogicalBufferStructPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuLogicalBufferStructPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
