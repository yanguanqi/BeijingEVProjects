package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControllerFunctionRealPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ControllerFunctionRealPtr", new ControllerFunctionRealPtrClassFactory());
	}

	public ControllerFunctionRealPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ControllerFunctionRealPtr", null);
	}

	public ControllerFunctionRealPtr(com.earthview.world.graphic.ControllerFunction ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("ControllerFunctionRealPtr", list);
	}

	public ControllerFunctionRealPtr(com.earthview.world.graphic.ControllerFunction ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("ControllerFunctionRealPtr", list);
	}

	public ControllerFunctionRealPtr(com.earthview.world.graphic.ControllerFunctionRealPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ControllerFunctionRealPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.ControllerFunction get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ControllerFunction __returnValue = new com.earthview.world.graphic.ControllerFunction(CreatedWhenConstruct.CWC_NotToCreate, "CControllerFunction");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ControllerFunction)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CControllerFunction");
		}
		return __returnValue;
	}
	public ControllerFunctionRealPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControllerFunctionRealPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControllerFunctionRealPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControllerFunctionRealPtr obj = null;
 		if(baseObj instanceof ControllerFunctionRealPtr)
		{
			obj = (ControllerFunctionRealPtr)baseObj;
		} else {
			obj = new ControllerFunctionRealPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ControllerFunctionRealPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
