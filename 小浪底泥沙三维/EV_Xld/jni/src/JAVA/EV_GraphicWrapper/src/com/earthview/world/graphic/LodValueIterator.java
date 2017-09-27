package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodValueIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::LodValueIterator", new LodValueIteratorClassFactory());
	}

	/**
	 * 构造函数
	 * @param vec 
	 */
	public LodValueIterator(com.earthview.world.graphic.LodValueList vec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vecPtr = new BasePointer(vec);
		list.add("vec", vecPtr.get());
		Create("LodValueIterator", list);
	}

	/**
	 * 构造函数
	 * @param rhs 
	 */
	public LodValueIterator(com.earthview.world.graphic.LodValueIterator rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("LodValueIterator", list);
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
	native private double getCurrent_void(long pNativeObject);
	/**
	 * 返回容器当前值的指针
	 * @param  
	 * @return 当前值
	 */
	public double getCurrent()
	{
		double returnValue = getCurrent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double next_void(long pNativeObject);
	/**
	 * 返回容器当前的值
	 * @param  
	 * @return 值
	 */
	public double next()
	{
		double returnValue = next_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getBegin_void(long pNativeObject);
	/**
	 * 返回容器首值的指针
	 * @param  
	 * @return 首键值对
	 */
	public double getBegin()
	{
		double returnValue = getBegin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getEnd_void(long pNativeObject);
	/**
	 * 返回容器尾键值对
	 * @param  
	 * @return 尾键值对
	 */
	public double getEnd()
	{
		double returnValue = getEnd_void(this.nativeObject.pointer);
		return returnValue;
	}
	public LodValueIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodValueIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodValueIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodValueIterator obj = null;
 		if(baseObj instanceof LodValueIterator)
		{
			obj = (LodValueIterator)baseObj;
		} else {
			obj = new LodValueIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LodValueIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
