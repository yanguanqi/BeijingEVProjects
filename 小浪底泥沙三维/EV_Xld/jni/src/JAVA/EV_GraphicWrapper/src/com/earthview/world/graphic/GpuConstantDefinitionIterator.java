package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class GpuConstantDefinitionIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::GpuConstantDefinitionIterator", new GpuConstantDefinitionIteratorClassFactory());
	}

	/**
	 * 复制构造函数
	 * @param other 其它迭代器
	 */
	public GpuConstantDefinitionIterator(com.earthview.world.graphic.GpuConstantDefinitionIterator other) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer otherPtr = new BasePointer(other);
		list.add("other", otherPtr.get());
		Create("GpuConstantDefinitionIterator", list);
	}

	/**
	 * 构造函数
	 * @param lst 迭代器对应集合
	 */
	public GpuConstantDefinitionIterator(com.earthview.world.graphic.GpuConstantDefinitionMap lst) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer lstPtr = new BasePointer(lst);
		list.add("lst", lstPtr.get());
		Create("GpuConstantDefinitionIterator", list);
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
	native private String nextKey_void(long pNativeObject);
	/**
	 * 返回容器当前的键
	 * @param  
	 * @return 键
	 */
	public String nextKey()
	{
		String returnValue = nextKey_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long nextValue_void(long pNativeObject);
	/**
	 * 返回容器当前的值
	 * @param  
	 * @return 值
	 */
	public com.earthview.world.graphic.GpuConstantDefinition nextValue()
	{
		long returnValue = nextValue_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long nextValuePtr_void(long pNativeObject);
	/**
	 * 返回容器当前的值指针
	 * @param  
	 * @return 值地址
	 */
	public com.earthview.world.graphic.GpuConstantDefinition nextValuePtr()
	{
		long returnValue = nextValuePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinition");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long next_void(long pNativeObject);
	/**
	 * 返回容器当前的值
	 * @param  
	 * @return 值
	 */
	public com.earthview.world.graphic.GpuConstantDefinition next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinition __returnValue = new com.earthview.world.graphic.GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinition)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinition");
		}
		return __returnValue;
	}
	native private long getBegin_void(long pNativeObject);
	/**
	 * 返回容器首键值对
	 * @param  
	 * @return 首键值对
	 */
	public com.earthview.world.graphic.GpuConstantDefinitionPair getBegin()
	{
		long returnValue = getBegin_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinitionPair __returnValue = new com.earthview.world.graphic.GpuConstantDefinitionPair(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinitionPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinitionPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionPair");
		}
		return __returnValue;
	}
	native private long getEnd_void(long pNativeObject);
	/**
	 * 返回容器尾键值对
	 * @param  
	 * @return 尾键值对
	 */
	public com.earthview.world.graphic.GpuConstantDefinitionPair getEnd()
	{
		long returnValue = getEnd_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinitionPair __returnValue = new com.earthview.world.graphic.GpuConstantDefinitionPair(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinitionPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinitionPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionPair");
		}
		return __returnValue;
	}
	native private long getCurrent_void(long pNativeObject);
	/**
	 * 返回容器当前键值对
	 * @param  
	 * @return 当前键值对
	 */
	public com.earthview.world.graphic.GpuConstantDefinitionPair getCurrent()
	{
		long returnValue = getCurrent_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuConstantDefinitionPair __returnValue = new com.earthview.world.graphic.GpuConstantDefinitionPair(CreatedWhenConstruct.CWC_NotToCreate, "GpuConstantDefinitionPair");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuConstantDefinitionPair)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "GpuConstantDefinitionPair");
		}
		return __returnValue;
	}
	public GpuConstantDefinitionIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuConstantDefinitionIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuConstantDefinitionIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuConstantDefinitionIterator obj = null;
 		if(baseObj instanceof GpuConstantDefinitionIterator)
		{
			obj = (GpuConstantDefinitionIterator)baseObj;
		} else {
			obj = new GpuConstantDefinitionIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GpuConstantDefinitionIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
