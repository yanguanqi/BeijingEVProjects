package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RealVector extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::RealVector", new RealVectorClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RealVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RealVector", null);
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
	native private void insert_ev_uint32_ev_real64(long pNativeObject, long pos, double t);
	/**
	 * 在迭代器pos所指向的元素前面插入值为t的新元素
	 * @param pos 插入元素的位置
	 * @param t 插入元素的值
	 */
	public void insert(long pos, double t)
	{
		long posParamValue = pos;
		double tParamValue = t;
		insert_ev_uint32_ev_real64(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 去掉位置pos处元素的值
	 * @param pos 元素的位置
	 * @return 返回容器当前的值
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
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
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 重载[]操作符只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
	 * @param n 
	 */
	public DoublePointer OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private double at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回下标为n的元素的引用由const对象调用，并且返回值不能出现在赋值运算符左侧
	 * @param n 
	 */
	public double at(long n)
	{
		long nParamValue = n;
		double returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
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
	native private void reserve_ev_size_t(long pNativeObject, long count);
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
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
	native private void fromString_EVString(long pNativeObject, String str);
	/**
	 * 从字符串中恢复
	 * @param str 字符串
	 */
	public void fromString(String str)
	{
		String strParamValue = str;
		fromString_EVString(this.nativeObject.pointer, strParamValue);
	}
	native private String ev_toString_void(long pNativeObject);
	/**
	 * 序列化成字符串
	 * @param  
	 */
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	public RealVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RealVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RealVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RealVector obj = null;
 		if(baseObj instanceof RealVector)
		{
			obj = (RealVector)baseObj;
		} else {
			obj = new RealVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RealVector");
			obj.increaseCast();
		}

		return obj;
	}
}
