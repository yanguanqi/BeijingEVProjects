package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 自动加锁，解锁类，在构造时通过外部传进来的互斥体指针进行加锁在其析构的时候进行解锁
 */
public class MutexLocker extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CMutexLocker", new MutexLockerClassFactory());
	}

	/**
	 * 与外部传进来的互斥体指针进行绑定
	 * @param mutex 外部的互斥体指针
	 */
	public MutexLocker(com.earthview.world.core.Mutex mutex) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer mutexPtr = new BasePointer(mutex);
		list.add("mutex", mutexPtr.get());
		Create("CMutexLocker", list);
	}

	public MutexLocker(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MutexLocker(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MutexLocker fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MutexLocker obj = null;
 		if(baseObj instanceof MutexLocker)
		{
			obj = (MutexLocker)baseObj;
		} else {
			obj = new MutexLocker(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMutexLocker");
			obj.increaseCast();
		}

		return obj;
	}
}
