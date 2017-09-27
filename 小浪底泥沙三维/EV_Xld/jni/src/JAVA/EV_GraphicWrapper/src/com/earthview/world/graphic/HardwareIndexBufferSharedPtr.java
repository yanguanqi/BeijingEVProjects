package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// NB subclasses should override lock, unlock, readData, writeData
public class HardwareIndexBufferSharedPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareIndexBufferSharedPtr", new HardwareIndexBufferSharedPtrClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public HardwareIndexBufferSharedPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CHardwareIndexBufferSharedPtr", null);
	}

	/**
	 * 构造函数
	 * @param buf 硬件索引缓存
	 */
	public HardwareIndexBufferSharedPtr(com.earthview.world.graphic.HardwareIndexBuffer ref_buf) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_bufPtr = new BasePointer(ref_buf);
		list.add("ref_buf", ref_bufPtr.get());
		if(ref_buf != null)
		{
		ref_buf.setNoFree(true);
		}
		Create("CHardwareIndexBufferSharedPtr", list);
	}

	/**
	 * 构造函数
	 * @param buf 硬件索引缓存
	 * @param inFreeMethod 共享方法
	 */
	public HardwareIndexBufferSharedPtr(com.earthview.world.graphic.HardwareIndexBuffer ref_buf, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_bufPtr = new BasePointer(ref_buf);
		list.add("ref_buf", ref_bufPtr.get());
		if(ref_buf != null)
		{
		ref_buf.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("CHardwareIndexBufferSharedPtr", list);
	}

	native private long get_void(long pNativeObject);
	/**
	 * 获取索引缓存
	 * @param  
	 * @return 索引缓存
	 */
	public com.earthview.world.graphic.HardwareIndexBuffer get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwareIndexBuffer __returnValue = new com.earthview.world.graphic.HardwareIndexBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareIndexBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareIndexBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareIndexBuffer");
		}
		return __returnValue;
	}
	public HardwareIndexBufferSharedPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareIndexBufferSharedPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static HardwareIndexBufferSharedPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareIndexBufferSharedPtr obj = null;
 		if(baseObj instanceof HardwareIndexBufferSharedPtr)
		{
			obj = (HardwareIndexBufferSharedPtr)baseObj;
		} else {
			obj = new HardwareIndexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareIndexBufferSharedPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
