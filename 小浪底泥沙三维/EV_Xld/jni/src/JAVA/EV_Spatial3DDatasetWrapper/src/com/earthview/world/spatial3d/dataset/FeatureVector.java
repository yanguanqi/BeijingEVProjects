package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureVector extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::FeatureVector", new FeatureVectorClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FeatureVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("FeatureVector", null);
	}

	native private void push_back_IFeature(long pNativeObject, long t);
	/**
	 * 在容器末尾添加元素
	 * @param t 元素值
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_IFeature(this.nativeObject.pointer, tParamValue);
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
	public NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回最后元素
	 * @param  
	 * @return 最后元素值
	 */
	public NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * 返回中间某元素
	 * @param  
	 * @return 元素值
	 */
	public NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_IFeature(long pNativeObject, long pos, long t);
	/**
	 * 插入元素
	 * @param pos 插入位置
	 * @param t 元素值
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.spatial.geodataset.Ifeature> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_IFeature(this.nativeObject.pointer, posParamValue, tParamValue);
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
	public FeatureVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FeatureVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureVector obj = null;
 		if(baseObj instanceof FeatureVector)
		{
			obj = (FeatureVector)baseObj;
		} else {
			obj = new FeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "FeatureVector");
			obj.increaseCast();
		}

		return obj;
	}
}
