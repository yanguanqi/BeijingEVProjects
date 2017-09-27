package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维普通场景控件类
 */
public class C3DControl extends com.earthview.world.spatial.atlas.Ispatialcontrol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::C3DControl", new C3DControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JC3DControlProxy", new C3DControlClassFactory());
	}

	/**
	 * 构造函数
	 * @param renderWindow 内部的渲染窗体
	 */
	public C3DControl(com.earthview.world.graphic.RenderWindow ref_renderWindow) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_renderWindowPtr = new BasePointer(ref_renderWindow);
		list.add("ref_renderWindow", ref_renderWindowPtr.get());
		Create("JC3DControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.C3DControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param hwnd 窗口句柄
	 * @param winWidth 窗口宽度
	 * @param winHeight 窗口高度
	 */
	public C3DControl(long hwnd, long winWidth, long winHeight) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer hwndPtr = new BasePointer(hwnd);
		list.add("hwnd", hwndPtr.get());
		BasePointer winWidthPtr = new BasePointer(winWidth);
		list.add("winWidth", winWidthPtr.get());
		BasePointer winHeightPtr = new BasePointer(winHeight);
		list.add("winHeight", winHeightPtr.get());
		Create("JC3DControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.C3DControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param strHwnd 窗口句柄
	 * @param winWidth 窗口宽度
	 * @param winHeight 窗口高度
	 */
	public C3DControl(String strHwnd, long winWidth, long winHeight) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strHwndPtr = new BasePointer(strHwnd);
		list.add("strHwnd", strHwndPtr.get());
		BasePointer winWidthPtr = new BasePointer(winWidth);
		list.add("winWidth", winWidthPtr.get());
		BasePointer winHeightPtr = new BasePointer(winHeight);
		list.add("winHeight", winHeightPtr.get());
		Create("JC3DControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.C3DControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param winWidth 窗口宽度
	 * @param winHeight 窗口高度
	 * @param windowName 窗口名称
	 * @param isFullScreen 是否全屏
	 */
	public C3DControl(long winWidth, long winHeight, String windowName, boolean isFullScreen) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer winWidthPtr = new BasePointer(winWidth);
		list.add("winWidth", winWidthPtr.get());
		BasePointer winHeightPtr = new BasePointer(winHeight);
		list.add("winHeight", winHeightPtr.get());
		BasePointer windowNamePtr = new BasePointer(windowName);
		list.add("windowName", windowNamePtr.get());
		BasePointer isFullScreenPtr = new BasePointer(isFullScreen);
		list.add("isFullScreen", isFullScreenPtr.get());
		Create("JC3DControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.C3DControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void addGuiHandler_CGUIEventHandler(long pNativeObject, long ref_guiEventHandler);
	/**
	 * 添加事件处理器
	 * @param guiEventHandler 事件处理器
	 */
	public void addGuiHandler(com.earthview.world.spatial3d.controls.Guieventhandler ref_guiEventHandler)
	{
		long ref_guiEventHandlerParamValue = (ref_guiEventHandler == null ? 0L : ref_guiEventHandler.nativeObject.pointer);
		addGuiHandler_CGUIEventHandler(this.nativeObject.pointer, ref_guiEventHandlerParamValue);
	}
	native private void removeHandler_CGUIEventHandler(long pNativeObject, long guiEventHandler);
	/**
	 * 删除事件处理器
	 * @param guiEventHandler 事件处理器
	 */
	public void removeHandler(com.earthview.world.spatial3d.controls.Guieventhandler guiEventHandler)
	{
		long guiEventHandlerParamValue = (guiEventHandler == null ? 0L : guiEventHandler.nativeObject.pointer);
		removeHandler_CGUIEventHandler(this.nativeObject.pointer, guiEventHandlerParamValue);
	}
	native private void addMovable_CMovableObject_CVector3(long pNativeObject, long ref_movable, long pos);
	/**
	 * 添加可移动对象
	 * @param movable 可移动对象
	 * @param pos 位置
	 */
	public void addMovable(com.earthview.world.graphic.MovableObject ref_movable, com.earthview.world.spatial.math.Vector3 pos)
	{
		long ref_movableParamValue = (ref_movable == null ? 0L : ref_movable.nativeObject.pointer);
		long posParamValue = pos.nativeObject.pointer;
		addMovable_CMovableObject_CVector3(this.nativeObject.pointer, ref_movableParamValue, posParamValue);
	}
	native private void removeMovable_CMovableObject(long pNativeObject, long movable);
	/**
	 * 删除可移动对象
	 * @param movable 可移动对象
	 */
	public void removeMovable(com.earthview.world.graphic.MovableObject movable)
	{
		long movableParamValue = (movable == null ? 0L : movable.nativeObject.pointer);
		removeMovable_CMovableObject(this.nativeObject.pointer, movableParamValue);
	}
	native private void removeMovable_EVString(long pNativeObject, String name);
	/**
	 * 删除可移动对象
	 * @param name 可移动对象名称
	 */
	public void removeMovable(String name)
	{
		String nameParamValue = name;
		removeMovable_EVString(this.nativeObject.pointer, nameParamValue);
	}
	protected  void windowResized_void_callback()
	{
		windowResized();
	}

	native private void windowResized_void(long pNativeObject);
	/**
	 * 自动调整窗口内渲染窗体的大小
	 */
	public void windowResized()
	{
		windowResized_void(this.nativeObject.pointer);
	}
	native private void windowResized_void_NoVirtual(long pNativeObject);
	protected void windowResized_NoVirtual()
	{
		windowResized_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void resize_ev_uint32_ev_uint32(long pNativeObject, long width, long height);
	/**
	 * 自动调整窗口内渲染窗体的大小
	 * @param width 宽度
	 * @param height 高度
	 */
	public void resize(long width, long height)
	{
		long widthParamValue = width;
		long heightParamValue = height;
		resize_ev_uint32_ev_uint32(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	protected  void mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress(xParamValue, yParamValue, buttonParamValue);
	}

	native private void mouseButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 接收鼠标按下事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseButtonPress_ev_int32_ev_int32_ev_uint32_NoVirtual(long pNativeObject, int x, int y, long button);
	protected void mouseButtonPress_NoVirtual(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress_ev_int32_ev_int32_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}

	protected  void mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseDoubleButtonPress(xParamValue, yParamValue, buttonParamValue);
	}

	native private void mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 接收鼠标双击事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseDoubleButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_NoVirtual(long pNativeObject, int x, int y, long button);
	protected void mouseDoubleButtonPress_NoVirtual(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}

	protected  void mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonRelease(xParamValue, yParamValue, buttonParamValue);
	}

	native private void mouseButtonRelease_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	/**
	 * 接收鼠标松开事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseButtonRelease(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonRelease_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseButtonRelease_ev_int32_ev_int32_ev_uint32_NoVirtual(long pNativeObject, int x, int y, long button);
	protected void mouseButtonRelease_NoVirtual(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonRelease_ev_int32_ev_int32_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}

	protected  void mouseMove_ev_int32_ev_int32_callback(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		mouseMove(xParamValue, yParamValue);
	}

	native private void mouseMove_ev_int32_ev_int32(long pNativeObject, int x, int y);
	/**
	 * 接收鼠标移动事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 */
	public void mouseMove(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		mouseMove_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void mouseMove_ev_int32_ev_int32_NoVirtual(long pNativeObject, int x, int y);
	protected void mouseMove_NoVirtual(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		mouseMove_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
	}

	protected  void mouseWheel_ev_real32_callback(float delta)
	{
		float deltaParamValue = delta;
		mouseWheel(deltaParamValue);
	}

	native private void mouseWheel_ev_real32(long pNativeObject, float delta);
	/**
	 * 接收鼠标滚轮事件
	 * @param delta 鼠标的滚动的值
	 */
	public void mouseWheel(float delta)
	{
		float deltaParamValue = delta;
		mouseWheel_ev_real32(this.nativeObject.pointer, deltaParamValue);
	}
	native private void mouseWheel_ev_real32_NoVirtual(long pNativeObject, float delta);
	protected void mouseWheel_NoVirtual(float delta)
	{
		float deltaParamValue = delta;
		mouseWheel_ev_real32_NoVirtual(this.nativeObject.pointer, deltaParamValue);
	}

	native private void keyPress_ev_int32_ev_int32(long pNativeObject, int key, int virtualKey);
	/**
	 * 接收键盘按下事件
	 * @param key 按键值
	 * @param virtualKey 虚拟的按键值，CGUIEvent::GUIKeySymbol的组合
	 */
	public void keyPress(int key, int virtualKey)
	{
		int keyParamValue = key;
		int virtualKeyParamValue = virtualKey;
		keyPress_ev_int32_ev_int32(this.nativeObject.pointer, keyParamValue, virtualKeyParamValue);
	}
	native private void keyRelease_ev_int32_ev_int32(long pNativeObject, int key, int virtualKey);
	/**
	 * 接收键盘松开事件
	 * @param key 按键值
	 * @param virtualKey 虚拟的按键值，CGUIEvent::GUIKeySymbol的组合
	 */
	public void keyRelease(int key, int virtualKey)
	{
		int keyParamValue = key;
		int virtualKeyParamValue = virtualKey;
		keyRelease_ev_int32_ev_int32(this.nativeObject.pointer, keyParamValue, virtualKeyParamValue);
	}
	native private void windowLoseFocus_void(long pNativeObject);
	/**
	 * 窗体失去焦点触发
	 */
	public void windowLoseFocus()
	{
		windowLoseFocus_void(this.nativeObject.pointer);
	}
	protected  boolean eventStage_void_callback()
	{
		boolean returnValue = eventStage();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean eventStage_void(long pNativeObject);
	/**
	 * 处理所有事件
	 * @return 返回true
	 */
	public boolean eventStage()
	{
		boolean returnValue = eventStage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean eventStage_void_NoVirtual(long pNativeObject);
	protected boolean eventStage_NoVirtual()
	{
		boolean returnValue = eventStage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getRenderWindow_void(long pNativeObject);
	/**
	 * 获得渲染窗体
	 * @return 渲染窗体
	 */
	public com.earthview.world.graphic.RenderWindow getRenderWindow()
	{
		long returnValue = getRenderWindow_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.RenderWindow __returnValue = new com.earthview.world.graphic.RenderWindow(CreatedWhenConstruct.CWC_NotToCreate, "CRenderWindow");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.RenderWindow)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderWindow");
		}
		return __returnValue;
	}
	native private long getSceneManager_void(long pNativeObject);
	/**
	 * 获得场景管理器
	 * @return 场景管理器
	 */
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private long getCamera_void(long pNativeObject);
	/**
	 * 获得相机
	 * @return 相机
	 */
	public com.earthview.world.graphic.Camera getCamera()
	{
		long returnValue = getCamera_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	native private long getViewport_void(long pNativeObject);
	/**
	 * 获得视口
	 * @return 视口
	 */
	public com.earthview.world.graphic.Viewport getViewport()
	{
		long returnValue = getViewport_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getScene_void(long pNativeObject);
	/**
	 * 获得场景
	 * @return 场景
	 */
	public com.earthview.world.spatial.atlas.Iscene getScene()
	{
		long returnValue = getScene_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获得渲染窗体名称
	 * @return 名称
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

	native private void userEvent_CGUIEventPtr(long pNativeObject, long e);
	/**
	 * 接收自定义事件
	 * @param e 自定义事件
	 */
	public void userEvent(com.earthview.world.spatial.systemui.Guieventptr e)
	{
		long eParamValue = e.nativeObject.pointer;
		userEvent_CGUIEventPtr(this.nativeObject.pointer, eParamValue);
	}
	public C3DControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public C3DControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取控件类型
	 * @param  
	 * @return 类型
	 */
	public com.earthview.world.spatial.atlas.EVSpatialControlType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取控件类型的字符串形式
	 * @param  
	 */
	public String getTypeString()
	{
		return super.getTypeString_NoVirtual();
	}
	/**
	 * 接收外部通知，刷新控件的视口区域
	 * @param args 视口参数
	 */
	public void notifyViewChanged(com.earthview.world.spatial.Iviewargs args)
	{
		super.notifyViewChanged_NoVirtual(args);
	}
	/**
	 * 添加视口监听
	 * @param externalListener 监听器
	 */
	public boolean addViewListener(com.earthview.world.spatial.Iviewlistener ref_externalListener)
	{
		return super.addViewListener_NoVirtual(ref_externalListener);
	}
	/**
	 * 获取视口监听器的数量
	 * @param  
	 * @return 数量
	 */
	public long getViewListenerCount()
	{
		return super.getViewListenerCount_NoVirtual();
	}
	/**
	 * 获取指定索引徙的视口监听对象
	 * @param index 索引
	 */
	public com.earthview.world.spatial.Iviewlistener getViewListener(long index)
	{
		return super.getViewListener_NoVirtual(index);
	}
	/**
	 * 判断指定的监听是否存在
	 * @param externalListener 监听
	 */
	public boolean existViewListener(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		return super.existViewListener_NoVirtual(externalListener);
	}
	/**
	 * 移除指定索引处的监听
	 * @param index 监听索引
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeViewListener(long index)
	{
		return super.removeViewListener_NoVirtual(index);
	}
	/**
	 * 移除指定的监听
	 * @param externalListener 监听
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeViewListener(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		return super.removeViewListener_NoVirtual(externalListener);
	}
	/**
	 * 清空所有的监听
	 * @param  
	 */
	public void clearViewListeners()
	{
		super.clearViewListeners_NoVirtual();
	}
	
	native protected void register_windowResized_void(long pNativeObject, String method);
	native protected void register_mouseButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_mouseButtonRelease_ev_int32_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_mouseMove_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_mouseWheel_ev_real32(long pNativeObject, String method);
	native protected void register_eventStage_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getTypeString_void(long pNativeObject, String method);
	native protected void register_notifyViewChanged_IViewArgs(long pNativeObject, String method);
	native protected void register_addViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_getViewListenerCount_void(long pNativeObject, String method);
	native protected void register_getViewListener_ev_uint32(long pNativeObject, String method);
	native protected void register_existViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_removeViewListener_ev_uint32(long pNativeObject, String method);
	native protected void register_removeViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_clearViewListeners_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_windowResized_void(this.nativeObject.pointer, "windowResized_void_callback");
			this.register_mouseButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, "mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback");
			this.register_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, "mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback");
			this.register_mouseButtonRelease_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, "mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback");
			this.register_mouseMove_ev_int32_ev_int32(this.nativeObject.pointer, "mouseMove_ev_int32_ev_int32_callback");
			this.register_mouseWheel_ev_real32(this.nativeObject.pointer, "mouseWheel_ev_real32_callback");
			this.register_eventStage_void(this.nativeObject.pointer, "eventStage_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getTypeString_void(this.nativeObject.pointer, "getTypeString_void_callback");
			this.register_notifyViewChanged_IViewArgs(this.nativeObject.pointer, "notifyViewChanged_IViewArgs_callback");
			this.register_addViewListener_IViewListener(this.nativeObject.pointer, "addViewListener_IViewListener_callback");
			this.register_getViewListenerCount_void(this.nativeObject.pointer, "getViewListenerCount_void_callback");
			this.register_getViewListener_ev_uint32(this.nativeObject.pointer, "getViewListener_ev_uint32_callback");
			this.register_existViewListener_IViewListener(this.nativeObject.pointer, "existViewListener_IViewListener_callback");
			this.register_removeViewListener_ev_uint32(this.nativeObject.pointer, "removeViewListener_ev_uint32_callback");
			this.register_removeViewListener_IViewListener(this.nativeObject.pointer, "removeViewListener_IViewListener_callback");
			this.register_clearViewListeners_void(this.nativeObject.pointer, "clearViewListeners_void_callback");
		}
	}
	
	public static C3DControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		C3DControl obj = null;
 		if(baseObj instanceof C3DControl)
		{
			obj = (C3DControl)baseObj;
		} else {
			obj = new C3DControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "C3DControl");
			obj.increaseCast();
		}

		return obj;
	}
}
