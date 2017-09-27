package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动画状态控制器的值类管理动画状态控制器的值
 */
public class AnimationStateControllerValue extends com.earthview.world.graphic.ControllerValue {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CAnimationStateControllerValue", new AnimationStateControllerValueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCAnimationStateControllerValueProxy", new AnimationStateControllerValueClassFactory());
	}

	/**
	 * 构造函数
	 * @param targetAnimationState 
	 */
	public AnimationStateControllerValue(com.earthview.world.graphic.AnimationState ref_targetAnimationState) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_targetAnimationStatePtr = new BasePointer(ref_targetAnimationState);
		list.add("ref_targetAnimationState", ref_targetAnimationStatePtr.get());
		Create("JCAnimationStateControllerValueProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.AnimationStateControllerValue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getValue_void(long pNativeObject);
	/**
	 * 获得动画状态控制器的值
	 * @param  
	 * @return 动画状态控制器的值
	 */
	public double getValue()
	{
		double returnValue = getValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getValue_void_NoVirtual(long pNativeObject);
	protected double getValue_NoVirtual()
	{
		double returnValue = getValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setValue_Real(long pNativeObject, double value);
	/**
	 * 设置动画状态控制器的值
	 * @param  
	 * @return 设置动画状态控制器的值
	 */
	public void setValue(double value)
	{
		double valueParamValue = value;
		setValue_Real(this.nativeObject.pointer, valueParamValue);
	}
	native private void setValue_Real_NoVirtual(long pNativeObject, double value);
	protected void setValue_NoVirtual(double value)
	{
		double valueParamValue = value;
		setValue_Real_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	public AnimationStateControllerValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnimationStateControllerValue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getValue_void(long pNativeObject, String method);
	native protected void register_setValue_Real(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getValue_void(this.nativeObject.pointer, "getValue_void_callback");
			this.register_setValue_Real(this.nativeObject.pointer, "setValue_Real_callback");
		}
	}
	
	public static AnimationStateControllerValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnimationStateControllerValue obj = null;
 		if(baseObj instanceof AnimationStateControllerValue)
		{
			obj = (AnimationStateControllerValue)baseObj;
		} else {
			obj = new AnimationStateControllerValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnimationStateControllerValue");
			obj.increaseCast();
		}

		return obj;
	}
}
