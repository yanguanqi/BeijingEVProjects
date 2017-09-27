package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 互斥体类，提供加锁、解锁、以及尝试加锁的功能
 */
public class Mutex extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CMutex", new MutexClassFactory());
	}

	public Mutex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMutex", null);
	}

	native private void lock_void(long pNativeObject);
	/**
	 * 加锁
	 * @param  
	 */
	public void lock()
	{
		lock_void(this.nativeObject.pointer);
	}
	native private boolean tryLock_void(long pNativeObject);
	/**
	 * 尝试加锁
	 * @return 尝试加锁成功返回true，否则返回false
	 */
	public boolean tryLock()
	{
		boolean returnValue = tryLock_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void unlock_void(long pNativeObject);
	/**
	 * 解锁
	 * @param  
	 */
	public void unlock()
	{
		unlock_void(this.nativeObject.pointer);
	}
	public Mutex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Mutex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Mutex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Mutex obj = null;
 		if(baseObj instanceof Mutex)
		{
			obj = (Mutex)baseObj;
		} else {
			obj = new Mutex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMutex");
			obj.increaseCast();
		}

		return obj;
	}
}
