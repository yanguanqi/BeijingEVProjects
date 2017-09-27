package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

//// Shared pointer to list of EarthView::World::Core::CDataStream items
public class DataStreamListPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::DataStreamListPtr", new DataStreamListPtrClassFactory());
	}

	public DataStreamListPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DataStreamListPtr", null);
	}

	public DataStreamListPtr(com.earthview.world.core.DataStreamList rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("DataStreamListPtr", list);
	}

	public DataStreamListPtr(com.earthview.world.core.DataStreamList rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("DataStreamListPtr", list);
	}

	public DataStreamListPtr(com.earthview.world.core.DataStreamListPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("DataStreamListPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.core.DataStreamList get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.DataStreamList __returnValue = new com.earthview.world.core.DataStreamList(CreatedWhenConstruct.CWC_NotToCreate, "DataStreamList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "DataStreamList");
		}
		return __returnValue;
	}
	public DataStreamListPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DataStreamListPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DataStreamListPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DataStreamListPtr obj = null;
 		if(baseObj instanceof DataStreamListPtr)
		{
			obj = (DataStreamListPtr)baseObj;
		} else {
			obj = new DataStreamListPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DataStreamListPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
