package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图层注记渲染类
 */
public class LayerLabelRenderer extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer", new LayerLabelRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public LayerLabelRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLayerLabelRenderer", null);
	}

	native private void startDraw_ISpatialDisplay_IFeatureClass_ITheme_EVString(long pNativeObject, long display, long fc, long pTheme, String filter);
	/**
	 * 开始绘制
	 * @param display 空间显示参数
	 * @param lableProperty 标注属性
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.theme.Itheme pTheme, String filter)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long fcParamValue = (fc == null ? 0L : fc.nativeObject.pointer);
		long pThemeParamValue = (pTheme == null ? 0L : pTheme.nativeObject.pointer);
		String filterParamValue = filter;
		startDraw_ISpatialDisplay_IFeatureClass_ITheme_EVString(this.nativeObject.pointer, displayParamValue, fcParamValue, pThemeParamValue, filterParamValue);
	}
	native private boolean draw_ILabelProperty(long pNativeObject, long pLabelPorperty);
	/**
	 * 绘制要素
	 * @param feature 待绘制的要素
	 */
	public boolean draw(com.earthview.world.spatial.display.Ilabelproperty pLabelPorperty)
	{
		long pLabelPorpertyParamValue = (pLabelPorperty == null ? 0L : pLabelPorperty.nativeObject.pointer);
		boolean returnValue = draw_ILabelProperty(this.nativeObject.pointer, pLabelPorpertyParamValue);
		return returnValue;
	}
	native private void endDraw_void(long pNativeObject);
	/**
	 * 结束绘制
	 * @param  
	 */
	public void endDraw()
	{
		endDraw_void(this.nativeObject.pointer);
	}
	public LayerLabelRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayerLabelRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LayerLabelRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayerLabelRenderer obj = null;
 		if(baseObj instanceof LayerLabelRenderer)
		{
			obj = (LayerLabelRenderer)baseObj;
		} else {
			obj = new LayerLabelRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayerLabelRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
