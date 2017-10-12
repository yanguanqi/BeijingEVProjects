package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EagleEyeControl extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEagleEyeControl", new EagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEagleEyeControlProxy", new EagleEyeControlClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EagleEyeControl() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEagleEyeControlProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EagleEyeControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long getEagleEyeCanvas_void(long pNativeObject);
	/**
	 * 获取鹰眼画布
	 * @param  
	 */
	public com.earthview.world.display.Ipaintdevice getEagleEyeCanvas()
	{
		long returnValue = getEagleEyeCanvas_void(this.nativeObject.pointer);
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
	native private void setUseDefaultMap_ev_bool(long pNativeObject, boolean bUse);
	/**
	 * 设置鹰眼是否使用默认地图
	 * @param bUse 如果使用默认地图，设置为true
	 */
	public void setUseDefaultMap(boolean bUse)
	{
		boolean bUseParamValue = bUse;
		setUseDefaultMap_ev_bool(this.nativeObject.pointer, bUseParamValue);
	}
	native private boolean isUseDefaultMap_void(long pNativeObject);
	/**
	 * 判断是否使用默认地图
	 * @param  
	 */
	public boolean isUseDefaultMap()
	{
		boolean returnValue = isUseDefaultMap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addSpatialControl_ISpatialControl_ev_bool(long pNativeObject, long pControl, boolean bAddMap);
	/**
	 * 添加关联的地图或地球控件
	 * @param pControl 地图或地球控件
	 * @param bAddMap 如果是地图控件的情况下，是否将控件中的地图添加到鹰眼中
	 */
	public void addSpatialControl(com.earthview.world.spatial.atlas.Ispatialcontrol pControl, boolean bAddMap)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		boolean bAddMapParamValue = bAddMap;
		addSpatialControl_ISpatialControl_ev_bool(this.nativeObject.pointer, pControlParamValue, bAddMapParamValue);
	}
	native private void removeSpatialControl_ISpatialControl(long pNativeObject, long pControl);
	/**
	 * 移除关联的地图或地球控件
	 * @param pControl 地图或地球控件
	 */
	public void removeSpatialControl(com.earthview.world.spatial.atlas.Ispatialcontrol pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		removeSpatialControl_ISpatialControl(this.nativeObject.pointer, pControlParamValue);
	}
	native private long getSpatialControl_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 获取关联地图或地球控件
	 * @param nIndex 地图或地球控件对应的索引
	 * @return nIndex索引对应的控件
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getSpatialControl(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getSpatialControl_ev_int32(this.nativeObject.pointer, nIndexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private boolean isExist_ISpatialControl(long pNativeObject, long pControl);
	/**
	 * 判断某个地图或地球控件是否已经存在
	 * @param pControl 进行判断的控件
	 * @return 若存在返回true,否则返回false
	 */
	public boolean isExist(com.earthview.world.spatial.atlas.Ispatialcontrol pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		boolean returnValue = isExist_ISpatialControl(this.nativeObject.pointer, pControlParamValue);
		return returnValue;
	}
	native private void setActiveControl_ISpatialControl(long pNativeObject, long pControl);
	/**
	 * 设置激活的地图或地球控件
	 * @param pControl 正在激活的控件
	 */
	public void setActiveControl(com.earthview.world.spatial.atlas.Ispatialcontrol pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		setActiveControl_ISpatialControl(this.nativeObject.pointer, pControlParamValue);
	}
	native private long getActiveControl_void(long pNativeObject);
	/**
	 * 获取激活的控件
	 * @param pControl 正在激活的控件
	 */
	public com.earthview.world.spatial.atlas.Ispatialcontrol getActiveControl()
	{
		long returnValue = getActiveControl_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ispatialcontrol __returnValue = new com.earthview.world.spatial.atlas.Ispatialcontrol(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ispatialcontrol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialControl");
		}
		return __returnValue;
	}
	native private boolean isActiveControl_ISpatialControl(long pNativeObject, long pControl);
	/**
	 * 判断某个控件是不是激活
	 * @param pControl 控件
	 */
	public boolean isActiveControl(com.earthview.world.spatial.atlas.Ispatialcontrol pControl)
	{
		long pControlParamValue = (pControl == null ? 0L : pControl.nativeObject.pointer);
		boolean returnValue = isActiveControl_ISpatialControl(this.nativeObject.pointer, pControlParamValue);
		return returnValue;
	}
	native private void setAllControlUnActive_void(long pNativeObject);
	/**
	 * 设置所有控件为不激活状态
	 * @param pControl 
	 */
	public void setAllControlUnActive()
	{
		setAllControlUnActive_void(this.nativeObject.pointer);
	}
	native private int getSpatialControlCount_void(long pNativeObject);
	/**
	 * 获取关联的控件个数
	 * @param  
	 */
	public int getSpatialControlCount()
	{
		int returnValue = getSpatialControlCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addMap_IMap(long pNativeObject, long pMap);
	/**
	 * 为鹰眼设置特定的地图
	 * @param pControl 地图对象
	 */
	public void addMap(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		addMap_IMap(this.nativeObject.pointer, pMapParamValue);
	}
	native private void removeMap_IMap(long pNativeObject, long pMap);
	/**
	 * 移除为鹰眼设置的特定地图
	 * @param pControl 地图对象
	 */
	public void removeMap(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		removeMap_IMap(this.nativeObject.pointer, pMapParamValue);
	}
	native private void setMapCacheDirty_void(long pNativeObject);
	/**
	 * 添加关联的地图
	 * @param pControl 地图对象
	 */
	public void setMapCacheDirty()
	{
		setMapCacheDirty_void(this.nativeObject.pointer);
	}
	native private int getMapCount_void(long pNativeObject);
	/**
	 * 获取为鹰眼设置的地图个数
	 * @param  
	 */
	public int getMapCount()
	{
		int returnValue = getMapCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMap_ev_int32(long pNativeObject, int nIndex);
	/**
	 * 获取为鹰眼设置的地图
	 * @param nIndex 地图对应的索引
	 * @return nIndex索引对应的地图
	 */
	public com.earthview.world.spatial.atlas.Imap getMap(int nIndex)
	{
		int nIndexParamValue = nIndex;
		long returnValue = getMap_ev_int32(this.nativeObject.pointer, nIndexParamValue);
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
	native private boolean isExist_IMap(long pNativeObject, long pMap);
	/**
	 * 判断某个地图是否已经存在
	 * @param pControl 进行判断的控件
	 * @return 若存在返回true,否则返回false
	 */
	public boolean isExist(com.earthview.world.spatial.atlas.Imap pMap)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		boolean returnValue = isExist_IMap(this.nativeObject.pointer, pMapParamValue);
		return returnValue;
	}
	native private void addRectangle_CPoint_CPoint_CPoint_ISymbol(long pNativeObject, long pLeftTop, long pRightTop, long pRightBottom, long pSymbol);
	/**
	 * 添加自定义矩形
	 * @param pLeftTop 矩形左上角点
	 * @param pRightTop 矩形右上角点
	 * @param pRightBottom 矩形右下角点
	 * @param pSymbol 风格
	 */
	public void addRectangle(com.earthview.world.spatial.geometry.Point pLeftTop, com.earthview.world.spatial.geometry.Point pRightTop, com.earthview.world.spatial.geometry.Point pRightBottom, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pLeftTopParamValue = (pLeftTop == null ? 0L : pLeftTop.nativeObject.pointer);
		long pRightTopParamValue = (pRightTop == null ? 0L : pRightTop.nativeObject.pointer);
		long pRightBottomParamValue = (pRightBottom == null ? 0L : pRightBottom.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		addRectangle_CPoint_CPoint_CPoint_ISymbol(this.nativeObject.pointer, pLeftTopParamValue, pRightTopParamValue, pRightBottomParamValue, pSymbolParamValue);
	}
	native private void addGeometry_IGeometry_ISymbol(long pNativeObject, long pGeometry, long pSymbol);
	/**
	 * 添加自定义渲染图形
	 * @param pGeometry 几何对象
	 * @param pSymbol 风格
	 */
	public void addGeometry(com.earthview.world.spatial.geometry.Igeometry pGeometry, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		addGeometry_IGeometry_ISymbol(this.nativeObject.pointer, pGeometryParamValue, pSymbolParamValue);
	}
	native private void clearGeometry_void(long pNativeObject);
	/**
	 * 清除自定义渲染图形
	 */
	public void clearGeometry()
	{
		clearGeometry_void(this.nativeObject.pointer);
	}
	protected  void onRepaint_void_callback()
	{
		onRepaint();
	}

	native private void onRepaint_void(long pNativeObject);
	/**
	 * 重绘
	 * @param  
	 */
	public void onRepaint()
	{
		onRepaint_void(this.nativeObject.pointer);
	}
	native private void onRepaint_void_NoVirtual(long pNativeObject);
	protected void onRepaint_NoVirtual()
	{
		onRepaint_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void refresh_void(long pNativeObject);
	/**
	 * 刷新
	 * @param symbol 风格
	 */
	public void refresh()
	{
		refresh_void(this.nativeObject.pointer);
	}
	native private void setUnActiveRectSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置非当前激活地图对应的矩形框风格
	 * @param  
	 */
	public void setUnActiveRectSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setUnActiveRectSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private long getUnActiveRectSymbol_void(long pNativeObject);
	/**
	 * 获取非当前激活地图对应的矩形框风格
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol getUnActiveRectSymbol()
	{
		long returnValue = getUnActiveRectSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long getBackground_void(long pNativeObject);
	/**
	 * 获取背景色
	 * @param  
	 * @return 背景色
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
	native private void setBackground_IColor(long pNativeObject, long background);
	/**
	 * 设置背景色
	 * @param background 背景色
	 */
	public void setBackground(com.earthview.world.spatial.display.Icolor background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackground_IColor(this.nativeObject.pointer, backgroundParamValue);
	}
	native private long getExtent_void(long pNativeObject);
	/**
	 * 获取显示范围
	 * @param  
	 * @return 显示范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		long returnValue = getExtent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private void setExtent_IEnvelope(long pNativeObject, long pEnvelope);
	/**
	 * 设置显示范围
	 * @param pEnvelope 显示范围
	 */
	public void setExtent(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setExtent_IEnvelope(this.nativeObject.pointer, pEnvelopeParamValue);
	}
	native private void setActiveRectSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置当前激活地图对应的矩形框风格
	 * @param  
	 */
	public void setActiveRectSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setActiveRectSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private long getActiveRectSymbol_void(long pNativeObject);
	/**
	 * 获取当前激活地图对应的矩形框风格
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol getActiveRectSymbol()
	{
		long returnValue = getActiveRectSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void goTo_IEnvelope_ISpatialControl(long pNativeObject, long pEvn, long pCtrl);
	/**
	 * 放大到某个范围
	 * @param pEvn 放大到的范围
	 * @param pEvn 被放大的地球或地图控件
	 */
	public void goTo(com.earthview.world.spatial.geometry.Ienvelope pEvn, com.earthview.world.spatial.atlas.Ispatialcontrol pCtrl)
	{
		long pEvnParamValue = (pEvn == null ? 0L : pEvn.nativeObject.pointer);
		long pCtrlParamValue = (pCtrl == null ? 0L : pCtrl.nativeObject.pointer);
		goTo_IEnvelope_ISpatialControl(this.nativeObject.pointer, pEvnParamValue, pCtrlParamValue);
	}
	native private void setCenter_ev_real64_ev_real64_ISpatialControl(long pNativeObject, double dPX, double dPY, long pCtrl);
	/**
	 * 设置地球或地图控件的中心点
	 * @param dPX 中心点X坐标
	 * @param dPY 中心点Y坐标
	 * @param pCtrl 地球或地图控件
	 */
	public void setCenter(double dPX, double dPY, com.earthview.world.spatial.atlas.Ispatialcontrol pCtrl)
	{
		double dPXParamValue = dPX;
		double dPYParamValue = dPY;
		long pCtrlParamValue = (pCtrl == null ? 0L : pCtrl.nativeObject.pointer);
		setCenter_ev_real64_ev_real64_ISpatialControl(this.nativeObject.pointer, dPXParamValue, dPYParamValue, pCtrlParamValue);
	}
	native private long getSpatialControlRectangle_ISpatialControl(long pNativeObject, long pCtrl);
	/**
	 * 获取控件的范围
	 * @param pCtrl 地球或地图控件
	 * @return 地球或地图控件对应的矩形范围
	 */
	public com.earthview.world.spatial.geometry.Igeometry getSpatialControlRectangle(com.earthview.world.spatial.atlas.Ispatialcontrol pCtrl)
	{
		long pCtrlParamValue = (pCtrl == null ? 0L : pCtrl.nativeObject.pointer);
		long returnValue = getSpatialControlRectangle_ISpatialControl(this.nativeObject.pointer, pCtrlParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Igeometry __returnValue = new com.earthview.world.spatial.geometry.Igeometry(CreatedWhenConstruct.CWC_NotToCreate, "IGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Igeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGeometry");
		}
		return __returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空矩形
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private boolean isDrawing_void(long pNativeObject);
	/**
	 * 判断是否正在绘图
	 * @param  
	 * @return 如果正在绘图返回true,否则返回false
	 */
	public boolean isDrawing()
	{
		boolean returnValue = isDrawing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void onResize_ev_int32_ev_int32(long pNativeObject, int nWidth, int nHeight);
	/**
	 * 重新设置大小
	 * @param nWidth 长度
	 * @param nWidth 高度
	 */
	public void onResize(int nWidth, int nHeight)
	{
		int nWidthParamValue = nWidth;
		int nHeightParamValue = nHeight;
		onResize_ev_int32_ev_int32(this.nativeObject.pointer, nWidthParamValue, nHeightParamValue);
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
	native private void addEagleEyeControlListener_IEagleEyeControlListener(long pNativeObject, long ref_listener);
	public void addEagleEyeControlListener(com.earthview.world.spatial2d.controls.Ieagleeyecontrollistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addEagleEyeControlListener_IEagleEyeControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeEagleEyeControlListener_IEagleEyeControlListener(long pNativeObject, long ref_listener);
	public void removeEagleEyeControlListener(com.earthview.world.spatial2d.controls.Ieagleeyecontrollistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		removeEagleEyeControlListener_IEagleEyeControlListener(this.nativeObject.pointer, ref_listenerParamValue);
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
	native private void setProxy_CEagleEyeControlAgent(long pNativeObject, long ref_pxy);
	/**
	 * 设置控件代理
	 * @param pxy 控件代理
	 */
	public void setProxy(com.earthview.world.spatial2d.controls.EagleEyeControlAgent ref_pxy)
	{
		long ref_pxyParamValue = (ref_pxy == null ? 0L : ref_pxy.nativeObject.pointer);
		setProxy_CEagleEyeControlAgent(this.nativeObject.pointer, ref_pxyParamValue);
	}
	native private long getCurrentTool_void(long pNativeObject);
	/**
	 * 获取当前工具
	 * @param pxy 
	 * @return 当前鹰眼工具
	 */
	public com.earthview.world.spatial2d.controls.ToolEagleEyeControl getCurrentTool()
	{
		long returnValue = getCurrentTool_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.controls.ToolEagleEyeControl __returnValue = new com.earthview.world.spatial2d.controls.ToolEagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate, "CToolEagleEyeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.controls.ToolEagleEyeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CToolEagleEyeControl");
		}
		return __returnValue;
	}
	public EagleEyeControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EagleEyeControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onRepaint_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onRepaint_void(this.nativeObject.pointer, "onRepaint_void_callback");
		}
	}
	
	public static EagleEyeControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EagleEyeControl obj = null;
 		if(baseObj instanceof EagleEyeControl)
		{
			obj = (EagleEyeControl)baseObj;
		} else {
			obj = new EagleEyeControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEagleEyeControl");
			obj.increaseCast();
		}

		return obj;
	}
}
