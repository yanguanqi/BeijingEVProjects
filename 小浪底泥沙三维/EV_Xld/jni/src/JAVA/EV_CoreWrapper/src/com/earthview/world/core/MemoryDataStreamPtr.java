package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class MemoryDataStreamPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::MemoryDataStreamPtr", new MemoryDataStreamPtrClassFactory());
	}

	public MemoryDataStreamPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("MemoryDataStreamPtr", null);
	}

	public MemoryDataStreamPtr(com.earthview.world.core.MemoryDataStream rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("MemoryDataStreamPtr", list);
	}

	public MemoryDataStreamPtr(com.earthview.world.core.MemoryDataStream rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("MemoryDataStreamPtr", list);
	}

	public MemoryDataStreamPtr(com.earthview.world.core.MemoryDataStreamPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("MemoryDataStreamPtr", list);
	}

	public MemoryDataStreamPtr(com.earthview.world.core.DataStreamPtr ptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ptrPtr = new BasePointer(ptr);
		list.add("ptr", ptrPtr.get());
		Create("MemoryDataStreamPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.core.MemoryDataStream get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.MemoryDataStream __returnValue = new com.earthview.world.core.MemoryDataStream(CreatedWhenConstruct.CWC_NotToCreate, "CMemoryDataStream");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStream)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMemoryDataStream");
		}
		return __returnValue;
	}
	native private long OperatorConvertionDataStreamPtr_void(long pNativeObject);
	public com.earthview.world.core.DataStreamPtr OperatorConvertionDataStreamPtr()
	{
		long returnValue = OperatorConvertionDataStreamPtr_void(this.nativeObject.pointer);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	public MemoryDataStreamPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MemoryDataStreamPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MemoryDataStreamPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MemoryDataStreamPtr obj = null;
 		if(baseObj instanceof MemoryDataStreamPtr)
		{
			obj = (MemoryDataStreamPtr)baseObj;
		} else {
			obj = new MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "MemoryDataStreamPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
