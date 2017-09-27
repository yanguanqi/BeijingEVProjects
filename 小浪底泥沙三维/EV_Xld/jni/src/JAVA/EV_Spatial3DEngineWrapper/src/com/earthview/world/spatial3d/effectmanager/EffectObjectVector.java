package com.earthview.world.spatial3d.effectmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效对象容器类
 */
public class EffectObjectVector extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::EffectManager::CEffectObjectVector", new EffectObjectVectorClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectObjectVector() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectObjectVector", null);
	}

	native private void push_back_CEffectObject(long pNativeObject, long t);
	/**
	 * 为当前容器添加一个特效对象
	 * @param t 特效对象
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CEffectObject(this.nativeObject.pointer, tParamValue);
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
	 * @return 特效对象的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 传回容器中最后一个特效对象,不检查这个特效对象是否存在
	 * @param  
	 * @return 特效对象的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CEffectObject(long pNativeObject, long pos, long t);
	/**
	 * 在pos位置插入一个特效对象
	 * @param pos 位置
	 * @param t 特效对象
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CEffectObject(this.nativeObject.pointer, posParamValue, tParamValue);
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
	/// <summary>
	/// 判断容器是否为空
	/// </summary>
	/// <param name=""></param>
	/// <returns>
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回容器中指定位置的一个引用
	 * @param n 位置
	 * @return 指定位置的一个特效对象的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回容器中指定位置的一个引用
	 * @param n 位置
	 * @return 指定位置的一个特效对象的引用
	 */
	public NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject> __returnValue = new NativeObjectPointer<com.earthview.world.spatial3d.effectmanager.EffectObject>(new InstancePointer(returnValue));
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
	public EffectObjectVector(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectObjectVector(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectObjectVector fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectObjectVector obj = null;
 		if(baseObj instanceof EffectObjectVector)
		{
			obj = (EffectObjectVector)baseObj;
		} else {
			obj = new EffectObjectVector(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectObjectVector");
			obj.increaseCast();
		}

		return obj;
	}
}
