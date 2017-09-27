package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PositionColorTexturedSharedPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr", new PositionColorTexturedSharedPtrClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public PositionColorTexturedSharedPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPositionColorTexturedSharedPtr", null);
	}

	/**
	 * 构造函数
	 * @param ref_pctPoint 
	 */
	public PositionColorTexturedSharedPtr(com.earthview.world.spatial3d.analysis.PositionColorTextured ref_pctPoint) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pctPointPtr = new BasePointer(ref_pctPoint);
		list.add("ref_pctPoint", ref_pctPointPtr.get());
		if(ref_pctPoint != null)
		{
		ref_pctPoint.setNoFree(true);
		}
		Create("CPositionColorTexturedSharedPtr", list);
	}

	/**
	 * 构造函数
	 * @param ref_pctPoint 
	 * @param inFreeMethod 共享方法
	 */
	public PositionColorTexturedSharedPtr(com.earthview.world.spatial3d.analysis.PositionColorTextured ref_pctPoint, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pctPointPtr = new BasePointer(ref_pctPoint);
		list.add("ref_pctPoint", ref_pctPointPtr.get());
		if(ref_pctPoint != null)
		{
		ref_pctPoint.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("CPositionColorTexturedSharedPtr", list);
	}

	native private long get_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial3d.analysis.PositionColorTextured get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.PositionColorTextured __returnValue = new com.earthview.world.spatial3d.analysis.PositionColorTextured(CreatedWhenConstruct.CWC_NotToCreate, "CPositionColorTextured");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.PositionColorTextured)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPositionColorTextured");
		}
		return __returnValue;
	}
	public PositionColorTexturedSharedPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PositionColorTexturedSharedPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PositionColorTexturedSharedPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PositionColorTexturedSharedPtr obj = null;
 		if(baseObj instanceof PositionColorTexturedSharedPtr)
		{
			obj = (PositionColorTexturedSharedPtr)baseObj;
		} else {
			obj = new PositionColorTexturedSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPositionColorTexturedSharedPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
