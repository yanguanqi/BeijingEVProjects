package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 3d图层s
 */
public class AllGlobeControlLayers extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers", new AllGlobeControlLayersClassFactory());
	}

	/**
	 * 构造函数
	 */
	public AllGlobeControlLayers() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AllGlobeControlLayers", null);
	}

	native private void push_back_ILayer(long pNativeObject, long t);
	/**
	 * 在容器最后添加对象
	 * @param t 待增加的对象
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_ILayer(this.nativeObject.pointer, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 移除容器指定位置的对象
	 * @param pos 对象的位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 返回容器是否为null
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
	public NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer> OperatorIndex(long n)
	{
		long nParamValue = n;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_size_t(long pNativeObject, long n);
	/**
	 * 返回某位置的元素值
	 * @param n 位置
	 * @return 返回位置对应的值
	 */
	public NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer> at(long n)
	{
		long nParamValue = n;
		long returnValue = at_ev_size_t(this.nativeObject.pointer, nParamValue);
		NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer> __returnValue = new NativeObjectPointer<com.earthview.world.spatial.atlas.Ilayer>(new InstancePointer(returnValue));
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
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public AllGlobeControlLayers(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AllGlobeControlLayers(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AllGlobeControlLayers fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AllGlobeControlLayers obj = null;
 		if(baseObj instanceof AllGlobeControlLayers)
		{
			obj = (AllGlobeControlLayers)baseObj;
		} else {
			obj = new AllGlobeControlLayers(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AllGlobeControlLayers");
			obj.increaseCast();
		}

		return obj;
	}
}
