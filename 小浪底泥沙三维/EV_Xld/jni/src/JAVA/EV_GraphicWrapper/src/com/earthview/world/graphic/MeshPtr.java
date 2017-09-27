package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///class MeshLodUsage;
public class MeshPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CMeshPtr", new MeshPtrClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public MeshPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMeshPtr", null);
	}

	/**
	 * 构造函数
	 * @param rep 
	 */
	public MeshPtr(com.earthview.world.graphic.Mesh ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("CMeshPtr", list);
	}

	/**
	 * 构造函数
	 * @param rep 
	 * @param inFreeMethod 
	 */
	public MeshPtr(com.earthview.world.graphic.Mesh ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CMeshPtr", list);
	}

	/**
	 * 构造函数
	 * @param r 
	 */
	public MeshPtr(com.earthview.world.graphic.MeshPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CMeshPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.Mesh get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Mesh __returnValue = new com.earthview.world.graphic.Mesh(CreatedWhenConstruct.CWC_NotToCreate, "CMesh");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Mesh)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMesh");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 * @param r 
	 */
	public MeshPtr(com.earthview.world.graphic.ResourcePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CMeshPtr", list);
	}

	native private long OperatorAssign_ResourcePtr(long pNativeObject, long r);
	/**
	 * 用于转换EarthView::World::Graphic::ResourcePtr到EarthView::World::Graphic::CMeshPtr
	 * @param r 
	 */
	public com.earthview.world.graphic.MeshPtr OperatorAssign(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_ResourcePtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.MeshPtr __returnValue = new com.earthview.world.graphic.MeshPtr(CreatedWhenConstruct.CWC_NotToCreate, "CMeshPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.MeshPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshPtr");
		}
		return __returnValue;
	}
	public MeshPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshPtr obj = null;
 		if(baseObj instanceof MeshPtr)
		{
			obj = (MeshPtr)baseObj;
		} else {
			obj = new MeshPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
