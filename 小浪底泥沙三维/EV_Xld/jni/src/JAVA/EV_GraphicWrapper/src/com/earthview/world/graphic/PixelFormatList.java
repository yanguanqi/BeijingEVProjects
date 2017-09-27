package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef vector<EarthView::World::Graphic::PixelFormat> PixelFormatList;
/// <summary>
/// 像素格式容器类
/// 管理各类的像素格式
/// </summary>
public class PixelFormatList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::PixelFormatList", new PixelFormatListClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public PixelFormatList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("PixelFormatList", null);
	}

	native private void push_back_PixelFormat(long pNativeObject, int t);
	/**
	 * 在容器后面追加对象
	 * @param t 需要追加的对象
	 */
	public void push_back(com.earthview.world.graphic.PixelFormat t)
	{
		int tParamValue = t.getValue();
		push_back_PixelFormat(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 从容器后面取出对象
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 检查发生变化的第一个元素
	 * @param  
	 * @return 返回第一个元素
	 */
	public EnumPointer front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 检查发生变化的最后一个元素
	 * @param  
	 * @return 返回最后一个元素
	 */
	public EnumPointer back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_PixelFormat(long pNativeObject, long pos, int t);
	/**
	 * 插入元素
	 * @param pos 插入元素的位置
	 * @param t 插入的元素
	 */
	public void insert(long pos, com.earthview.world.graphic.PixelFormat t)
	{
		long posParamValue = pos;
		int tParamValue = t.getValue();
		insert_ev_uint32_PixelFormat(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 移除元素
	 * @param pos 需要移除元素的位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 * @param  
	 * @return 容器为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 数组下标"[]"重载
	 * @param n 下标
	 * @return 返回对应下标的数组中的值
	 */
	public EnumPointer OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 检查发生变化的下标
	 * @param n 下标
	 * @return 返回对应下标的位置
	 */
	public EnumPointer at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		EnumPointer __returnValue = new EnumPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 得到该容器类的空间大小
	 * @param  
	 * @return 返回空间的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 调整容器的大小
	 * @param newSize 调整的大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	/**
	 * 检查容器预留的空间
	 * @param count 预留给容器的空间大小
	 */
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public PixelFormatList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PixelFormatList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PixelFormatList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PixelFormatList obj = null;
 		if(baseObj instanceof PixelFormatList)
		{
			obj = (PixelFormatList)baseObj;
		} else {
			obj = new PixelFormatList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "PixelFormatList");
			obj.increaseCast();
		}

		return obj;
	}
}
