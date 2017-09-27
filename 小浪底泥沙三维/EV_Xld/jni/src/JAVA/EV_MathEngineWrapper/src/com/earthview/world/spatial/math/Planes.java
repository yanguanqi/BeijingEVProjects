package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 平面list集合类
 */
public class Planes extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::Planes", new PlanesClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Planes() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Planes", null);
	}

	native private void push_back_CPlane(long pNativeObject, long t);
	/**
	 * 在容器最后添加元素
	 * @param t 元素值
	 */
	public void push_back(com.earthview.world.spatial.math.Plane t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CPlane(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_CPlane(long pNativeObject, long t);
	/**
	 * 在容器头部增加元素
	 * @param t 元素值
	 */
	public void push_front(com.earthview.world.spatial.math.Plane t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_CPlane(this.nativeObject.pointer, tParamValue);
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
	native private void pop_front_void(long pNativeObject);
	/**
	 * 删除容器头部元素
	 * @param  
	 */
	public void pop_front()
	{
		pop_front_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回容器首个元素
	 * @param  
	 * @return 返回容器首个元素
	 */
	public com.earthview.world.spatial.math.Plane front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Plane __returnValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate, "CPlane");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Plane)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlane");
		}
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回容器最后元素
	 * @param  
	 * @return 返回容器最后元素
	 */
	public com.earthview.world.spatial.math.Plane back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Plane __returnValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate, "CPlane");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Plane)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlane");
		}
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * 返回某位置的元素值
	 * @param n 位置
	 * @return 返回位置对应的值
	 */
	public com.earthview.world.spatial.math.Plane at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		com.earthview.world.spatial.math.Plane __returnValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate, "CPlane");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Plane)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlane");
		}
		return __returnValue;
	}
	native private void insert_ev_uint32_CPlane(long pNativeObject, long pos, long t);
	/**
	 * 容器中间位置插入元素
	 * @param pos 位置
	 * @param t 元素值
	 */
	public void insert(long pos, com.earthview.world.spatial.math.Plane t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CPlane(this.nativeObject.pointer, posParamValue, tParamValue);
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
	native private void remove_CPlane(long pNativeObject, long val);
	/**
	 * 删除容器元素
	 * @param val 元素值
	 */
	public void remove(com.earthview.world.spatial.math.Plane val)
	{
		long valParamValue = val.nativeObject.pointer;
		remove_CPlane(this.nativeObject.pointer, valParamValue);
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
	native private void clear_void(long pNativeObject);
	/**
	 * 清空所有元素
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public Planes(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Planes(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Planes fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Planes obj = null;
 		if(baseObj instanceof Planes)
		{
			obj = (Planes)baseObj;
		} else {
			obj = new Planes(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Planes");
			obj.increaseCast();
		}

		return obj;
	}
}
