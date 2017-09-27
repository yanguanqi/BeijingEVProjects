package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConstAnimationStateListIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConstAnimationStateListIterator", new ConstAnimationStateListIteratorClassFactory());
	}

	/**
	 * 构造函数
	 * @param vec 迭代器对应集合
	 */
	public ConstAnimationStateListIterator(com.earthview.world.graphic.AnimationStateList vec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vecPtr = new BasePointer(vec);
		list.add("vec", vecPtr.get());
		Create("ConstAnimationStateListIterator", list);
	}

	/**
	 * 复制构造函数
	 * @param rhs 其它迭代器
	 */
	public ConstAnimationStateListIterator(com.earthview.world.graphic.ConstAnimationStateListIterator rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("ConstAnimationStateListIterator", list);
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
	 * 返回容器当前元素值
	 * @param  
	 * @return 当前元素值
	 */
	public com.earthview.world.graphic.AnimationState getCurrent()
	{
		long returnValue = getCurrent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long next_void(long pNativeObject);
	/**
	 * 返回容器下一元素值
	 * @param  
	 * @return 下一元素值
	 */
	public com.earthview.world.graphic.AnimationState next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long getBegin_void(long pNativeObject);
	/**
	 * 返回容器头部元素值
	 * @param  
	 * @return 头部元素值
	 */
	public com.earthview.world.graphic.AnimationState getBegin()
	{
		long returnValue = getBegin_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long getEnd_void(long pNativeObject);
	/**
	 * 返回容器尾部元素值
	 * @param  
	 * @return 尾部元素值
	 */
	public com.earthview.world.graphic.AnimationState getEnd()
	{
		long returnValue = getEnd_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	public ConstAnimationStateListIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConstAnimationStateListIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConstAnimationStateListIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConstAnimationStateListIterator obj = null;
 		if(baseObj instanceof ConstAnimationStateListIterator)
		{
			obj = (ConstAnimationStateListIterator)baseObj;
		} else {
			obj = new ConstAnimationStateListIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConstAnimationStateListIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
