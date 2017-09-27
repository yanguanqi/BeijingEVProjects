package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 光源容器类管理各类的光源
 */
public class LightList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::LightList", new LightListClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public LightList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("LightList", null);
	}

	native private void dirtyHash_void(long pNativeObject);
	/**
	 * 强行将hash置为脏(需要更新)
	 * @param  
	 */
	public void dirtyHash()
	{
		dirtyHash_void(this.nativeObject.pointer);
	}
	native private boolean isHashDirty_void(long pNativeObject);
	/**
	 * 判断hash值是否需要修改
	 * @param  
	 * @return 需要修改则为ture，否则为false
	 */
	public boolean isHashDirty()
	{
		boolean returnValue = isHashDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 容器的大小
	 * @param  
	 * @return 返回容器的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long max_size_void(long pNativeObject);
	/**
	 * 返回容器的最大的空间
	 * @param  
	 * @return 返回容器空间的大小
	 */
	public long max_size()
	{
		long returnValue = max_size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long capacity_void(long pNativeObject);
	/**
	 * 返回容器的容量
	 * @param  
	 * @return 返回容器容量的大小
	 */
	public long capacity()
	{
		long returnValue = capacity_void(this.nativeObject.pointer);
		return returnValue;
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
	native private void reserve_ev_size_t(long pNativeObject, long t);
	/**
	 * 使容器预留给定长度空间
	 * @param t 希望预留的空间长度
	 */
	public void reserve(long t)
	{
		long tParamValue = t;
		reserve_ev_size_t(this.nativeObject.pointer, tParamValue);
	}
	native private void push_back_CLight(long pNativeObject, long ref_t);
	/**
	 * 在容器后面追加对象
	 * @param t 需要追加的对象
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.Light> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CLight(this.nativeObject.pointer, ref_tParamValue);
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
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void resize_ev_size_t(long pNativeObject, long n);
	/**
	 * 调整容器的大小
	 * @param n 调整的大小
	 */
	public void resize(long n)
	{
		long nParamValue = n;
		resize_ev_size_t(this.nativeObject.pointer, nParamValue);
	}
	native private void resize_ev_size_t_CLight(long pNativeObject, long n, long ref_t);
	/**
	 * 调整容器的大小
	 * @param n 调整的大小
	 * @param t 调整后的元素值
	 */
	public void resize(long n, NativeObjectPointer<com.earthview.world.graphic.Light> ref_t)
	{
		long nParamValue = n;
		long ref_tParamValue = ref_t.nativeObject.pointer;
		resize_ev_size_t_CLight(this.nativeObject.pointer, nParamValue, ref_tParamValue);
	}
	native private boolean OperatorEquals_LightList(long pNativeObject, long b);
	/**
	 * 等号运算符"=="的重载
	 * @param b EarthView::World::Graphic::LightList类的引用
	 * @return 相等则为true，否则为false
	 */
	public boolean OperatorEquals(com.earthview.world.graphic.LightList b)
	{
		long bParamValue = b.nativeObject.pointer;
		boolean returnValue = OperatorEquals_LightList(this.nativeObject.pointer, bParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_LightList(long pNativeObject, long b);
	/**
	 * 不等号运算符"!="的重载
	 * @param b EarthView::World::Graphic::LightList类的引用
	 * @return 不相等则为true，否则为false
	 */
	public boolean OperatorNotEquals(com.earthview.world.graphic.LightList b)
	{
		long bParamValue = b.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_LightList(this.nativeObject.pointer, bParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_LightList(long pNativeObject, long b);
	/// <summary>
	/// 小于号的"<"的重载
	/// </summary>
	/// <param name="b">EarthView::World::Graphic::LightList类的引用</param>
	/// <returns>小于则为true，否则为false</returns>
	public boolean OperatorLessThan(com.earthview.world.graphic.LightList b)
	{
		long bParamValue = b.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_LightList(this.nativeObject.pointer, bParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_LightList(long pNativeObject, long b);
	/**
	 * 大于号的">"的重载
	 * @param b EarthView::World::Graphic::LightList类的引用
	 * @return 大于则为true，否则为false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.graphic.LightList b)
	{
		long bParamValue = b.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_LightList(this.nativeObject.pointer, bParamValue);
		return returnValue;
	}
	native private void swap_LightList(long pNativeObject, long rhs);
	/**
	 * 交换容器中的对象
	 * @param rhs 用作替换的对象
	 */
	public void swap(com.earthview.world.graphic.LightList rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		swap_LightList(this.nativeObject.pointer, rhsParamValue);
	}
	native private long getHash_void(long pNativeObject);
	/**
	 * 得到hash值
	 * @param  
	 * @return 返回hash值
	 */
	public long getHash()
	{
		long returnValue = getHash_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 数组下标"[]"重载
	 * @param n 下标
	 * @return 返回对应下标的数组中的值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Light> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Light> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Light>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 获得给定位置的值
	 * @param n 下标
	 * @return 返回对应下标的位置
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Light> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Light> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Light>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long front_void(long pNativeObject);
	/**
	 * 获得第一个元素
	 * @param  
	 * @return 返回第一个元素
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Light> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.Light> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Light>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 获得最后一个元素
	 * @param  
	 * @return 返回最后一个元素
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Light> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.Light> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Light>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_size_t_CLight(long pNativeObject, long pos, long ref_l);
	/**
	 * 插入元素
	 * @param pos 插入元素的位置
	 * @param l 插入的元素
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Light> ref_l)
	{
		long posParamValue = pos;
		long ref_lParamValue = ref_l.nativeObject.pointer;
		insert_ev_size_t_CLight(this.nativeObject.pointer, posParamValue, ref_lParamValue);
	}
	native private void insert_ev_size_t_ev_size_t_CLight(long pNativeObject, long pos, long count, long ref_l);
	/**
	 * 插入元素
	 * @param pos 插入元素的位置
	 * @param count 插入的元素的个数
	 * @param l 插入的元素
	 */
	public void insert(long pos, long count, NativeObjectPointer<com.earthview.world.graphic.Light> ref_l)
	{
		long posParamValue = pos;
		long countParamValue = count;
		long ref_lParamValue = ref_l.nativeObject.pointer;
		insert_ev_size_t_ev_size_t_CLight(this.nativeObject.pointer, posParamValue, countParamValue, ref_lParamValue);
	}
	native private void erase_ev_size_t(long pNativeObject, long pos);
	/**
	 * 删除元素
	 * @param pos 删除元素的位置
	 */
	public void erase(long pos)
	{
		long posParamValue = pos;
		erase_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void erase_ev_size_t_ev_size_t(long pNativeObject, long first, long last);
	/**
	 * 删除元素
	 * @param first 删除元素的起始位置
	 * @param last 删除元素的结束位置
	 */
	public void erase(long first, long last)
	{
		long firstParamValue = first;
		long lastParamValue = last;
		erase_ev_size_t_ev_size_t(this.nativeObject.pointer, firstParamValue, lastParamValue);
	}
	public LightList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LightList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LightList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LightList obj = null;
 		if(baseObj instanceof LightList)
		{
			obj = (LightList)baseObj;
		} else {
			obj = new LightList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "LightList");
			obj.increaseCast();
		}

		return obj;
	}
}
