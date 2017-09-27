package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RealList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::RealList", new RealListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RealList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RealList", null);
	}

	native private void push_back_ev_real64(long pNativeObject, double t);
	/**
	 * 在容器的尾部添加值为t的元素
	 * @param t 添加元素的值
	 */
	public void push_back(double t)
	{
		double tParamValue = t;
		push_back_ev_real64(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除容器的最后一个元素
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private double front_void(long pNativeObject);
	/**
	 * 返回容器的第一个元素的引用
	 * @param  
	 */
	public double front()
	{
		double returnValue = front_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double back_void(long pNativeObject);
	/**
	 * 返回容器的最后一个元素的引用
	 * @param  
	 */
	public double back()
	{
		double returnValue = back_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 返回标记容器大小是否为0的布尔值
	 * @param  
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器中元素的个数
	 * @param  
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 调整容器的长度大小，使其能容纳newSize个元素
	 * @param newSize 长度
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void resize_ev_size_t_ev_real64(long pNativeObject, long newSize, double value);
	public void resize(long newSize, double value)
	{
		long newSizeParamValue = newSize;
		double valueParamValue = value;
		resize_ev_size_t_ev_real64(this.nativeObject.pointer, newSizeParamValue, valueParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 删除容器中的所有元素
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public RealList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RealList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RealList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RealList obj = null;
 		if(baseObj instanceof RealList)
		{
			obj = (RealList)baseObj;
		} else {
			obj = new RealList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RealList");
			obj.increaseCast();
		}

		return obj;
	}
}
