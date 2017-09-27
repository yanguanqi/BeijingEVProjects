package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 当前粒子列表类定义当前粒子列表相关操作
 */
public class ParticleList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ParticleList", new ParticleListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ParticleList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ParticleList", null);
	}

	native private void push_back_CParticle(long pNativeObject, long ref_t);
	/**
	 * 在当前粒子列表后面增加一个元素
	 * @param t 增加的元素
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.Particle> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_back_CParticle(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void push_front_CParticle(long pNativeObject, long ref_t);
	/**
	 * 在当前粒子列表前面增加一个元素
	 * @param t 增加的元素
	 */
	public void push_front(NativeObjectPointer<com.earthview.world.graphic.Particle> ref_t)
	{
		long ref_tParamValue = ref_t.nativeObject.pointer;
		push_front_CParticle(this.nativeObject.pointer, ref_tParamValue);
	}
	native private void pop_back_void(long pNativeObject);
	/**
	 * 删除当前粒子列表最后一个元素
	 * @param  
	 */
	public void pop_back()
	{
		pop_back_void(this.nativeObject.pointer);
	}
	native private void pop_front_void(long pNativeObject);
	/**
	 * 删除当前粒子列表第一个元素
	 * @param  
	 */
	public void pop_front()
	{
		pop_front_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回当前粒子列表第一个元素的引用
	 * @param  
	 * @return 第一个元素的引用
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Particle> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.Particle> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Particle>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回当前粒子列表最后一个元素的引用
	 * @param  
	 * @return 最后一个元素的引用
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Particle> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.Particle> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Particle>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * 返回当前粒子列表第pos元素的引用
	 * @param  
	 * @return 第pos元素的引用
	 */
	public NativeObjectPointer<com.earthview.world.graphic.Particle> at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		NativeObjectPointer<com.earthview.world.graphic.Particle> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.Particle>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CParticle(long pNativeObject, long pos, long ref_t);
	/**
	 * 在当前粒子列表第pos元素之后插入元素t
	 * @param pos 迭代器下标
	 * @param t 要插入的元素
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.Particle> ref_t)
	{
		long posParamValue = pos;
		long ref_tParamValue = ref_t.nativeObject.pointer;
		insert_ev_uint32_CParticle(this.nativeObject.pointer, posParamValue, ref_tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 移除当前粒子列表中的某一个元素
	 * @param pos 该移除元素所在迭代器位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断当前粒子列表是否为空
	 * @param  
	 * @return 如果为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long size_void(long pNativeObject);
	/**
	 * 当前粒子列表存储元素的大小
	 * @param  
	 * @return 当前广告版元素的个数
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resize_ev_size_t(long pNativeObject, long newSize);
	/**
	 * 调整粒子列表存储元素的大小
	 * @param newSize 新的列表存储元素的个数
	 */
	public void resize(long newSize)
	{
		long newSizeParamValue = newSize;
		resize_ev_size_t(this.nativeObject.pointer, newSizeParamValue);
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空列表中的元素
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public ParticleList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParticleList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParticleList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParticleList obj = null;
 		if(baseObj instanceof ParticleList)
		{
			obj = (ParticleList)baseObj;
		} else {
			obj = new ParticleList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ParticleList");
			obj.increaseCast();
		}

		return obj;
	}
}
