package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControllerValueRealPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ControllerValueRealPtr", new ControllerValueRealPtrClassFactory());
	}

	public ControllerValueRealPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ControllerValueRealPtr", null);
	}

	public ControllerValueRealPtr(com.earthview.world.graphic.ControllerValue ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("ControllerValueRealPtr", list);
	}

	public ControllerValueRealPtr(com.earthview.world.graphic.ControllerValue ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("ControllerValueRealPtr", list);
	}

	public ControllerValueRealPtr(com.earthview.world.graphic.ControllerValueRealPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ControllerValueRealPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.ControllerValue get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ControllerValue __returnValue = new com.earthview.world.graphic.ControllerValue(CreatedWhenConstruct.CWC_NotToCreate, "CControllerValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControllerValue");
		}
		return __returnValue;
	}
	public ControllerValueRealPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControllerValueRealPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControllerValueRealPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControllerValueRealPtr obj = null;
 		if(baseObj instanceof ControllerValueRealPtr)
		{
			obj = (ControllerValueRealPtr)baseObj;
		} else {
			obj = new ControllerValueRealPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ControllerValueRealPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
