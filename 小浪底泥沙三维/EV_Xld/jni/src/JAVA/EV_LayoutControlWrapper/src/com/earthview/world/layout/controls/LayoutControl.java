package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayoutControl extends com.earthview.world.spatial.atlas.Ispatialcontrol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutControl", new LayoutControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutControlProxy", new LayoutControlClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LayoutControl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayoutControlProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.layout.controls.LayoutControl".equals(this.getClass().getName()))
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
	 * 获取布局名字
	 * @param  
	 * @return 布局名字
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

	native private long getPage_void(long pNativeObject);
	/**
	 * 获取纸张对象
	 * @param  
	 * @return 纸张对象
	 */
	public com.earthview.world.spatial.carto.Ipage getPage()
	{
		long returnValue = getPage_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipage __returnValue = new com.earthview.world.spatial.carto.Ipage(CreatedWhenConstruct.CWC_NotToCreate, "IPage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPage");
		}
		return __returnValue;
	}
	native private long getMap_void(long pNativeObject);
	/**
	 * 获取控件下的主地图
	 * @param  
	 * @return 地图对象
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
	native private void setMap_IMap(long pNativeObject, long ref_pMap);
	/**
	 * 设置中心地图
	 * @param dPageScale 中心地图
	 */
	public void setMap(com.earthview.world.spatial.atlas.Imap ref_pMap)
	{
		long ref_pMapParamValue = (ref_pMap == null ? 0L : ref_pMap.nativeObject.pointer);
		setMap_IMap(this.nativeObject.pointer, ref_pMapParamValue);
	}
	native private long getPageLayout_void(long pNativeObject);
	/**
	 * 获取布局控件所关联的布局IPageLayout对象
	 * @param  
	 * @return 布局对象
	 */
	public com.earthview.world.spatial.carto.Ipagelayout getPageLayout()
	{
		long returnValue = getPageLayout_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private long getBackground_void(long pNativeObject);
	/**
	 * 获取纸张的背景颜色
	 * @param  
	 * @return 纸张背景颜色
	 */
	public com.earthview.world.spatial.display.Icolor getBackground()
	{
		long returnValue = getBackground_void(this.nativeObject.pointer);
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
	native private void setBackground_IColor(long pNativeObject, long color);
	/**
	 * 设置纸张的背景颜色
	 * @param color 颜色对象
	 */
	public void setBackground(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setBackground_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private double getPageSize_void(long pNativeObject);
	/**
	 * 获取纸张大小
	 * @param  
	 * @return 纸张大小
	 */
	public double getPageSize()
	{
		double returnValue = getPageSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setPageSize_ev_real64_ev_real64(long pNativeObject, long width, long height);
	/**
	 * 设置纸张大小
	 * @param width 纸张宽度
	 * @param width 纸张高度
	 */
	public void setPageSize(DoublePointer width, DoublePointer height)
	{
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		setPageSize_ev_real64_ev_real64(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private int getPageUnits_void(long pNativeObject);
	/**
	 * 获取纸张单位
	 * @param  
	 * @return EVPageUnits纸张单位枚举
	 */
	public com.earthview.world.spatial.carto.EVPageUnits getPageUnits()
	{
		int returnValue = getPageUnits_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageUnits.toEnum(returnValue);
	}
	native private void setPageUnits_EVPageUnits(long pNativeObject, int pageUnits);
	/**
	 * 设置纸张的单位
	 * @param pageUnits 纸张单位
	 */
	public void setPageUnits(com.earthview.world.spatial.carto.EVPageUnits pageUnits)
	{
		int pageUnitsParamValue = pageUnits.getValue();
		setPageUnits_EVPageUnits(this.nativeObject.pointer, pageUnitsParamValue);
	}
	native private long getMapControl_void(long pNativeObject);
	/**
	 * 获取当前的地图控制类
	 * @param pageUnits 
	 * @return 地图控制类
	 */
	public com.earthview.world.spatial2d.controls.MapControl getMapControl()
	{
		long returnValue = getMapControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.MapControl __returnValue = new com.earthview.world.spatial2d.controls.MapControl(CreatedWhenConstruct.CWC_NotToCreate, "CMapControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.MapControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapControl");
		}
		return __returnValue;
	}
	native private void setMapControl_CMapControl(long pNativeObject, long ref_pMapControl);
	/**
	 * 设置当前的地图控制类
	 * @param pageUnits 地图控制类
	 */
	public void setMapControl(com.earthview.world.spatial2d.controls.MapControl ref_pMapControl)
	{
		long ref_pMapControlParamValue = (ref_pMapControl == null ? 0L : ref_pMapControl.nativeObject.pointer);
		setMapControl_CMapControl(this.nativeObject.pointer, ref_pMapControlParamValue);
	}
	native private void fullExtent_void(long pNativeObject);
	/**
	 * 纸张全幅显示
	 * @param  
	 */
	public void fullExtent()
	{
		fullExtent_void(this.nativeObject.pointer);
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
	native private void setCurrentTool_ITool(long pNativeObject, long ref_pTool);
	/**
	 * 设置布局的当前工具
	 * @param tool 工具
	 */
	public void setCurrentTool(com.earthview.world.spatial.systemui.Itool ref_pTool)
	{
		long ref_pToolParamValue = (ref_pTool == null ? 0L : ref_pTool.nativeObject.pointer);
		setCurrentTool_ITool(this.nativeObject.pointer, ref_pToolParamValue);
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
	native private void setScaleAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double pX, double pY, double scale);
	/**
	 * 在指定位置设置比例
	 * @param x 指定位置的X坐标
	 * @param y 指定位置的Y坐标
	 * @param scale 比例大小
	 */
	public void setScaleAt(double pX, double pY, double scale)
	{
		double pXParamValue = pX;
		double pYParamValue = pY;
		double scaleParamValue = scale;
		setScaleAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, pXParamValue, pYParamValue, scaleParamValue);
	}
	native private double getCurrentScale_void(long pNativeObject);
	/**
	 * 获取当前的纸张比例
	 * @param  
	 * @return 当前的纸张比例
	 */
	public double getCurrentScale()
	{
		double returnValue = getCurrentScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCurrentScale_ev_real64(long pNativeObject, double dValue);
	/**
	 * 纸张缩放到指定的比例
	 * @param dValue 目标显示比例
	 */
	public void setCurrentScale(double dValue)
	{
		double dValueParamValue = dValue;
		setCurrentScale_ev_real64(this.nativeObject.pointer, dValueParamValue);
	}
	native private void getCenter_ev_real64_ev_real64(long pNativeObject, long cx, long cy);
	/**
	 * 获取纸张中心点坐标
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
	 * 设置纸张中心点坐标
	 * @param cx 中心点坐标的X值
	 * @param cy 中心点坐标的Y值
	 */
	public void setCenter(double cx, double cy)
	{
		double cxParamValue = cx;
		double cyParamValue = cy;
		setCenter_ev_real64_ev_real64(this.nativeObject.pointer, cxParamValue, cyParamValue);
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

	native private void previousView_void(long pNativeObject);
	/**
	 * 恢复到前一视口范围
	 * @param  
	 */
	public void previousView()
	{
		previousView_void(this.nativeObject.pointer);
	}
	native private void nextView_void(long pNativeObject);
	/**
	 * 下一视口范围
	 * @param  
	 */
	public void nextView()
	{
		nextView_void(this.nativeObject.pointer);
	}
	native private void refresh_void(long pNativeObject);
	/**
	 * 当前布局刷新
	 * @param value 
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private boolean isDrawing_void(long pNativeObject);
	/**
	 * 判定是否正在绘制
	 * @param  
	 */
	public boolean isDrawing()
	{
		boolean returnValue = isDrawing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void freezeDraw_void(long pNativeObject);
	/**
	 * 停止绘制ete
	 * @param  
	 */
	public void freezeDraw()
	{
		freezeDraw_void(this.nativeObject.pointer);
	}
	native private long getPageDisplay_void(long pNativeObject);
	/**
	 * 获取纸张显示设备
	 * @param  
	 */
	public com.earthview.world.spatial.display.Ispatialdisplay getPageDisplay()
	{
		long returnValue = getPageDisplay_void(this.nativeObject.pointer);
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
	native private long getMapFrame_void(long pNativeObject);
	/**
	 * 获取地图显示设备
	 * @param  
	 */
	public com.earthview.world.spatial.carto.Imapframe getMapFrame()
	{
		long returnValue = getMapFrame_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Imapframe __returnValue = new com.earthview.world.spatial.carto.Imapframe(CreatedWhenConstruct.CWC_NotToCreate, "IMapFrame");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Imapframe)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IMapFrame");
		}
		return __returnValue;
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
	native private void setProxy_CLayoutControlAgent(long pNativeObject, long ref_pxy);
	/**
	 * 设置代理对象
	 * @param ref_pxy 代理对象
	 */
	public void setProxy(com.earthview.world.layout.controls.LayoutControlAgent ref_pxy)
	{
		long ref_pxyParamValue = (ref_pxy == null ? 0L : ref_pxy.nativeObject.pointer);
		setProxy_CLayoutControlAgent(this.nativeObject.pointer, ref_pxyParamValue);
	}
	native private long getLayoutCanvas_void(long pNativeObject);
	/**
	 * 获取布局画布
	 * @param  
	 * @return 返回布局画布
	 */
	public com.earthview.world.display.Ipaintdevice getLayoutCanvas()
	{
		long returnValue = getLayoutCanvas_void(this.nativeObject.pointer);
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
	native private void toMapPixelPoint_ev_real64_ev_real64(long pNativeObject, long x, long y);
	/**
	 * 将屏幕像素坐标转化为地图画布像素坐标
	 * @param x 屏幕坐标x
	 * @param y 屏幕坐标y
	 */
	public void toMapPixelPoint(DoublePointer x, DoublePointer y)
	{
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		toMapPixelPoint_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
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
	protected  void addElement_IElement_callback(long ref_element)
	{
		com.earthview.world.spatial.carto.Ielement ref_elementParamValue = (ref_element == 0L ? null : new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_elementParamValue != null)
		{
		ref_elementParamValue.setDelegate(true);
		ref_elementParamValue.setInstancePointer(new InstancePointer(ref_element));
		IClassFactory ref_elementParamValueClassFactory = GlobalClassFactoryMap.get(ref_elementParamValue.getCppInstanceTypeName());
		if (ref_elementParamValueClassFactory != null)
		{
			ref_elementParamValue.setDelegate(true);
			ref_elementParamValue = (com.earthview.world.spatial.carto.Ielement)ref_elementParamValueClassFactory.create();
			ref_elementParamValue.setDelegate(true);
			ref_elementParamValue.setInstancePointer(new InstancePointer(ref_element));
		}
		}
		addElement(ref_elementParamValue);
	}

	native private void addElement_IElement(long pNativeObject, long ref_element);
	/**
	 * 添加元素
	 * @param element 元素
	 */
	public void addElement(com.earthview.world.spatial.carto.Ielement ref_element)
	{
		long ref_elementParamValue = (ref_element == null ? 0L : ref_element.nativeObject.pointer);
		addElement_IElement(this.nativeObject.pointer, ref_elementParamValue);
	}
	native private void addElement_IElement_NoVirtual(long pNativeObject, long ref_element);
	protected void addElement_NoVirtual(com.earthview.world.spatial.carto.Ielement ref_element)
	{
		long ref_elementParamValue = (ref_element == null ? 0L : ref_element.nativeObject.pointer);
		addElement_IElement_NoVirtual(this.nativeObject.pointer, ref_elementParamValue);
	}

	protected  void removeElement_IElement_callback(long element)
	{
		com.earthview.world.spatial.carto.Ielement elementParamValue = (element == 0L ? null : new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(elementParamValue != null)
		{
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.spatial.carto.Ielement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		}
		removeElement(elementParamValue);
	}

	native private void removeElement_IElement(long pNativeObject, long element);
	/**
	 * 删除元素
	 * @param element 元素
	 */
	public void removeElement(com.earthview.world.spatial.carto.Ielement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		removeElement_IElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void removeElement_IElement_NoVirtual(long pNativeObject, long element);
	protected void removeElement_NoVirtual(com.earthview.world.spatial.carto.Ielement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		removeElement_IElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  void removeSelectedElement_void_callback()
	{
		removeSelectedElement();
	}

	native private void removeSelectedElement_void(long pNativeObject);
	/**
	 * 删除选中元素
	 * @param element 
	 */
	public void removeSelectedElement()
	{
		removeSelectedElement_void(this.nativeObject.pointer);
	}
	native private void removeSelectedElement_void_NoVirtual(long pNativeObject);
	protected void removeSelectedElement_NoVirtual()
	{
		removeSelectedElement_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  boolean replaceElement_IElement_IElement_callback(long pOldElement, long pNewElement)
	{
		com.earthview.world.spatial.carto.Ielement pOldElementParamValue = (pOldElement == 0L ? null : new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(pOldElementParamValue != null)
		{
		pOldElementParamValue.setDelegate(true);
		pOldElementParamValue.setInstancePointer(new InstancePointer(pOldElement));
		IClassFactory pOldElementParamValueClassFactory = GlobalClassFactoryMap.get(pOldElementParamValue.getCppInstanceTypeName());
		if (pOldElementParamValueClassFactory != null)
		{
			pOldElementParamValue.setDelegate(true);
			pOldElementParamValue = (com.earthview.world.spatial.carto.Ielement)pOldElementParamValueClassFactory.create();
			pOldElementParamValue.setDelegate(true);
			pOldElementParamValue.setInstancePointer(new InstancePointer(pOldElement));
		}
		}
		com.earthview.world.spatial.carto.Ielement pNewElementParamValue = (pNewElement == 0L ? null : new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate));
		if(pNewElementParamValue != null)
		{
		pNewElementParamValue.setDelegate(true);
		pNewElementParamValue.setInstancePointer(new InstancePointer(pNewElement));
		IClassFactory pNewElementParamValueClassFactory = GlobalClassFactoryMap.get(pNewElementParamValue.getCppInstanceTypeName());
		if (pNewElementParamValueClassFactory != null)
		{
			pNewElementParamValue.setDelegate(true);
			pNewElementParamValue = (com.earthview.world.spatial.carto.Ielement)pNewElementParamValueClassFactory.create();
			pNewElementParamValue.setDelegate(true);
			pNewElementParamValue.setInstancePointer(new InstancePointer(pNewElement));
		}
		}
		boolean returnValue = replaceElement(pOldElementParamValue, pNewElementParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean replaceElement_IElement_IElement(long pNativeObject, long pOldElement, long pNewElement);
	/**
	 * 元素替换
	 * @param element 原来的元素对象
	 * @param element 新的元素对象
	 */
	public boolean replaceElement(com.earthview.world.spatial.carto.Ielement pOldElement, com.earthview.world.spatial.carto.Ielement pNewElement)
	{
		long pOldElementParamValue = (pOldElement == null ? 0L : pOldElement.nativeObject.pointer);
		long pNewElementParamValue = (pNewElement == null ? 0L : pNewElement.nativeObject.pointer);
		boolean returnValue = replaceElement_IElement_IElement(this.nativeObject.pointer, pOldElementParamValue, pNewElementParamValue);
		return returnValue;
	}
	native private boolean replaceElement_IElement_IElement_NoVirtual(long pNativeObject, long pOldElement, long pNewElement);
	protected boolean replaceElement_NoVirtual(com.earthview.world.spatial.carto.Ielement pOldElement, com.earthview.world.spatial.carto.Ielement pNewElement)
	{
		long pOldElementParamValue = (pOldElement == null ? 0L : pOldElement.nativeObject.pointer);
		long pNewElementParamValue = (pNewElement == null ? 0L : pNewElement.nativeObject.pointer);
		boolean returnValue = replaceElement_IElement_IElement_NoVirtual(this.nativeObject.pointer, pOldElementParamValue, pNewElementParamValue);
		return returnValue;
	}

	protected  boolean exchangeElement_ev_int32_ev_int32_callback(int srcIndex, int destIndex)
	{
		int srcIndexParamValue = srcIndex;
		int destIndexParamValue = destIndex;
		boolean returnValue = exchangeElement(srcIndexParamValue, destIndexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean exchangeElement_ev_int32_ev_int32(long pNativeObject, int srcIndex, int destIndex);
	/**
	 * 元素交换(注：与元素替换区别在于，元素替换是将一个原有的元素替换为新的元素，而元素交换是两个已经存在于容器内的元素相互交换位置)
	 * @param element 被替换元素索引
	 * @param element 替换元素索引
	 * @return 是否替换成功
	 */
	public boolean exchangeElement(int srcIndex, int destIndex)
	{
		int srcIndexParamValue = srcIndex;
		int destIndexParamValue = destIndex;
		boolean returnValue = exchangeElement_ev_int32_ev_int32(this.nativeObject.pointer, srcIndexParamValue, destIndexParamValue);
		return returnValue;
	}
	native private boolean exchangeElement_ev_int32_ev_int32_NoVirtual(long pNativeObject, int srcIndex, int destIndex);
	protected boolean exchangeElement_NoVirtual(int srcIndex, int destIndex)
	{
		int srcIndexParamValue = srcIndex;
		int destIndexParamValue = destIndex;
		boolean returnValue = exchangeElement_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, srcIndexParamValue, destIndexParamValue);
		return returnValue;
	}

	native private long getCacheBitmap_void(long pNativeObject);
	/**
	 * 获取地图缓存
	 * @param value 
	 */
	public com.earthview.world.display.CacheBitmap getCacheBitmap()
	{
		long returnValue = getCacheBitmap_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.CacheBitmap __returnValue = new com.earthview.world.display.CacheBitmap(CreatedWhenConstruct.CWC_NotToCreate, "CCacheBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.CacheBitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCacheBitmap");
		}
		return __returnValue;
	}
	native private long getOperationManager_void(long pNativeObject);
	/**
	 * 获取操作管理对像
	 * @param value 
	 */
	public com.earthview.world.layout.controls.LayoutOperationManager getOperationManager()
	{
		long returnValue = getOperationManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.layout.controls.LayoutOperationManager __returnValue = new com.earthview.world.layout.controls.LayoutOperationManager(CreatedWhenConstruct.CWC_NotToCreate, "CLayoutOperationManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.layout.controls.LayoutOperationManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayoutOperationManager");
		}
		return __returnValue;
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
	native private boolean onMapPan_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/// <summary>
	/// 平移开始
	/// <param name="delta">滚动的幅度</param>        
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="flag">标识位</param>  
	/// <returns></returns>
	public boolean onMapPan(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMapPan_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMapPanBegin_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/// <summary>
	/// 平移
	/// <param name="delta">滚动的幅度</param>        
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="flag">标识位</param>  
	/// <returns></returns>
	public boolean onMapPanBegin(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMapPanBegin_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean onMapPanEnd_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int button, int shift, int x, int y);
	/// <summary>
	/// <param name="delta">滚动的幅度</param>        
	/// <param name="x">光标位置x</param>
	/// <param name="y">光标位置y</param>
	/// <param name="flag">标识位</param>  
	/// <returns></returns>
	public boolean onMapPanEnd(int button, int shift, int x, int y)
	{
		int buttonParamValue = button;
		int shiftParamValue = shift;
		int xParamValue = x;
		int yParamValue = y;
		boolean returnValue = onMapPanEnd_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, buttonParamValue, shiftParamValue, xParamValue, yParamValue);
		return returnValue;
	}
	native private long exportViewToMetafile_IEnvelope_ev_uint32(long pNativeObject, long pDataEnv, long dpi);
	/**
	 * 导出指定范围和dpi(每英寸像素，一般指定96)的矢量图
	 * @param  
	 */
	public com.earthview.world.display.MetaFile exportViewToMetafile(com.earthview.world.spatial.geometry.Ienvelope pDataEnv, long dpi)
	{
		long pDataEnvParamValue = (pDataEnv == null ? 0L : pDataEnv.nativeObject.pointer);
		long dpiParamValue = dpi;
		long returnValue = exportViewToMetafile_IEnvelope_ev_uint32(this.nativeObject.pointer, pDataEnvParamValue, dpiParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.MetaFile __returnValue = new com.earthview.world.display.MetaFile(CreatedWhenConstruct.CWC_NotToCreate, "CMetaFile");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.MetaFile)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMetaFile");
		}
		return __returnValue;
	}
	native private int print_void(long pNativeObject);
	/**
	 * 打印
	 * @param  
	 */
	public int print()
	{
		int returnValue = print_void(this.nativeObject.pointer);
		return returnValue;
	}
	public LayoutControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutControl(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_addElement_IElement(long pNativeObject, String method);
	native protected void register_removeElement_IElement(long pNativeObject, String method);
	native protected void register_removeSelectedElement_void(long pNativeObject, String method);
	native protected void register_replaceElement_IElement_IElement(long pNativeObject, String method);
	native protected void register_exchangeElement_ev_int32_ev_int32(long pNativeObject, String method);
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
			this.register_addElement_IElement(this.nativeObject.pointer, "addElement_IElement_callback");
			this.register_removeElement_IElement(this.nativeObject.pointer, "removeElement_IElement_callback");
			this.register_removeSelectedElement_void(this.nativeObject.pointer, "removeSelectedElement_void_callback");
			this.register_replaceElement_IElement_IElement(this.nativeObject.pointer, "replaceElement_IElement_IElement_callback");
			this.register_exchangeElement_ev_int32_ev_int32(this.nativeObject.pointer, "exchangeElement_ev_int32_ev_int32_callback");
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
	
	public static LayoutControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutControl obj = null;
 		if(baseObj instanceof LayoutControl)
		{
			obj = (LayoutControl)baseObj;
		} else {
			obj = new LayoutControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutControl");
			obj.increaseCast();
		}

		return obj;
	}
}
