package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderQueueInvocationIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderQueueInvocationIterator", new RenderQueueInvocationIteratorClassFactory());
	}

	/**
	 * 构造函数
	 * @param vec 
	 */
	public RenderQueueInvocationIterator(com.earthview.world.graphic.RenderQueueInvocationList vec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vecPtr = new BasePointer(vec);
		list.add("vec", vecPtr.get());
		Create("RenderQueueInvocationIterator", list);
	}

	/**
	 * 构造函数
	 * @param rhs 
	 */
	public RenderQueueInvocationIterator(com.earthview.world.graphic.RenderQueueInvocationIterator rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("RenderQueueInvocationIterator", list);
	}

	native private boolean hasMoreElements_void(long pNativeObject);
	/**
	 * 判断迭代器是否到达容器末尾
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean hasMoreElements()
	{
		boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void moveNext_void(long pNativeObject);
	/**
	 * 迭代器位置后移
	 * @param  
	 */
	public void moveNext()
	{
		moveNext_void(this.nativeObject.pointer);
	}
	native private long getCurrent_void(long pNativeObject);
	/**
	 * 返回容器当前值的指针
	 * @param  
	 * @return 当前值
	 */
	public com.earthview.world.graphic.RenderQueueInvocation getCurrent()
	{
		long returnValue = getCurrent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocation __returnValue = new com.earthview.world.graphic.RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocation");
		}
		return __returnValue;
	}
	native private long next_void(long pNativeObject);
	/**
	 * 返回容器当前的值
	 * @param  
	 * @return 值
	 */
	public com.earthview.world.graphic.RenderQueueInvocation next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocation __returnValue = new com.earthview.world.graphic.RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocation");
		}
		return __returnValue;
	}
	native private long getBegin_void(long pNativeObject);
	/**
	 * 返回容器首值的指针
	 * @param  
	 * @return 首键值对
	 */
	public com.earthview.world.graphic.RenderQueueInvocation getBegin()
	{
		long returnValue = getBegin_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocation __returnValue = new com.earthview.world.graphic.RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocation");
		}
		return __returnValue;
	}
	native private long getEnd_void(long pNativeObject);
	/**
	 * 返回容器尾键值对
	 * @param  
	 * @return 尾键值对
	 */
	public com.earthview.world.graphic.RenderQueueInvocation getEnd()
	{
		long returnValue = getEnd_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderQueueInvocation __returnValue = new com.earthview.world.graphic.RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate, "CRenderQueueInvocation");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderQueueInvocation)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderQueueInvocation");
		}
		return __returnValue;
	}
	public RenderQueueInvocationIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderQueueInvocationIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderQueueInvocationIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderQueueInvocationIterator obj = null;
 		if(baseObj instanceof RenderQueueInvocationIterator)
		{
			obj = (RenderQueueInvocationIterator)baseObj;
		} else {
			obj = new RenderQueueInvocationIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderQueueInvocationIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
