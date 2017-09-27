package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptTokenListPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ScriptTokenListPtr", new ScriptTokenListPtrClassFactory());
	}

	public ScriptTokenListPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ScriptTokenListPtr", null);
	}

	public ScriptTokenListPtr(com.earthview.world.graphic.ScriptTokenList ref_rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_repPtr = new BasePointer(ref_rep);
		list.add("ref_rep", ref_repPtr.get());
		if(ref_rep != null)
		{
		ref_rep.setNoFree(true);
		}
		Create("ScriptTokenListPtr", list);
	}

	public ScriptTokenListPtr(com.earthview.world.graphic.ScriptTokenList ref_rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("ScriptTokenListPtr", list);
	}

	public ScriptTokenListPtr(com.earthview.world.graphic.ScriptTokenListPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ScriptTokenListPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.ScriptTokenList get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ScriptTokenList __returnValue = new com.earthview.world.graphic.ScriptTokenList(CreatedWhenConstruct.CWC_NotToCreate, "ScriptTokenList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ScriptTokenList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ScriptTokenList");
		}
		return __returnValue;
	}
	public ScriptTokenListPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScriptTokenListPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ScriptTokenListPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScriptTokenListPtr obj = null;
 		if(baseObj instanceof ScriptTokenListPtr)
		{
			obj = (ScriptTokenListPtr)baseObj;
		} else {
			obj = new ScriptTokenListPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ScriptTokenListPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
