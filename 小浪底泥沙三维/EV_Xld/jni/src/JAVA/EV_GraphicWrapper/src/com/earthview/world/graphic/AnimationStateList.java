package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// A list of enabled animation states
///typedef list<EarthView::World::Graphic::CAnimationState*> EnabledAnimationStateList;
///typedef EarthView::World::Core::CConstVectorIterator<EnabledAnimationStateList> ConstEnabledAnimationStateIterator;
/// <summary>
/// 开启的动画状态List集合类
/// 管理开启的动画状态
/// </summary>
public class AnimationStateList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::AnimationStateList", new AnimationStateListClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public AnimationStateList() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AnimationStateList", null);
	}

	native private void push_back_CAnimationState(long pNativeObject, long t);
	/**
	 * 在容器末尾添加元素
	 * @param t 元素值
	 */
	public void push_back(NativeObjectPointer<com.earthview.world.graphic.AnimationState> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_back_CAnimationState(this.nativeObject.pointer, tParamValue);
	}
	native private void push_front_CAnimationState(long pNativeObject, long t);
	/**
	 * 在容器头部添加元素
	 * @param t 元素值
	 */
	public void push_front(NativeObjectPointer<com.earthview.world.graphic.AnimationState> t)
	{
		long tParamValue = t.nativeObject.pointer;
		push_front_CAnimationState(this.nativeObject.pointer, tParamValue);
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
	native private void pop_front_void(long pNativeObject);
	/**
	 * 删除头部元素
	 * @param  
	 */
	public void pop_front()
	{
		pop_front_void(this.nativeObject.pointer);
	}
	native private long front_void(long pNativeObject);
	/**
	 * 返回第一个元素
	 * @param  
	 * @return 第一个元素值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.AnimationState> front()
	{
		long returnValue = front_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.AnimationState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.AnimationState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long back_void(long pNativeObject);
	/**
	 * 返回最后元素
	 * @param  
	 * @return 最后元素值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.AnimationState> back()
	{
		long returnValue = back_void(this.nativeObject.pointer);
		NativeObjectPointer<com.earthview.world.graphic.AnimationState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.AnimationState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long at_ev_uint32(long pNativeObject, long pos);
	/**
	 * 返回中间某元素
	 * @param  
	 * @return 元素值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.AnimationState> at(long pos)
	{
		long posParamValue = pos;
		long returnValue = at_ev_uint32(this.nativeObject.pointer, posParamValue);
		NativeObjectPointer<com.earthview.world.graphic.AnimationState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.AnimationState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void insert_ev_uint32_CAnimationState(long pNativeObject, long pos, long t);
	/**
	 * 插入元素
	 * @param pos 插入位置
	 * @param t 元素值
	 */
	public void insert(long pos, NativeObjectPointer<com.earthview.world.graphic.AnimationState> t)
	{
		long posParamValue = pos;
		long tParamValue = t.nativeObject.pointer;
		insert_ev_uint32_CAnimationState(this.nativeObject.pointer, posParamValue, tParamValue);
	}
	native private void remove_ev_size_t(long pNativeObject, long pos);
	/**
	 * 删除元素
	 * @param pos 位置
	 */
	public void remove(long pos)
	{
		long posParamValue = pos;
		remove_ev_size_t(this.nativeObject.pointer, posParamValue);
	}
	native private void remove_CAnimationState(long pNativeObject, long val);
	/**
	 * 删除元素
	 * @param val 元素值
	 */
	public void remove(NativeObjectPointer<com.earthview.world.graphic.AnimationState> val)
	{
		long valParamValue = val.nativeObject.pointer;
		remove_CAnimationState(this.nativeObject.pointer, valParamValue);
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
	public AnimationStateList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationStateList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnimationStateList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationStateList obj = null;
 		if(baseObj instanceof AnimationStateList)
		{
			obj = (AnimationStateList)baseObj;
		} else {
			obj = new AnimationStateList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AnimationStateList");
			obj.increaseCast();
		}

		return obj;
	}
}
