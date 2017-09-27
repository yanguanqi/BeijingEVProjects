package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectsVector extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::VisibleObjectsVector", new VisibleObjectsVectorClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public VisibleObjectsVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("VisibleObjectsVector", null);
	}

	native private void push_back_VisibleObjects(long pNativeObject, long t);
	/**
	 * 在容器末尾添加元素
	 * @param t 元素值
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_VisibleObjects(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除最后元素
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回第一个元素
	 * @param  
	 * @return 第一个元素值
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回最后元素
	 * @param  
	 * @return 最后元素值
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * 返回中间某元素
	 * @param  
	 * @return 元素值
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_VisibleObjects(long pNativeObject, long pos, long t);
	/**
	 * 插入元素
	 * @param pos 插入位置
	 * @param t 元素值
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.geometry3d.VisibleObjects> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_VisibleObjects(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断容器是否为空
	 * @param  
	 * @return 为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器中元素数量大小
	 * @param  
	 * @return 返回容器中元素数量大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 改变容器大小
	 * @param newSize 容器大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
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
	native private void reserve_ev_size_t(long pNativeObject, long count);
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	public VisibleObjectsVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VisibleObjectsVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VisibleObjectsVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VisibleObjectsVector obj = null;
 		if(baseObj instanceof VisibleObjectsVector)
		{
			obj = (VisibleObjectsVector)baseObj;
		} else {
			obj = new VisibleObjectsVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "VisibleObjectsVector");
			obj.increaseCast();
		}

		return obj;
	}
}
