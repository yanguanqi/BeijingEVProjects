package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 长度测量类定义了长度测量的所有操作
 */
public class Analysis3DMeasureLength extends com.earthview.world.spatial3d.analysis.Ianalysis3dtool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DMeasureLength", new Analysis3DMeasureLengthClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysis3DMeasureLengthProxy", new Analysis3DMeasureLengthClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pGlobeControl 地球控件
	 */
	public Analysis3DMeasureLength(com.earthview.world.spatial3d.controls.GlobeControl ref_pGlobeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGlobeControlPtr = new BasePointer(ref_pGlobeControl);
		list.add("ref_pGlobeControl", ref_pGlobeControlPtr.get());
		Create("JCAnalysis3DMeasureLengthProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DMeasureLength".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pSceneMgr 场景管理器
	 */
	public Analysis3DMeasureLength(com.earthview.world.graphic.SceneManager ref_pSceneMgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pSceneMgrPtr = new BasePointer(ref_pSceneMgr);
		list.add("ref_pSceneMgr", ref_pSceneMgrPtr.get());
		Create("JCAnalysis3DMeasureLengthProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DMeasureLength".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pTerrainLayer 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer
	 */
	public Analysis3DMeasureLength(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pTerrainLayer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pTerrainLayerPtr = new BasePointer(ref_pTerrainLayer);
		list.add("ref_pTerrainLayer", ref_pTerrainLayerPtr.get());
		Create("JCAnalysis3DMeasureLengthProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DMeasureLength".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void deactivate_void(long pNativeObject);
	/**
	 * 不使用Tool
	 * @param  
	 */
	public void deactivate()
	{
		deactivate_void(this.nativeObject.pointer);
	}
	native private void deactivate_void_NoVirtual(long pNativeObject);
	protected void deactivate_NoVirtual()
	{
		deactivate_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void reset_void(long pNativeObject);
	/**
	 * 销毁所有渲染对象及结果
	 * @param  
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void initialize_void(long pNativeObject);
	/**
	 * 初始化
	 * @param  
	 */
	public void initialize()
	{
		initialize_void(this.nativeObject.pointer);
	}
	native private void initialize_void_NoVirtual(long pNativeObject);
	protected void initialize_NoVirtual()
	{
		initialize_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void renderAnalysis3D_void(long pNativeObject);
	/**
	 * 分析与测量的调用接口
	 */
	public void renderAnalysis3D()
	{
		renderAnalysis3D_void(this.nativeObject.pointer);
	}
	native private void renderAnalysis3D_void_NoVirtual(long pNativeObject);
	protected void renderAnalysis3D_NoVirtual()
	{
		renderAnalysis3D_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean getIsOver_void(long pNativeObject);
	/**
	 * 开启下次测量前需判断本次测量是否完成
	 */
	public boolean getIsOver()
	{
		boolean returnValue = getIsOver_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSelectedGeoPts_void(long pNativeObject);
	/**
	 * 获取距离测量点列表(经度、纬度、高程)
	 */
	public com.earthview.world.spatial.math.VertexList getSelectedGeoPts()
	{
		long returnValue = getSelectedGeoPts_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	native private void setSelectedGeoPts_VertexList(long pNativeObject, long points);
	/**
	 * 设置距离测量点列表(经度、纬度、高程)
	 */
	public void setSelectedGeoPts(com.earthview.world.spatial.math.VertexList points)
	{
		long pointsParamValue = points.nativeObject.pointer;
		setSelectedGeoPts_VertexList(this.nativeObject.pointer, pointsParamValue);
	}
	native private int getCalcuStyle_void(long pNativeObject);
	/**
	 * 获取距离测量方式
	 */
	public com.earthview.world.spatial3d.analysis.DistanceMeasureStyle getCalcuStyle()
	{
		int returnValue = getCalcuStyle_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.DistanceMeasureStyle.toEnum(returnValue);
	}
	native private void setCalcuStyle_DistanceMeasureStyle(long pNativeObject, int value);
	/**
	 * 设置距离测量方式
	 */
	public void setCalcuStyle(com.earthview.world.spatial3d.analysis.DistanceMeasureStyle value)
	{
		int valueParamValue = value.getValue();
		setCalcuStyle_DistanceMeasureStyle(this.nativeObject.pointer, valueParamValue);
	}
	native private void setLengthUnit_LengthUnit(long pNativeObject, int lengthUnit);
	/**
	 * 设置最后结果显示的单位
	 */
	public void setLengthUnit(com.earthview.world.spatial3d.analysis.LengthUnit lengthUnit)
	{
		int lengthUnitParamValue = lengthUnit.getValue();
		setLengthUnit_LengthUnit(this.nativeObject.pointer, lengthUnitParamValue);
	}
	native private double getClampedDistance_void(long pNativeObject);
	/**
	 * 获取贴地距离
	 * @param  
	 * @return 贴地距离
	 */
	public double getClampedDistance()
	{
		double returnValue = getClampedDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getStraightDistance_void(long pNativeObject);
	/**
	 * 获取直线距离
	 * @param  
	 * @return 直线距离
	 */
	public double getStraightDistance()
	{
		double returnValue = getStraightDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getProjectionDistance_void(long pNativeObject);
	/**
	 * 获取投影距离
	 * @param  
	 * @return 投影距离
	 */
	public double getProjectionDistance()
	{
		double returnValue = getProjectionDistance_void(this.nativeObject.pointer);
		return returnValue;
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

	native private boolean onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被释放
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

	public Analysis3DMeasureLength(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DMeasureLength(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取三维计算对象
	 * @return 三维计算对象
	 */
	public com.earthview.world.spatial3d.analysis.Math3DBaseObject getMath3D()
	{
		return super.getMath3D_NoVirtual();
	}
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
	}
	/**
	 * 获取鼠标状态
	 * @return 鼠标状态
	 */
	public com.earthview.world.spatial3d.analysis.MousePickState getMousePickState()
	{
		return super.getMousePickState_NoVirtual();
	}
	/**
	 * 设置鼠标状态
	 * @param EarthView::World::Spatial3D::Analysis::MousePickState 鼠标状态
	 */
	public void setMousePickState(com.earthview.world.spatial3d.analysis.MousePickState state)
	{
		super.setMousePickState_NoVirtual(state);
	}
	/**
	 * 获取是否在服务器端分析
	 * @param  
	 */
	public boolean getIsAnalysisInServer()
	{
		return super.getIsAnalysisInServer_NoVirtual();
	}
	/**
	 * 设置是否在服务器端分析
	 * @param bInServer 是否在服务器端分析
	 */
	public void setIsAnalysisInServer(boolean bInServer)
	{
		super.setIsAnalysisInServer_NoVirtual(bInServer);
	}
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.AltitudeListener getAltitude3DListener()
	{
		return super.getAltitude3DListener_NoVirtual();
	}
	/**
	 * 设置高程控件指针
	 * @param listener 设置的指针
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.AltitudeListener ref_listener)
	{
		super.setAltitude3DListener_NoVirtual(ref_listener);
	}
	/**
	 * 获取用户注册的监听
	 * @param  
	 * @return 用户注册的监听
	 */
	public com.earthview.world.spatial3d.analysis.Analysis3DListener getAnalysis3DListener()
	{
		return super.getAnalysis3DListener_NoVirtual();
	}
	/**
	 * 设置注册的监听，用于处理界面的交互
	 * @param listener 注册的监听
	 */
	public void setAnalysis3DListener(com.earthview.world.spatial3d.analysis.Analysis3DListener ref_listener)
	{
		super.setAnalysis3DListener_NoVirtual(ref_listener);
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
	public boolean onDoubleClick(int button, int shift, int x, int y)
	{
		return super.onDoubleClick_NoVirtual(button, shift, x, y);
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
	 * 鼠标按下事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onMouseDown(int button, int shift, int x, int y)
	{
		return super.onMouseDown_NoVirtual(button, shift, x, y);
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
	 * 获取命令项的类型
	 * @param  
	 * @return 类型
	 */
	public long getType()
	{
		return super.getType_NoVirtual();
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
	
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_initialize_void(long pNativeObject, String method);
	native protected void register_renderAnalysis3D_void(long pNativeObject, String method);
	native protected void register_getMath3D_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_getMousePickState_void(long pNativeObject, String method);
	native protected void register_setMousePickState_MousePickState(long pNativeObject, String method);
	native protected void register_getIsAnalysisInServer_void(long pNativeObject, String method);
	native protected void register_setIsAnalysisInServer_ev_bool(long pNativeObject, String method);
	native protected void register_getAltitude3DListener_void(long pNativeObject, String method);
	native protected void register_setAltitude3DListener_CAltitudeListener(long pNativeObject, String method);
	native protected void register_getAnalysis3DListener_void(long pNativeObject, String method);
	native protected void register_setAnalysis3DListener_CAnalysis3DListener(long pNativeObject, String method);
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
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_initialize_void(this.nativeObject.pointer, "initialize_void_callback");
			this.register_renderAnalysis3D_void(this.nativeObject.pointer, "renderAnalysis3D_void_callback");
			this.register_getMath3D_void(this.nativeObject.pointer, "getMath3D_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_getMousePickState_void(this.nativeObject.pointer, "getMousePickState_void_callback");
			this.register_setMousePickState_MousePickState(this.nativeObject.pointer, "setMousePickState_MousePickState_callback");
			this.register_getIsAnalysisInServer_void(this.nativeObject.pointer, "getIsAnalysisInServer_void_callback");
			this.register_setIsAnalysisInServer_ev_bool(this.nativeObject.pointer, "setIsAnalysisInServer_ev_bool_callback");
			this.register_getAltitude3DListener_void(this.nativeObject.pointer, "getAltitude3DListener_void_callback");
			this.register_setAltitude3DListener_CAltitudeListener(this.nativeObject.pointer, "setAltitude3DListener_CAltitudeListener_callback");
			this.register_getAnalysis3DListener_void(this.nativeObject.pointer, "getAnalysis3DListener_void_callback");
			this.register_setAnalysis3DListener_CAnalysis3DListener(this.nativeObject.pointer, "setAnalysis3DListener_CAnalysis3DListener_callback");
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
	
	public static Analysis3DMeasureLength fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DMeasureLength obj = null;
 		if(baseObj instanceof Analysis3DMeasureLength)
		{
			obj = (Analysis3DMeasureLength)baseObj;
		} else {
			obj = new Analysis3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DMeasureLength");
			obj.increaseCast();
		}

		return obj;
	}
}
