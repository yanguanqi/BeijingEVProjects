package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 可绘制顶点的几何要素项
 */
public class TrackingGeomItemEx extends com.earthview.world.spatial2d.controls.TrackingGeometryItem {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingGeomItemEx", new TrackingGeomItemExClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTrackingGeomItemExProxy", new TrackingGeomItemExClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TrackingGeomItemEx() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTrackingGeomItemExProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingGeomItemEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param unitType 单位类型
	 */
	public TrackingGeomItemEx(com.earthview.world.spatial2d.controls.EVTrackingItemUnit unitType) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer unitTypePtr = new BasePointer(unitType);
		list.add("unitType", unitTypePtr.get());
		Create("JCTrackingGeomItemExProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingGeomItemEx".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private void setVertexSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置顶点风格
	 * @param symbol 风格
	 */
	public void setVertexSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setVertexSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getVertexSymbol_void(long pNativeObject);
	/**
	 * 获取顶点风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.Isymbol getVertexSymbol()
	{
		long returnValue = getVertexSymbol_void(this.nativeObject.pointer);
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
	public TrackingGeomItemEx(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingGeomItemEx(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取包围盒,派生类必须重新实现
	 * @param  
	 * @return 追踪项的范围
	 */
	public com.earthview.world.spatial.display.SpatialRect boundingRect()
	{
		return super.boundingRect_NoVirtual();
	}
	/**
	 * 判断追踪项是否包含指定坐标
	 * @param x X坐标
	 * @param y Y坐标
	 * @return true，包含点，false不包含
	 */
	public boolean isContains(double x, double y)
	{
		return super.isContains_NoVirtual(x, y);
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
	
	public static TrackingGeomItemEx fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingGeomItemEx obj = null;
 		if(baseObj instanceof TrackingGeomItemEx)
		{
			obj = (TrackingGeomItemEx)baseObj;
		} else {
			obj = new TrackingGeomItemEx(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingGeomItemEx");
			obj.increaseCast();
		}

		return obj;
	}
}
