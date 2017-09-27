package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维空间分析的EarthView::World::Spatial::SystemUI::ITool
 */
public class Ianalysis3dtool extends com.earthview.world.spatial.systemui.Itool {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::IAnalysis3DTool", new Ianalysis3dtoolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JIAnalysis3DToolProxy", new Ianalysis3dtoolClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pGlobeControl 地球控件
	 */
	public Ianalysis3dtool(com.earthview.world.spatial3d.controls.GlobeControl ref_pGlobeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pGlobeControlPtr = new BasePointer(ref_pGlobeControl);
		list.add("ref_pGlobeControl", ref_pGlobeControlPtr.get());
		Create("JIAnalysis3DToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Ianalysis3dtool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pSceneMgr 场景管理器
	 */
	public Ianalysis3dtool(com.earthview.world.graphic.SceneManager ref_pSceneMgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pSceneMgrPtr = new BasePointer(ref_pSceneMgr);
		list.add("ref_pSceneMgr", ref_pSceneMgrPtr.get());
		Create("JIAnalysis3DToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Ianalysis3dtool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pTerrainLayer 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer
	 */
	public Ianalysis3dtool(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pTerrainLayer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pTerrainLayerPtr = new BasePointer(ref_pTerrainLayer);
		list.add("ref_pTerrainLayer", ref_pTerrainLayerPtr.get());
		Create("JIAnalysis3DToolProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Ianalysis3dtool".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	/**
	 * 重置
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

	protected  void initialize_void_callback()
	{
		initialize();
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

	native private void textStyleInit_void(long pNativeObject);
	/**
	 * 字体风格类的初始化
	 */
	public void textStyleInit()
	{
		textStyleInit_void(this.nativeObject.pointer);
	}
	native private boolean onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按键弹起事件
	 * @param button 鼠标键值
	 * @param shift Shift键值
	 * @param x 横坐标
	 * @param y 纵坐标
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
	 * 鼠标按键按下事件
	 * @param button 鼠标键值
	 * @param shift Shift键值
	 * @param x 横坐标
	 * @param y 纵坐标
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
	 * 鼠标移动事件
	 * @param button 鼠标键值
	 * @param shift Shift键值
	 * @param x 横坐标
	 * @param y 纵坐标
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

	protected  void renderAnalysis3D_void_callback()
	{
		renderAnalysis3D();
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

	native private long getType_void(long pNativeObject);
	/**
	 * 获取工具类型
	 * @return 类型
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

	native private long getGlobeControl_void(long pNativeObject);
	/**
	 * 获取抽象地球控件
	 * @param  
	 */
	public com.earthview.world.spatial3d.controls.GlobeControl getGlobeControl()
	{
		long returnValue = getGlobeControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	protected  long getMath3D_void_callback()
	{
		com.earthview.world.spatial3d.analysis.Math3DBaseObject returnValue = getMath3D();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMath3D_void(long pNativeObject);
	/**
	 * 获取三维计算对象
	 * @return 三维计算对象
	 */
	public com.earthview.world.spatial3d.analysis.Math3DBaseObject getMath3D()
	{
		long returnValue = getMath3D_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Math3DBaseObject __returnValue = new com.earthview.world.spatial3d.analysis.Math3DBaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CMath3DBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Math3DBaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMath3DBaseObject");
		}
		return __returnValue;
	}
	native private long getMath3D_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.analysis.Math3DBaseObject getMath3D_NoVirtual()
	{
		long returnValue = getMath3D_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Math3DBaseObject __returnValue = new com.earthview.world.spatial3d.analysis.Math3DBaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CMath3DBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Math3DBaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMath3DBaseObject");
		}
		return __returnValue;
	}

	native private long getTextureTextStyle_void(long pNativeObject);
	/**
	 * 获取渲染字体风格
	 * @param  
	 * @return 返回字体风格对象指针
	 */
	public com.earthview.world.graphic.TextureTextStyle getTextureTextStyle()
	{
		long returnValue = getTextureTextStyle_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureTextStyle __returnValue = new com.earthview.world.graphic.TextureTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CTextureTextStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureTextStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureTextStyle");
		}
		return __returnValue;
	}
	protected  void setVisible_ev_bool_callback(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible(visibleParamValue);
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置是否可见
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	protected  int getMousePickState_void_callback()
	{
		com.earthview.world.spatial3d.analysis.MousePickState returnValue = getMousePickState();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getMousePickState_void(long pNativeObject);
	/**
	 * 获取鼠标状态
	 * @return 鼠标状态
	 */
	public com.earthview.world.spatial3d.analysis.MousePickState getMousePickState()
	{
		int returnValue = getMousePickState_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.MousePickState.toEnum(returnValue);
	}
	native private int getMousePickState_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.analysis.MousePickState getMousePickState_NoVirtual()
	{
		int returnValue = getMousePickState_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.MousePickState.toEnum(returnValue);
	}

	protected  void setMousePickState_MousePickState_callback(int state)
	{
		com.earthview.world.spatial3d.analysis.MousePickState stateParamValue = com.earthview.world.spatial3d.analysis.MousePickState.toEnum(state);
		setMousePickState(stateParamValue);
	}

	native private void setMousePickState_MousePickState(long pNativeObject, int state);
	/**
	 * 设置鼠标状态
	 * @param EarthView::World::Spatial3D::Analysis::MousePickState 鼠标状态
	 */
	public void setMousePickState(com.earthview.world.spatial3d.analysis.MousePickState state)
	{
		int stateParamValue = state.getValue();
		setMousePickState_MousePickState(this.nativeObject.pointer, stateParamValue);
	}
	native private void setMousePickState_MousePickState_NoVirtual(long pNativeObject, int state);
	protected void setMousePickState_NoVirtual(com.earthview.world.spatial3d.analysis.MousePickState state)
	{
		int stateParamValue = state.getValue();
		setMousePickState_MousePickState_NoVirtual(this.nativeObject.pointer, stateParamValue);
	}

	native private long getCurrentGeoPos_void(long pNativeObject);
	/**
	 * 获取当前地理坐标点
	 * @return 当前地理坐标点
	 */
	public com.earthview.world.spatial.math.Vector3 getCurrentGeoPos()
	{
		long returnValue = getCurrentGeoPos_void(this.nativeObject.pointer);
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
	native private void setCurrentGeoPos_CVector3(long pNativeObject, long value);
	/**
	 * 设置当前地理坐标点
	 * @param value 当前地理坐标点
	 */
	public void setCurrentGeoPos(com.earthview.world.spatial.math.Vector3 value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setCurrentGeoPos_CVector3(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getDefaultCalcuMode_void(long pNativeObject);
	/**
	 * 获取是否使用默认计算模式（相关参数采用推荐值）
	 */
	public boolean getDefaultCalcuMode()
	{
		boolean returnValue = getDefaultCalcuMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultCalcuMode_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否使用默认计算模式（相关参数采用推荐值）
	 * @param value 
	 */
	public void setDefaultCalcuMode(boolean value)
	{
		boolean valueParamValue = value;
		setDefaultCalcuMode_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private double getSearchInterval_void(long pNativeObject);
	/**
	 * 获取采样间隔距离
	 * @return 采样间隔距离
	 */
	public double getSearchInterval()
	{
		double returnValue = getSearchInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSearchInterval_ev_real64(long pNativeObject, double value);
	/**
	 * 设置采样间隔距离
	 * @param value 采样间隔距离
	 */
	public void setSearchInterval(double value)
	{
		double valueParamValue = value;
		setSearchInterval_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getUseHighestDem_void(long pNativeObject);
	/**
	 * 获取是否使用最高精度的DEM
	 * @param  
	 */
	public boolean getUseHighestDem()
	{
		boolean returnValue = getUseHighestDem_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseHighestDem_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否使用最高精度的DEM
	 * @param value 
	 */
	public void setUseHighestDem(boolean value)
	{
		boolean valueParamValue = value;
		setUseHighestDem_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getIsCalculateOnly_void(long pNativeObject);
	/**
	 * 获取是否仅计算分析结果（不渲染）
	 * @param  
	 */
	public boolean getIsCalculateOnly()
	{
		boolean returnValue = getIsCalculateOnly_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsCalculateOnly_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否仅计算分析结果（不渲染）
	 * @param value 
	 */
	public void setIsCalculateOnly(boolean value)
	{
		boolean valueParamValue = value;
		setIsCalculateOnly_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getIsCalculateAsyn_void(long pNativeObject);
	/**
	 * 获取异步计算分析结果
	 * @param  
	 */
	public boolean getIsCalculateAsyn()
	{
		boolean returnValue = getIsCalculateAsyn_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIsCalculateAsyn_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置异步计算分析结果
	 * @param value 
	 */
	public void setIsCalculateAsyn(boolean value)
	{
		boolean valueParamValue = value;
		setIsCalculateAsyn_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	protected  boolean getIsAnalysisInServer_void_callback()
	{
		boolean returnValue = getIsAnalysisInServer();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getIsAnalysisInServer_void(long pNativeObject);
	/**
	 * 获取是否在服务器端分析
	 * @param  
	 */
	public boolean getIsAnalysisInServer()
	{
		boolean returnValue = getIsAnalysisInServer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsAnalysisInServer_void_NoVirtual(long pNativeObject);
	protected boolean getIsAnalysisInServer_NoVirtual()
	{
		boolean returnValue = getIsAnalysisInServer_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setIsAnalysisInServer_ev_bool_callback(boolean bInServer)
	{
		boolean bInServerParamValue = bInServer;
		setIsAnalysisInServer(bInServerParamValue);
	}

	native private void setIsAnalysisInServer_ev_bool(long pNativeObject, boolean bInServer);
	/**
	 * 设置是否在服务器端分析
	 * @param bInServer 是否在服务器端分析
	 */
	public void setIsAnalysisInServer(boolean bInServer)
	{
		boolean bInServerParamValue = bInServer;
		setIsAnalysisInServer_ev_bool(this.nativeObject.pointer, bInServerParamValue);
	}
	native private void setIsAnalysisInServer_ev_bool_NoVirtual(long pNativeObject, boolean bInServer);
	protected void setIsAnalysisInServer_NoVirtual(boolean bInServer)
	{
		boolean bInServerParamValue = bInServer;
		setIsAnalysisInServer_ev_bool_NoVirtual(this.nativeObject.pointer, bInServerParamValue);
	}

	protected  long getAltitude3DListener_void_callback()
	{
		com.earthview.world.spatial3d.analysis.AltitudeListener returnValue = getAltitude3DListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAltitude3DListener_void(long pNativeObject);
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.AltitudeListener getAltitude3DListener()
	{
		long returnValue = getAltitude3DListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.AltitudeListener __returnValue = new com.earthview.world.spatial3d.analysis.AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate, "CAltitudeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.AltitudeListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAltitudeListener");
		}
		return __returnValue;
	}
	native private long getAltitude3DListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.analysis.AltitudeListener getAltitude3DListener_NoVirtual()
	{
		long returnValue = getAltitude3DListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.AltitudeListener __returnValue = new com.earthview.world.spatial3d.analysis.AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate, "CAltitudeListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.AltitudeListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAltitudeListener");
		}
		return __returnValue;
	}

	protected  void setAltitude3DListener_CAltitudeListener_callback(long ref_listener)
	{
		com.earthview.world.spatial3d.analysis.AltitudeListener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.spatial3d.analysis.AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.spatial3d.analysis.AltitudeListener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		setAltitude3DListener(ref_listenerParamValue);
	}

	native private void setAltitude3DListener_CAltitudeListener(long pNativeObject, long ref_listener);
	/**
	 * 设置高程控件指针
	 * @param listener 设置的指针
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.AltitudeListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setAltitude3DListener_CAltitudeListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void setAltitude3DListener_CAltitudeListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void setAltitude3DListener_NoVirtual(com.earthview.world.spatial3d.analysis.AltitudeListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setAltitude3DListener_CAltitudeListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	protected  long getAnalysis3DListener_void_callback()
	{
		com.earthview.world.spatial3d.analysis.Analysis3DListener returnValue = getAnalysis3DListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAnalysis3DListener_void(long pNativeObject);
	/**
	 * 获取用户注册的监听
	 * @param  
	 * @return 用户注册的监听
	 */
	public com.earthview.world.spatial3d.analysis.Analysis3DListener getAnalysis3DListener()
	{
		long returnValue = getAnalysis3DListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Analysis3DListener __returnValue = new com.earthview.world.spatial3d.analysis.Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate, "CAnalysis3DListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Analysis3DListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnalysis3DListener");
		}
		return __returnValue;
	}
	native private long getAnalysis3DListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.analysis.Analysis3DListener getAnalysis3DListener_NoVirtual()
	{
		long returnValue = getAnalysis3DListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Analysis3DListener __returnValue = new com.earthview.world.spatial3d.analysis.Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate, "CAnalysis3DListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Analysis3DListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAnalysis3DListener");
		}
		return __returnValue;
	}

	protected  void setAnalysis3DListener_CAnalysis3DListener_callback(long ref_listener)
	{
		com.earthview.world.spatial3d.analysis.Analysis3DListener ref_listenerParamValue = (ref_listener == 0L ? null : new com.earthview.world.spatial3d.analysis.Analysis3DListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_listenerParamValue != null)
		{
		ref_listenerParamValue.setDelegate(true);
		ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		IClassFactory ref_listenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_listenerParamValue.getCppInstanceTypeName());
		if (ref_listenerParamValueClassFactory != null)
		{
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue = (com.earthview.world.spatial3d.analysis.Analysis3DListener)ref_listenerParamValueClassFactory.create();
			ref_listenerParamValue.setDelegate(true);
			ref_listenerParamValue.setInstancePointer(new InstancePointer(ref_listener));
		}
		}
		setAnalysis3DListener(ref_listenerParamValue);
	}

	native private void setAnalysis3DListener_CAnalysis3DListener(long pNativeObject, long ref_listener);
	/**
	 * 设置注册的监听，用于处理界面的交互
	 * @param listener 注册的监听
	 */
	public void setAnalysis3DListener(com.earthview.world.spatial3d.analysis.Analysis3DListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setAnalysis3DListener_CAnalysis3DListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void setAnalysis3DListener_CAnalysis3DListener_NoVirtual(long pNativeObject, long ref_listener);
	protected void setAnalysis3DListener_NoVirtual(com.earthview.world.spatial3d.analysis.Analysis3DListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		setAnalysis3DListener_CAnalysis3DListener_NoVirtual(this.nativeObject.pointer, ref_listenerParamValue);
	}

	native private long getStringInterfacePtr_void(long pNativeObject);
	/**
	 * 获取分析工具的右侧属性框底层字符界面
	 * @return 底层字符界面
	 */
	public com.earthview.world.core.StringInterface getStringInterfacePtr()
	{
		long returnValue = getStringInterfacePtr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	native private void setStringInterfacePtr_CStringInterface(long pNativeObject, long ref_pStringInterface);
	/**
	 * 设置分析工具的右侧属性框底层字符界面
	 * @param ref_pStringInterface 底层字符界面
	 */
	public void setStringInterfacePtr(com.earthview.world.core.StringInterface ref_pStringInterface)
	{
		long ref_pStringInterfaceParamValue = (ref_pStringInterface == null ? 0L : ref_pStringInterface.nativeObject.pointer);
		setStringInterfacePtr_CStringInterface(this.nativeObject.pointer, ref_pStringInterfaceParamValue);
	}
	native private long getRenderPointColor_void(long pNativeObject);
	/**
	 * 获取渲染点的颜色
	 * @param  
	 * @return 颜色
	 */
	public com.earthview.world.graphic.ColourValue getRenderPointColor()
	{
		long returnValue = getRenderPointColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setRenderPointColor_CColourValue(long pNativeObject, long value);
	/**
	 * 设置渲染点的颜色
	 * @param value 颜色
	 */
	public void setRenderPointColor(com.earthview.world.graphic.ColourValue value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setRenderPointColor_CColourValue(this.nativeObject.pointer, valueParamValue);
	}
	native private short getRenderPointSize_void(long pNativeObject);
	/**
	 * 获取渲染点的大小
	 * @param  
	 * @return 大小
	 */
	public short getRenderPointSize()
	{
		short returnValue = getRenderPointSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderPointSize_ev_uint8(long pNativeObject, short value);
	/**
	 * 设置渲染点的大小
	 * @param value 大小
	 */
	public void setRenderPointSize(short value)
	{
		short valueParamValue = value;
		setRenderPointSize_ev_uint8(this.nativeObject.pointer, valueParamValue);
	}
	native private long getRenderLineColor_void(long pNativeObject);
	/**
	 * 获取渲染线的颜色
	 * @param  
	 * @return 颜色
	 */
	public com.earthview.world.graphic.ColourValue getRenderLineColor()
	{
		long returnValue = getRenderLineColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setRenderLineColor_CColourValue(long pNativeObject, long value);
	/**
	 * 设置渲染线的颜色
	 * @param value 颜色
	 */
	public void setRenderLineColor(com.earthview.world.graphic.ColourValue value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setRenderLineColor_CColourValue(this.nativeObject.pointer, valueParamValue);
	}
	native private short getRenderLineWidth_void(long pNativeObject);
	/**
	 * 获取渲染线的宽度
	 * @param  
	 * @return 宽度
	 */
	public short getRenderLineWidth()
	{
		short returnValue = getRenderLineWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderLineWidth_ev_uint8(long pNativeObject, short value);
	/**
	 * 设置渲染线的宽度
	 * @param value 宽度
	 */
	public void setRenderLineWidth(short value)
	{
		short valueParamValue = value;
		setRenderLineWidth_ev_uint8(this.nativeObject.pointer, valueParamValue);
	}
	native private long getRenderPolygonColor_void(long pNativeObject);
	/**
	 * 获取渲染多边形表面的颜色
	 * @param  
	 * @return 颜色
	 */
	public com.earthview.world.graphic.ColourValue getRenderPolygonColor()
	{
		long returnValue = getRenderPolygonColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setRenderPolygonColor_CColourValue(long pNativeObject, long value);
	/**
	 * 设置渲染多边形表面的颜色
	 * @param value 颜色
	 */
	public void setRenderPolygonColor(com.earthview.world.graphic.ColourValue value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setRenderPolygonColor_CColourValue(this.nativeObject.pointer, valueParamValue);
	}
	native private long getRenderFontColor_void(long pNativeObject);
	/**
	 * 获取渲染字体的颜色
	 * @param  
	 * @return 颜色
	 */
	public com.earthview.world.graphic.ColourValue getRenderFontColor()
	{
		long returnValue = getRenderFontColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate, "CColourValue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setRenderFontColor_CColourValue(long pNativeObject, long value);
	/**
	 * 设置渲染字体的颜色
	 * @param value 颜色
	 */
	public void setRenderFontColor(com.earthview.world.graphic.ColourValue value)
	{
		long valueParamValue = value.nativeObject.pointer;
		setRenderFontColor_CColourValue(this.nativeObject.pointer, valueParamValue);
	}
	native private short getRenderFontSize_void(long pNativeObject);
	/**
	 * 获取渲染字体的大小
	 * @param  
	 * @return 大小
	 */
	public short getRenderFontSize()
	{
		short returnValue = getRenderFontSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRenderFontSize_ev_uint8(long pNativeObject, short value);
	/**
	 * 设置渲染字体的大小
	 * @param value 大小
	 */
	public void setRenderFontSize(short value)
	{
		short valueParamValue = value;
		setRenderFontSize_ev_uint8(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getFontVisible_void(long pNativeObject);
	/**
	 * 获取字体的可见性
	 * @param  
	 * @return 可见性
	 */
	public boolean getFontVisible()
	{
		boolean returnValue = getFontVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置渲染字体是否可见
	 * @param visible 是否可见
	 */
	public void setFontVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setFontVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private static String toStringDms_ev_real64(double degree);
	/**
	 * 将数值转换为度分秒
	 * @param degree 数值
	 * @return 字符串
	 */
	public static String toStringDms(double degree)
	{
		double degreeParamValue = degree;
		String returnValue = toStringDms_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static String toStringDmsLon_ev_real64(double degree);
	/**
	 * 数值转换为纬度
	 * @param degree 数值
	 * @return 字符串
	 */
	public static String toStringDmsLon(double degree)
	{
		double degreeParamValue = degree;
		String returnValue = toStringDmsLon_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static String toStringDmsLat_ev_real64(double degree);
	/**
	 * 数值转换为经度
	 * @param degree 数值
	 * @return 字符串
	 */
	public static String toStringDmsLat(double degree)
	{
		double degreeParamValue = degree;
		String returnValue = toStringDmsLat_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static String toFormatLength_ev_real64_LengthUnit(double length, int unit);
	/**
	 * 将长度格式化
	 * @param length 长度值
	 * @return 格式化后的字符串
	 */
	public static String toFormatLength(double length, com.earthview.world.spatial3d.analysis.LengthUnit unit)
	{
		double lengthParamValue = length;
		int unitParamValue = unit.getValue();
		String returnValue = toFormatLength_ev_real64_LengthUnit(lengthParamValue, unitParamValue);
		return returnValue;
	}
	native private static String toFormatArea_ev_real64_AreaUnit(double area, int unit);
	/**
	 * 格式化面积
	 * @param area 面积值
	 * @return 格式化后的字符串
	 */
	public static String toFormatArea(double area, com.earthview.world.spatial3d.analysis.AreaUnit unit)
	{
		double areaParamValue = area;
		int unitParamValue = unit.getValue();
		String returnValue = toFormatArea_ev_real64_AreaUnit(areaParamValue, unitParamValue);
		return returnValue;
	}
	native private static String toFormatVolume_ev_real64_VolumeUnit(double volume, int unit);
	/**
	 * /将体积值格式化字符串/
	 * @param area 面积值
	 * @param area 以平方米表示的面积
	 * @param area 体积以立方米为单位
	 * @return 格式化后的字符串
	 */
	public static String toFormatVolume(double volume, com.earthview.world.spatial3d.analysis.VolumeUnit unit)
	{
		double volumeParamValue = volume;
		int unitParamValue = unit.getValue();
		String returnValue = toFormatVolume_ev_real64_VolumeUnit(volumeParamValue, unitParamValue);
		return returnValue;
	}
	public Ianalysis3dtool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ianalysis3dtool(CreatedWhenConstruct cwc, String classNameStr) {
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
	 * 不使用Tool
	 * @param  
	 */
	public void deactivate()
	{
		super.deactivate_NoVirtual();
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
	 * 鼠标双击事件触发
	 * @param  
	 * @return 标识此事件是否已经被ITool处理过,true:处理过(不再向父控件传递此事件);false:未处理(父控件对象可以继续处理)
	 */
	public boolean onDoubleClick()
	{
		return super.onDoubleClick_NoVirtual();
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
	
	public static Ianalysis3dtool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ianalysis3dtool obj = null;
 		if(baseObj instanceof Ianalysis3dtool)
		{
			obj = (Ianalysis3dtool)baseObj;
		} else {
			obj = new Ianalysis3dtool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IAnalysis3DTool");
			obj.increaseCast();
		}

		return obj;
	}
}
