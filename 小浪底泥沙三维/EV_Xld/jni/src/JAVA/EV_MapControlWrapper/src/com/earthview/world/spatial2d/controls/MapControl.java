package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图控件
 */
public class MapControl extends com.earthview.world.spatial.atlas.Ispatialcontrol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CMapControl", new MapControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCMapControlProxy", new MapControlClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public MapControl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMapControlProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.MapControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取控件的类型
	 * @param  
	 * @return 控件类型
	 */
	public com.earthview.world.spatial.atlas.EVSpatialControlType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVSpatialControlType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVSpatialControlType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVSpatialControlType.toEnum(returnValue);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取地图名字
	 * @param  
	 * @return 地图名字
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

	native private String getTypeString_void(long pNativeObject);
	/**
	 * 获取控件类型的字符串形式
	 * @param  
	 * @return 类型
	 */
	public String getTypeString()
	{
		String returnValue = getTypeString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeString_void_NoVirtual(long pNativeObject);
	protected String getTypeString_NoVirtual()
	{
		String returnValue = getTypeString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void notifyViewChanged_IViewArgs(long pNativeObject, long args);
	/**
	 * 接收外部通知，刷新控件的视口区域
	 * @param args 视口信息
	 */
	public void notifyViewChanged(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		notifyViewChanged_IViewArgs(this.nativeObject.pointer, argsParamValue);
	}
	native private void notifyViewChanged_IViewArgs_NoVirtual(long pNativeObject, long args);
	protected void notifyViewChanged_NoVirtual(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		notifyViewChanged_IViewArgs_NoVirtual(this.nativeObject.pointer, argsParamValue);
	}

	native private void setProxy_CMapControlAgent(long pNativeObject, long ref_pxy);
	/**
	 * 设置控件代理
	 * @param pxy 控件代理
	 */
	public void setProxy(com.earthview.world.spatial2d.controls.MapControlAgent ref_pxy)
	{
		long ref_pxyParamValue = (ref_pxy == null ? 0L : ref_pxy.nativeObject.pointer);
		setProxy_CMapControlAgent(this.nativeObject.pointer, ref_pxyParamValue);
	}
	native private long getBackGround_void(long pNativeObject);
	/**
	 * 获取背景色
	 * @param  
	 * @return 背景色(内部指针)
	 */
	public com.earthview.world.spatial.display.Icolor getBackGround()
	{
		long returnValue = getBackGround_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private void setBackground_IColor(long pNativeObject, long background);
	/**
	 * 设置地图背景色
	 * @param background 地图背景色
	 */
	public void setBackground(com.earthview.world.spatial.display.Icolor background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackground_IColor(this.nativeObject.pointer, backgroundParamValue);
	}
	native private long getDisplay_void(long pNativeObject);
	/**
	 * 获取空间显示参数
	 * @param  
	 * @return 空间显示指针(内部指针)
	 */
	public com.earthview.world.spatial.display.Ispatialdisplay getDisplay()
	{
		long returnValue = getDisplay_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}
	native private long getFloatingDisplay_void(long pNativeObject);
	public com.earthview.world.spatial.display.Ispatialdisplay getFloatingDisplay()
	{
		long returnValue = getFloatingDisplay_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}
	native private long getMap_void(long pNativeObject);
	/**
	 * 获取地图控件所关联的map
	 * @param  
	 * @return 地图map指针(内部指针)
	 */
	public com.earthview.world.spatial.atlas.Imap getMap()
	{
		long returnValue = getMap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMap");
		}
		return __returnValue;
	}
	native private void setMap_IMap(long pNativeObject, long ref_map);
	/**
	 * 设置map与控件关联
	 * @param map 地图map
	 */
	public void setMap(com.earthview.world.spatial.atlas.Imap ref_map)
	{
		long ref_mapParamValue = (ref_map == null ? 0L : ref_map.nativeObject.pointer);
		setMap_IMap(this.nativeObject.pointer, ref_mapParamValue);
	}
	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取当前的坐标系统
	 * @param  
	 * @return 坐标系统指针(内部指针)
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private void setSpatialReference_ISpatialReference(long pNativeObject, long sr);
	/**
	 * 设置当前的坐标系统
	 * @param  坐标系统指针
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, srParamValue);
	}
	native private long getMargin_void(long pNativeObject);
	/**
	 * 获取空白距离(暂未实现)
	 * @param  
	 * @return 空白距离值(单位:像素)
	 */
	public long getMargin()
	{
		long returnValue = getMargin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMargin_ev_uint32(long pNativeObject, long margin);
	/**
	 * 设置空白距离(暂未实现)
	 * @param margin 空白距离
	 */
	public void setMargin(long margin)
	{
		long marginParamValue = margin;
		setMargin_ev_uint32(this.nativeObject.pointer, marginParamValue);
	}
	native private void getCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取中心点坐标
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 */
	public void getCenter(DoublePointer cx, DoublePointer cy)
	{
		long cxParamValue = (cx == null ? 0L : cx.nativeObject.pointer);
		long cyParamValue = (cy == null ? 0L : cy.nativeObject.pointer);
		getCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private void setCenter_ev_real64_ev_real64(long pNativeObject, double cx, double cy);
	/**
	 * 设置中心点坐标
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 */
	public void setCenter(double cx, double cy)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		setCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private void getGeographicCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取中心点坐标（地理经纬度坐标）
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 */
	public void getGeographicCenter(DoublePointer cx, DoublePointer cy)
	{
		long cxParamValue = (cx == null ? 0L : cx.nativeObject.pointer);
		long cyParamValue = (cy == null ? 0L : cy.nativeObject.pointer);
		getGeographicCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private void setGeographicCenter_ev_real64_ev_real64(long pNativeObject, double cx, double cy);
	/**
	 * 设置中心点坐标（地理经纬度坐标）
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 */
	public void setGeographicCenter(double cx, double cy)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		setGeographicCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
	}
	native private double getCurrentScale_void(long pNativeObject);
	/**
	 * 获取当前的比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getCurrentScale()
	{
		double returnValue = getCurrentScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setScaleAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double scale);
	/**
	 * 在指定位置进行缩放
	 * @param x 指定位置的X坐标
	 * @param y 指定位置的Y坐标
	 * @param scale 
	 */
	public void setScaleAt(double x, double y, double scale)
	{
		double xParamValue = x;
		double yParamValue = y;
		double scaleParamValue = scale;
		setScaleAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, scaleParamValue);
	}
	native private double getRotation_void(long pNativeObject);
	/**
	 * 获取地图的旋转角度
	 * @param  
	 * @return 旋转角度
	 */
	public double getRotation()
	{
		double returnValue = getRotation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRotateAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double angle, double x, double y);
	/**
	 * 在指定位置进行地图旋转
	 * @param angle 旋转角度
	 * @param x 指定位置的X坐标
	 * @param y 指定位置的Y坐标
	 */
	public void setRotateAt(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		setRotateAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, angleParamValue, xParamValue, yParamValue);
	}
	native private void gotoMap_ev_real64_ev_real64_ev_real64(long pNativeObject, double cx, double cy, double scale);
	/**
	 * 将地图定位到指定的中心点和比例尺
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 * @param scale 比例尺
	 */
	public void gotoMap(double cx, double cy, double scale)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		double scaleParamValue = scale;
		gotoMap_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue, scaleParamValue);
	}
	native private void changeViewport_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double cx, double cy, double scale, double rotation);
	/**
	 * 将地图定位到指定的参数
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 * @param scale 比例尺
	 * @param rotation 旋转角度
	 */
	public void changeViewport(double cx, double cy, double scale, double rotation)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		double scaleParamValue = scale;
		double rotationParamValue = rotation;
		changeViewport_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue, scaleParamValue, rotationParamValue);
	}
	native private void changeGeographicViewport_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double cx, double cy, double scale, double rotation);
	/**
	 * 将地图定位到指定的参数（地理经纬度坐标下）
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 * @param scale 比例尺
	 * @param rotation 旋转角度
	 */
	public void changeGeographicViewport(double cx, double cy, double scale, double rotation)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		double scaleParamValue = scale;
		double rotationParamValue = rotation;
		changeGeographicViewport_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue, scaleParamValue, rotationParamValue);
	}
	native private void getCurrentCoordinate_ev_real64_ev_real64(long pNativeObject, long x, long y);
	/**
	 * 获取鼠标位置的地图坐标
	 * @param cx 鼠标位置的X坐标
	 * @param cy 鼠标位置的Y坐标
	 */
	public void getCurrentCoordinate(DoublePointer x, DoublePointer y)
	{
		long xParamValue = (x == null ? 0L : x.nativeObject.pointer);
		long yParamValue = (y == null ? 0L : y.nativeObject.pointer);
		getCurrentCoordinate_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private int getMapUnits_void(long pNativeObject);
	/**
	 * 获取地图的单位
	 * @param  
	 * @return 地图单位
	 */
	public com.earthview.world.spatial.atlas.EVMapUnits getMapUnits()
	{
		int returnValue = getMapUnits_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}
	native private void setMapUnits_EVMapUnits(long pNativeObject, int units);
	/**
	 * 设置地图的单位(暂未实现)
	 * @param units 地图单位
	 */
	public void setMapUnits(com.earthview.world.spatial.atlas.EVMapUnits units)
	{
		int unitsParamValue = units.getValue();
		setMapUnits_EVMapUnits(this.nativeObject.pointer, unitsParamValue);
	}
	native private void setCurrentTool_ITool(long pNativeObject, long ref_tool);
	/**
	 * 设置地图的当前工具
	 * @param tool 工具
	 */
	public void setCurrentTool(com.earthview.world.spatial.systemui.Itool ref_tool)
	{
		long ref_toolParamValue = (ref_tool == null ? 0L : ref_tool.nativeObject.pointer);
		setCurrentTool_ITool(this.nativeObject.pointer, ref_toolParamValue);
	}
	native private long getCurrentTool_void(long pNativeObject);
	/**
	 * 获取地图的当前工具
	 * @param  
	 * @return 工具
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
	native private long getPreviousTool_void(long pNativeObject);
	/**
	 * 获取上一个工具
	 * @param  
	 * @return 工具
	 */
	public com.earthview.world.spatial.systemui.Itool getPreviousTool()
	{
		long returnValue = getPreviousTool_void(this.nativeObject.pointer);
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
	native private String getMessage_void(long pNativeObject);
	/**
	 * 获取地图控件的信息(暂未实现)
	 * @param  
	 */
	public String getMessage()
	{
		String returnValue = getMessage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getViewportManager_void(long pNativeObject);
	/**
	 * 获取视口控制器
	 * @param  
	 * @return 视口控制器
	 */
	public com.earthview.world.spatial.geodataset.WorkCommandManager getViewportManager()
	{
		long returnValue = getViewportManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.WorkCommandManager __returnValue = new com.earthview.world.spatial.geodataset.WorkCommandManager(CreatedWhenConstruct.CWC_NotToCreate, "CWorkCommandManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.WorkCommandManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkCommandManager");
		}
		return __returnValue;
	}
	native private long getTrackingLayer_void(long pNativeObject);
	/**
	 * 获取跟踪层
	 * @param  
	 * @return 跟踪层
	 */
	public com.earthview.world.spatial2d.controls.TrackingLayer getTrackingLayer()
	{
		long returnValue = getTrackingLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.TrackingLayer __returnValue = new com.earthview.world.spatial2d.controls.TrackingLayer(CreatedWhenConstruct.CWC_NotToCreate, "CTrackingLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.TrackingLayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTrackingLayer");
		}
		return __returnValue;
	}
	native private long getDataEditor_void(long pNativeObject);
	/**
	 * 获取数据编辑器,用于编辑功能
	 * @param  
	 * @return 数据编辑器
	 */
	public com.earthview.world.spatial2d.controls.DataEditor getDataEditor()
	{
		long returnValue = getDataEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.DataEditor __returnValue = new com.earthview.world.spatial2d.controls.DataEditor(CreatedWhenConstruct.CWC_NotToCreate, "CDataEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.DataEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDataEditor");
		}
		return __returnValue;
	}
	native private void select_IGeometry(long pNativeObject, long geometry);
	/**
	 * 几何选择
	 * @param geometry 相交几何
	 */
	public void select(com.earthview.world.spatial.geometry.Igeometry geometry)
	{
		long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
		select_IGeometry(this.nativeObject.pointer, geometryParamValue);
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * 刷新地图
	 * @param  
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private boolean isDrawing_void(long pNativeObject);
	/**
	 * 检测地图是否正在绘制
	 * @param  
	 * @return 如果正在绘制返回true,反之则否
	 */
	public boolean isDrawing()
	{
		boolean returnValue = isDrawing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void freezeDraw_void(long pNativeObject);
	/**
	 * 停止绘制
	 * @param  
	 */
	public void freezeDraw()
	{
		freezeDraw_void(this.nativeObject.pointer);
	}
	native private void freezeDraw_ev_bool(long pNativeObject, boolean bWait);
	/**
	 * 停止绘制当参数传true等同于freezeDraw()传false不等待线程结束
	 * @param bWait 是否进行等待
	 */
	public void freezeDraw(boolean bWait)
	{
		boolean bWaitParamValue = bWait;
		freezeDraw_ev_bool(this.nativeObject.pointer, bWaitParamValue);
	}
	protected  void beginDrawing_void_callback()
	{
		beginDrawing();
	}

	native private void beginDrawing_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void beginDrawing()
	{
		beginDrawing_void(this.nativeObject.pointer);
	}
	native private void beginDrawing_void_NoVirtual(long pNativeObject);
	protected void beginDrawing_NoVirtual()
	{
		beginDrawing_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void endDrawing_void_callback()
	{
		endDrawing();
	}

	native private void endDrawing_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public void endDrawing()
	{
		endDrawing_void(this.nativeObject.pointer);
	}
	native private void endDrawing_void_NoVirtual(long pNativeObject);
	protected void endDrawing_NoVirtual()
	{
		endDrawing_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void updateLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 更新指定的图层
	 * @param layer 待更新的图层
	 */
	public void updateLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		updateLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private boolean isExist_ILayer(long pNativeObject, long layer);
	/**
	 * 判断地图控件是否包含指定的图层
	 * @param layer 图层
	 */
	public boolean isExist(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = isExist_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private void fullExtent_void(long pNativeObject);
	/**
	 * 地图全幅显示
	 * @param  
	 */
	public void fullExtent()
	{
		fullExtent_void(this.nativeObject.pointer);
	}
	native private void zoomToLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 缩放至指定图层的范围
	 * @param layer 图层
	 */
	public void zoomToLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		zoomToLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void previousView_void(long pNativeObject);
	/**
	 * 恢复到前一个视口范围
	 * @param  
	 */
	public void previousView()
	{
		previousView_void(this.nativeObject.pointer);
	}
	native private void nextView_void(long pNativeObject);
	/**
	 * 回到下一个视口范围
	 * @param  
	 */
	public void nextView()
	{
		nextView_void(this.nativeObject.pointer);
	}
	native private boolean onContextMenu_ev_int32_ev_int32(long pNativeObject, int x, int y);
	/**
	 * 右键菜单事件触发
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @return 是否继续向父控件发送该事件
	 */
	public boolean onContextMenu(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onContextMenu_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private void onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标双击事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public void onDoubleClick(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onKeyDown_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘按下事件触发
	 * @param key 按下的键
	 * @param shift shift键是否同时被按下
	 */
	public void onKeyDown(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		onKeyDown_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
	}
	native private void onKeyUp_ev_int32_ev_int32(long pNativeObject, int keyCode, int shift);
	/**
	 * 键盘弹起事件触发
	 * @param key 弹起的键
	 * @param shift shift键是否同时被释放
	 */
	public void onKeyUp(int keyCode, int shift)
	{
		int keyCodeParamValue = keyCode;
		int shiftParamValue = shift;
		onKeyUp_ev_int32_ev_int32(this.nativeObject.pointer, keyCodeParamValue, shiftParamValue);
	}
	native private void onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标按下事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public void onMouseDown(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标移动事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被按下
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public void onMouseMove(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/**
	 * 鼠标弹起事件触发
	 * @param button 键的标识(1代表左键，2代表右键，4代表中键)
	 * @param shift shift键是否同时被释放
	 * @param x 光标位置x
	 * @param y 光标位置y
	 */
	public void onMouseUp(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
	}
	native private void onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int delta, int x, int y, int flag);
	/**
	 * 鼠标滚轮滚动事件触发
	 * @param delta 滚动的幅度
	 * @param x 光标位置x
	 * @param y 光标位置y
	 * @param flag 标识位
	 */
	public void onMouseWheel(int delta, int x, int y, int flag)
	{
		int deltaParamValue = delta;
		int xParamValue = x;
		int yParamValue = y;
		int flagParamValue = flag;
		onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, deltaParamValue, xParamValue, yParamValue, flagParamValue);
	}
	native private void onResize_ev_int32_ev_int32(long pNativeObject, int width, int height);
	/**
	 * 窗体大小发生变化
	 * @param width 窗体宽度
	 * @param height 窗体高度
	 */
	public void onResize(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		onResize_ev_int32_ev_int32(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void notifySelectionChanged_void(long pNativeObject);
	/**
	 * 通知地图的选择集已经发生变化
	 * @param  
	 */
	public void notifySelectionChanged()
	{
		notifySelectionChanged_void(this.nativeObject.pointer);
	}
	native private void notifyOtherView_void(long pNativeObject);
	/**
	 * 通知其他视口,范围已经发生变化
	 * @param  
	 */
	public void notifyOtherView()
	{
		notifyOtherView_void(this.nativeObject.pointer);
	}
	native private void onAnalysisEnd_ICommand(long pNativeObject, long command);
	/**
	 * 二维分析完成后触发的事件
	 */
	public void onAnalysisEnd(com.earthview.world.spatial.systemui.Icommand command)
	{
		long commandParamValue = (command == null ? 0L : command.nativeObject.pointer);
		onAnalysisEnd_ICommand(this.nativeObject.pointer, commandParamValue);
	}
	native private void addMapControlListener_IMapControlListener(long pNativeObject, long ref_listener);
	public void addMapControlListener(com.earthview.world.spatial2d.controls.Imapcontrollistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addMapControlListener_IMapControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeMapControlListener_IMapControlListener(long pNativeObject, long ref_listener);
	public void removeMapControlListener(com.earthview.world.spatial2d.controls.Imapcontrollistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		removeMapControlListener_IMapControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private long getEagleEye_void(long pNativeObject);
	/**
	 * 获取鹰眼对象
	 * @param  
	 * @return 返回鹰眼对象指针
	 */
	public com.earthview.world.spatial2d.controls.MapEagleEye getEagleEye()
	{
		long returnValue = getEagleEye_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.MapEagleEye __returnValue = new com.earthview.world.spatial2d.controls.MapEagleEye(CreatedWhenConstruct.CWC_NotToCreate, "CMapEagleEye");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.MapEagleEye)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapEagleEye");
		}
		return __returnValue;
	}
	native private void connectEagleEye_CMapEagleEye(long pNativeObject, long ref_eagleEye);
	/**
	 * 设置鹰眼对象关联
	 * @param eagleEye 鹰眼对象
	 */
	public void connectEagleEye(com.earthview.world.spatial2d.controls.MapEagleEye ref_eagleEye)
	{
		long ref_eagleEyeParamValue = (ref_eagleEye == null ? 0L : ref_eagleEye.nativeObject.pointer);
		connectEagleEye_CMapEagleEye(this.nativeObject.pointer, ref_eagleEyeParamValue);
	}
	native private void disconnectEagleEye_void(long pNativeObject);
	/**
	 * 取消鹰眼关联
	 * @param  
	 */
	public void disconnectEagleEye()
	{
		disconnectEagleEye_void(this.nativeObject.pointer);
	}
	native private long getMapCanvas_void(long pNativeObject);
	/**
	 * 获取地图画布
	 * @param  
	 * @return 返回地图画布
	 */
	public com.earthview.world.display.Ipaintdevice getMapCanvas()
	{
		long returnValue = getMapCanvas_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}
	native private void repaint_void(long pNativeObject);
	/**
	 * 重绘
	 * @param  
	 */
	public void repaint()
	{
		repaint_void(this.nativeObject.pointer);
	}
	native private void setCursor_ev_int32(long pNativeObject, int value);
	/**
	 * 设置光标
	 * @param value 光标枚举值
	 */
	public void setCursor(int value)
	{
		int valueParamValue = value;
		setCursor_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setWheelDelay_ev_int32(long pNativeObject, int time);
	/**
	 * 设置滚轮停止滚动后,到执行绘制请求的延迟时间.默认是500ms
	 * @param time 延迟的时间
	 */
	public void setWheelDelay(int time)
	{
		int timeParamValue = time;
		setWheelDelay_ev_int32(this.nativeObject.pointer, timeParamValue);
	}
	native private int getWheelDelay_void(long pNativeObject);
	/**
	 * 获取延迟时间
	 * @param  
	 */
	public int getWheelDelay()
	{
		int returnValue = getWheelDelay_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setViewControlMode_EVMapcontrolViewControlMode(long pNativeObject, int mode);
	/**
	 * 设置滚轮控制模式可选择滚轮只在地图可见比例尺范围内有效
	 * @param mode 延迟的时间
	 */
	public void setViewControlMode(com.earthview.world.spatial2d.controls.EVMapcontrolViewControlMode mode)
	{
		int modeParamValue = mode.getValue();
		setViewControlMode_EVMapcontrolViewControlMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getViewControlMode_void(long pNativeObject);
	/**
	 * 获滚轮控制模式
	 * @param  
	 */
	public com.earthview.world.spatial2d.controls.EVMapcontrolViewControlMode getViewControlMode()
	{
		int returnValue = getViewControlMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVMapcontrolViewControlMode.toEnum(returnValue);
	}
	native private void setPanClickEnable_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置是否开启漫游单击定位
	 */
	public void setPanClickEnable(boolean b)
	{
		boolean bParamValue = b;
		setPanClickEnable_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private boolean getPanClickEnable_void(long pNativeObject);
	/**
	 * 获取是否开启漫游单击定位
	 */
	public boolean getPanClickEnable()
	{
		boolean returnValue = getPanClickEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMiddleMouseButtonPanEnable_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置是否开启鼠标中键漫游
	 */
	public void setMiddleMouseButtonPanEnable(boolean b)
	{
		boolean bParamValue = b;
		setMiddleMouseButtonPanEnable_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private boolean getMiddleMouseButtonPanEnable_void(long pNativeObject);
	/**
	 * 获取是否开启鼠标中键漫游
	 */
	public boolean getMiddleMouseButtonPanEnable()
	{
		boolean returnValue = getMiddleMouseButtonPanEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCoordinateUnit_EVMapcontrolCoordinateUnit(long pNativeObject, int unit);
	/**
	 * 设置控件坐标单位作用于：getCurrentCoordinate监听（包括MapWidegt）鼠标事件中地理坐标单位监听：beforeRefresh、afterRefresh
	 */
	public void setCoordinateUnit(com.earthview.world.spatial2d.controls.EVMapcontrolCoordinateUnit unit)
	{
		int unitParamValue = unit.getValue();
		setCoordinateUnit_EVMapcontrolCoordinateUnit(this.nativeObject.pointer, unitParamValue);
	}
	native private int getCoordinateUnit_void(long pNativeObject);
	/**
	 * 获取控件坐标单位
	 */
	public com.earthview.world.spatial2d.controls.EVMapcontrolCoordinateUnit getCoordinateUnit()
	{
		int returnValue = getCoordinateUnit_void(this.nativeObject.pointer);
		return com.earthview.world.spatial2d.controls.EVMapcontrolCoordinateUnit.toEnum(returnValue);
	}
	native private void onZoomBegin_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int x1, int y1, int x2, int y2);
	/**
	 * 安卓缩放接口
	 */
	public void onZoomBegin(int x1, int y1, int x2, int y2)
	{
		int x1ParamValue = x1;
		int y1ParamValue = y1;
		int x2ParamValue = x2;
		int y2ParamValue = y2;
		onZoomBegin_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private void onZoom_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int x1, int y1, int x2, int y2);
	public void onZoom(int x1, int y1, int x2, int y2)
	{
		int x1ParamValue = x1;
		int y1ParamValue = y1;
		int x2ParamValue = x2;
		int y2ParamValue = y2;
		onZoom_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	native private void onZoomEnd_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int x1, int y1, int x2, int y2);
	public void onZoomEnd(int x1, int y1, int x2, int y2)
	{
		int x1ParamValue = x1;
		int y1ParamValue = y1;
		int x2ParamValue = x2;
		int y2ParamValue = y2;
		onZoomEnd_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, x1ParamValue, y1ParamValue, x2ParamValue, y2ParamValue);
	}
	public MapControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_beginDrawing_void(long pNativeObject, String method);
	native protected void register_endDrawing_void(long pNativeObject, String method);
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
			this.register_beginDrawing_void(this.nativeObject.pointer, "beginDrawing_void_callback");
			this.register_endDrawing_void(this.nativeObject.pointer, "endDrawing_void_callback");
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
	
	public static MapControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapControl obj = null;
 		if(baseObj instanceof MapControl)
		{
			obj = (MapControl)baseObj;
		} else {
			obj = new MapControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapControl");
			obj.increaseCast();
		}

		return obj;
	}
}
