package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::AnimationStateMap> AnimationStateIterator;
///typedef EarthView::World::Core::CConstMapIterator<EarthView::World::Graphic::AnimationStateMap> ConstAnimationStateIterator;
/// <summary>
/// 动画状态键值对类
/// 管理动画状态键值
/// </summary>
public class AnimationStatePair extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::AnimationStatePair", new AnimationStatePairClassFactory());
	}

	native private String get_first_void(long pNativeObject);
	public String get_first()
	{
		String jniValue = get_first_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_first_EVString (long pNativeObject, String value);
	public void set_first(String first)
	{
		String firstParamValue = first;
		
		set_first_EVString(this.nativeObject.pointer, firstParamValue);
	}
	
	native private long get_second_void(long pNativeObject);
	public com.earthview.world.graphic.AnimationState get_second()
	{
		long jniValue = get_second_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.AnimationState __returnValue = new com.earthview.world.graphic.AnimationState(CreatedWhenConstruct.CWC_NotToCreate, "CAnimationState");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_second_CAnimationState (long pNativeObject, long value);
	public void set_second(com.earthview.world.graphic.AnimationState second)
	{
		long secondParamValue = (second == null ? 0L : second.nativeObject.pointer);
		
		set_second_CAnimationState(this.nativeObject.pointer, secondParamValue);
	}
	
	/**
	 * 构造函数
	 * @param  
	 */
	public AnimationStatePair() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AnimationStatePair", null);
	}

	public AnimationStatePair(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationStatePair(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AnimationStatePair fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationStatePair obj = null;
 		if(baseObj instanceof AnimationStatePair)
		{
			obj = (AnimationStatePair)baseObj;
		} else {
			obj = new AnimationStatePair(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AnimationStatePair");
			obj.increaseCast();
		}

		return obj;
	}
}
