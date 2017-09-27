package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标轨迹动画监听对象
 */
public class DynamicGlobeNodeTrackAnimationListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener", new DynamicGlobeNodeTrackAnimationListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicGlobeNodeTrackAnimationListenerProxy", new DynamicGlobeNodeTrackAnimationListenerClassFactory());
	}

	/**
	 * 动态目标轨迹动画监听对象构造函数
	 */
	public DynamicGlobeNodeTrackAnimationListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDynamicGlobeNodeTrackAnimationListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicGlobeNodeTrackAnimationListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback(String dynamicModelObjectName, double timePosition, boolean isLooping)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		boolean isLoopingParamValue = isLooping;
		animationBeforeTimePositon(dynamicModelObjectNameParamValue, timePositionParamValue, isLoopingParamValue);
	}

	native private void animationBeforeTimePositon_EVString_ev_real64_ev_bool(long pNativeObject, String dynamicModelObjectName, double timePosition, boolean isLooping);
	/**
	 * 动画过程到达指定帧之前调用
	 * @param dynamicModelObjectName 动态目标对象
	 * @param timePosition 当前动画时间
	 * @param isLooping 是否即将进行循环播放
	 */
	public void animationBeforeTimePositon(String dynamicModelObjectName, double timePosition, boolean isLooping)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		boolean isLoopingParamValue = isLooping;
		animationBeforeTimePositon_EVString_ev_real64_ev_bool(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue, isLoopingParamValue);
	}
	native private void animationBeforeTimePositon_EVString_ev_real64_ev_bool_NoVirtual(long pNativeObject, String dynamicModelObjectName, double timePosition, boolean isLooping);
	protected void animationBeforeTimePositon_NoVirtual(String dynamicModelObjectName, double timePosition, boolean isLooping)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		boolean isLoopingParamValue = isLooping;
		animationBeforeTimePositon_EVString_ev_real64_ev_bool_NoVirtual(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue, isLoopingParamValue);
	}

	protected  void animationAfterTimePositon_EVString_ev_real64_ev_bool_callback(String dynamicModelObjectName, double timePosition, boolean isLooping)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		boolean isLoopingParamValue = isLooping;
		animationAfterTimePositon(dynamicModelObjectNameParamValue, timePositionParamValue, isLoopingParamValue);
	}

	native private void animationAfterTimePositon_EVString_ev_real64_ev_bool(long pNativeObject, String dynamicModelObjectName, double timePosition, boolean isLooping);
	/**
	 * 动画过程到达指定帧之后调用
	 * @param dynamicModelObjectName 动态目标对象
	 * @param timePosition 当前动画时间
	 * @param isLooping 是否即将进行循环播放
	 */
	public void animationAfterTimePositon(String dynamicModelObjectName, double timePosition, boolean isLooping)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		boolean isLoopingParamValue = isLooping;
		animationAfterTimePositon_EVString_ev_real64_ev_bool(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue, isLoopingParamValue);
	}
	native private void animationAfterTimePositon_EVString_ev_real64_ev_bool_NoVirtual(long pNativeObject, String dynamicModelObjectName, double timePosition, boolean isLooping);
	protected void animationAfterTimePositon_NoVirtual(String dynamicModelObjectName, double timePosition, boolean isLooping)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		boolean isLoopingParamValue = isLooping;
		animationAfterTimePositon_EVString_ev_real64_ev_bool_NoVirtual(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue, isLoopingParamValue);
	}

	protected  void animationBeforeEnd_EVString_ev_real64_callback(String dynamicModelObjectName, double timePosition)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		animationBeforeEnd(dynamicModelObjectNameParamValue, timePositionParamValue);
	}

	native private void animationBeforeEnd_EVString_ev_real64(long pNativeObject, String dynamicModelObjectName, double timePosition);
	/**
	 * 动画结束之前调用
	 * @param dynamicModelObjectName 动态目标对象
	 * @param timePosition 当前动画时间
	 */
	public void animationBeforeEnd(String dynamicModelObjectName, double timePosition)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		animationBeforeEnd_EVString_ev_real64(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue);
	}
	native private void animationBeforeEnd_EVString_ev_real64_NoVirtual(long pNativeObject, String dynamicModelObjectName, double timePosition);
	protected void animationBeforeEnd_NoVirtual(String dynamicModelObjectName, double timePosition)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		animationBeforeEnd_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue);
	}

	protected  void animationAfterEnd_EVString_ev_real64_callback(String dynamicModelObjectName, double timePosition)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		animationAfterEnd(dynamicModelObjectNameParamValue, timePositionParamValue);
	}

	native private void animationAfterEnd_EVString_ev_real64(long pNativeObject, String dynamicModelObjectName, double timePosition);
	/**
	 * 动画结束之后调用
	 * @param dynamicModelObjectName 动态目标对象
	 * @param timePosition 当前动画时间
	 */
	public void animationAfterEnd(String dynamicModelObjectName, double timePosition)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		animationAfterEnd_EVString_ev_real64(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue);
	}
	native private void animationAfterEnd_EVString_ev_real64_NoVirtual(long pNativeObject, String dynamicModelObjectName, double timePosition);
	protected void animationAfterEnd_NoVirtual(String dynamicModelObjectName, double timePosition)
	{
		String dynamicModelObjectNameParamValue = dynamicModelObjectName;
		double timePositionParamValue = timePosition;
		animationAfterEnd_EVString_ev_real64_NoVirtual(this.nativeObject.pointer, dynamicModelObjectNameParamValue, timePositionParamValue);
	}

	public DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_animationBeforeTimePositon_EVString_ev_real64_ev_bool(long pNativeObject, String method);
	native protected void register_animationAfterTimePositon_EVString_ev_real64_ev_bool(long pNativeObject, String method);
	native protected void register_animationBeforeEnd_EVString_ev_real64(long pNativeObject, String method);
	native protected void register_animationAfterEnd_EVString_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_animationBeforeTimePositon_EVString_ev_real64_ev_bool(this.nativeObject.pointer, "animationBeforeTimePositon_EVString_ev_real64_ev_bool_callback");
			this.register_animationAfterTimePositon_EVString_ev_real64_ev_bool(this.nativeObject.pointer, "animationAfterTimePositon_EVString_ev_real64_ev_bool_callback");
			this.register_animationBeforeEnd_EVString_ev_real64(this.nativeObject.pointer, "animationBeforeEnd_EVString_ev_real64_callback");
			this.register_animationAfterEnd_EVString_ev_real64(this.nativeObject.pointer, "animationAfterEnd_EVString_ev_real64_callback");
		}
	}
	
	public static DynamicGlobeNodeTrackAnimationListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicGlobeNodeTrackAnimationListener obj = null;
 		if(baseObj instanceof DynamicGlobeNodeTrackAnimationListener)
		{
			obj = (DynamicGlobeNodeTrackAnimationListener)baseObj;
		} else {
			obj = new DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicGlobeNodeTrackAnimationListener");
			obj.increaseCast();
		}

		return obj;
	}
}
