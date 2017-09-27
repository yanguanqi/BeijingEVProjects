package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 自动读加锁、解锁类构造的时候进行读加锁，析构的时候进行读解锁
 */
public class ReadLocker extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CReadLocker", new ReadLockerClassFactory());
	}

	public ReadLocker(com.earthview.world.core.ReadWriteLock pReadLocker) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pReadLockerPtr = new BasePointer(pReadLocker);
		list.add("pReadLocker", pReadLockerPtr.get());
		Create("CReadLocker", list);
	}

	public ReadLocker(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ReadLocker(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ReadLocker fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ReadLocker obj = null;
 		if(baseObj instanceof ReadLocker)
		{
			obj = (ReadLocker)baseObj;
		} else {
			obj = new ReadLocker(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CReadLocker");
			obj.increaseCast();
		}

		return obj;
	}
}
