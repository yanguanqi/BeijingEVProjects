package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何项
 */
public class TrackingGeometryItem extends com.earthview.world.spatial2d.controls.TrackingItem {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingGeometryItem", new TrackingGeometryItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTrackingGeometryItemProxy", new TrackingGeometryItemClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TrackingGeometryItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTrackingGeometryItemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingGeometryItem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param unitType 单位类型
	 */
	public TrackingGeometryItem(com.earthview.world.spatial2d.controls.EVTrackingItemUnit unitType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer unitTypePtr = new BasePointer(unitType);
		list.add("unitType", unitTypePtr.get());
		Create("JCTrackingGeometryItemProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingGeometryItem".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long boundingRect_void(long pNativeObject);
	/**
	 * 获取包围盒
	 * @param  
	 * @return 包围盒对象
	 */
	public com.earthview.world.spatial.display.SpatialRect boundingRect()
	{
		long returnValue = boundingRect_void(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}
	native private long boundingRect_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.SpatialRect boundingRect_NoVirtual()
	{
		long returnValue = boundingRect_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.display.SpatialRect __returnValue = new com.earthview.world.spatial.display.SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SpatialRect)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CSpatialRect");
		}
		return __returnValue;
	}

	native private void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(long pNativeObject, long display, int state, long rect);
	/**
	 * 绘制操作
	 * @param display 显示设备对象
	 * @param state 跟踪目标状态
	 * @param rect 绘制范围
	 */
	public void paint(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int stateParamValue = state.getValue();
		long rectParamValue = rect.nativeObject.pointer;
		paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.nativeObject.pointer, displayParamValue, stateParamValue, rectParamValue);
	}
	native private void paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(long pNativeObject, long display, int state, long rect);
	protected void paint_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial2d.controls.EVTrackingItemState state, com.earthview.world.spatial.display.SpatialRect rect)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		int stateParamValue = state.getValue();
		long rectParamValue = rect.nativeObject.pointer;
		paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_NoVirtual(this.nativeObject.pointer, displayParamValue, stateParamValue, rectParamValue);
	}

	native private boolean isContains_ev_real64_ev_real64(long pNativeObject, double x, double y);
	/**
	 * 判断包含操作
	 * @param pnt 空间点
	 * @return true，包含点pnt，false不包含
	 */
	public boolean isContains(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}
	native private boolean isContains_ev_real64_ev_real64_NoVirtual(long pNativeObject, double x, double y);
	protected boolean isContains_NoVirtual(double x, double y)
	{
		double xParamValue = x;
		double yParamValue = y;
		boolean returnValue = isContains_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
		return returnValue;
	}

	native private int type_void(long pNativeObject);
	/**
	 * 获取追踪项类型
	 * @param  
	 * @return 对象类型
	 */
	public int type()
	{
		int returnValue = type_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int type_void_NoVirtual(long pNativeObject);
	protected int type_NoVirtual()
	{
		int returnValue = type_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setGeometry_IGeometry(long pNativeObject, long geo);
	/**
	 * 设置几何体对象,内部保存了一个副本
	 * @param geo 几何体指针
	 */
	public void setGeometry(com.earthview.world.spatial.geometry.Igeometry geo)
	{
		long geoParamValue = (geo == null ? 0L : geo.nativeObject.pointer);
		setGeometry_IGeometry(this.nativeObject.pointer, geoParamValue);
	}
	native private long getGeometry_void(long pNativeObject);
	/**
	 * 获取几何体对象
	 * @param  
	 * @return 几何体对象指针
	 */
	public com.earthview.world.spatial.geometry.Igeometry getGeometry()
	{
		long returnValue = getGeometry_void(this.nativeObject.pointer);
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
	native private void setSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置图式,内部保存了一个副本
	 * @param symbol 图式指针对象
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getSymbol_void(long pNativeObject);
	/**
	 * 获取图式
	 * @param  
	 * @return 图式指针
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol()
	{
		long returnValue = getSymbol_void(this.nativeObject.pointer);
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
	public TrackingGeometryItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingGeometryItem(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_boundingRect_void(long pNativeObject, String method);
	native protected void register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(long pNativeObject, String method);
	native protected void register_isContains_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_type_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_boundingRect_void(this.nativeObject.pointer, "boundingRect_void_callback");
			this.register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect(this.nativeObject.pointer, "paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback");
			this.register_isContains_ev_real64_ev_real64(this.nativeObject.pointer, "isContains_ev_real64_ev_real64_callback");
			this.register_type_void(this.nativeObject.pointer, "type_void_callback");
		}
	}
	
	public static TrackingGeometryItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingGeometryItem obj = null;
 		if(baseObj instanceof TrackingGeometryItem)
		{
			obj = (TrackingGeometryItem)baseObj;
		} else {
			obj = new TrackingGeometryItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingGeometryItem");
			obj.increaseCast();
		}

		return obj;
	}
}
