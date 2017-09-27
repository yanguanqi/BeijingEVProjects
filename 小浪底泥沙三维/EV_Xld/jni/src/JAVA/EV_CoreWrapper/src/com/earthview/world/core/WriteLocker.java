package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 自动写加锁、解锁类构造的时候进行写加锁，析构的时候进行写解锁
 */
public class WriteLocker extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CWriteLocker", new WriteLockerClassFactory());
	}

	public WriteLocker(com.earthview.world.core.ReadWriteLock pWriteLocker) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pWriteLockerPtr = new BasePointer(pWriteLocker);
		list.add("pWriteLocker", pWriteLockerPtr.get());
		Create("CWriteLocker", list);
	}

	public WriteLocker(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WriteLocker(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WriteLocker fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WriteLocker obj = null;
 		if(baseObj instanceof WriteLocker)
		{
			obj = (WriteLocker)baseObj;
		} else {
			obj = new WriteLocker(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWriteLocker");
			obj.increaseCast();
		}

		return obj;
	}
}
