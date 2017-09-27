package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawCADUniqueEntityValueTheme extends com.earthview.world.spatial2d.renderer.DrawTheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme", new DrawCADUniqueEntityValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawCADUniqueEntityValueThemeProxy", new DrawCADUniqueEntityValueThemeClassFactory());
	}

	public DrawCADUniqueEntityValueTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDrawCADUniqueEntityValueThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.renderer.DrawCADUniqueEntityValueTheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void startDraw_ISpatialDisplay_ITheme(long pNativeObject, long ref_display, long ref_theme);
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
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	native private void endDraw_void_NoVirtual(long pNativeObject);
	protected void endDraw_NoVirtual()
	{
		endDraw_void_NoVirtual(this.nativeObject.pointer);
	}

	public DrawCADUniqueEntityValueTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawCADUniqueEntityValueTheme(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static DrawCADUniqueEntityValueTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawCADUniqueEntityValueTheme obj = null;
 		if(baseObj instanceof DrawCADUniqueEntityValueTheme)
		{
			obj = (DrawCADUniqueEntityValueTheme)baseObj;
		} else {
			obj = new DrawCADUniqueEntityValueTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawCADUniqueEntityValueTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
