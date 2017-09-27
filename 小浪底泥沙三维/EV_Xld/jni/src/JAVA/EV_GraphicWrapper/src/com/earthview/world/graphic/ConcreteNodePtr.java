package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNodePtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConcreteNodePtr", new ConcreteNodePtrClassFactory());
	}

	public ConcreteNodePtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ConcreteNodePtr", null);
	}

	public ConcreteNodePtr(com.earthview.world.graphic.ConcreteNode ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("ConcreteNodePtr", list);
	}

	public ConcreteNodePtr(com.earthview.world.graphic.ConcreteNode ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("ConcreteNodePtr", list);
	}

	public ConcreteNodePtr(com.earthview.world.graphic.ConcreteNodePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ConcreteNodePtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.ConcreteNode get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ConcreteNode __returnValue = new com.earthview.world.graphic.ConcreteNode(CreatedWhenConstruct.CWC_NotToCreate, "ConcreteNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConcreteNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ConcreteNode");
		}
		return __returnValue;
	}
	public ConcreteNodePtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConcreteNodePtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConcreteNodePtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConcreteNodePtr obj = null;
 		if(baseObj instanceof ConcreteNodePtr)
		{
			obj = (ConcreteNodePtr)baseObj;
		} else {
			obj = new ConcreteNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConcreteNodePtr");
			obj.increaseCast();
		}

		return obj;
	}
}
