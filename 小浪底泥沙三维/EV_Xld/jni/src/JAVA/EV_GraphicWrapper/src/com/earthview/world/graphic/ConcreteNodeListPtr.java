package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNodeListPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConcreteNodeListPtr", new ConcreteNodeListPtrClassFactory());
	}

	public ConcreteNodeListPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ConcreteNodeListPtr", null);
	}

	public ConcreteNodeListPtr(com.earthview.world.graphic.ConcreteNodeList ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("ConcreteNodeListPtr", list);
	}

	public ConcreteNodeListPtr(com.earthview.world.graphic.ConcreteNodeList ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("ConcreteNodeListPtr", list);
	}

	public ConcreteNodeListPtr(com.earthview.world.graphic.ConcreteNodeListPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ConcreteNodeListPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.ConcreteNodeList get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ConcreteNodeList __returnValue = new com.earthview.world.graphic.ConcreteNodeList(CreatedWhenConstruct.CWC_NotToCreate, "ConcreteNodeList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNodeList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNodeList");
		}
		return __returnValue;
	}
	public ConcreteNodeListPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConcreteNodeListPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConcreteNodeListPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConcreteNodeListPtr obj = null;
 		if(baseObj instanceof ConcreteNodeListPtr)
		{
			obj = (ConcreteNodeListPtr)baseObj;
		} else {
			obj = new ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConcreteNodeListPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
