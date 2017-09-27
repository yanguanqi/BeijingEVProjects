package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 轨迹动画开始事件
 */
public class GlobeNodeTrackAnimationStartEvent extends com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent", new GlobeNodeTrackAnimationStartEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCGlobeNodeTrackAnimationStartEventProxy", new GlobeNodeTrackAnimationStartEventClassFactory());
	}

	/**
	 * 轨迹动画开始事件构造函数
	 * @param name 唯一标识名称
	 * @param dynamicModelObjectName 与该事件关联的动态目标名称
	 * @param timePosition 事件发生的时间
	 */
	public GlobeNodeTrackAnimationStartEvent(String name, String dynamicModelObjectName, double timePosition) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer dynamicModelObjectNamePtr = new BasePointer(dynamicModelObjectName);
		list.add("dynamicModelObjectName", dynamicModelObjectNamePtr.get());
		BasePointer timePositionPtr = new BasePointer(timePosition);
		list.add("timePosition", timePositionPtr.get());
		Create("JCGlobeNodeTrackAnimationStartEventProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.GlobeNodeTrackAnimationStartEvent".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void beforeEvent_CDynamicModelObjectManager_Real_ev_bool(long pNativeObject, long manager, double curAnimationTime, boolean islooping);
	/**
	 * 到达事件发生之前触发
	 * @param manager 动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param curAnimationTime 当前的动画时间
	 * @param islooping 是否将要进入动画循环
	 */
	public void beforeEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager manager, double curAnimationTime, boolean islooping)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		double curAnimationTimeParamValue = curAnimationTime;
		boolean isloopingParamValue = islooping;
		beforeEvent_CDynamicModelObjectManager_Real_ev_bool(this.nativeObject.pointer, managerParamValue, curAnimationTimeParamValue, isloopingParamValue);
	}
	native private void beforeEvent_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(long pNativeObject, long manager, double curAnimationTime, boolean islooping);
	protected void beforeEvent_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager manager, double curAnimationTime, boolean islooping)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		double curAnimationTimeParamValue = curAnimationTime;
		boolean isloopingParamValue = islooping;
		beforeEvent_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(this.nativeObject.pointer, managerParamValue, curAnimationTimeParamValue, isloopingParamValue);
	}

	native private void afterEvent_CDynamicModelObjectManager_Real_ev_bool(long pNativeObject, long manager, double curAnimationTime, boolean isEnd);
	/**
	 * 到达事件发生点之后触发
	 * @param manager 动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期
	 * @param curAnimationTime 当前的动画时间
	 * @param isEnd 动画是否结束
	 */
	public void afterEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager manager, double curAnimationTime, boolean isEnd)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		double curAnimationTimeParamValue = curAnimationTime;
		boolean isEndParamValue = isEnd;
		afterEvent_CDynamicModelObjectManager_Real_ev_bool(this.nativeObject.pointer, managerParamValue, curAnimationTimeParamValue, isEndParamValue);
	}
	native private void afterEvent_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(long pNativeObject, long manager, double curAnimationTime, boolean isEnd);
	protected void afterEvent_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager manager, double curAnimationTime, boolean isEnd)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		double curAnimationTimeParamValue = curAnimationTime;
		boolean isEndParamValue = isEnd;
		afterEvent_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(this.nativeObject.pointer, managerParamValue, curAnimationTimeParamValue, isEndParamValue);
	}

	native private void resetEvent_CDynamicModelObjectManager(long pNativeObject, long manager);
	/**
	 * 重置事件
	 * @param manager 动目标管理器,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void resetEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager manager)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		resetEvent_CDynamicModelObjectManager(this.nativeObject.pointer, managerParamValue);
	}
	native private void resetEvent_CDynamicModelObjectManager_NoVirtual(long pNativeObject, long manager);
	protected void resetEvent_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager manager)
	{
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		resetEvent_CDynamicModelObjectManager_NoVirtual(this.nativeObject.pointer, managerParamValue);
	}

	public GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置事件发生的时间
	 * @param timePosition 事件发生的时间
	 */
	public void setTimePosition(double timePosition)
	{
		super.setTimePosition_NoVirtual(timePosition);
	}
	/**
	 * 获取事件发生的时间
	 * @return 事件发生的时间
	 */
	public double getTimePosition()
	{
		return super.getTimePosition_NoVirtual();
	}
	/**
	 * 设置该事件是否被触发过
	 * @param fired 是否触发
	 */
	public void setIsFired(boolean fired)
	{
		super.setIsFired_NoVirtual(fired);
	}
	/**
	 * 获取该事件是否被触发过
	 * @return 是否触发
	 */
	public boolean getIsFired()
	{
		return super.getIsFired_NoVirtual();
	}
	/**
	 * 在指定的时间点是否可以触发该事件
	 * @param timePosition 时间点
	 * @return 是否可以触发该事件
	 */
	public boolean canFired(double timePosition)
	{
		return super.canFired_NoVirtual(timePosition);
	}
	/**
	 * 获取事件名称
	 * @return 事件名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置事件名称
	 * @param name 事件名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	
	native protected void register_beforeEvent_CDynamicModelObjectManager_Real_ev_bool(long pNativeObject, String method);
	native protected void register_afterEvent_CDynamicModelObjectManager_Real_ev_bool(long pNativeObject, String method);
	native protected void register_resetEvent_CDynamicModelObjectManager(long pNativeObject, String method);
	native protected void register_setTimePosition_Real(long pNativeObject, String method);
	native protected void register_getTimePosition_void(long pNativeObject, String method);
	native protected void register_setIsFired_ev_bool(long pNativeObject, String method);
	native protected void register_getIsFired_void(long pNativeObject, String method);
	native protected void register_canFired_Real(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_beforeEvent_CDynamicModelObjectManager_Real_ev_bool(this.nativeObject.pointer, "beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback");
			this.register_afterEvent_CDynamicModelObjectManager_Real_ev_bool(this.nativeObject.pointer, "afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback");
			this.register_resetEvent_CDynamicModelObjectManager(this.nativeObject.pointer, "resetEvent_CDynamicModelObjectManager_callback");
			this.register_setTimePosition_Real(this.nativeObject.pointer, "setTimePosition_Real_callback");
			this.register_getTimePosition_void(this.nativeObject.pointer, "getTimePosition_void_callback");
			this.register_setIsFired_ev_bool(this.nativeObject.pointer, "setIsFired_ev_bool_callback");
			this.register_getIsFired_void(this.nativeObject.pointer, "getIsFired_void_callback");
			this.register_canFired_Real(this.nativeObject.pointer, "canFired_Real_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
		}
	}
	
	public static GlobeNodeTrackAnimationStartEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeNodeTrackAnimationStartEvent obj = null;
 		if(baseObj instanceof GlobeNodeTrackAnimationStartEvent)
		{
			obj = (GlobeNodeTrackAnimationStartEvent)baseObj;
		} else {
			obj = new GlobeNodeTrackAnimationStartEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeNodeTrackAnimationStartEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
