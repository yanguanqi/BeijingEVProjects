package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象场景表层部件
 */
public class Widget extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CWidget", new WidgetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCWidgetProxy", new WidgetClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 */
	public Widget(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.Widget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setPostion_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, float left, float top, float width, float height);
	/**
	 * 设置窗口布局
	 * @param left 左上角的Ｘ坐标
	 * @param top 左上角的Y坐标
	 * @param width 宽度
	 * @param height 高度
	 */
	public void setPostion(float left, float top, float width, float height)
	{
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		float heightParamValue = height;
		setPostion_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, leftParamValue, topParamValue, widthParamValue, heightParamValue);
	}
	native private void nukeOverlayElement_COverlayElement(long pNativeObject, long element);
	/**
	 * 销毁窗口部件
	 * @param element 窗口部件
	 */
	public void nukeOverlayElement(com.earthview.world.graphic.OverlayElement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		nukeOverlayElement_COverlayElement(this.nativeObject.pointer, elementParamValue);
	}
	native private boolean checkMouseEventAvailable_CGUIEvent_CViewport(long pNativeObject, long event, long viewport);
	/**
	 * 检查窗口部件是否能处理事件
	 * @param event 事件
	 * @param viewport 视口
	 */
	public boolean checkMouseEventAvailable(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = checkMouseEventAvailable_CGUIEvent_CViewport(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}
	native private void setIgnoreCheckMouseMoveBound_ev_bool(long pNativeObject, boolean ignoreCheckMouseMoveBound);
	/**
	 * 设置是否忽略检查
	 * @param ignoreCheckMouseMoveBound 忽略检查
	 */
	public void setIgnoreCheckMouseMoveBound(boolean ignoreCheckMouseMoveBound)
	{
		boolean ignoreCheckMouseMoveBoundParamValue = ignoreCheckMouseMoveBound;
		setIgnoreCheckMouseMoveBound_ev_bool(this.nativeObject.pointer, ignoreCheckMouseMoveBoundParamValue);
	}
	native private long getOverlayElement_void(long pNativeObject);
	/**
	 * 返回顶级的overlayElement
	 */
	public com.earthview.world.graphic.OverlayContainer getOverlayElement()
	{
		long returnValue = getOverlayElement_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayContainer __returnValue = new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate, "COverlayContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayContainer");
		}
		return __returnValue;
	}
	native private long getName_void(long pNativeObject);
	/**
	 * 返回名字
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void hide_void(long pNativeObject);
	/**
	 * 隐藏窗口部件
	 */
	public void hide()
	{
		hide_void(this.nativeObject.pointer);
	}
	native private void show_void(long pNativeObject);
	/**
	 * 显示窗口部件
	 */
	public void show()
	{
		show_void(this.nativeObject.pointer);
	}
	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 返回窗体部件是否可见
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setZorder_int(long pNativeObject, int zorder);
	/**
	 * 设置窗口疗部件zorder
	 * @param zorder zorder
	 */
	public void setZorder(int zorder)
	{
		int zorderParamValue = zorder;
		setZorder_int(this.nativeObject.pointer, zorderParamValue);
	}
	native private int getZorder_void(long pNativeObject);
	/**
	 * 返回窗口疗部件zorder
	 */
	public int getZorder()
	{
		int returnValue = getZorder_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void additionMouseUp_void_callback()
	{
		additionMouseUp();
	}

	native private void additionMouseUp_void(long pNativeObject);
	public void additionMouseUp()
	{
		additionMouseUp_void(this.nativeObject.pointer);
	}
	native private void additionMouseUp_void_NoVirtual(long pNativeObject);
	protected void additionMouseUp_NoVirtual()
	{
		additionMouseUp_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean handleMouseUpEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handleMouseUpEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseUpEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理鼠标按键松开事件
	 * @param event 事件对象
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleMouseUpEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleMouseUpEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handleMouseMoveEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handleMouseMoveEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理鼠标按键移动事件
	 * @param event 事件对象
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleMouseMoveEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleMouseMoveEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handleMouseDownEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handleMouseDownEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理鼠标按键按下事件
	 * @param event 事件对象
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleMouseDownEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleMouseDownEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handeMouseDbClickEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handeMouseDbClickEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handeMouseDbClickEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理鼠标按键双击按下事件
	 * @param event 事件对象
	 */
	public boolean handeMouseDbClickEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handeMouseDbClickEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handeMouseDbClickEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handeMouseDbClickEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handleKeyDownEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handleKeyDownEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleKeyDownEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理键盘按下事件
	 * @param event 事件对象
	 */
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleKeyDownEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleKeyDownEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleKeyDownEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handleKeyUpEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handleKeyUpEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleKeyUpEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理键盘松开事件
	 * @param event 事件对象
	 */
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleKeyUpEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleKeyUpEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleKeyUpEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handleUserEvent_CGUIEvent_callback(long event)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		boolean returnValue = handleUserEvent(eventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理自定义事件
	 * @param event 事件对象
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	protected  boolean handleFrameEvent_CGUIEvent_CViewport_callback(long event, long viewport)
	{
		com.earthview.world.spatial.systemui.Guievent eventParamValue = (event == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(eventParamValue != null)
		{
		eventParamValue.setDelegate(true);
		eventParamValue.setInstancePointer(new InstancePointer(event));
		IClassFactory eventParamValueClassFactory = GlobalClassFactoryMap.get(eventParamValue.getCppInstanceTypeName());
		if (eventParamValueClassFactory != null)
		{
			eventParamValue.setDelegate(true);
			eventParamValue = (com.earthview.world.spatial.systemui.Guievent)eventParamValueClassFactory.create();
			eventParamValue.setDelegate(true);
			eventParamValue.setInstancePointer(new InstancePointer(event));
		}
		}
		com.earthview.world.graphic.Viewport viewportParamValue = (viewport == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(viewportParamValue != null)
		{
		viewportParamValue.setDelegate(true);
		viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		IClassFactory viewportParamValueClassFactory = GlobalClassFactoryMap.get(viewportParamValue.getCppInstanceTypeName());
		if (viewportParamValueClassFactory != null)
		{
			viewportParamValue.setDelegate(true);
			viewportParamValue = (com.earthview.world.graphic.Viewport)viewportParamValueClassFactory.create();
			viewportParamValue.setDelegate(true);
			viewportParamValue.setInstancePointer(new InstancePointer(viewport));
		}
		}
		boolean returnValue = handleFrameEvent(eventParamValue, viewportParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, long event, long viewport);
	/**
	 * 处理帆事件
	 * @param event 事件对象
	 * @param viewport 视口
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_CViewport_NoVirtual(long pNativeObject, long event, long viewport);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport_NoVirtual(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}

	/**
	 * 挎贝构造函数
	 */
	public Widget(com.earthview.world.spatial3d.controls.Widget rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.Widget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void OperatorAssign_CWidget(long pNativeObject, long rhs);
	public void OperatorAssign(com.earthview.world.spatial3d.controls.Widget rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CWidget(this.nativeObject.pointer, rhsParamValue);
	}
	native private long get_mElement_void(long pNativeObject);
	public com.earthview.world.graphic.OverlayContainer get_mElement()
	{
		long jniValue = get_mElement_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayContainer __returnValue = new com.earthview.world.graphic.OverlayContainer(CreatedWhenConstruct.CWC_NotToCreate, "COverlayContainer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayContainer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayContainer");
		}
		return __returnValue;
	}
	
	native private void set_mElement_COverlayContainer (long pNativeObject, long value);
	public void set_mElement(com.earthview.world.graphic.OverlayContainer mElement)
	{
		long mElementParamValue = (mElement == null ? 0L : mElement.nativeObject.pointer);
		
		set_mElement_COverlayContainer(this.nativeObject.pointer, mElementParamValue);
	}
	
	native private String get_mName_void(long pNativeObject);
	public String get_mName()
	{
		String jniValue = get_mName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mName_EVString (long pNativeObject, String value);
	public void set_mName(String mName)
	{
		String mNameParamValue = mName;
		
		set_mName_EVString(this.nativeObject.pointer, mNameParamValue);
	}
	
	native private float get_mleft_void(long pNativeObject);
	public float get_mleft()
	{
		float jniValue = get_mleft_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mleft_ev_real32 (long pNativeObject, float value);
	public void set_mleft(float mleft)
	{
		float mleftParamValue = mleft;
		
		set_mleft_ev_real32(this.nativeObject.pointer, mleftParamValue);
	}
	
	native private float get_mtop_void(long pNativeObject);
	public float get_mtop()
	{
		float jniValue = get_mtop_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtop_ev_real32 (long pNativeObject, float value);
	public void set_mtop(float mtop)
	{
		float mtopParamValue = mtop;
		
		set_mtop_ev_real32(this.nativeObject.pointer, mtopParamValue);
	}
	
	native private float get_mwidth_void(long pNativeObject);
	public float get_mwidth()
	{
		float jniValue = get_mwidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mwidth_ev_real32 (long pNativeObject, float value);
	public void set_mwidth(float mwidth)
	{
		float mwidthParamValue = mwidth;
		
		set_mwidth_ev_real32(this.nativeObject.pointer, mwidthParamValue);
	}
	
	native private float get_mheight_void(long pNativeObject);
	public float get_mheight()
	{
		float jniValue = get_mheight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mheight_ev_real32 (long pNativeObject, float value);
	public void set_mheight(float mheight)
	{
		float mheightParamValue = mheight;
		
		set_mheight_ev_real32(this.nativeObject.pointer, mheightParamValue);
	}
	
	native private int get_mZorder_void(long pNativeObject);
	public int get_mZorder()
	{
		int jniValue = get_mZorder_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mZorder_int (long pNativeObject, int value);
	public void set_mZorder(int mZorder)
	{
		int mZorderParamValue = mZorder;
		
		set_mZorder_int(this.nativeObject.pointer, mZorderParamValue);
	}
	
	native private int get_mvisibleMode_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.VisibleMode get_mvisibleMode()
	{
		int jniValue = get_mvisibleMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.controls.VisibleMode.toEnum(jniValue);
	}
	
	native private void set_mvisibleMode_VisibleMode (long pNativeObject, int value);
	public void set_mvisibleMode(com.earthview.world.spatial3d.controls.VisibleMode mvisibleMode)
	{
		int mvisibleModeParamValue = mvisibleMode.getValue();
		
		set_mvisibleMode_VisibleMode(this.nativeObject.pointer, mvisibleModeParamValue);
	}
	
	native private boolean get_mignoreCheckMouseMoveBound_void(long pNativeObject);
	public boolean get_mignoreCheckMouseMoveBound()
	{
		boolean jniValue = get_mignoreCheckMouseMoveBound_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mignoreCheckMouseMoveBound_ev_bool (long pNativeObject, boolean value);
	public void set_mignoreCheckMouseMoveBound(boolean mignoreCheckMouseMoveBound)
	{
		boolean mignoreCheckMouseMoveBoundParamValue = mignoreCheckMouseMoveBound;
		
		set_mignoreCheckMouseMoveBound_ev_bool(this.nativeObject.pointer, mignoreCheckMouseMoveBoundParamValue);
	}
	
	public Widget(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Widget(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_additionMouseUp_void(long pNativeObject, String method);
	native protected void register_handleMouseUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handeMouseDbClickEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_additionMouseUp_void(this.nativeObject.pointer, "additionMouseUp_void_callback");
			this.register_handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseUpEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, "handeMouseDbClickEvent_CGUIEvent_callback");
			this.register_handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyDownEvent_CGUIEvent_callback");
			this.register_handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyUpEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_CViewport_callback");
		}
	}
	
	public static Widget fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Widget obj = null;
 		if(baseObj instanceof Widget)
		{
			obj = (Widget)baseObj;
		} else {
			obj = new Widget(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWidget");
			obj.increaseCast();
		}

		return obj;
	}
}
