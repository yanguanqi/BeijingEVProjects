package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标事件管理器
 */
public class DynamicObjectEventManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager", new DynamicObjectEventManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicObjectEventManagerProxy", new DynamicObjectEventManagerClassFactory());
	}

	/**
	 * 动态目标事件管理器构造函数
	 * @param name 唯一标识名称
	 * @param ref_manager 动态目标管理器
	 */
	public DynamicObjectEventManager(String name, com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager ref_manager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_managerPtr = new BasePointer(ref_manager);
		list.add("ref_manager", ref_managerPtr.get());
		Create("JCDynamicObjectEventManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEventManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void addDynamicObjectEvent_CDynamicObjectEvent_callback(long ref_dynamicObjectEvent)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent ref_dynamicObjectEventParamValue = (ref_dynamicObjectEvent == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_dynamicObjectEventParamValue != null)
		{
		ref_dynamicObjectEventParamValue.setDelegate(true);
		ref_dynamicObjectEventParamValue.setInstancePointer(new InstancePointer(ref_dynamicObjectEvent));
		IClassFactory ref_dynamicObjectEventParamValueClassFactory = GlobalClassFactoryMap.get(ref_dynamicObjectEventParamValue.getCppInstanceTypeName());
		if (ref_dynamicObjectEventParamValueClassFactory != null)
		{
			ref_dynamicObjectEventParamValue.setDelegate(true);
			ref_dynamicObjectEventParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent)ref_dynamicObjectEventParamValueClassFactory.create();
			ref_dynamicObjectEventParamValue.setDelegate(true);
			ref_dynamicObjectEventParamValue.setInstancePointer(new InstancePointer(ref_dynamicObjectEvent));
		}
		}
		addDynamicObjectEvent(ref_dynamicObjectEventParamValue);
	}

	native private void addDynamicObjectEvent_CDynamicObjectEvent(long pNativeObject, long ref_dynamicObjectEvent);
	/**
	 * 添加动态目标事件对象
	 * @param ref_dynamicObjectEvent 动态目标事件,该参数对象的生命周期要保持大于本对象的生命周期
	 */
	public void addDynamicObjectEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent ref_dynamicObjectEvent)
	{
		long ref_dynamicObjectEventParamValue = (ref_dynamicObjectEvent == null ? 0L : ref_dynamicObjectEvent.nativeObject.pointer);
		addDynamicObjectEvent_CDynamicObjectEvent(this.nativeObject.pointer, ref_dynamicObjectEventParamValue);
	}
	native private void addDynamicObjectEvent_CDynamicObjectEvent_NoVirtual(long pNativeObject, long ref_dynamicObjectEvent);
	protected void addDynamicObjectEvent_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent ref_dynamicObjectEvent)
	{
		long ref_dynamicObjectEventParamValue = (ref_dynamicObjectEvent == null ? 0L : ref_dynamicObjectEvent.nativeObject.pointer);
		addDynamicObjectEvent_CDynamicObjectEvent_NoVirtual(this.nativeObject.pointer, ref_dynamicObjectEventParamValue);
	}

	protected  void removeDynamicObjectEvent_CDynamicObjectEvent_callback(long dynamicObjectEvent)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent dynamicObjectEventParamValue = (dynamicObjectEvent == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(dynamicObjectEventParamValue != null)
		{
		dynamicObjectEventParamValue.setDelegate(true);
		dynamicObjectEventParamValue.setInstancePointer(new InstancePointer(dynamicObjectEvent));
		IClassFactory dynamicObjectEventParamValueClassFactory = GlobalClassFactoryMap.get(dynamicObjectEventParamValue.getCppInstanceTypeName());
		if (dynamicObjectEventParamValueClassFactory != null)
		{
			dynamicObjectEventParamValue.setDelegate(true);
			dynamicObjectEventParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent)dynamicObjectEventParamValueClassFactory.create();
			dynamicObjectEventParamValue.setDelegate(true);
			dynamicObjectEventParamValue.setInstancePointer(new InstancePointer(dynamicObjectEvent));
		}
		}
		removeDynamicObjectEvent(dynamicObjectEventParamValue);
	}

	native private void removeDynamicObjectEvent_CDynamicObjectEvent(long pNativeObject, long dynamicObjectEvent);
	/**
	 * 移除动态目标事件
	 * @param dynamicObjectEvent 动态目标事件
	 */
	public void removeDynamicObjectEvent(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent dynamicObjectEvent)
	{
		long dynamicObjectEventParamValue = (dynamicObjectEvent == null ? 0L : dynamicObjectEvent.nativeObject.pointer);
		removeDynamicObjectEvent_CDynamicObjectEvent(this.nativeObject.pointer, dynamicObjectEventParamValue);
	}
	native private void removeDynamicObjectEvent_CDynamicObjectEvent_NoVirtual(long pNativeObject, long dynamicObjectEvent);
	protected void removeDynamicObjectEvent_NoVirtual(com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent dynamicObjectEvent)
	{
		long dynamicObjectEventParamValue = (dynamicObjectEvent == null ? 0L : dynamicObjectEvent.nativeObject.pointer);
		removeDynamicObjectEvent_CDynamicObjectEvent_NoVirtual(this.nativeObject.pointer, dynamicObjectEventParamValue);
	}

	protected  void beforeTimePosition_Real_ev_bool_callback(double time, boolean isLooping)
	{
		double timeParamValue = time;
		boolean isLoopingParamValue = isLooping;
		beforeTimePosition(timeParamValue, isLoopingParamValue);
	}

	native private void beforeTimePosition_Real_ev_bool(long pNativeObject, double time, boolean isLooping);
	/**
	 * 到达该时间点之前触发
	 * @param time 时间点
	 * @param isLooping 动画是否将要进入循环状态
	 */
	public void beforeTimePosition(double time, boolean isLooping)
	{
		double timeParamValue = time;
		boolean isLoopingParamValue = isLooping;
		beforeTimePosition_Real_ev_bool(this.nativeObject.pointer, timeParamValue, isLoopingParamValue);
	}
	native private void beforeTimePosition_Real_ev_bool_NoVirtual(long pNativeObject, double time, boolean isLooping);
	protected void beforeTimePosition_NoVirtual(double time, boolean isLooping)
	{
		double timeParamValue = time;
		boolean isLoopingParamValue = isLooping;
		beforeTimePosition_Real_ev_bool_NoVirtual(this.nativeObject.pointer, timeParamValue, isLoopingParamValue);
	}

	protected  void afterTimePosition_Real_ev_bool_callback(double time, boolean isEnd)
	{
		double timeParamValue = time;
		boolean isEndParamValue = isEnd;
		afterTimePosition(timeParamValue, isEndParamValue);
	}

	native private void afterTimePosition_Real_ev_bool(long pNativeObject, double time, boolean isEnd);
	/**
	 * 到达该时间点之后触发
	 * @param time 时间点
	 * @param isEnd 动画是否结束
	 */
	public void afterTimePosition(double time, boolean isEnd)
	{
		double timeParamValue = time;
		boolean isEndParamValue = isEnd;
		afterTimePosition_Real_ev_bool(this.nativeObject.pointer, timeParamValue, isEndParamValue);
	}
	native private void afterTimePosition_Real_ev_bool_NoVirtual(long pNativeObject, double time, boolean isEnd);
	protected void afterTimePosition_NoVirtual(double time, boolean isEnd)
	{
		double timeParamValue = time;
		boolean isEndParamValue = isEnd;
		afterTimePosition_Real_ev_bool_NoVirtual(this.nativeObject.pointer, timeParamValue, isEndParamValue);
	}

	protected  void resetEvent_void_callback()
	{
		resetEvent();
	}

	native private void resetEvent_void(long pNativeObject);
	/**
	 * 重置事件
	 */
	public void resetEvent()
	{
		resetEvent_void(this.nativeObject.pointer);
	}
	native private void resetEvent_void_NoVirtual(long pNativeObject);
	protected void resetEvent_NoVirtual()
	{
		resetEvent_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void setTimePosition_Real_callback(double time)
	{
		double timeParamValue = time;
		setTimePosition(timeParamValue);
	}

	native private void setTimePosition_Real(long pNativeObject, double time);
	/**
	 * 设置动画时间
	 * @param time 动画时间
	 */
	public void setTimePosition(double time)
	{
		double timeParamValue = time;
		setTimePosition_Real(this.nativeObject.pointer, timeParamValue);
	}
	native private void setTimePosition_Real_NoVirtual(long pNativeObject, double time);
	protected void setTimePosition_NoVirtual(double time)
	{
		double timeParamValue = time;
		setTimePosition_Real_NoVirtual(this.nativeObject.pointer, timeParamValue);
	}

	protected  long getName_void_callback()
	{
		StringPointer returnValue = getName();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @return 名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getName_void_NoVirtual(long pNativeObject);
	protected StringPointer getName_NoVirtual()
	{
		long returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置名称
	 * @param name 名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	public DynamicObjectEventManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicObjectEventManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_addDynamicObjectEvent_CDynamicObjectEvent(long pNativeObject, String method);
	native protected void register_removeDynamicObjectEvent_CDynamicObjectEvent(long pNativeObject, String method);
	native protected void register_beforeTimePosition_Real_ev_bool(long pNativeObject, String method);
	native protected void register_afterTimePosition_Real_ev_bool(long pNativeObject, String method);
	native protected void register_resetEvent_void(long pNativeObject, String method);
	native protected void register_setTimePosition_Real(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addDynamicObjectEvent_CDynamicObjectEvent(this.nativeObject.pointer, "addDynamicObjectEvent_CDynamicObjectEvent_callback");
			this.register_removeDynamicObjectEvent_CDynamicObjectEvent(this.nativeObject.pointer, "removeDynamicObjectEvent_CDynamicObjectEvent_callback");
			this.register_beforeTimePosition_Real_ev_bool(this.nativeObject.pointer, "beforeTimePosition_Real_ev_bool_callback");
			this.register_afterTimePosition_Real_ev_bool(this.nativeObject.pointer, "afterTimePosition_Real_ev_bool_callback");
			this.register_resetEvent_void(this.nativeObject.pointer, "resetEvent_void_callback");
			this.register_setTimePosition_Real(this.nativeObject.pointer, "setTimePosition_Real_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
		}
	}
	
	public static DynamicObjectEventManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicObjectEventManager obj = null;
 		if(baseObj instanceof DynamicObjectEventManager)
		{
			obj = (DynamicObjectEventManager)baseObj;
		} else {
			obj = new DynamicObjectEventManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicObjectEventManager");
			obj.increaseCast();
		}

		return obj;
	}
}
