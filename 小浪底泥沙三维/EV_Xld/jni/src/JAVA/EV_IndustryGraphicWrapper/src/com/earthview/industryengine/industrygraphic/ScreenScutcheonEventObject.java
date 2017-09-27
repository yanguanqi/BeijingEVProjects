package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenScutcheonEventObject extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject", new ScreenScutcheonEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::IndustryGraphic::JCScreenScutcheonEventObjectProxy", new ScreenScutcheonEventObjectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ScreenScutcheonEventObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScreenScutcheonEventObjectProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.industrygraphic.ScreenScutcheonEventObject".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean onMouseDownEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseDownEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseDownEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 鼠标按下响应事件
	 * @param e 事件
	 */
	public boolean onMouseDownEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseDownEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseDownEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseDownEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseDownEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onMouseMoveEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseMoveEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseMoveEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 鼠标移动响应事件
	 * @param e 事件
	 */
	public boolean onMouseMoveEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseMoveEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseMoveEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseMoveEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseMoveEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onMouseUpEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseUpEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseUpEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 鼠标弹起响应事件
	 * @param e 事件
	 */
	public boolean onMouseUpEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseUpEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseUpEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseUpEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseUpEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onMouseWheelEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onMouseWheelEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onMouseWheelEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 鼠标滚轮响应事件
	 * @param e 事件
	 */
	public boolean onMouseWheelEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseWheelEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onMouseWheelEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onMouseWheelEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onMouseWheelEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onKeyDownEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onKeyDownEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyDownEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 键盘按下响应事件
	 * @param e 事件
	 */
	public boolean onKeyDownEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyDownEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onKeyDownEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onKeyDownEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyDownEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onKeyUpEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onKeyUpEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onKeyUpEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 键盘弹起响应事件
	 * @param e 事件
	 */
	public boolean onKeyUpEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyUpEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onKeyUpEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onKeyUpEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onKeyUpEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}

	protected  boolean onSelectedEvent_CScreenScutcheonEvent_callback(long e)
	{
		com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent eParamValue = (e == 0L ? null : new com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eParamValue != null)
		{
		eParamValue.setDelegate(true);
		eParamValue.setInstancePointer(new InstancePointer(e));
		IClassFactory eParamValueClassFactory = GlobalClassFactoryMap.get(eParamValue.getCppInstanceTypeName());
		if (eParamValueClassFactory != null)
		{
			eParamValue.setDelegate(true);
			eParamValue = (com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent)eParamValueClassFactory.create();
			eParamValue.setDelegate(true);
			eParamValue.setInstancePointer(new InstancePointer(e));
		}
		}
		boolean returnValue = onSelectedEvent(eParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean onSelectedEvent_CScreenScutcheonEvent(long pNativeObject, long e);
	/**
	 * 标牌选中响应事件
	 * @param e 事件
	 */
	public boolean onSelectedEvent(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSelectedEvent_CScreenScutcheonEvent(this.nativeObject.pointer, eParamValue);
		return returnValue;
	}
	native private boolean onSelectedEvent_CScreenScutcheonEvent_NoVirtual(long pNativeObject, long e);
	protected boolean onSelectedEvent_NoVirtual(com.earthview.industryengine.industrygraphic.ScreenScutcheonEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		boolean returnValue = onSelectedEvent_CScreenScutcheonEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
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

	public ScreenScutcheonEventObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScreenScutcheonEventObject(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_onMouseDownEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onMouseMoveEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onMouseUpEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onMouseWheelEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onKeyDownEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onKeyUpEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onSelectedEvent_CScreenScutcheonEvent(long pNativeObject, String method);
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onMouseDownEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onMouseDownEvent_CScreenScutcheonEvent_callback");
			this.register_onMouseMoveEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onMouseMoveEvent_CScreenScutcheonEvent_callback");
			this.register_onMouseUpEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onMouseUpEvent_CScreenScutcheonEvent_callback");
			this.register_onMouseWheelEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onMouseWheelEvent_CScreenScutcheonEvent_callback");
			this.register_onKeyDownEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onKeyDownEvent_CScreenScutcheonEvent_callback");
			this.register_onKeyUpEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onKeyUpEvent_CScreenScutcheonEvent_callback");
			this.register_onSelectedEvent_CScreenScutcheonEvent(this.nativeObject.pointer, "onSelectedEvent_CScreenScutcheonEvent_callback");
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static ScreenScutcheonEventObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScreenScutcheonEventObject obj = null;
 		if(baseObj instanceof ScreenScutcheonEventObject)
		{
			obj = (ScreenScutcheonEventObject)baseObj;
		} else {
			obj = new ScreenScutcheonEventObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScreenScutcheonEventObject");
			obj.increaseCast();
		}

		return obj;
	}
}
