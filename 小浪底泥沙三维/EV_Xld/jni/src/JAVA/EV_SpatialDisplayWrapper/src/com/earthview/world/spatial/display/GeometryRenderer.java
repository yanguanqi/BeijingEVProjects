package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryRenderer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CGeometryRenderer", new GeometryRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public GeometryRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeometryRenderer", null);
	}

	native private void startDraw_ISpatialDisplay_ISymbol(long pNativeObject, long ref_display, long ref_pSymbol);
	/**
	 * 开始渲染
	 * @param display 设备
	 * @param pSymbol 渲染符号
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.display.Isymbol ref_pSymbol)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long ref_pSymbolParamValue = (ref_pSymbol == null ? 0L : ref_pSymbol.nativeObject.pointer);
		startDraw_ISpatialDisplay_ISymbol(this.nativeObject.pointer, ref_displayParamValue, ref_pSymbolParamValue);
	}
	native private void endDraw_void(long pNativeObject);
	/**
	 * 停止渲染
	 * @param  
	 */
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	native private void drawGeometry_IGeometry(long pNativeObject, long pGeometry);
	/**
	 * 渲染几何图形
	 * @param pGeometry 几何图形
	 */
	public void drawGeometry(com.earthview.world.spatial.geometry.Igeometry pGeometry)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		drawGeometry_IGeometry(this.nativeObject.pointer, pGeometryParamValue);
	}
	native private void drawEditingGeometry_IGeometry_ISymbol(long pNativeObject, long pGeometry, long pVertexSymbol);
	/**
	 * 渲染可编辑的几何图形
	 * @param pGeometry 几何图形
	 * @param pVertexSymbol 渲染符号
	 */
	public void drawEditingGeometry(com.earthview.world.spatial.geometry.Igeometry pGeometry, com.earthview.world.spatial.display.Isymbol pVertexSymbol)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		long pVertexSymbolParamValue = (pVertexSymbol == null ? 0L : pVertexSymbol.nativeObject.pointer);
		drawEditingGeometry_IGeometry_ISymbol(this.nativeObject.pointer, pGeometryParamValue, pVertexSymbolParamValue);
	}
	native private void drawGeometryCenter_IGeometry(long pNativeObject, long pGeometry);
	/**
	 * 渲染几何中心点
	 * @param pGeometry 几何图形
	 */
	public void drawGeometryCenter(com.earthview.world.spatial.geometry.Igeometry pGeometry)
	{
		long pGeometryParamValue = (pGeometry == null ? 0L : pGeometry.nativeObject.pointer);
		drawGeometryCenter_IGeometry(this.nativeObject.pointer, pGeometryParamValue);
	}
	native private void drawEnvelope_IEnvelope_ISymbol(long pNativeObject, long pEnvelope, long pSymbol);
	/**
	 * 渲染包围盒
	 * @param pEnvelope 包围盒
	 * @param pSymbol 渲染符号
	 */
	public void drawEnvelope(com.earthview.world.spatial.geometry.Ienvelope pEnvelope, com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		drawEnvelope_IEnvelope_ISymbol(this.nativeObject.pointer, pEnvelopeParamValue, pSymbolParamValue);
	}
	public GeometryRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeometryRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeometryRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeometryRenderer obj = null;
 		if(baseObj instanceof GeometryRenderer)
		{
			obj = (GeometryRenderer)baseObj;
		} else {
			obj = new GeometryRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometryRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
