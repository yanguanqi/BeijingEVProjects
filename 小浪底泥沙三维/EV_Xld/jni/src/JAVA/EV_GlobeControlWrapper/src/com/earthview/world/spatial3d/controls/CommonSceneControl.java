package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通用场景控制类
 */
public class CommonSceneControl extends com.earthview.world.spatial3d.controls.C3DControl {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCommonSceneControl", new CommonSceneControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCommonSceneControlProxy", new CommonSceneControlClassFactory());
	}

	/**
	 * 构造函数
	 * @param uintHwnd 窗口句柄
	 * @param winWidth 窗口宽度
	 * @param winHeight 窗口高度
	 */
	public CommonSceneControl(long uintHwnd, long winWidth, long winHeight) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer uintHwndPtr = new BasePointer(uintHwnd);
		list.add("uintHwnd", uintHwndPtr.get());
		BasePointer winWidthPtr = new BasePointer(winWidth);
		list.add("winWidth", winWidthPtr.get());
		BasePointer winHeightPtr = new BasePointer(winHeight);
		list.add("winHeight", winHeightPtr.get());
		Create("JCCommonSceneControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CommonSceneControl".equals(this.getClass().getName()))
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
	public CommonSceneControl(String strHwnd, long winWidth, long winHeight) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer strHwndPtr = new BasePointer(strHwnd);
		list.add("strHwnd", strHwndPtr.get());
		BasePointer winWidthPtr = new BasePointer(winWidth);
		list.add("winWidth", winWidthPtr.get());
		BasePointer winHeightPtr = new BasePointer(winHeight);
		list.add("winHeight", winHeightPtr.get());
		Create("JCCommonSceneControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CommonSceneControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param windowName 窗口名称
	 * @param winWidth 窗口宽度
	 * @param winHeight 窗口高度
	 * @param isFullScreen 是否全屏
	 */
	public CommonSceneControl(String windowName, long winWidth, long winHeight, boolean isFullScreen) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer windowNamePtr = new BasePointer(windowName);
		list.add("windowName", windowNamePtr.get());
		BasePointer winWidthPtr = new BasePointer(winWidth);
		list.add("winWidth", winWidthPtr.get());
		BasePointer winHeightPtr = new BasePointer(winHeight);
		list.add("winHeight", winHeightPtr.get());
		BasePointer isFullScreenPtr = new BasePointer(isFullScreen);
		list.add("isFullScreen", isFullScreenPtr.get());
		Create("JCCommonSceneControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CommonSceneControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void fireSelectionChanged_RaySceneQueryResult(long pNativeObject, long result);
	/**
	 * 选择处理
	 * @param result 射线查询结果集
	 */
	public void fireSelectionChanged(com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		fireSelectionChanged_RaySceneQueryResult(this.nativeObject.pointer, resultParamValue);
	}
	native private void fireSelectionChanged_SceneQueryResult(long pNativeObject, long result);
	/**
	 * 选择处理
	 * @param result 场景查询结果集
	 */
	public void fireSelectionChanged(com.earthview.world.graphic.SceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		fireSelectionChanged_SceneQueryResult(this.nativeObject.pointer, resultParamValue);
	}
	native private void fireSelectionChanged_CGlobeSelection(long pNativeObject, long result);
	/**
	 * 选择处理
	 * @param result 选择集
	 */
	public void fireSelectionChanged(com.earthview.world.spatial3d.GlobeSelection result)
	{
		long resultParamValue = result.nativeObject.pointer;
		fireSelectionChanged_CGlobeSelection(this.nativeObject.pointer, resultParamValue);
	}
	native private void fireSelectedObjectMoved_RaySceneQueryResultEntry_CMatrix4_GUIEventType(long pNativeObject, long entry, long newMatrix, int type);
	/**
	 * 移动处理
	 * @param entry 射线查询结果集记录
	 * @param newMatrix 世界变换矩阵
	 * @param type 时间类型标识
	 */
	public void fireSelectedObjectMoved(com.earthview.world.graphic.RaySceneQueryResultEntry entry, com.earthview.world.spatial.math.Matrix4 newMatrix, com.earthview.world.spatial.systemui.Guievent.GUIEventType type)
	{
		long entryParamValue = entry.nativeObject.pointer;
		long newMatrixParamValue = newMatrix.nativeObject.pointer;
		int typeParamValue = type.getValue();
		fireSelectedObjectMoved_RaySceneQueryResultEntry_CMatrix4_GUIEventType(this.nativeObject.pointer, entryParamValue, newMatrixParamValue, typeParamValue);
	}
	native private void fireDeleteKeyPressed_void(long pNativeObject);
	/**
	 * 按下Delete键处理
	 * @param  
	 */
	public void fireDeleteKeyPressed()
	{
		fireDeleteKeyPressed_void(this.nativeObject.pointer);
	}
	native private boolean setCurrentTool_ITool(long pNativeObject, long ref_tool);
	/**
	 * 设置当前要使用的工具
	 * @param tool 工具对象
	 * @return 返回true
	 */
	public boolean setCurrentTool(com.earthview.world.spatial.systemui.Itool ref_tool)
	{
		long ref_toolParamValue = (ref_tool == null ? 0L : ref_tool.nativeObject.pointer);
		boolean returnValue = setCurrentTool_ITool(this.nativeObject.pointer, ref_toolParamValue);
		return returnValue;
	}
	native private long getCurrentTool_void(long pNativeObject);
	/**
	 * 获得当前使用的工具对象
	 * @param  
	 * @return 工具对象
	 */
	public com.earthview.world.spatial.systemui.Itool getCurrentTool()
	{
		long returnValue = getCurrentTool_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itool __returnValue = new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate, "ITool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITool");
		}
		return __returnValue;
	}
	native private long getICommonSceneQueryListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 获得通用场景查询Listener
	 * @param index 索引号
	 * @return 通用场景查询Listener
	 */
	public com.earthview.world.spatial3d.systemui.Icommonscenequerylistener getICommonSceneQueryListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getICommonSceneQueryListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.systemui.Icommonscenequerylistener __returnValue = new com.earthview.world.spatial3d.systemui.Icommonscenequerylistener(CreatedWhenConstruct.CWC_NotToCreate, "ICommonSceneQueryListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.systemui.Icommonscenequerylistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ICommonSceneQueryListener");
		}
		return __returnValue;
	}
	native private boolean addQueryListener_ICommonSceneQueryListener(long pNativeObject, long ref_listener);
	/**
	 * 添加通用场景查询Listener
	 * @param listener 通用场景查询Listener
	 * @return 添加成功返回true,失败返回false
	 */
	public boolean addQueryListener(com.earthview.world.spatial3d.systemui.Icommonscenequerylistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		boolean returnValue = addQueryListener_ICommonSceneQueryListener(this.nativeObject.pointer, ref_listenerParamValue);
		return returnValue;
	}
	native private boolean removeQueryListener_ICommonSceneQueryListener(long pNativeObject, long listener);
	/**
	 * 删除通用场景查询Listener
	 * @param listener 通用场景查询Listener
	 * @return 删除成功返回true,失败返回false
	 */
	public boolean removeQueryListener(com.earthview.world.spatial3d.systemui.Icommonscenequerylistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = removeQueryListener_ICommonSceneQueryListener(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}
	native private void initCommonSceneRayQueryTool_void(long pNativeObject);
	/**
	 * 初始化通用场景射线查询工具类
	 * @param  
	 */
	public void initCommonSceneRayQueryTool()
	{
		initCommonSceneRayQueryTool_void(this.nativeObject.pointer);
	}
	native private void setLightCameraMode_ev_bool(long pNativeObject, boolean flag);
	/**
	 * 场景中默认的有向光方向与相机方向一致
	 * @param flag 是否一致
	 */
	public void setLightCameraMode(boolean flag)
	{
		boolean flagParamValue = flag;
		setLightCameraMode_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private boolean isLightCameraModel_void(long pNativeObject);
	/**
	 * 获取场景中默认的有向光方向是否与相机关联
	 * @return ev_bool;true，关联;false,不关联
	 */
	public boolean isLightCameraModel()
	{
		boolean returnValue = isLightCameraModel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resetLightDirection_void(long pNativeObject);
	/**
	 * 还原场景中有向光默认朝向
	 */
	public void resetLightDirection()
	{
		resetLightDirection_void(this.nativeObject.pointer);
	}
	public CommonSceneControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommonSceneControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 自动调整窗口内渲染窗体的大小
	 */
	public void windowResized()
	{
		super.windowResized_NoVirtual();
	}
	/**
	 * 接收鼠标按下事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseButtonPress(int x, int y, long button)
	{
		super.mouseButtonPress_NoVirtual(x, y, button);
	}
	/**
	 * 接收鼠标双击事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseDoubleButtonPress(int x, int y, long button)
	{
		super.mouseDoubleButtonPress_NoVirtual(x, y, button);
	}
	/**
	 * 接收鼠标松开事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseButtonRelease(int x, int y, long button)
	{
		super.mouseButtonRelease_NoVirtual(x, y, button);
	}
	/**
	 * 接收鼠标移动事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 */
	public void mouseMove(int x, int y)
	{
		super.mouseMove_NoVirtual(x, y);
	}
	/**
	 * 接收鼠标滚轮事件
	 * @param delta 鼠标的滚动的值
	 */
	public void mouseWheel(float delta)
	{
		super.mouseWheel_NoVirtual(delta);
	}
	/**
	 * 处理所有事件
	 * @return 返回true
	 */
	public boolean eventStage()
	{
		return super.eventStage_NoVirtual();
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
	 * 获取控件的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
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
	
	public static CommonSceneControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommonSceneControl obj = null;
 		if(baseObj instanceof CommonSceneControl)
		{
			obj = (CommonSceneControl)baseObj;
		} else {
			obj = new CommonSceneControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommonSceneControl");
			obj.increaseCast();
		}

		return obj;
	}
}
