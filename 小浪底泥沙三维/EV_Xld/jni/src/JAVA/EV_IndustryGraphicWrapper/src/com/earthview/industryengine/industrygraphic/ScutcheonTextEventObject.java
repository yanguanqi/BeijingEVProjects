package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 标牌事件处理响应对象
 */
public class ScutcheonTextEventObject extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject", new ScutcheonTextEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCScutcheonTextEventObjectProxy", new ScutcheonTextEventObjectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ScutcheonTextEventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScutcheonTextEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.ScutcheonTextEventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean onMouseDownEvent_CScutcheonTextEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScutcheonTextEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseDownEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseDownEvent_CScutcheonTextEvent(long pNativeObject, long e);
	/**
	 * 鼠标按下响应事件
	 * @param e 事件
	 */
	public boolean onMouseDownEvent(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseDownEvent_CScutcheonTextEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseDownEvent_CScutcheonTextEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseDownEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseDownEvent_CScutcheonTextEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onMouseMoveEvent_CScutcheonTextEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScutcheonTextEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseMoveEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseMoveEvent_CScutcheonTextEvent(long pNativeObject, long e);
	/**
	 * 鼠标移动响应事件
	 * @param e 事件
	 */
	public boolean onMouseMoveEvent(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseMoveEvent_CScutcheonTextEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseMoveEvent_CScutcheonTextEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseMoveEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseMoveEvent_CScutcheonTextEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onMouseUpEvent_CScutcheonTextEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScutcheonTextEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseUpEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseUpEvent_CScutcheonTextEvent(long pNativeObject, long e);
	/**
	 * 鼠标弹起响应事件
	 * @param e 事件
	 */
	public boolean onMouseUpEvent(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseUpEvent_CScutcheonTextEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseUpEvent_CScutcheonTextEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseUpEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseUpEvent_CScutcheonTextEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onKeyDownEvent_CScutcheonTextEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScutcheonTextEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onKeyDownEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyDownEvent_CScutcheonTextEvent(long pNativeObject, long e);
	/**
	 * 键盘按下响应事件
	 * @param e 事件
	 */
	public boolean onKeyDownEvent(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyDownEvent_CScutcheonTextEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onKeyDownEvent_CScutcheonTextEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onKeyDownEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyDownEvent_CScutcheonTextEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onKeyUpEvent_CScutcheonTextEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScutcheonTextEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onKeyUpEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyUpEvent_CScutcheonTextEvent(long pNativeObject, long e);
	/**
	 * 键盘弹起响应事件
	 * @param e 事件
	 */
	public boolean onKeyUpEvent(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyUpEvent_CScutcheonTextEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onKeyUpEvent_CScutcheonTextEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onKeyUpEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyUpEvent_CScutcheonTextEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onSelectedEvent_CScutcheonTextEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScutcheonTextEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScutcheonTextEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScutcheonTextEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onSelectedEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onSelectedEvent_CScutcheonTextEvent(long pNativeObject, long e);
	/**
	 * 标牌选中响应事件
	 * @param e 事件
	 */
	public boolean onSelectedEvent(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSelectedEvent_CScutcheonTextEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onSelectedEvent_CScutcheonTextEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onSelectedEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScutcheonTextEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSelectedEvent_CScutcheonTextEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	native private boolean onEvent_CEvent(long pNativeObject, long e);
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onEvent_CEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onEvent_NoVirtual(com.earthview.world.core.Event e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onEvent_CEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	public ScutcheonTextEventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScutcheonTextEventObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		super.onTimerEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_onMouseDownEvent_CScutcheonTextEvent(long pNativeObject, String method);
	native protected void register_onMouseMoveEvent_CScutcheonTextEvent(long pNativeObject, String method);
	native protected void register_onMouseUpEvent_CScutcheonTextEvent(long pNativeObject, String method);
	native protected void register_onKeyDownEvent_CScutcheonTextEvent(long pNativeObject, String method);
	native protected void register_onKeyUpEvent_CScutcheonTextEvent(long pNativeObject, String method);
	native protected void register_onSelectedEvent_CScutcheonTextEvent(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onMouseDownEvent_CScutcheonTextEvent(this.nativeObject.pointer, "onMouseDownEvent_CScutcheonTextEvent_callback");
			this.register_onMouseMoveEvent_CScutcheonTextEvent(this.nativeObject.pointer, "onMouseMoveEvent_CScutcheonTextEvent_callback");
			this.register_onMouseUpEvent_CScutcheonTextEvent(this.nativeObject.pointer, "onMouseUpEvent_CScutcheonTextEvent_callback");
			this.register_onKeyDownEvent_CScutcheonTextEvent(this.nativeObject.pointer, "onKeyDownEvent_CScutcheonTextEvent_callback");
			this.register_onKeyUpEvent_CScutcheonTextEvent(this.nativeObject.pointer, "onKeyUpEvent_CScutcheonTextEvent_callback");
			this.register_onSelectedEvent_CScutcheonTextEvent(this.nativeObject.pointer, "onSelectedEvent_CScutcheonTextEvent_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static ScutcheonTextEventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScutcheonTextEventObject obj = null;
 		if(baseObj instanceof ScutcheonTextEventObject)
		{
			obj = (ScutcheonTextEventObject)baseObj;
		} else {
			obj = new ScutcheonTextEventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScutcheonTextEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
