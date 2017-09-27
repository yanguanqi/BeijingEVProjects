package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用于指定细节等级的距离列表
 */
public class LodValueList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::LodValueList", new LodValueListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public LodValueList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("LodValueList", null);
	}

	native private void push_back_Real(long pNativeObject, double t);
	/**
	 * 在容器的尾部添加值为t的元素
	 * @param t 添加元素的值
	 */
	public void push_back(double t)
	{
		double tParamValue = t;
		push_back_Real(this.nativeObject.pointer, tParamValue);
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
	native private long front_void(long pNativeObject);
	/**
	 * 返回容器的第一个元素的引用
	 * @param  
	 */
	public DoublePointer front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回容器的最后一个元素的引用
	 * @param  
	 */
	public DoublePointer back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_Real(long pNativeObject, long pos, double t);
	/**
	 * 在迭代器pos所指向的元素前面插入值为t的新元素
	 * @param pos 插入元素的位置
	 * @param t 插入元素的值
	 */
	public void insert(long pos, double t)
	{
		long posParamValue = pos;
		double tParamValue = t;
		insert_ev_uint32_Real(this.nativeObject.pointer, posParamValue, tParamValue);
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
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回下标为n的元素的引用只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
	 * @param n 
	 */
	public DoublePointer at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
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
	public LodValueList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LodValueList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LodValueList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LodValueList obj = null;
 		if(baseObj instanceof LodValueList)
		{
			obj = (LodValueList)baseObj;
		} else {
			obj = new LodValueList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LodValueList");
			obj.increaseCast();
		}

		return obj;
	}
}
