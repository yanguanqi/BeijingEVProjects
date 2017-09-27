package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FaceWithSimpleRenderableExSet extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet", new FaceWithSimpleRenderableExSetClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FaceWithSimpleRenderableExSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFaceWithSimpleRenderableExSet", null);
	}

	native private void push_back_CFaceWithSimpleRenderableEx(long pNativeObject, long t);
	/**
	 * 在容器最后添加元素
	 * @param t 元素值
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CFaceWithSimpleRenderableEx(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除容器最后元素
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回容器首个元素
	 * @param  
	 * @return 返回容器首个元素
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回容器最后元素
	 * @param  
	 * @return 返回容器最后元素
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CFaceWithSimpleRenderableEx(long pNativeObject, long pos, long t);
	/**
	 * 容器中间位置插入元素
	 * @param pos 位置
	 * @param t 元素值
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CFaceWithSimpleRenderableEx(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void insert_ev_uint32_CFaceWithSimpleRenderableExSet(long pNativeObject, long pos, long other);
	/**
	 * 容器中间位置插入列表
	 * @param pos 位置
	 * @param other 列表
	 */
	public void insert(long pos, com.earthview.world.geometry3d.FaceWithSimpleRenderableExSet other)
	{
		long posParamValue = pos;
		long otherParamValue = other.nativeObject.pointer;
		insert_ev_uint32_CFaceWithSimpleRenderableExSet(this.nativeObject.pointer, posParamValue, otherParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 删除容器中间位置元素
	 * @param pos 位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 返回容器是否为空
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
	 * 重载[]操作符
	 * @param n 下标位置
	 * @return 返回下标对应的值
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回某位置的元素值
	 * @param n 位置
	 * @return 返回位置对应的值
	 */
	public NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx> __returnValue = new NativeObjectPointer<com.earthview.world.geometry3d.FaceWithSimpleRenderableEx>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回元素的数量大小
	 * @param  
	 * @return 返回元素的数量大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 改变容器中元素数量大小
	 * @param newSize 改变的容器中元素数量大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	/**
	 * 改变容器中最小的元素容纳数量
	 * @param count 最小的元素容纳数量
	 */
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有元素
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public FaceWithSimpleRenderableExSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FaceWithSimpleRenderableExSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FaceWithSimpleRenderableExSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FaceWithSimpleRenderableExSet obj = null;
 		if(baseObj instanceof FaceWithSimpleRenderableExSet)
		{
			obj = (FaceWithSimpleRenderableExSet)baseObj;
		} else {
			obj = new FaceWithSimpleRenderableExSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFaceWithSimpleRenderableExSet");
			obj.increaseCast();
		}

		return obj;
	}
}
