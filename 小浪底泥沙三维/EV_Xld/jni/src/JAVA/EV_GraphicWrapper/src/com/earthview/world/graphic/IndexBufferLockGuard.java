package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IndexBufferLockGuard extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::IndexBufferLockGuard", new IndexBufferLockGuardClassFactory());
	}

	public IndexBufferLockGuard(com.earthview.world.graphic.HardwareIndexBufferSharedPtr p, com.earthview.world.graphic.HardwareBuffer.LockOptions options) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pPtr = new BasePointer(p);
		list.add("p", pPtr.get());
		BasePointer optionsPtr = new BasePointer(options);
		list.add("options", optionsPtr.get());
		Create("IndexBufferLockGuard", list);
	}

	public IndexBufferLockGuard(com.earthview.world.graphic.HardwareIndexBufferSharedPtr p, long offset, long length, com.earthview.world.graphic.HardwareBuffer.LockOptions options) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pPtr = new BasePointer(p);
		list.add("p", pPtr.get());
		BasePointer offsetPtr = new BasePointer(offset);
		list.add("offset", offsetPtr.get());
		BasePointer lengthPtr = new BasePointer(length);
		list.add("length", lengthPtr.get());
		BasePointer optionsPtr = new BasePointer(options);
		list.add("options", optionsPtr.get());
		Create("IndexBufferLockGuard", list);
	}

	native private long get_pData_void(long pNativeObject);
	public VoidPointer get_pData()
	{
		long jniValue = get_pData_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_pData_void (long pNativeObject, long value);
	public void set_pData(VoidPointer pData)
	{
		long pDataParamValue = (pData == null ? 0L : pData.nativeObject.pointer);
		
		set_pData_void(this.nativeObject.pointer, pDataParamValue);
	}
	
	public IndexBufferLockGuard(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public IndexBufferLockGuard(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static IndexBufferLockGuard fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		IndexBufferLockGuard obj = null;
 		if(baseObj instanceof IndexBufferLockGuard)
		{
			obj = (IndexBufferLockGuard)baseObj;
		} else {
			obj = new IndexBufferLockGuard(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IndexBufferLockGuard");
			obj.increaseCast();
		}

		return obj;
	}
}
