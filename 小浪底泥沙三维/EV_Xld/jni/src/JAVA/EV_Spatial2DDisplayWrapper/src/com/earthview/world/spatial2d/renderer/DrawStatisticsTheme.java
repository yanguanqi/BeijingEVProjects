package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 	统计专题图渲染类
 */
public class DrawStatisticsTheme extends com.earthview.world.spatial2d.renderer.DrawTheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme", new DrawStatisticsThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawStatisticsThemeProxy", new DrawStatisticsThemeClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DrawStatisticsTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDrawStatisticsThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.renderer.DrawStatisticsTheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void startDraw_ISpatialDisplay_ITheme(long pNativeObject, long ref_display, long ref_theme);
	/**
	 * 开始绘制专题图
	 * @param display 显示器
	 * @param theme 专题图
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.theme.Itheme ref_theme)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long ref_themeParamValue = (ref_theme == null ? 0L : ref_theme.nativeObject.pointer);
		startDraw_ISpatialDisplay_ITheme(this.nativeObject.pointer, ref_displayParamValue, ref_themeParamValue);
	}
	native private void startDraw_ISpatialDisplay_ITheme_NoVirtual(long pNativeObject, long ref_display, long ref_theme);
	protected void startDraw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.theme.Itheme ref_theme)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long ref_themeParamValue = (ref_theme == null ? 0L : ref_theme.nativeObject.pointer);
		startDraw_ISpatialDisplay_ITheme_NoVirtual(this.nativeObject.pointer, ref_displayParamValue, ref_themeParamValue);
	}

	native private boolean draw_IFeatureClass_IQueryFilter(long pNativeObject, long featureClass, long filter);
	/**
	 * 绘制专题图
	 * @param feature 几何要素
	 * @param filter 查询过滤
	 */
	public boolean draw(com.earthview.world.spatial.geodataset.Ifeatureclass featureClass, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long featureClassParamValue = (featureClass == null ? 0L : featureClass.nativeObject.pointer);
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		boolean returnValue = draw_IFeatureClass_IQueryFilter(this.nativeObject.pointer, featureClassParamValue, filterParamValue);
		return returnValue;
	}
	native private boolean draw_IFeatureClass_IQueryFilter_NoVirtual(long pNativeObject, long featureClass, long filter);
	protected boolean draw_NoVirtual(com.earthview.world.spatial.geodataset.Ifeatureclass featureClass, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		long featureClassParamValue = (featureClass == null ? 0L : featureClass.nativeObject.pointer);
		long filterParamValue = (filter == null ? 0L : filter.nativeObject.pointer);
		boolean returnValue = draw_IFeatureClass_IQueryFilter_NoVirtual(this.nativeObject.pointer, featureClassParamValue, filterParamValue);
		return returnValue;
	}

	native private void endDraw_void(long pNativeObject);
	/**
	 * 绘制完毕
	 * @param  
	 */
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	native private void endDraw_void_NoVirtual(long pNativeObject);
	protected void endDraw_NoVirtual()
	{
		endDraw_void_NoVirtual(this.nativeObject.pointer);
	}

	public DrawStatisticsTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawStatisticsTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void draw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		super.draw_NoVirtual(ref_display, symbol, feature);
	}
	
	native protected void register_startDraw_ISpatialDisplay_ITheme(long pNativeObject, String method);
	native protected void register_draw_IFeatureClass_IQueryFilter(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_ISymbol_IFeature(long pNativeObject, String method);
	native protected void register_endDraw_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_startDraw_ISpatialDisplay_ITheme(this.nativeObject.pointer, "startDraw_ISpatialDisplay_ITheme_callback");
			this.register_draw_IFeatureClass_IQueryFilter(this.nativeObject.pointer, "draw_IFeatureClass_IQueryFilter_callback");
			this.register_draw_ISpatialDisplay_ISymbol_IFeature(this.nativeObject.pointer, "draw_ISpatialDisplay_ISymbol_IFeature_callback");
			this.register_endDraw_void(this.nativeObject.pointer, "endDraw_void_callback");
		}
	}
	
	public static DrawStatisticsTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawStatisticsTheme obj = null;
 		if(baseObj instanceof DrawStatisticsTheme)
		{
			obj = (DrawStatisticsTheme)baseObj;
		} else {
			obj = new DrawStatisticsTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawStatisticsTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
