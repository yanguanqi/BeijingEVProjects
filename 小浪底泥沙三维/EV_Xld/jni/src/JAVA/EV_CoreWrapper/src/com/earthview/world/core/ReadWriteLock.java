package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 读加锁
 */
public class ReadWriteLock extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CReadWriteLock", new ReadWriteLockClassFactory());
	}

	public ReadWriteLock() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CReadWriteLock", null);
	}

	native private void lockForRead_void(long pNativeObject);
	/// <summary>
	/// 读写锁类
	/// </summary>
	/// <param name=""></param>
	/// <returns</returns>
	public void lockForRead()
	{
		lockForRead_void(this.nativeObject.pointer);
	}
	native private void lockForWrite_void(long pNativeObject);
	/// <summary>
	/// 写加锁
	/// </summary>
	/// <param name=""></param>
	/// <returns</returns>
	public void lockForWrite()
	{
		lockForWrite_void(this.nativeObject.pointer);
	}
	native private void unlockForRead_void(long pNativeObject);
	/// <summary>
	/// 读解锁
	/// </summary>
	/// <param name=""></param>
	/// <returns</returns>
	public void unlockForRead()
	{
		unlockForRead_void(this.nativeObject.pointer);
	}
	native private void unlockForWrite_void(long pNativeObject);
	/// <summary>
	/// 写解锁
	/// </summary>
	/// <param name=""></param>
	/// <returns</returns>
	public void unlockForWrite()
	{
		unlockForWrite_void(this.nativeObject.pointer);
	}
	public ReadWriteLock(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ReadWriteLock(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ReadWriteLock fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ReadWriteLock obj = null;
 		if(baseObj instanceof ReadWriteLock)
		{
			obj = (ReadWriteLock)baseObj;
		} else {
			obj = new ReadWriteLock(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CReadWriteLock");
			obj.increaseCast();
		}

		return obj;
	}
}
