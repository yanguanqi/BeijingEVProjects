package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画状态集合类管理动画状态集合
 */
public class AnimationStateSet extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationStateSet", new AnimationStateSetClassFactory());
	}

	/**
	 * 默认构造函数，创建空集合
	 * @param  
	 */
	public AnimationStateSet() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAnimationStateSet", null);
	}

	/**
	 * 复制构造函数
	 * @param rhs 其它动画状态集合对象
	 */
	public AnimationStateSet(com.earthview.world.graphic.AnimationStateSet rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CAnimationStateSet", list);
	}

	native private long createAnimationState_EVString_Real_Real_Real_ev_bool(long pNativeObject, String animName, double timePos, double length, double weight, boolean enabled);
	/**
	 * 创建动画状态实例
	 * @param animName 动画名称
	 * @param timePos 当前时间点
	 * @param length 动画长度
	 * @param weight 动画权重
	 * @param enabled 动画enable开关
	 * @return 动画状态指针
	 */
	public com.earthview.world.graphic.AnimationState createAnimationState(String animName, double timePos, double length, double weight, boolean enabled)
	{
		String animNameParamValue = animName;
		double timePosParamValue = timePos;
		double lengthParamValue = length;
		double weightParamValue = weight;
		boolean enabledParamValue = enabled;
		long returnValue = createAnimationState_EVString_Real_Real_Real_ev_bool(this.nativeObject.pointer, animNameParamValue, timePosParamValue, lengthParamValue, weightParamValue, enabledParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long createAnimationState_EVString_Real_Real_Real(long pNativeObject, String animName, double timePos, double length, double weight);
	/**
	 * 创建动画状态实例，状态为unable
	 * @param animName 动画名称
	 * @param timePos 当前时间点
	 * @param length 动画长度
	 * @param weight 动画权重
	 * @return 动画状态指针
	 */
	public com.earthview.world.graphic.AnimationState createAnimationState(String animName, double timePos, double length, double weight)
	{
		String animNameParamValue = animName;
		double timePosParamValue = timePos;
		double lengthParamValue = length;
		double weightParamValue = weight;
		long returnValue = createAnimationState_EVString_Real_Real_Real(this.nativeObject.pointer, animNameParamValue, timePosParamValue, lengthParamValue, weightParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long createAnimationState_EVString_Real_Real(long pNativeObject, String animName, double timePos, double length);
	/**
	 * 创建动画状态实例，权重1.0，状态为unable
	 * @param animName 动画名称
	 * @param timePos 当前时间点
	 * @param length 动画长度
	 * @param weight 动画权重
	 * @return 动画状态指针
	 */
	public com.earthview.world.graphic.AnimationState createAnimationState(String animName, double timePos, double length)
	{
		String animNameParamValue = animName;
		double timePosParamValue = timePos;
		double lengthParamValue = length;
		long returnValue = createAnimationState_EVString_Real_Real(this.nativeObject.pointer, animNameParamValue, timePosParamValue, lengthParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private long getAnimationState_EVString(long pNativeObject, String name);
	/**
	 * 根据动画名称获得动画状态
	 * @param name 动画名称
	 * @return 动画状态指针
	 */
	public com.earthview.world.graphic.AnimationState getAnimationState(String name)
	{
		String nameParamValue = name;
		long returnValue = getAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationState)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnimationState");
		}
		return __returnValue;
	}
	native private boolean hasAnimationState_EVString(long pNativeObject, String name);
	/**
	 * 根据动画名称判断动画状态是否存在
	 * @param name 动画名称
	 * @return 存在返回true，否则false
	 */
	public boolean hasAnimationState(String name)
	{
		String nameParamValue = name;
		boolean returnValue = hasAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void removeAnimationState_EVString(long pNativeObject, String name);
	/**
	 * 根据动画名称删除其动画状态
	 * @param name 动画名称
	 */
	public void removeAnimationState(String name)
	{
		String nameParamValue = name;
		removeAnimationState_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void removeAllAnimationStates_void(long pNativeObject);
	/**
	 * 删除集合中所有动画状态
	 * @param  
	 */
	public void removeAllAnimationStates()
	{
		removeAllAnimationStates_void(this.nativeObject.pointer);
	}
	native private long getAnimationStateIterator_void(long pNativeObject);
	/**
	 * 获得动画状态集合迭代器
	 * @param  
	 * @return 迭代器
	 */
	public com.earthview.world.graphic.AnimationStateMapIterator getAnimationStateIterator()
	{
		long returnValue = getAnimationStateIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.AnimationStateMapIterator __returnValue = new com.earthview.world.graphic.AnimationStateMapIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "AnimationStateMapIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.AnimationStateMapIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AnimationStateMapIterator");
		}
		return __returnValue;
	}
	native private void copyMatchingState_CAnimationStateSet(long pNativeObject, long target);
	/**
	 * 复制动画状态到另一个匹配的集合
	 * @param target 另一动画状态集合
	 */
	public void copyMatchingState(com.earthview.world.graphic.AnimationStateSet target)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		copyMatchingState_CAnimationStateSet(this.nativeObject.pointer, targetParamValue);
	}
	native private void _notifyDirty_void(long pNativeObject);
	/**
	 * 通知动画状态已改变
	 * @param  
	 */
	public void _notifyDirty()
	{
		_notifyDirty_void(this.nativeObject.pointer);
	}
	native private long getDirtyFrameNumber_void(long pNativeObject);
	/**
	 * 获得已改变动画状态的帧数量
	 * @param  
	 * @return 改变动画状态的帧数量
	 */
	public long getDirtyFrameNumber()
	{
		long returnValue = getDirtyFrameNumber_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void _notifyAnimationStateEnabled_CAnimationState_ev_bool(long pNativeObject, long ref_target, boolean enabled);
	/**
	 * 通知动画状态的开启状态
	 * @param target 动画状态指针
	 * @param enabled 开启状态
	 */
	public void _notifyAnimationStateEnabled(com.earthview.world.graphic.AnimationState ref_target, boolean enabled)
	{
		long ref_targetParamValue = (ref_target == null ? 0L : ref_target.nativeObject.pointer);
		boolean enabledParamValue = enabled;
		_notifyAnimationStateEnabled_CAnimationState_ev_bool(this.nativeObject.pointer, ref_targetParamValue, enabledParamValue);
	}
	native private boolean hasEnabledAnimationState_void(long pNativeObject);
	/**
	 * 返回当前动画状态集合中是否存在激活状态的动画
	 * @param  
	 * @return 存在为true，否则false
	 */
	public boolean hasEnabledAnimationState()
	{
		boolean returnValue = hasEnabledAnimationState_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getEnabledAnimationStateIterator_void(long pNativeObject);
	/**
	 * 返回当前动画状态集合中激活状态的动画状态迭代器
	 * @param  
	 * @return 返回当前动画状态集合中激活状态的动画状态迭代器
	 */
	public com.earthview.world.graphic.ConstAnimationStateListIterator getEnabledAnimationStateIterator()
	{
		long returnValue = getEnabledAnimationStateIterator_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ConstAnimationStateListIterator __returnValue = new com.earthview.world.graphic.ConstAnimationStateListIterator(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ConstAnimationStateListIterator");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ConstAnimationStateListIterator)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ConstAnimationStateListIterator");
		}
		return __returnValue;
	}
	native private long getNumOfEnabledAnimationStates_void(long pNativeObject);
	/**
	 * 返回当前动画状态集合中激活状态的动画状态的数目
	 * @param  
	 */
	public long getNumOfEnabledAnimationStates()
	{
		long returnValue = getNumOfEnabledAnimationStates_void(this.nativeObject.pointer);
		return returnValue;
	}
	public AnimationStateSet(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationStateSet(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnimationStateSet fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationStateSet obj = null;
 		if(baseObj instanceof AnimationStateSet)
		{
			obj = (AnimationStateSet)baseObj;
		} else {
			obj = new AnimationStateSet(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationStateSet");
			obj.increaseCast();
		}

		return obj;
	}
}
