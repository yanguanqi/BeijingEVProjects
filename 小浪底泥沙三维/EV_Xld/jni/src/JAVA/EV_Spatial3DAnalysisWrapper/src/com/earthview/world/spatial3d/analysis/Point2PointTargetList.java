package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点对点通视目标点集合
 */
public class Point2PointTargetList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::Point2PointTargetList", new Point2PointTargetListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Point2PointTargetList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Point2PointTargetList", null);
	}

	native private void push_back_Point2PointTarget(long pNativeObject, long t);
	/**
	 * 在容器最后添加元素
	 * @param t 元素值
	 */
	public void push_back(com.earthview.world.spatial3d.analysis.Point2PointTarget t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_Point2PointTarget(this.nativeObject.pointer, tParamValue);
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
	public com.earthview.world.spatial3d.analysis.Point2PointTarget front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.analysis.Point2PointTarget __returnValue = new com.earthview.world.spatial3d.analysis.Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate, "Point2PointTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Point2PointTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Point2PointTarget");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回容器最后元素
	 * @param  
	 * @return 返回容器最后元素
	 */
	public com.earthview.world.spatial3d.analysis.Point2PointTarget back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.analysis.Point2PointTarget __returnValue = new com.earthview.world.spatial3d.analysis.Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate, "Point2PointTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Point2PointTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Point2PointTarget");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_Point2PointTarget(long pNativeObject, long pos, long t);
	/**
	 * 容器中间位置插入元素
	 * @param pos 位置
	 * @param t 元素值
	 */
	public void insert(long pos, com.earthview.world.spatial3d.analysis.Point2PointTarget t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_Point2PointTarget(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void insert_ev_uint32_Point2PointTargetList(long pNativeObject, long pos, long other);
	/**
	 * 容器中间位置插入列表
	 * @param pos 位置
	 * @param other 列表
	 */
	public void insert(long pos, com.earthview.world.spatial3d.analysis.Point2PointTargetList other)
	{
		long posParamValue = pos;
		long otherParamValue = other.nativeObject.pointer;
		insert_ev_uint32_Point2PointTargetList(this.nativeObject.pointer, posParamValue, otherParamValue);
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
	public com.earthview.world.spatial3d.analysis.Point2PointTarget OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.spatial3d.analysis.Point2PointTarget __returnValue = new com.earthview.world.spatial3d.analysis.Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate, "Point2PointTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Point2PointTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Point2PointTarget");
		}
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回某位置的元素值
	 * @param n 位置
	 * @return 返回位置对应的值
	 */
	public com.earthview.world.spatial3d.analysis.Point2PointTarget at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		com.earthview.world.spatial3d.analysis.Point2PointTarget __returnValue = new com.earthview.world.spatial3d.analysis.Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate, "Point2PointTarget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Point2PointTarget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "Point2PointTarget");
		}
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
	public Point2PointTargetList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Point2PointTargetList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Point2PointTargetList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Point2PointTargetList obj = null;
 		if(baseObj instanceof Point2PointTargetList)
		{
			obj = (Point2PointTargetList)baseObj;
		} else {
			obj = new Point2PointTargetList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Point2PointTargetList");
			obj.increaseCast();
		}

		return obj;
	}
}
