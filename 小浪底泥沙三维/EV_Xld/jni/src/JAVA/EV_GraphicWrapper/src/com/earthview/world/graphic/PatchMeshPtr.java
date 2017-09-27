package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PatchMeshPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPatchMeshPtr", new PatchMeshPtrClassFactory());
	}

	public PatchMeshPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPatchMeshPtr", null);
	}

	public PatchMeshPtr(com.earthview.world.graphic.PatchMesh ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("CPatchMeshPtr", list);
	}

	public PatchMeshPtr(com.earthview.world.graphic.PatchMesh ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CPatchMeshPtr", list);
	}

	public PatchMeshPtr(com.earthview.world.graphic.PatchMeshPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CPatchMeshPtr", list);
	}

	public PatchMeshPtr(com.earthview.world.graphic.ResourcePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CPatchMeshPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.PatchMesh get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.PatchMesh __returnValue = new com.earthview.world.graphic.PatchMesh(CreatedWhenConstruct.CWC_NotToCreate, "CPatchMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMesh)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPatchMesh");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ResourcePtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CPatchMeshPtr
	public com.earthview.world.graphic.PatchMeshPtr OperatorAssign(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_ResourcePtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate, "CPatchMeshPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CMeshPtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::CMeshPtr to a EarthView::World::Graphic::CPatchMeshPtr
	public com.earthview.world.graphic.PatchMeshPtr OperatorAssign(com.earthview.world.graphic.MeshPtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CMeshPtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.PatchMeshPtr __returnValue = new com.earthview.world.graphic.PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate, "CPatchMeshPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PatchMeshPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPatchMeshPtr");
		}
		return __returnValue;
	}
	public PatchMeshPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PatchMeshPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PatchMeshPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PatchMeshPtr obj = null;
 		if(baseObj instanceof PatchMeshPtr)
		{
			obj = (PatchMeshPtr)baseObj;
		} else {
			obj = new PatchMeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPatchMeshPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
