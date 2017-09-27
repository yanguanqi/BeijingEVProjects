package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class FileInfoListPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::FileInfoListPtr", new FileInfoListPtrClassFactory());
	}

	public FileInfoListPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FileInfoListPtr", null);
	}

	public FileInfoListPtr(com.earthview.world.core.FileInfoList rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("FileInfoListPtr", list);
	}

	public FileInfoListPtr(com.earthview.world.core.FileInfoList rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("FileInfoListPtr", list);
	}

	public FileInfoListPtr(com.earthview.world.core.FileInfoListPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("FileInfoListPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.core.FileInfoList get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.FileInfoList __returnValue = new com.earthview.world.core.FileInfoList(CreatedWhenConstruct.CWC_NotToCreate, "FileInfoList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.FileInfoList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FileInfoList");
		}
		return __returnValue;
	}
	public FileInfoListPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FileInfoListPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FileInfoListPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FileInfoListPtr obj = null;
 		if(baseObj instanceof FileInfoListPtr)
		{
			obj = (FileInfoListPtr)baseObj;
		} else {
			obj = new FileInfoListPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FileInfoListPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
