package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FontPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFontPtr", new FontPtrClassFactory());
	}

	public FontPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFontPtr", null);
	}

	public FontPtr(com.earthview.world.graphic.Font ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("CFontPtr", list);
	}

	public FontPtr(com.earthview.world.graphic.Font ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CFontPtr", list);
	}

	public FontPtr(com.earthview.world.graphic.FontPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CFontPtr", list);
	}

	public FontPtr(com.earthview.world.graphic.ResourcePtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CFontPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.Font get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Font __returnValue = new com.earthview.world.graphic.Font(CreatedWhenConstruct.CWC_NotToCreate, "CFont");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Font)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFont");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ResourcePtr(long pNativeObject, long r);
	//// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CFontPtr
	public com.earthview.world.graphic.FontPtr OperatorAssign(com.earthview.world.graphic.ResourcePtr r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_ResourcePtr(this.nativeObject.pointer, rParamValue);
		com.earthview.world.graphic.FontPtr __returnValue = new com.earthview.world.graphic.FontPtr(CreatedWhenConstruct.CWC_NotToCreate, "CFontPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FontPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFontPtr");
		}
		return __returnValue;
	}
	public FontPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FontPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FontPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FontPtr obj = null;
 		if(baseObj instanceof FontPtr)
		{
			obj = (FontPtr)baseObj;
		} else {
			obj = new FontPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFontPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
