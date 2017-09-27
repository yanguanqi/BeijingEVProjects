package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 专题图渲染基类
 */
public class DrawTheme extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawTheme", new DrawThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawThemeProxy", new DrawThemeClassFactory());
	}

	protected  void startDraw_ISpatialDisplay_ITheme_callback(long ref_display, long ref_theme)
	{
		com.earthview.world.spatial.display.Ispatialdisplay ref_displayParamValue = (ref_display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_displayParamValue != null)
		{
		ref_displayParamValue.setDelegate(true);
		ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		IClassFactory ref_displayParamValueClassFactory = GlobalClassFactoryMap.get(ref_displayParamValue.getCppInstanceTypeName());
		if (ref_displayParamValueClassFactory != null)
		{
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)ref_displayParamValueClassFactory.create();
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		}
		}
		com.earthview.world.spatial.theme.Itheme ref_themeParamValue = (ref_theme == 0L ? null : new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_themeParamValue != null)
		{
		ref_themeParamValue.setDelegate(true);
		ref_themeParamValue.setInstancePointer(new InstancePointer(ref_theme));
		IClassFactory ref_themeParamValueClassFactory = GlobalClassFactoryMap.get(ref_themeParamValue.getCppInstanceTypeName());
		if (ref_themeParamValueClassFactory != null)
		{
			ref_themeParamValue.setDelegate(true);
			ref_themeParamValue = (com.earthview.world.spatial.theme.Itheme)ref_themeParamValueClassFactory.create();
			ref_themeParamValue.setDelegate(true);
			ref_themeParamValue.setInstancePointer(new InstancePointer(ref_theme));
		}
		}
		startDraw(ref_displayParamValue, ref_themeParamValue);
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

	protected  boolean draw_IFeatureClass_IQueryFilter_callback(long featureClass, long filter)
	{
		com.earthview.world.spatial.geodataset.Ifeatureclass featureClassParamValue = (featureClass == 0L ? null : new com.earthview.world.spatial.geodataset.Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate));
		if(featureClassParamValue != null)
		{
		featureClassParamValue.setDelegate(true);
		featureClassParamValue.setInstancePointer(new InstancePointer(featureClass));
		IClassFactory featureClassParamValueClassFactory = GlobalClassFactoryMap.get(featureClassParamValue.getCppInstanceTypeName());
		if (featureClassParamValueClassFactory != null)
		{
			featureClassParamValue.setDelegate(true);
			featureClassParamValue = (com.earthview.world.spatial.geodataset.Ifeatureclass)featureClassParamValueClassFactory.create();
			featureClassParamValue.setDelegate(true);
			featureClassParamValue.setInstancePointer(new InstancePointer(featureClass));
		}
		}
		com.earthview.world.spatial.geodataset.Iqueryfilter filterParamValue = (filter == 0L ? null : new com.earthview.world.spatial.geodataset.Iqueryfilter(CreatedWhenConstruct.CWC_NotToCreate));
		if(filterParamValue != null)
		{
		filterParamValue.setDelegate(true);
		filterParamValue.setInstancePointer(new InstancePointer(filter));
		IClassFactory filterParamValueClassFactory = GlobalClassFactoryMap.get(filterParamValue.getCppInstanceTypeName());
		if (filterParamValueClassFactory != null)
		{
			filterParamValue.setDelegate(true);
			filterParamValue = (com.earthview.world.spatial.geodataset.Iqueryfilter)filterParamValueClassFactory.create();
			filterParamValue.setDelegate(true);
			filterParamValue.setInstancePointer(new InstancePointer(filter));
		}
		}
		boolean returnValue = draw(featureClassParamValue, filterParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  void draw_ISpatialDisplay_ISymbol_IFeature_callback(long ref_display, long symbol, long feature)
	{
		com.earthview.world.spatial.display.Ispatialdisplay ref_displayParamValue = (ref_display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_displayParamValue != null)
		{
		ref_displayParamValue.setDelegate(true);
		ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		IClassFactory ref_displayParamValueClassFactory = GlobalClassFactoryMap.get(ref_displayParamValue.getCppInstanceTypeName());
		if (ref_displayParamValueClassFactory != null)
		{
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)ref_displayParamValueClassFactory.create();
			ref_displayParamValue.setDelegate(true);
			ref_displayParamValue.setInstancePointer(new InstancePointer(ref_display));
		}
		}
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		com.earthview.world.spatial.geodataset.Ifeature featureParamValue = (feature == 0L ? null : new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate));
		if(featureParamValue != null)
		{
		featureParamValue.setDelegate(true);
		featureParamValue.setInstancePointer(new InstancePointer(feature));
		IClassFactory featureParamValueClassFactory = GlobalClassFactoryMap.get(featureParamValue.getCppInstanceTypeName());
		if (featureParamValueClassFactory != null)
		{
			featureParamValue.setDelegate(true);
			featureParamValue = (com.earthview.world.spatial.geodataset.Ifeature)featureParamValueClassFactory.create();
			featureParamValue.setDelegate(true);
			featureParamValue.setInstancePointer(new InstancePointer(feature));
		}
		}
		draw(ref_displayParamValue, symbolParamValue, featureParamValue);
	}

	native private void draw_ISpatialDisplay_ISymbol_IFeature(long pNativeObject, long ref_display, long symbol, long feature);
	public void draw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		draw_ISpatialDisplay_ISymbol_IFeature(this.nativeObject.pointer, ref_displayParamValue, symbolParamValue, featureParamValue);
	}
	native private void draw_ISpatialDisplay_ISymbol_IFeature_NoVirtual(long pNativeObject, long ref_display, long symbol, long feature);
	protected void draw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.display.Isymbol symbol, com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		draw_ISpatialDisplay_ISymbol_IFeature_NoVirtual(this.nativeObject.pointer, ref_displayParamValue, symbolParamValue, featureParamValue);
	}

	protected  void endDraw_void_callback()
	{
		endDraw();
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

	public DrawTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static DrawTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawTheme obj = null;
 		if(baseObj instanceof DrawTheme)
		{
			obj = (DrawTheme)baseObj;
		} else {
			obj = new DrawTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
