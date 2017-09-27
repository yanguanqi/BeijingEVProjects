package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象场景表层部件管理器
 */
public class WidgetManager extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CWidgetManager", new WidgetManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCWidgetManagerProxy", new WidgetManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 * @param viewport 视口
	 */
	public WidgetManager(String name, com.earthview.world.graphic.Viewport ref_viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		Create("JCWidgetManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.WidgetManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setSceneManager_CSceneManager(long pNativeObject, long ref_sceneManager);
	/**
	 * 设置场景管理器
	 * @param sceneManager 场景管理器
	 */
	public void setSceneManager(com.earthview.world.graphic.SceneManager ref_sceneManager)
	{
		long ref_sceneManagerParamValue = (ref_sceneManager == null ? 0L : ref_sceneManager.nativeObject.pointer);
		setSceneManager_CSceneManager(this.nativeObject.pointer, ref_sceneManagerParamValue);
	}
	native private void show_void(long pNativeObject);
	/**
	 * 显示窗口部件
	 */
	public void show()
	{
		show_void(this.nativeObject.pointer);
	}
	native private void hide_void(long pNativeObject);
	/**
	 * 隐藏窗口部件
	 */
	public void hide()
	{
		hide_void(this.nativeObject.pointer);
	}
	native private void sort_void(long pNativeObject);
	/**
	 * 对窗口部件进行排序
	 */
	public void sort()
	{
		sort_void(this.nativeObject.pointer);
	}
	native private void addWidget_CWidget(long pNativeObject, long ref_widget);
	/**
	 * 增加窗口部件
	 * @param widget 窗口部件
	 */
	public void addWidget(com.earthview.world.spatial3d.controls.Widget ref_widget)
	{
		long ref_widgetParamValue = (ref_widget == null ? 0L : ref_widget.nativeObject.pointer);
		addWidget_CWidget(this.nativeObject.pointer, ref_widgetParamValue);
	}
	native private void removeWidget_CWidget(long pNativeObject, long widget);
	/**
	 * 移除窗口部件
	 * @param widget 窗口部件
	 */
	public void removeWidget(com.earthview.world.spatial3d.controls.Widget widget)
	{
		long widgetParamValue = (widget == null ? 0L : widget.nativeObject.pointer);
		removeWidget_CWidget(this.nativeObject.pointer, widgetParamValue);
	}
	native private void removeWidget_EVString(long pNativeObject, String widgetName);
	/**
	 * 移除窗口部件
	 * @param widgetName 窗口部件的名字
	 */
	public void removeWidget(String widgetName)
	{
		String widgetNameParamValue = widgetName;
		removeWidget_EVString(this.nativeObject.pointer, widgetNameParamValue);
	}
	native private long getWidget_EVString(long pNativeObject, String widgetName);
	/**
	 * 获取窗口部件
	 * @param widgetName 窗口部件的名字
	 */
	public com.earthview.world.spatial3d.controls.Widget getWidget(String widgetName)
	{
		String widgetNameParamValue = widgetName;
		long returnValue = getWidget_EVString(this.nativeObject.pointer, widgetNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.Widget __returnValue = new com.earthview.world.spatial3d.controls.Widget(CreatedWhenConstruct.CWC_NotToCreate, "CWidget");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.Widget)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWidget");
		}
		return __returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取窗口部件的名字
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleMouseDownEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleMouseDownEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标按下事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseDownEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseDownEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleMouseMoveEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleMouseMoveEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标移动事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseMoveEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseMoveEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleMouseUpEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleMouseUpEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseUpEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标松开事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseUpEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseUpEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handeMouseDbClickEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handeMouseDbClickEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handeMouseDbClickEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标双击事件
	 * @param guiEvent 事件对象
	 */
	public boolean handeMouseDbClickEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handeMouseDbClickEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handeMouseDbClickEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handeMouseDbClickEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleKeyDownEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleKeyDownEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleKeyDownEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标按键按下事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleKeyDownEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleKeyDownEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleKeyDownEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleKeyUpEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleKeyUpEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleKeyUpEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标按键松开事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleKeyUpEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleKeyUpEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleKeyUpEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleUserEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleUserEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理处定义事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleFrameEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleFrameEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理帧事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	/**
	 * 挎贝构造函数
	 */
	public WidgetManager(com.earthview.world.spatial3d.controls.WidgetManager rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("JCWidgetManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.WidgetManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void OperatorAssign_CWidgetManager(long pNativeObject, long rhs);
	/**
	 * 赋值运逄符
	 */
	public void OperatorAssign(com.earthview.world.spatial3d.controls.WidgetManager rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CWidgetManager(this.nativeObject.pointer, rhsParamValue);
	}
	native private long get_mWidgetList_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.WidgetList get_mWidgetList()
	{
		long jniValue = get_mWidgetList_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.controls.WidgetList __returnValue = new com.earthview.world.spatial3d.controls.WidgetList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CWidgetList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.WidgetList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CWidgetList");
		}
		return __returnValue;
	}
	
	native private void set_mWidgetList_CWidgetList (long pNativeObject, long value);
	public void set_mWidgetList(com.earthview.world.spatial3d.controls.WidgetList mWidgetList)
	{
		long mWidgetListParamValue = mWidgetList.nativeObject.pointer;
		
		set_mWidgetList_CWidgetList(this.nativeObject.pointer, mWidgetListParamValue);
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
	
	native private long get_mviewport_void(long pNativeObject);
	public com.earthview.world.graphic.Viewport get_mviewport()
	{
		long jniValue = get_mviewport_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	
	native private void set_mviewport_CViewport (long pNativeObject, long value);
	public void set_mviewport(com.earthview.world.graphic.Viewport mviewport)
	{
		long mviewportParamValue = (mviewport == null ? 0L : mviewport.nativeObject.pointer);
		
		set_mviewport_CViewport(this.nativeObject.pointer, mviewportParamValue);
	}
	
	native private long get_mOverlayLayer_void(long pNativeObject);
	public com.earthview.world.graphic.Overlay get_mOverlayLayer()
	{
		long jniValue = get_mOverlayLayer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Overlay __returnValue = new com.earthview.world.graphic.Overlay(CreatedWhenConstruct.CWC_NotToCreate, "COverlay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Overlay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlay");
		}
		return __returnValue;
	}
	
	native private void set_mOverlayLayer_COverlay (long pNativeObject, long value);
	public void set_mOverlayLayer(com.earthview.world.graphic.Overlay mOverlayLayer)
	{
		long mOverlayLayerParamValue = (mOverlayLayer == null ? 0L : mOverlayLayer.nativeObject.pointer);
		
		set_mOverlayLayer_COverlay(this.nativeObject.pointer, mOverlayLayerParamValue);
	}
	
	public WidgetManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WidgetManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handeMouseDbClickEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseUpEvent_CGUIEvent_callback");
			this.register_handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, "handeMouseDbClickEvent_CGUIEvent_callback");
			this.register_handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyDownEvent_CGUIEvent_callback");
			this.register_handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyUpEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_callback");
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static WidgetManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WidgetManager obj = null;
 		if(baseObj instanceof WidgetManager)
		{
			obj = (WidgetManager)baseObj;
		} else {
			obj = new WidgetManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWidgetManager");
			obj.increaseCast();
		}

		return obj;
	}
}
