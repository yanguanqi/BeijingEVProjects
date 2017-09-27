package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 窗口中心十字叉，目前没有使用
 */
public class CrossWidget extends com.earthview.world.spatial3d.controls.Widget {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCrossWidget", new CrossWidgetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCrossWidgetProxy", new CrossWidgetClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 */
	public CrossWidget(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCCrossWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CrossWidget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 挎贝构造函数
	 */
	public CrossWidget(com.earthview.world.spatial3d.controls.CrossWidget rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCCrossWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CrossWidget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void OperatorAssign_CCrossWidget(long pNativeObject, long rhs);
	/**
	 * 赋值运算符
	 */
	public void OperatorAssign(com.earthview.world.spatial3d.controls.CrossWidget rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CCrossWidget(this.nativeObject.pointer, rhsParamValue);
	}
	native private long get_mPanel_void(long pNativeObject);
	public com.earthview.world.graphic.PanelOverlayElement get_mPanel()
	{
		long jniValue = get_mPanel_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.PanelOverlayElement __returnValue = new com.earthview.world.graphic.PanelOverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "CPanelOverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PanelOverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPanelOverlayElement");
		}
		return __returnValue;
	}
	
	native private void set_mPanel_CPanelOverlayElement (long pNativeObject, long value);
	public void set_mPanel(com.earthview.world.graphic.PanelOverlayElement mPanel)
	{
		long mPanelParamValue = (mPanel == null ? 0L : mPanel.nativeObject.pointer);
		
		set_mPanel_CPanelOverlayElement(this.nativeObject.pointer, mPanelParamValue);
	}
	
	public CrossWidget(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CrossWidget(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void additionMouseUp()
	{
		super.additionMouseUp_NoVirtual();
	}
	/**
	 * 处理鼠标按键松开事件
	 * @param event 事件对象
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseUpEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键移动事件
	 * @param event 事件对象
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseMoveEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键按下事件
	 * @param event 事件对象
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleMouseDownEvent_NoVirtual(event);
	}
	/**
	 * 处理鼠标按键双击按下事件
	 * @param event 事件对象
	 */
	public boolean handeMouseDbClickEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handeMouseDbClickEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘按下事件
	 * @param event 事件对象
	 */
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyDownEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘松开事件
	 * @param event 事件对象
	 */
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyUpEvent_NoVirtual(event);
	}
	/**
	 * 处理自定义事件
	 * @param event 事件对象
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleUserEvent_NoVirtual(event);
	}
	/**
	 * 处理帆事件
	 * @param event 事件对象
	 * @param viewport 视口
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		return super.handleFrameEvent_NoVirtual(event, viewport);
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
	
	public static CrossWidget fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CrossWidget obj = null;
 		if(baseObj instanceof CrossWidget)
		{
			obj = (CrossWidget)baseObj;
		} else {
			obj = new CrossWidget(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCrossWidget");
			obj.increaseCast();
		}

		return obj;
	}
}
