package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 几何要素渲染类
 */
public class GeoElementDrawing extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeoElementDrawing", new GeoElementDrawingClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public GeoElementDrawing() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeoElementDrawing", null);
	}

	native private void startDrawing_ISpatialDisplay(long pNativeObject, long ref_display);
	/**
	 * 开始绘制。
	 * @param display 绘图参数
	 */
	public void startDrawing(com.earthview.world.spatial.display.Ispatialdisplay ref_display)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		startDrawing_ISpatialDisplay(this.nativeObject.pointer, ref_displayParamValue);
	}
	native private void endDrawing_void(long pNativeObject);
	/**
	 * 结束绘制。析构绘图设备，并保存绘制到绘图设备
	 */
	public void endDrawing()
	{
		endDrawing_void(this.nativeObject.pointer);
	}
	native private void setSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置绘制的风格
	 * @param symbol 绘制风格
	 */
	public void setSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void draw_CGeoElement(long pNativeObject, long geoElement);
	/**
	 * 绘制地理要素
	 * @param algorithm 标注绘制算法
	 * @param geoElement 地理要素
	 */
	public void draw(com.earthview.world.spatial.GeoElement geoElement)
	{
		long geoElementParamValue = (geoElement == null ? 0L : geoElement.nativeObject.pointer);
		draw_CGeoElement(this.nativeObject.pointer, geoElementParamValue);
	}
	public GeoElementDrawing(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoElementDrawing(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoElementDrawing fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoElementDrawing obj = null;
 		if(baseObj instanceof GeoElementDrawing)
		{
			obj = (GeoElementDrawing)baseObj;
		} else {
			obj = new GeoElementDrawing(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoElementDrawing");
			obj.increaseCast();
		}

		return obj;
	}
}
