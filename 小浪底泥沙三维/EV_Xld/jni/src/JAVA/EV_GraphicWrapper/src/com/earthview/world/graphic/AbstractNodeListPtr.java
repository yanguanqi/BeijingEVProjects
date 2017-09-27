package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AbstractNodeListPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::AbstractNodeListPtr", new AbstractNodeListPtrClassFactory());
	}

	public AbstractNodeListPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AbstractNodeListPtr", null);
	}

	public AbstractNodeListPtr(com.earthview.world.graphic.AbstractNodeList ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("AbstractNodeListPtr", list);
	}

	public AbstractNodeListPtr(com.earthview.world.graphic.AbstractNodeList ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("AbstractNodeListPtr", list);
	}

	public AbstractNodeListPtr(com.earthview.world.graphic.AbstractNodeListPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("AbstractNodeListPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.AbstractNodeList get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AbstractNodeList __returnValue = new com.earthview.world.graphic.AbstractNodeList(CreatedWhenConstruct.CWC_NotToCreate, "AbstractNodeList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AbstractNodeList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AbstractNodeList");
		}
		return __returnValue;
	}
	public AbstractNodeListPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AbstractNodeListPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AbstractNodeListPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AbstractNodeListPtr obj = null;
 		if(baseObj instanceof AbstractNodeListPtr)
		{
			obj = (AbstractNodeListPtr)baseObj;
		} else {
			obj = new AbstractNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AbstractNodeListPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
