package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HighLevelGpuProgramPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHighLevelGpuProgramPtr", new HighLevelGpuProgramPtrClassFactory());
	}

	public HighLevelGpuProgramPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CHighLevelGpuProgramPtr", null);
	}

	public HighLevelGpuProgramPtr(com.earthview.world.graphic.HighLevelGpuProgram ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("CHighLevelGpuProgramPtr", list);
	}

	public HighLevelGpuProgramPtr(com.earthview.world.graphic.HighLevelGpuProgram ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CHighLevelGpuProgramPtr", list);
	}

	public HighLevelGpuProgramPtr(com.earthview.world.graphic.HighLevelGpuProgramPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CHighLevelGpuProgramPtr", list);
	}

	public HighLevelGpuProgramPtr(com.earthview.world.graphic.ResourcePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CHighLevelGpuProgramPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.HighLevelGpuProgram get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HighLevelGpuProgram __returnValue = new com.earthview.world.graphic.HighLevelGpuProgram(CreatedWhenConstruct.CWC_NotToCreate, "CHighLevelGpuProgram");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HighLevelGpuProgram)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHighLevelGpuProgram");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ResourcePtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CHighLevelGpuProgramPtr
	public com.earthview.world.graphic.HighLevelGpuProgramPtr OperatorAssign(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_ResourcePtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.HighLevelGpuProgramPtr __returnValue = new com.earthview.world.graphic.HighLevelGpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHighLevelGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HighLevelGpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHighLevelGpuProgramPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CGpuProgramPtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::CGpuProgramPtr to a EarthView::World::Graphic::CHighLevelGpuProgramPtr
	public com.earthview.world.graphic.HighLevelGpuProgramPtr OperatorAssign(com.earthview.world.graphic.GpuProgramPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CGpuProgramPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.HighLevelGpuProgramPtr __returnValue = new com.earthview.world.graphic.HighLevelGpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate, "CHighLevelGpuProgramPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HighLevelGpuProgramPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHighLevelGpuProgramPtr");
		}
		return __returnValue;
	}
	public HighLevelGpuProgramPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HighLevelGpuProgramPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static HighLevelGpuProgramPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HighLevelGpuProgramPtr obj = null;
 		if(baseObj instanceof HighLevelGpuProgramPtr)
		{
			obj = (HighLevelGpuProgramPtr)baseObj;
		} else {
			obj = new HighLevelGpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHighLevelGpuProgramPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
