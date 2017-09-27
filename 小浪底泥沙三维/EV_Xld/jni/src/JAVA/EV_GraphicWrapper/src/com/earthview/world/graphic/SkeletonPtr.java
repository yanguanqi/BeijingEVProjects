package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkeletonPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSkeletonPtr", new SkeletonPtrClassFactory());
	}

	public SkeletonPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSkeletonPtr", null);
	}

	public SkeletonPtr(com.earthview.world.graphic.Skeleton ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("CSkeletonPtr", list);
	}

	public SkeletonPtr(com.earthview.world.graphic.Skeleton ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CSkeletonPtr", list);
	}

	public SkeletonPtr(com.earthview.world.graphic.SkeletonPtr sp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer spPtr = new BasePointer(sp);
		list.add("sp", spPtr.get());
		Create("CSkeletonPtr", list);
	}

	public SkeletonPtr(com.earthview.world.graphic.ResourcePtr rp) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rpPtr = new BasePointer(rp);
		list.add("rp", rpPtr.get());
		Create("CSkeletonPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.Skeleton get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Skeleton __returnValue = new com.earthview.world.graphic.Skeleton(CreatedWhenConstruct.CWC_NotToCreate, "CSkeleton");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Skeleton)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeleton");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ResourcePtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CSkeletonPtr
	public com.earthview.world.graphic.SkeletonPtr OperatorAssign(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_ResourcePtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.SkeletonPtr __returnValue = new com.earthview.world.graphic.SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate, "CSkeletonPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SkeletonPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSkeletonPtr");
		}
		return __returnValue;
	}
	public SkeletonPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SkeletonPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SkeletonPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SkeletonPtr obj = null;
 		if(baseObj instanceof SkeletonPtr)
		{
			obj = (SkeletonPtr)baseObj;
		} else {
			obj = new SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSkeletonPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
