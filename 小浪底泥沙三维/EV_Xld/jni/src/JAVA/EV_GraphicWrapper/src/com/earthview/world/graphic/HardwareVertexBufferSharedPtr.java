package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HardwareVertexBufferSharedPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CHardwareVertexBufferSharedPtr", new HardwareVertexBufferSharedPtrClassFactory());
	}

	public HardwareVertexBufferSharedPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CHardwareVertexBufferSharedPtr", null);
	}

	public HardwareVertexBufferSharedPtr(com.earthview.world.graphic.HardwareVertexBuffer ref_buf) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_bufPtr = new BasePointer(ref_buf);
		list.add("ref_buf", ref_bufPtr.get());
		if(ref_buf != null)
		{
		ref_buf.setNoFree(true);
		}
		Create("CHardwareVertexBufferSharedPtr", list);
	}

	public HardwareVertexBufferSharedPtr(com.earthview.world.graphic.HardwareVertexBuffer ref_buf, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("CHardwareVertexBufferSharedPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.HardwareVertexBuffer get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.HardwareVertexBuffer __returnValue = new com.earthview.world.graphic.HardwareVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CHardwareVertexBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.HardwareVertexBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CHardwareVertexBuffer");
		}
		return __returnValue;
	}
	public HardwareVertexBufferSharedPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HardwareVertexBufferSharedPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static HardwareVertexBufferSharedPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HardwareVertexBufferSharedPtr obj = null;
 		if(baseObj instanceof HardwareVertexBufferSharedPtr)
		{
			obj = (HardwareVertexBufferSharedPtr)baseObj;
		} else {
			obj = new HardwareVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHardwareVertexBufferSharedPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
