package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderToVertexBufferSharedPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderToVertexBufferSharedPtr", new RenderToVertexBufferSharedPtrClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RenderToVertexBufferSharedPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderToVertexBufferSharedPtr", null);
	}

	/**
	 * 构造函数
	 * @param rep 
	 */
	public RenderToVertexBufferSharedPtr(com.earthview.world.graphic.RenderToVertexBuffer rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("RenderToVertexBufferSharedPtr", list);
	}

	/**
	 * 构造函数
	 * @param rep 
	 * @param inFreeMethod 
	 */
	public RenderToVertexBufferSharedPtr(com.earthview.world.graphic.RenderToVertexBuffer rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("RenderToVertexBufferSharedPtr", list);
	}

	/**
	 * 构造函数
	 * @param r 
	 */
	public RenderToVertexBufferSharedPtr(com.earthview.world.graphic.RenderToVertexBufferSharedPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("RenderToVertexBufferSharedPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.RenderToVertexBuffer get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderToVertexBuffer __returnValue = new com.earthview.world.graphic.RenderToVertexBuffer(CreatedWhenConstruct.CWC_NotToCreate, "CRenderToVertexBuffer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderToVertexBuffer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderToVertexBuffer");
		}
		return __returnValue;
	}
	public RenderToVertexBufferSharedPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderToVertexBufferSharedPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderToVertexBufferSharedPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderToVertexBufferSharedPtr obj = null;
 		if(baseObj instanceof RenderToVertexBufferSharedPtr)
		{
			obj = (RenderToVertexBufferSharedPtr)baseObj;
		} else {
			obj = new RenderToVertexBufferSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderToVertexBufferSharedPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
