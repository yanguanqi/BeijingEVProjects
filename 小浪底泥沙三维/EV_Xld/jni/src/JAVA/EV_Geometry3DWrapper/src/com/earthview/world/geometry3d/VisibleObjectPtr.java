package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 场景中可见对象抽象基类的智能指针
 */
public class VisibleObjectPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CVisibleObjectPtr", new VisibleObjectPtrClassFactory());
	}

	public VisibleObjectPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVisibleObjectPtr", null);
	}

	public VisibleObjectPtr(com.earthview.world.geometry3d.VisibleObject rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("CVisibleObjectPtr", list);
	}

	public VisibleObjectPtr(com.earthview.world.geometry3d.VisibleObject rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CVisibleObjectPtr", list);
	}

	public VisibleObjectPtr(com.earthview.world.geometry3d.VisibleObjectPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CVisibleObjectPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.geometry3d.VisibleObject get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.VisibleObject __returnValue = new com.earthview.world.geometry3d.VisibleObject(CreatedWhenConstruct.CWC_NotToCreate, "CVisibleObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVisibleObject");
		}
		return __returnValue;
	}
	public VisibleObjectPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VisibleObjectPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VisibleObjectPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VisibleObjectPtr obj = null;
 		if(baseObj instanceof VisibleObjectPtr)
		{
			obj = (VisibleObjectPtr)baseObj;
		} else {
			obj = new VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVisibleObjectPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
