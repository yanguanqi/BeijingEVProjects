package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态目标事件
 */
public class DynamicObjectEvent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent", new DynamicObjectEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicObjectEventProxy", new DynamicObjectEventClassFactory());
	}

	/**
	 * 动态目标事件构造函数
	 * @param name 唯一标识名称
	 * @param dynamicModelObjectName 与该事件关联的动态目标名称
	 * @param timePosition 事件发生的时间
	 */
	public DynamicObjectEvent(String name, String dynamicModelObjectName, double timePosition) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer dynamicModelObjectNamePtr = new BasePointer(dynamicModelObjectName);
		list.add("dynamicModelObjectName", dynamicModelObjectNamePtr.get());
		BasePointer timePositionPtr = new BasePointer(timePosition);
		list.add("timePosition", timePositionPtr.get());
		Create("JCDynamicObjectEventProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicObjectEvent".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void beforeEvent_CDynamicModelObjectManager_Real_ev_bool_callback(long manager, double curAnimationTime, boolean islooping)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager managerParamValue = (manager == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(managerParamValue != null)
		{
		managerParamValue.setDelegate(true);
		managerParamValue.setInstancePointer(new InstancePointer(manager));
		IClassFactory managerParamValueClassFactory = GlobalClassFactoryMap.get(managerParamValue.getCppInstanceTypeName());
		if (managerParamValueClassFactory != null)
		{
			managerParamValue.setDelegate(true);
			managerParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager)managerParamValueClassFactory.create();
			managerParamValue.setDelegate(true);
			managerParamValue.setInstancePointer(new InstancePointer(manager));
		}
		}
		double curAnimationTimeParamValue = curAnimationTime;
		boolean isloopingParamValue = islooping;
		beforeEvent(managerParamValue, curAnimationTimeParamValue, isloopingParamValue);
	}

	native private void beforeEvent_CDynamicModelObjectManager_Real_ev_bool(long pNativeObject, long manager, double curAnimationTime, boolean islooping);
	/**
	 * 到达事件发生之前触发
	 * @param manager 动目标管理器
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

	protected  void afterEvent_CDynamicModelObjectManager_Real_ev_bool_callback(long manager, double curAnimationTime, boolean isEnd)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager managerParamValue = (manager == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(managerParamValue != null)
		{
		managerParamValue.setDelegate(true);
		managerParamValue.setInstancePointer(new InstancePointer(manager));
		IClassFactory managerParamValueClassFactory = GlobalClassFactoryMap.get(managerParamValue.getCppInstanceTypeName());
		if (managerParamValueClassFactory != null)
		{
			managerParamValue.setDelegate(true);
			managerParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager)managerParamValueClassFactory.create();
			managerParamValue.setDelegate(true);
			managerParamValue.setInstancePointer(new InstancePointer(manager));
		}
		}
		double curAnimationTimeParamValue = curAnimationTime;
		boolean isEndParamValue = isEnd;
		afterEvent(managerParamValue, curAnimationTimeParamValue, isEndParamValue);
	}

	native private void afterEvent_CDynamicModelObjectManager_Real_ev_bool(long pNativeObject, long manager, double curAnimationTime, boolean isEnd);
	/**
	 * 到达事件发生点之后触发
	 * @param manager 动目标管理器
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

	protected  void resetEvent_CDynamicModelObjectManager_callback(long manager)
	{
		com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager managerParamValue = (manager == 0L ? null : new com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(managerParamValue != null)
		{
		managerParamValue.setDelegate(true);
		managerParamValue.setInstancePointer(new InstancePointer(manager));
		IClassFactory managerParamValueClassFactory = GlobalClassFactoryMap.get(managerParamValue.getCppInstanceTypeName());
		if (managerParamValueClassFactory != null)
		{
			managerParamValue.setDelegate(true);
			managerParamValue = (com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager)managerParamValueClassFactory.create();
			managerParamValue.setDelegate(true);
			managerParamValue.setInstancePointer(new InstancePointer(manager));
		}
		}
		resetEvent(managerParamValue);
	}

	native private void resetEvent_CDynamicModelObjectManager(long pNativeObject, long manager);
	/**
	 * 重置事件
	 * @param manager 动目标管理器
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

	protected  void setTimePosition_Real_callback(double timePosition)
	{
		double timePositionParamValue = timePosition;
		setTimePosition(timePositionParamValue);
	}

	native private void setTimePosition_Real(long pNativeObject, double timePosition);
	/**
	 * 设置事件发生的时间
	 * @param timePosition 事件发生的时间
	 */
	public void setTimePosition(double timePosition)
	{
		double timePositionParamValue = timePosition;
		setTimePosition_Real(this.nativeObject.pointer, timePositionParamValue);
	}
	native private void setTimePosition_Real_NoVirtual(long pNativeObject, double timePosition);
	protected void setTimePosition_NoVirtual(double timePosition)
	{
		double timePositionParamValue = timePosition;
		setTimePosition_Real_NoVirtual(this.nativeObject.pointer, timePositionParamValue);
	}

	protected  double getTimePosition_void_callback()
	{
		double returnValue = getTimePosition();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getTimePosition_void(long pNativeObject);
	/**
	 * 获取事件发生的时间
	 * @return 事件发生的时间
	 */
	public double getTimePosition()
	{
		double returnValue = getTimePosition_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getTimePosition_void_NoVirtual(long pNativeObject);
	protected double getTimePosition_NoVirtual()
	{
		double returnValue = getTimePosition_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setIsFired_ev_bool_callback(boolean fired)
	{
		boolean firedParamValue = fired;
		setIsFired(firedParamValue);
	}

	native private void setIsFired_ev_bool(long pNativeObject, boolean fired);
	/**
	 * 设置该事件是否被触发过
	 * @param fired 是否触发
	 */
	public void setIsFired(boolean fired)
	{
		boolean firedParamValue = fired;
		setIsFired_ev_bool(this.nativeObject.pointer, firedParamValue);
	}
	native private void setIsFired_ev_bool_NoVirtual(long pNativeObject, boolean fired);
	protected void setIsFired_NoVirtual(boolean fired)
	{
		boolean firedParamValue = fired;
		setIsFired_ev_bool_NoVirtual(this.nativeObject.pointer, firedParamValue);
	}

	protected  boolean getIsFired_void_callback()
	{
		boolean returnValue = getIsFired();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getIsFired_void(long pNativeObject);
	/**
	 * 获取该事件是否被触发过
	 * @return 是否触发
	 */
	public boolean getIsFired()
	{
		boolean returnValue = getIsFired_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsFired_void_NoVirtual(long pNativeObject);
	protected boolean getIsFired_NoVirtual()
	{
		boolean returnValue = getIsFired_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean canFired_Real_callback(double timePosition)
	{
		double timePositionParamValue = timePosition;
		boolean returnValue = canFired(timePositionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean canFired_Real(long pNativeObject, double timePosition);
	/**
	 * 在指定的时间点是否可以触发该事件
	 * @param timePosition 时间点
	 * @return 是否可以触发该事件
	 */
	public boolean canFired(double timePosition)
	{
		double timePositionParamValue = timePosition;
		boolean returnValue = canFired_Real(this.nativeObject.pointer, timePositionParamValue);
		return returnValue;
	}
	native private boolean canFired_Real_NoVirtual(long pNativeObject, double timePosition);
	protected boolean canFired_NoVirtual(double timePosition)
	{
		double timePositionParamValue = timePosition;
		boolean returnValue = canFired_Real_NoVirtual(this.nativeObject.pointer, timePositionParamValue);
		return returnValue;
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取事件名称
	 * @return 事件名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setName_EVString_callback(String name)
	{
		String nameParamValue = name;
		setName(nameParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置事件名称
	 * @param name 事件名称
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

	public DynamicObjectEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicObjectEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static DynamicObjectEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicObjectEvent obj = null;
 		if(baseObj instanceof DynamicObjectEvent)
		{
			obj = (DynamicObjectEvent)baseObj;
		} else {
			obj = new DynamicObjectEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicObjectEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
