package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolylineEditTool extends com.earthview.world.spatial.systemui.Itool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CPolylineEditTool", new PolylineEditToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::JCPolylineEditToolProxy", new PolylineEditToolClassFactory());
	}

	/**
	 * 构造函数
	 * @param sceneMgr 场景管理器
	 * @param camera 相机
	 * @param geoObj 地理对象
	 * @param parent kml文档
	 */
	public PolylineEditTool(com.earthview.world.graphic.SceneManager ref_sceneMgr, com.earthview.world.graphic.Camera ref_camera, com.earthview.world.graphic.Viewport ref_viewPort, com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.spatial.kml.KmlDocument ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_sceneMgrPtr = new BasePointer(ref_sceneMgr);
		list.add("ref_sceneMgr", ref_sceneMgrPtr.get());
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer ref_viewPortPtr = new BasePointer(ref_viewPort);
		list.add("ref_viewPort", ref_viewPortPtr.get());
		BasePointer geoObjPtr = new BasePointer(geoObj);
		list.add("geoObj", geoObjPtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("JCPolylineEditToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.kmlmanager.PolylineEditTool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标弹起事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被释放
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 是否继续向父控件发送该事件
	 */
	public boolean onMouseUp(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseUp_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按下事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 是否继续向父控件发送该事件
	 */
	public boolean onMouseDown(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseDown_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 是否继续向父控件发送该事件
	 */
	public boolean onMouseMove(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onMouseMove_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private boolean onDoubleClick_void(long pNativeObject);
	/**
	 * 鼠标双击事件触发
	 * @return 是否继续向父控件发送该事件
	 */
	public boolean onDoubleClick()
	{
		boolean returnValue = onDoubleClick_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean onDoubleClick_void_NoVirtual(long pNativeObject);
	protected boolean onDoubleClick_NoVirtual()
	{
		boolean returnValue = onDoubleClick_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	public boolean onDoubleClick(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int button, int shift, int x, int y);
	protected boolean onDoubleClick_NoVirtual(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}

	native private long getType_void(long pNativeObject);
	/**
	 * 获取编辑工具的类型
	 * @return 返回编辑工具的类型
	 */
	public long getType()
	{
		long returnValue = getType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getType_void_NoVirtual(long pNativeObject);
	protected long getType_NoVirtual()
	{
		long returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void deactivate_void(long pNativeObject);
	public void deactivate()
	{
		deactivate_void(this.nativeObject.pointer);
	}
	native private void deactivate_void_NoVirtual(long pNativeObject);
	protected void deactivate_NoVirtual()
	{
		deactivate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getGeoObject_void(long pNativeObject);
	/**
	 * 获取地理对象
	 * @return 返回地理对象
	 */
	public com.earthview.world.spatial.kml.GeoObjectExtension getGeoObject()
	{
		long returnValue = getGeoObject_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.GeoObjectExtension __returnValue = new com.earthview.world.spatial.kml.GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate, "CGeoObjectExtension");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.GeoObjectExtension)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeoObjectExtension");
		}
		return __returnValue;
	}
	native private long getGeoObjectParent_void(long pNativeObject);
	/**
	 * 获取地理对象的kmldoc
	 * @return 返回kmldoc文档
	 */
	public com.earthview.world.spatial.kml.KmlDocument getGeoObjectParent()
	{
		long returnValue = getGeoObjectParent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private long get_mCamera_void(long pNativeObject);
	public com.earthview.world.graphic.Camera get_mCamera()
	{
		long jniValue = get_mCamera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mCamera_CCamera (long pNativeObject, long value);
	public void set_mCamera(com.earthview.world.graphic.Camera mCamera)
	{
		long mCameraParamValue = (mCamera == null ? 0L : mCamera.nativeObject.pointer);
		
		set_mCamera_CCamera(this.nativeObject.pointer, mCameraParamValue);
	}
	
	native private String get_mFilePath_void(long pNativeObject);
	public String get_mFilePath()
	{
		String jniValue = get_mFilePath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mFilePath_EVString (long pNativeObject, String value);
	public void set_mFilePath(String mFilePath)
	{
		String mFilePathParamValue = mFilePath;
		
		set_mFilePath_EVString(this.nativeObject.pointer, mFilePathParamValue);
	}
	
	native private boolean get_mIsNeedRefresh_void(long pNativeObject);
	public boolean get_mIsNeedRefresh()
	{
		boolean jniValue = get_mIsNeedRefresh_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsNeedRefresh_ev_bool (long pNativeObject, boolean value);
	public void set_mIsNeedRefresh(boolean mIsNeedRefresh)
	{
		boolean mIsNeedRefreshParamValue = mIsNeedRefresh;
		
		set_mIsNeedRefresh_ev_bool(this.nativeObject.pointer, mIsNeedRefreshParamValue);
	}
	
	native private void updateGeoPolygonAlt_void(long pNativeObject);
	/**
	 * /更新高程/
	 */
	public void updateGeoPolygonAlt()
	{
		updateGeoPolygonAlt_void(this.nativeObject.pointer);
	}
	native private void updateVertexBuffer_ev_bool(long pNativeObject, boolean isRefreshLine);
	/**
	 * 更新顶点缓冲区
	 * @param isRefreshLine 是否刷新线
	 */
	public void updateVertexBuffer(boolean isRefreshLine)
	{
		boolean isRefreshLineParamValue = isRefreshLine;
		updateVertexBuffer_ev_bool(this.nativeObject.pointer, isRefreshLineParamValue);
	}
	native private void registerObserver_IKmlObserver(long pNativeObject, long ref_observer);
	/**
	 * 注册监听
	 * @param observer 监听者
	 */
	public void registerObserver(com.earthview.world.spatial3d.kmlmanager.Ikmlobserver ref_observer)
	{
		long ref_observerParamValue = (ref_observer == null ? 0L : ref_observer.nativeObject.pointer);
		registerObserver_IKmlObserver(this.nativeObject.pointer, ref_observerParamValue);
	}
	native private void unRegisterObserver_IKmlObserver(long pNativeObject, long observer);
	/**
	 * 反注册监听
	 * @param observer 监听者
	 */
	public void unRegisterObserver(com.earthview.world.spatial3d.kmlmanager.Ikmlobserver observer)
	{
		long observerParamValue = (observer == null ? 0L : observer.nativeObject.pointer);
		unRegisterObserver_IKmlObserver(this.nativeObject.pointer, observerParamValue);
	}
	native private void setSpatialRefernce_CSpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置空间参照
	 * @param sr 空间参照
	 */
	public void setSpatialRefernce(com.earthview.world.spatial.utility.SpatialReference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialRefernce_CSpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private void setGeoObjectExtensionAttribute_CGeoObjectExtensionAttribute(long pNativeObject, long att);
	/**
	 * 设置EarthView::World::Spatial::Kml::CGeoObjectExtension属性
	 * @param att EarthView::World::Spatial::Kml::CGeoObjectExtension属性
	 */
	public void setGeoObjectExtensionAttribute(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute att)
	{
		long attParamValue = att.nativeObject.pointer;
		setGeoObjectExtensionAttribute_CGeoObjectExtensionAttribute(this.nativeObject.pointer, attParamValue);
	}
	native private void renderEditFrame_void(long pNativeObject);
	public void renderEditFrame()
	{
		renderEditFrame_void(this.nativeObject.pointer);
	}
	native private void _notify_ev_bool(long pNativeObject, boolean isRefershView);
	public void _notify(boolean isRefershView)
	{
		boolean isRefershViewParamValue = isRefershView;
		_notify_ev_bool(this.nativeObject.pointer, isRefershViewParamValue);
	}
	public PolylineEditTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PolylineEditTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 启用Tool
	 * @param  
	 */
	public void activate()
	{
		super.activate_NoVirtual();
	}
	/**
	 * 获取光标样式
	 * @param  
	 * @return 光标样式枚举
	 */
	public int getCursor()
	{
		return super.getCursor_NoVirtual();
	}
	/**
	 * 右键菜单事件触发
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onContextMenu(int x, int y)
	{
		return super.onContextMenu_NoVirtual(x, y);
	}
	/**
	 * 键盘按下事件触发
	 * @param key 按下的键
	 * @param shift shift键是否同时被按下
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onKeyDown(int keyCode, int shift)
	{
		return super.onKeyDown_NoVirtual(keyCode, shift);
	}
	/**
	 * 键盘弹起事件触发
	 * @param key 弹起的键
	 * @param shift shift键是否同时被释放
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onKeyUp(int keyCode, int shift)
	{
		return super.onKeyUp_NoVirtual(keyCode, shift);
	}
	/**
	 * 鼠标滚轮滚动事件触发
	 * @param delta 滚动的幅度
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param flag 标识位
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onMouseWheel(int delta, int x, int y, int flag)
	{
		return super.onMouseWheel_NoVirtual(delta, x, y, flag);
	}
	/**
	 * 触屏接触事件触发
	 * @param touchEvent 事件参数
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onTouchDown(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchDown_NoVirtual(touchEvent);
	}
	/**
	 * 触屏接触事件触发
	 * @param touchEvent 事件参数
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onTouchUp(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchUp_NoVirtual(touchEvent);
	}
	/**
	 * 触屏接触事件触发
	 * @param touchEvent 事件参数
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onTouchMove(com.earthview.world.spatial.systemui.MotionEvent touchEvent)
	{
		return super.onTouchMove_NoVirtual(touchEvent);
	}
	/**
	 * 获取命令项所属的工具栏类型
	 * @param  
	 * @return 工具栏类型
	 */
	public long getToolBarType()
	{
		return super.getToolBarType_NoVirtual();
	}
	/**
	 * 获取命令项的名称
	 * @param  
	 * @return 名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取命令项所属类别
	 * @param  
	 * @return 类别
	 */
	public String getCategory()
	{
		return super.getCategory_NoVirtual();
	}
	/**
	 * 工具提示
	 * @param  
	 * @return 提示信息
	 */
	public String getToolTip()
	{
		return super.getToolTip_NoVirtual();
	}
	/**
	 * 命令项的显示图标
	 * @param  
	 * @return 图标
	 */
	public com.earthview.world.display.Ibitmap getIcon()
	{
		return super.getIcon_NoVirtual();
	}
	/**
	 * 判断命令项是否支持"按下"状态
	 * @param  
	 * @return 如果支持"按下"则返回true,反之则否
	 */
	public boolean isCheckable()
	{
		return super.isCheckable_NoVirtual();
	}
	/**
	 * 当命令项按钮被点击的时候,调用该方法
	 * @param  
	 */
	public void onClicked()
	{
		super.onClicked_NoVirtual();
	}
	/**
	 * 获取命令项是否被按下
	 * @param  
	 * @return 如果命令项被按下了则返回true,反之则否
	 */
	public boolean getChecked()
	{
		return super.getChecked_NoVirtual();
	}
	/**
	 * 设置命令项是否按下
	 * @param checked 如果为true,则命令项被按下,反之则否
	 */
	public void setChecked(boolean checked)
	{
		super.setChecked_NoVirtual(checked);
	}
	/**
	 * 获取命令项是否可用
	 * @param  
	 * @return 如果命令项可用则返回true,反之则否
	 */
	public boolean getEnabled()
	{
		return super.getEnabled_NoVirtual();
	}
	/**
	 * 设置命令项是否可用
	 * @param enabled 如果为true,则设置该命令项可用,反之则否
	 */
	public void setEnabled(boolean enabled)
	{
		super.setEnabled_NoVirtual(enabled);
	}
	/**
	 * 使命令项与指定的控件相关联
	 * @param ctrl 待关联的控件
	 */
	public void create(com.earthview.world.spatial.atlas.Ispatialcontrol ref_ctrl)
	{
		super.create_NoVirtual(ref_ctrl);
	}
	/**
	 * 当有事件被触发时,会调用该方法
	 * @param e 事件
	 * @return 如果状态发生变化则返回true,反之则否
	 */
	public boolean update(com.earthview.world.core.Event e)
	{
		return super.update_NoVirtual(e);
	}
	
	native protected void register_activate_void(long pNativeObject, String method);
	native protected void register_deactivate_void(long pNativeObject, String method);
	native protected void register_getCursor_void(long pNativeObject, String method);
	native protected void register_onContextMenu_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onDoubleClick_void(long pNativeObject, String method);
	native protected void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyDown_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onKeyUp_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_onTouchDown_MotionEvent(long pNativeObject, String method);
	native protected void register_onTouchUp_MotionEvent(long pNativeObject, String method);
	native protected void register_onTouchMove_MotionEvent(long pNativeObject, String method);
	native protected void register_getToolBarType_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getCategory_void(long pNativeObject, String method);
	native protected void register_getToolTip_void(long pNativeObject, String method);
	native protected void register_getIcon_void(long pNativeObject, String method);
	native protected void register_isCheckable_void(long pNativeObject, String method);
	native protected void register_onClicked_void(long pNativeObject, String method);
	native protected void register_getChecked_void(long pNativeObject, String method);
	native protected void register_setChecked_ev_bool(long pNativeObject, String method);
	native protected void register_getEnabled_void(long pNativeObject, String method);
	native protected void register_setEnabled_ev_bool(long pNativeObject, String method);
	native protected void register_create_ISpatialControl(long pNativeObject, String method);
	native protected void register_update_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_activate_void(this.nativeObject.pointer, "activate_void_callback");
			this.register_deactivate_void(this.nativeObject.pointer, "deactivate_void_callback");
			this.register_getCursor_void(this.nativeObject.pointer, "getCursor_void_callback");
			this.register_onContextMenu_ev_int32_ev_int32(this.nativeObject.pointer, "onContextMenu_ev_int32_ev_int32_callback");
			this.register_onDoubleClick_void(this.nativeObject.pointer, "onDoubleClick_void_callback");
			this.register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyDown_ev_int32_ev_int32_callback");
			this.register_onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, "onKeyUp_ev_int32_ev_int32_callback");
			this.register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			this.register_onTouchDown_MotionEvent(this.nativeObject.pointer, "onTouchDown_MotionEvent_callback");
			this.register_onTouchUp_MotionEvent(this.nativeObject.pointer, "onTouchUp_MotionEvent_callback");
			this.register_onTouchMove_MotionEvent(this.nativeObject.pointer, "onTouchMove_MotionEvent_callback");
			this.register_getToolBarType_void(this.nativeObject.pointer, "getToolBarType_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getCategory_void(this.nativeObject.pointer, "getCategory_void_callback");
			this.register_getToolTip_void(this.nativeObject.pointer, "getToolTip_void_callback");
			this.register_getIcon_void(this.nativeObject.pointer, "getIcon_void_callback");
			this.register_isCheckable_void(this.nativeObject.pointer, "isCheckable_void_callback");
			this.register_onClicked_void(this.nativeObject.pointer, "onClicked_void_callback");
			this.register_getChecked_void(this.nativeObject.pointer, "getChecked_void_callback");
			this.register_setChecked_ev_bool(this.nativeObject.pointer, "setChecked_ev_bool_callback");
			this.register_getEnabled_void(this.nativeObject.pointer, "getEnabled_void_callback");
			this.register_setEnabled_ev_bool(this.nativeObject.pointer, "setEnabled_ev_bool_callback");
			this.register_create_ISpatialControl(this.nativeObject.pointer, "create_ISpatialControl_callback");
			this.register_update_CEvent(this.nativeObject.pointer, "update_CEvent_callback");
		}
	}
	
	public static PolylineEditTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PolylineEditTool obj = null;
 		if(baseObj instanceof PolylineEditTool)
		{
			obj = (PolylineEditTool)baseObj;
		} else {
			obj = new PolylineEditTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPolylineEditTool");
			obj.increaseCast();
		}

		return obj;
	}
}
