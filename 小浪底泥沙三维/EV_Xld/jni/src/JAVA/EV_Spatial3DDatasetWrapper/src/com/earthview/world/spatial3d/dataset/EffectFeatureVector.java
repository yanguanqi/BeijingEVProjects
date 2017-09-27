package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效Feature容器类
 */
public class EffectFeatureVector extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectFeatureVector", new EffectFeatureVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectFeatureVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectFeatureVector", null);
	}

	native private void push_back_CEffectFeature(long pNativeObject, long t);
	/**
	 * 为当前容器添加一个EarthView::World::Spatial3D::Dataset::CEffectFeature
	 * @param t EarthView::World::Spatial3D::Dataset::CEffectFeature
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CEffectFeature(this.nativeObject.pointer, tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除最后一个数据
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回容器中第一个元素的引用
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CEffectFeature的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 传回容器中最后一个EarthView::World::Spatial3D::Dataset::CEffectFeature,不检查这个EarthView::World::Spatial3D::Dataset::CEffectFeature是否存在
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CEffectFeature的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CEffectFeature(long pNativeObject, long pos, long t);
	/**
	 * 在pos位置插入一个EarthView::World::Spatial3D::Dataset::CEffectFeature
	 * @param pos 位置
	 * @param t EarthView::World::Spatial3D::Dataset::CEffectFeature
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CEffectFeature(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 删除pos位置的数据
	 * @param pos 位置
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
	 * @return 容器为空返回true,容器不为空返回false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回容器中指定位置的一个引用
	 * @param n 位置
	 * @return 指定位置的一个EarthView::World::Spatial3D::Dataset::CEffectFeature的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回容器中指定位置的一个引用
	 * @param n 位置
	 * @return 指定位置的一个EarthView::World::Spatial3D::Dataset::CEffectFeature的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.dataset.EffectFeature>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回容器中数据个数
	 * @param  
	 * @return 数据个数
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 重新指定容器的容量
	 * @param newSize 容量大小
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void reserve_ev_size_t(long pNativeObject, long count);
	/**
	 * 设置容器预留容量
	 * @param count 容量大小
	 */
	public void reserve(long count)
	{
		long countParamValue = count;
		reserve_ev_size_t(this.nativeObject.pointer, countParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 移除容器中所有的数据
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public EffectFeatureVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectFeatureVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectFeatureVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectFeatureVector obj = null;
 		if(baseObj instanceof EffectFeatureVector)
		{
			obj = (EffectFeatureVector)baseObj;
		} else {
			obj = new EffectFeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectFeatureVector");
			obj.increaseCast();
		}

		return obj;
	}
}
