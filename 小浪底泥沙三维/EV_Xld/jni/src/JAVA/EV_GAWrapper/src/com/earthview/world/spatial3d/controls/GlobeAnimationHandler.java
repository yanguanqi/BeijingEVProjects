package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAnimationHandler extends com.earthview.world.spatial3d.controls.GlobeLockCameraHandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeAnimationHandler", new GlobeAnimationHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGlobeAnimationHandlerProxy", new GlobeAnimationHandlerClassFactory());
	}

	/**
	 * 构造函数
	 * @param camera 相机
	 * @param sceneManager 场景管理器
	 * @param viewport 视口
	 */
	public GlobeAnimationHandler(com.earthview.world.spatial3d.GlobeCamera ref_camera, com.earthview.world.spatial3d.GeoSceneManager ref_sceneManager, com.earthview.world.graphic.Viewport ref_viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		Create("JCGlobeAnimationHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GlobeAnimationHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void addRouteFlyListener_CRouteFlyListener(long pNativeObject, long routeFlyListener);
	/**
	 * 增加监听
	 * @param guiEvent 监听
	 */
	public void addRouteFlyListener(com.earthview.world.spatial3d.controls.RouteFlyListener routeFlyListener)
	{
		long routeFlyListenerParamValue = (routeFlyListener == null ? 0L : routeFlyListener.nativeObject.pointer);
		addRouteFlyListener_CRouteFlyListener(this.nativeObject.pointer, routeFlyListenerParamValue);
	}
	native private void removeRouteFlyListener_CRouteFlyListener(long pNativeObject, long listener);
	/**
	 * 移除监听
	 * @param listener 监听
	 */
	public void removeRouteFlyListener(com.earthview.world.spatial3d.controls.RouteFlyListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeRouteFlyListener_CRouteFlyListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void clearEffectWidthNode_void(long pNativeObject);
	/**
	 * 清理数据
	 */
	public void clearEffectWidthNode()
	{
		clearEffectWidthNode_void(this.nativeObject.pointer);
	}
	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 事件处理
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
	 * 鼠标按键松开事件处理
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
	 * 键盘按下事件处理
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
	 * 键盘松开事件处理
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

	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 帧事件处理
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
	 * 自定义事件处理
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

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 鼠标按下事件处理
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

	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 鼠标移动事件处理
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

	native private boolean handleMouseWheelEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 鼠标滚动事件处理
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseWheelEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseWheelEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseWheelEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseWheelEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	native private void createEditPointOverlay_void(long pNativeObject);
	/**
	 * 创建点编辑对象
	 */
	public void createEditPointOverlay()
	{
		createEditPointOverlay_void(this.nativeObject.pointer);
	}
	native private void destroyEditPointOverlay_void(long pNativeObject);
	/**
	 * 销毁点编辑对象
	 */
	public void destroyEditPointOverlay()
	{
		destroyEditPointOverlay_void(this.nativeObject.pointer);
	}
	native private void createPoints_int(long pNativeObject, int selectIndex);
	/// <summary>
	/// 创建渲染的点
	/// </summary>
	/// <param name="selectIndex">被选中点的索引</param>
	/// <returns></returns>
	/// <summary>
	public void createPoints(int selectIndex)
	{
		int selectIndexParamValue = selectIndex;
		createPoints_int(this.nativeObject.pointer, selectIndexParamValue);
	}
	native private void destroyPoints_void(long pNativeObject);
	/// 销毁渲染的点
	/// </summary>
	/// <returns></returns>
	public void destroyPoints()
	{
		destroyPoints_void(this.nativeObject.pointer);
	}
	native private void attachPoints_void(long pNativeObject);
	/**
	 * 挂接渲染的点
	 */
	public void attachPoints()
	{
		attachPoints_void(this.nativeObject.pointer);
	}
	native private void detachPoints_void(long pNativeObject);
	/**
	 * 反挂接渲染的点
	 */
	public void detachPoints()
	{
		detachPoints_void(this.nativeObject.pointer);
	}
	native private void loadFromDataSource_void(long pNativeObject);
	/**
	 * 从数据源加载模型数据
	 */
	public void loadFromDataSource()
	{
		loadFromDataSource_void(this.nativeObject.pointer);
	}
	native private void readModel_void(long pNativeObject);
	/**
	 * 读取数据
	 */
	public void readModel()
	{
		readModel_void(this.nativeObject.pointer);
	}
	native private void createLine_void(long pNativeObject);
	/**
	 * 创建用于显示的线路
	 */
	public void createLine()
	{
		createLine_void(this.nativeObject.pointer);
	}
	native private void createRealControlLine_ev_bool(long pNativeObject, boolean isEdit);
	/**
	 * 创建由真实的控制点所连接成的线路
	 */
	public void createRealControlLine(boolean isEdit)
	{
		boolean isEditParamValue = isEdit;
		createRealControlLine_ev_bool(this.nativeObject.pointer, isEditParamValue);
	}
	native private void createRealControlLine_void(long pNativeObject);
	public void createRealControlLine()
	{
		createRealControlLine_void(this.nativeObject.pointer);
	}
	native private void destroyLine_void(long pNativeObject);
	/**
	 * 销毁用于显示的线路
	 */
	public void destroyLine()
	{
		destroyLine_void(this.nativeObject.pointer);
	}
	native private void destroyRealControlLine_void(long pNativeObject);
	/**
	 * 销毁由真实的控制点所连接成的线路
	 */
	public void destroyRealControlLine()
	{
		destroyRealControlLine_void(this.nativeObject.pointer);
	}
	native private void createGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 创建路径飞行的动画
	 */
	public void createGlobeNodeTrack()
	{
		createGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void destroyGlobeNodeTrack_void(long pNativeObject);
	/**
	 * 销毁路径飞行的动画
	 */
	public void destroyGlobeNodeTrack()
	{
		destroyGlobeNodeTrack_void(this.nativeObject.pointer);
	}
	native private void createNodeTack_void(long pNativeObject);
	/**
	 * 创建动画
	 */
	public void createNodeTack()
	{
		createNodeTack_void(this.nativeObject.pointer);
	}
	native private void destroyNodeTack_void(long pNativeObject);
	/**
	 * 销毁动画
	 */
	public void destroyNodeTack()
	{
		destroyNodeTack_void(this.nativeObject.pointer);
	}
	native private long screenToScene_ev_real32_ev_real32(long pNativeObject, float x, float y);
	/**
	 * 由屏幕上的点计算出对应的射线
	 * @param x 屏幕上的点Ｘ坐标
	 * @param y 屏幕上的点Ｙ坐标
	 */
	public com.earthview.world.spatial.math.Ray screenToScene(float x, float y)
	{
		float xParamValue = x;
		float yParamValue = y;
		long returnValue = screenToScene_ev_real32_ev_real32(this.nativeObject.pointer, xParamValue, yParamValue);
		com.earthview.world.spatial.math.Ray __returnValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRay");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Ray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRay");
		}
		return __returnValue;
	}
	protected  boolean drawFlyLine_void_callback()
	{
		boolean returnValue = drawFlyLine();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean drawFlyLine_void(long pNativeObject);
	/**
	 * 绘制线
	 */
	public boolean drawFlyLine()
	{
		boolean returnValue = drawFlyLine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean drawFlyLine_void_NoVirtual(long pNativeObject);
	protected boolean drawFlyLine_NoVirtual()
	{
		boolean returnValue = drawFlyLine_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setRenderWindow_CRenderWindow(long pNativeObject, long ref_window);
	/**
	 * 设置渲染窗体
	 * @param window 渲染窗体
	 */
	public void setRenderWindow(com.earthview.world.graphic.RenderWindow ref_window)
	{
		long ref_windowParamValue = (ref_window == null ? 0L : ref_window.nativeObject.pointer);
		setRenderWindow_CRenderWindow(this.nativeObject.pointer, ref_windowParamValue);
	}
	native private void createPlaneOverlay_void(long pNativeObject);
	/**
	 * 创建第一人称面板
	 */
	public void createPlaneOverlay()
	{
		createPlaneOverlay_void(this.nativeObject.pointer);
	}
	native private void destroyPlaneOverlay_void(long pNativeObject);
	/**
	 * 销毁第一人称面板
	 */
	public void destroyPlaneOverlay()
	{
		destroyPlaneOverlay_void(this.nativeObject.pointer);
	}
	native private void initializeThreeAxis_void(long pNativeObject);
	/**
	 * 创建坐标轴
	 */
	public void initializeThreeAxis()
	{
		initializeThreeAxis_void(this.nativeObject.pointer);
	}
	native private void destroyThreeAxis_void(long pNativeObject);
	/**
	 * 销毁坐标轴
	 */
	public void destroyThreeAxis()
	{
		destroyThreeAxis_void(this.nativeObject.pointer);
	}
	native private boolean isFlyFinished_void(long pNativeObject);
	/**
	 * 是否已经飞行到末尾并停止
	 */
	public boolean isFlyFinished()
	{
		boolean returnValue = isFlyFinished_void(this.nativeObject.pointer);
		return returnValue;
	}
	public GlobeAnimationHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeAnimationHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 处理自定义事件
	 * @param userEvent 事件对象
	 */
	public boolean handleUseEvent(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		return super.handleUseEvent_NoVirtual(userEvent);
	}
	/**
	 * 处理鼠标松开事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseUp(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		return super.handleMouseUp_NoVirtual(mouseEvent);
	}
	/**
	 * 计逄相机的海拔差
	 * @param v 相机的位置
	 */
	public double computeAltitudeDelta(com.earthview.world.spatial.math.Vector3 v)
	{
		return super.computeAltitudeDelta_NoVirtual(v);
	}
	
	native protected void register_handleMouseUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_drawFlyLine_void(long pNativeObject, String method);
	native protected void register_handleUseEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseUp_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseWheelEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_computeAltitudeDelta_CVector3(long pNativeObject, String method);
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseUpEvent_CGUIEvent_callback");
			this.register_handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyDownEvent_CGUIEvent_callback");
			this.register_handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyUpEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_drawFlyLine_void(this.nativeObject.pointer, "drawFlyLine_void_callback");
			this.register_handleUseEvent_CGUIEvent(this.nativeObject.pointer, "handleUseEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_callback");
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseUp_CGUIEvent(this.nativeObject.pointer, "handleMouseUp_CGUIEvent_callback");
			this.register_handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseWheelEvent_CGUIEvent_callback");
			this.register_computeAltitudeDelta_CVector3(this.nativeObject.pointer, "computeAltitudeDelta_CVector3_callback");
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static GlobeAnimationHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeAnimationHandler obj = null;
 		if(baseObj instanceof GlobeAnimationHandler)
		{
			obj = (GlobeAnimationHandler)baseObj;
		} else {
			obj = new GlobeAnimationHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeAnimationHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
