package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwarePixelBufferSharedPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwarePixelBufferSharedPtr", new HardwarePixelBufferSharedPtrClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public HardwarePixelBufferSharedPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CHardwarePixelBufferSharedPtr", null);
	}

	/**
	 * 构造函数
	 * @param buf 硬件像素缓存
	 */
	public HardwarePixelBufferSharedPtr(com.earthview.world.graphic.HardwarePixelBuffer ref_buf) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_bufPtr = new BasePointer(ref_buf);
		list.add("ref_buf", ref_bufPtr.get());
		if(ref_buf != null)
		{
		ref_buf.setNoFree(true);
		}
		Create("CHardwarePixelBufferSharedPtr", list);
	}

	/**
	 * 构造函数
	 * @param buf 硬件像素缓存
	 * @param inFreeMethod 共享方法
	 */
	public HardwarePixelBufferSharedPtr(com.earthview.world.graphic.HardwarePixelBuffer ref_buf, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CHardwarePixelBufferSharedPtr", list);
	}

	native private long get_void(long pNativeObject);
	/**
	 * 获取像素缓存
	 * @param  
	 * @return 像素缓存
	 */
	public com.earthview.world.graphic.HardwarePixelBuffer get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwarePixelBuffer __returnValue = new com.earthview.world.graphic.HardwarePixelBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CHardwarePixelBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwarePixelBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwarePixelBuffer");
		}
		return __returnValue;
	}
	public HardwarePixelBufferSharedPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwarePixelBufferSharedPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static HardwarePixelBufferSharedPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwarePixelBufferSharedPtr obj = null;
 		if(baseObj instanceof HardwarePixelBufferSharedPtr)
		{
			obj = (HardwarePixelBufferSharedPtr)baseObj;
		} else {
			obj = new HardwarePixelBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwarePixelBufferSharedPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
