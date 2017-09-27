package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 跟踪地图对象
 */
public class TrackingTextItem extends com.earthview.world.spatial2d.controls.TrackingItem {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CTrackingTextItem", new TrackingTextItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCTrackingTextItemProxy", new TrackingTextItemClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public TrackingTextItem() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTrackingTextItemProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.TrackingTextItem".equals(this.getClass().getName()))
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
	 * @param x x坐标
	 * @param y y坐标
	 * @return true，包含，false不包含
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

	native private void setSymbol_CTextSymbol(long pNativeObject, long symbol);
	/**
	 * 设置文本风格
	 * @param symbol 文本风格
	 */
	public void setSymbol(com.earthview.world.spatial.display.TextSymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_CTextSymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private long getSymbol_void(long pNativeObject);
	/**
	 * 获取文本风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.TextSymbol getSymbol()
	{
		long returnValue = getSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.TextSymbol __returnValue = new com.earthview.world.spatial.display.TextSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CTextSymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.TextSymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextSymbol");
		}
		return __returnValue;
	}
	native private void setText_EVString(long pNativeObject, String text);
	/**
	 * 设置显示文本
	 * @param text 显示的文本
	 */
	public void setText(String text)
	{
		String textParamValue = text;
		setText_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private String getText_void(long pNativeObject);
	/**
	 * 获取要显示的文本
	 * @param  
	 * @return 文本
	 */
	public String getText()
	{
		String returnValue = getText_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TrackingTextItem(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TrackingTextItem(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static TrackingTextItem fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TrackingTextItem obj = null;
 		if(baseObj instanceof TrackingTextItem)
		{
			obj = (TrackingTextItem)baseObj;
		} else {
			obj = new TrackingTextItem(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTrackingTextItem");
			obj.increaseCast();
		}

		return obj;
	}
}
