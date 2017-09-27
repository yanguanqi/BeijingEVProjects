package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 淹没分析类定义了淹没分析的所有操作
 */
public class Analysis3DRegionFlood extends com.earthview.world.spatial3d.analysis.Ianalysis3dtool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood", new Analysis3DRegionFloodClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysis3DRegionFloodProxy", new Analysis3DRegionFloodClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pGlobeControl 地球控件
	 */
	public Analysis3DRegionFlood(com.earthview.world.spatial3d.controls.GlobeControl ref_pGlobeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGlobeControlPtr = new BasePointer(ref_pGlobeControl);
		list.add("ref_pGlobeControl", ref_pGlobeControlPtr.get());
		Create("JCAnalysis3DRegionFloodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DRegionFlood".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pSceneMgr 场景管理器
	 */
	public Analysis3DRegionFlood(com.earthview.world.graphic.SceneManager ref_pSceneMgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pSceneMgrPtr = new BasePointer(ref_pSceneMgr);
		list.add("ref_pSceneMgr", ref_pSceneMgrPtr.get());
		Create("JCAnalysis3DRegionFloodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DRegionFlood".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pTerrainLayer 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer
	 */
	public Analysis3DRegionFlood(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pTerrainLayer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pTerrainLayerPtr = new BasePointer(ref_pTerrainLayer);
		list.add("ref_pTerrainLayer", ref_pTerrainLayerPtr.get());
		Create("JCAnalysis3DRegionFloodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Analysis3DRegionFlood".equals(this.getClass().getName()))
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
	native private long getCenterPos_void(long pNativeObject);
	/**
	 * 获取淹没中心点
	 * @return 淹没中心点
	 */
	public com.earthview.world.spatial.math.Vector3 getCenterPos()
	{
		long returnValue = getCenterPos_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private void setCenterPos_CVector3(long pNativeObject, long value);
	/**
	 * 设置淹没中心点
	 * @param value 淹没中心点
	 */
	public void setCenterPos(com.earthview.world.spatial.math.Vector3 value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setCenterPos_CVector3(this.nativeObject.pointer, valueParamValue);
	}
	native private double getSearchRadius_void(long pNativeObject);
	/**
	 * 获取搜索半径
	 */
	public double getSearchRadius()
	{
		double returnValue = getSearchRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSearchRadius_ev_real64(long pNativeObject, double value);
	/**
	 * 设置搜索半径
	 * @param value 搜索半径
	 */
	public void setSearchRadius(double value)
	{
		double valueParamValue = value;
		setSearchRadius_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getFloodAltitude_void(long pNativeObject);
	/**
	 * 获取淹没分析高度（相对于海平面的绝对高度）
	 * @param  
	 * @return 淹没分析高度（相对于海平面的绝对高度）
	 */
	public double getFloodAltitude()
	{
		double returnValue = getFloodAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFloodAltitude_ev_real64(long pNativeObject, double value);
	/**
	 * 设置淹没分析高度（相对于海平面的绝对高度）
	 * @param value 淹没分析高度（相对于海平面的绝对高度）
	 */
	public void setFloodAltitude(double value)
	{
		double valueParamValue = value;
		setFloodAltitude_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getDefaultFloodAltitude_void(long pNativeObject);
	/**
	 * 获取是否使用默认水面海拔（淹没源高程）
	 */
	public boolean getDefaultFloodAltitude()
	{
		boolean returnValue = getDefaultFloodAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultFloodAltitude_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否使用默认水面海拔（淹没源高程）
	 * @param value 
	 */
	public void setDefaultFloodAltitude(boolean value)
	{
		boolean valueParamValue = value;
		setDefaultFloodAltitude_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getLineVisible_void(long pNativeObject);
	/**
	 * 获取线的可见性
	 * @param  
	 * @return 可见性
	 */
	public boolean getLineVisible()
	{
		boolean returnValue = getLineVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLineVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置线是否可见
	 * @param visible 是否可见
	 */
	public void setLineVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setLineVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private long getFRenderBlockSet_void(long pNativeObject);
	/**
	 * 获取渲染用的淹没区块数据
	 * @return 渲染用的淹没区块数据
	 */
	public com.earthview.world.spatial3d.analysis.Frenderblockset getFRenderBlockSet()
	{
		long returnValue = getFRenderBlockSet_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.analysis.Frenderblockset __returnValue = new com.earthview.world.spatial3d.analysis.Frenderblockset(CreatedWhenConstruct.CWC_NotToCreate, "CFRenderBlockSet");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Frenderblockset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFRenderBlockSet");
		}
		return __returnValue;
	}
	native private void setFRenderBlockSet_CFRenderBlockSet(long pNativeObject, long renderBlockList);
	/**
	 * 设置渲染用的淹没区块数据
	 * @param value 渲染用的淹没区块数据
	 */
	public void setFRenderBlockSet(com.earthview.world.spatial3d.analysis.Frenderblockset renderBlockList)
	{
		long renderBlockListParamValue = renderBlockList.nativeObject.pointer;
		setFRenderBlockSet_CFRenderBlockSet(this.nativeObject.pointer, renderBlockListParamValue);
	}
	native private long getWaterSurfaceSymbol_void(long pNativeObject);
	/**
	 * 获取水面风格符号
	 * @param  
	 * @return 返回水平面风格符号
	 */
	public com.earthview.world.spatial.display.FresnelSurface3DSymbol getWaterSurfaceSymbol()
	{
		long returnValue = getWaterSurfaceSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.FresnelSurface3DSymbol __returnValue = new com.earthview.world.spatial.display.FresnelSurface3DSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CFresnelSurface3DSymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.FresnelSurface3DSymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFresnelSurface3DSymbol");
		}
		return __returnValue;
	}
	native private void setWaterSurfaceSymbol_CFresnelSurface3DSymbol(long pNativeObject, long pWaterSurfaceSymbol);
	/**
	 * 设置水面风格符号
	 * @param pWaterSurfaceSymbol 水面风格符号
	 */
	public void setWaterSurfaceSymbol(com.earthview.world.spatial.display.FresnelSurface3DSymbol pWaterSurfaceSymbol)
	{
		long pWaterSurfaceSymbolParamValue = (pWaterSurfaceSymbol == null ? 0L : pWaterSurfaceSymbol.nativeObject.pointer);
		setWaterSurfaceSymbol_CFresnelSurface3DSymbol(this.nativeObject.pointer, pWaterSurfaceSymbolParamValue);
	}
	native private long getFloodEntityNode_void(long pNativeObject);
	/**
	 * 获取水面实体的挂接父节点
	 * @param  
	 * @return 水面实体的挂接父节点
	 */
	public com.earthview.world.graphic.SceneNode getFloodEntityNode()
	{
		long returnValue = getFloodEntityNode_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneNode __returnValue = new com.earthview.world.graphic.SceneNode(CreatedWhenConstruct.CWC_NotToCreate, "CSceneNode");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneNode)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneNode");
		}
		return __returnValue;
	}
	native private double getFloodSurfaceArea_void(long pNativeObject);
	/**
	 * 获取淹没水面面积
	 * @param  
	 * @return 水面面积
	 */
	public double getFloodSurfaceArea()
	{
		double returnValue = getFloodSurfaceArea_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFloodGroundArea_void(long pNativeObject);
	/**
	 * 获取淹没贴地面积
	 * @param  
	 * @return 贴地面积
	 */
	public double getFloodGroundArea()
	{
		double returnValue = getFloodGroundArea_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFloodVolume_void(long pNativeObject);
	/**
	 * 获取淹没体积
	 * @param  
	 * @return 淹没体积
	 */
	public double getFloodVolume()
	{
		double returnValue = getFloodVolume_void(this.nativeObject.pointer);
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

	public Analysis3DRegionFlood(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Analysis3DRegionFlood(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onMouseMove(int button, int shift, int x, int y)
	{
		return super.onMouseMove_NoVirtual(button, shift, x, y);
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
	
	public static Analysis3DRegionFlood fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Analysis3DRegionFlood obj = null;
 		if(baseObj instanceof Analysis3DRegionFlood)
		{
			obj = (Analysis3DRegionFlood)baseObj;
		} else {
			obj = new Analysis3DRegionFlood(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysis3DRegionFlood");
			obj.increaseCast();
		}

		return obj;
	}
}
