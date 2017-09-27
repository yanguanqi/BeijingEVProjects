package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// A map of animation states
///typedef map<EVString, EarthView::World::Graphic::CAnimationState*> EarthView::World::Graphic::AnimationStateMap;
/// <summary>
/// 动画名与动画状态集合类
/// 管理动画的状态
/// </summary>
public class AnimationStateMap extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::AnimationStateMap", new AnimationStateMapClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public AnimationStateMap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AnimationStateMap", null);
	}

	native private boolean push_EVString_CAnimationState(long pNativeObject, String key, long ref_val);
	/**
	 * 增加动画集合元素
	 * @param key 键
	 * @param val 值
	 * @return 成功增加true，否则false
	 */
	public boolean push(String key, NativeObjectPointer<com.earthview.world.graphic.AnimationState> ref_val)
	{
		String keyParamValue = key;
		long ref_valParamValue = ref_val.nativeObject.pointer;
		boolean returnValue = push_EVString_CAnimationState(this.nativeObject.pointer, keyParamValue, ref_valParamValue);
		return returnValue;
	}
	native private boolean exist_EVString(long pNativeObject, String key);
	/**
	 * 判断元素是否存在
	 * @param key 键
	 * @return 存在true，否则false
	 */
	public boolean exist(String key)
	{
		String keyParamValue = key;
		boolean returnValue = exist_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long OperatorIndex_EVString(long pNativeObject, String key);
	/**
	 * 重载[]操作符
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.AnimationState> OperatorIndex(String key)
	{
		String keyParamValue = key;
		long returnValue = OperatorIndex_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.AnimationState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.AnimationState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long get_EVString(long pNativeObject, String key);
	/**
	 * 获得键对应的值
	 * @param key 键
	 * @return 返回键对应的值
	 */
	public NativeObjectPointer<com.earthview.world.graphic.AnimationState> get(String key)
	{
		String keyParamValue = key;
		long returnValue = get_EVString(this.nativeObject.pointer, keyParamValue);
		NativeObjectPointer<com.earthview.world.graphic.AnimationState> __returnValue = new NativeObjectPointer<com.earthview.world.graphic.AnimationState>(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void erase_EVString(long pNativeObject, String key);
	/**
	 * 删除键对应的键值对
	 * @param key 键
	 */
	public void erase(String key)
	{
		String keyParamValue = key;
		erase_EVString(this.nativeObject.pointer, keyParamValue);
	}
	native private long size_void(long pNativeObject);
	/**
	 * 返回集合的大小
	 * @param  
	 * @return 集合的大小
	 */
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空集合
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean empty_void(long pNativeObject);
	/**
	 * 判断集合是否为空
	 * @param  
	 * @return 集合为空返回true，否则false
	 */
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	public AnimationStateMap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationStateMap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnimationStateMap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationStateMap obj = null;
 		if(baseObj instanceof AnimationStateMap)
		{
			obj = (AnimationStateMap)baseObj;
		} else {
			obj = new AnimationStateMap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AnimationStateMap");
			obj.increaseCast();
		}

		return obj;
	}
}
