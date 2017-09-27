package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素渲染类
 */
public class FeatureRenderer extends com.earthview.world.spatial2d.display.Ifeaturerenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CFeatureRenderer", new FeatureRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCFeatureRendererProxy", new FeatureRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FeatureRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFeatureRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.renderer.FeatureRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getRendererType_void(long pNativeObject);
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getRendererType()
	{
		int returnValue = getRendererType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVRendererType.toEnum(returnValue);
	}
	native private void startDraw_ISpatialDisplay_ITheme(long pNativeObject, long display, long theme);
	/**
	 * 开始绘制
	 * @param display 空间显示参数
	 * @param lableProperty 标注属性
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.theme.Itheme theme)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		startDraw_ISpatialDisplay_ITheme(this.nativeObject.pointer, displayParamValue, themeParamValue);
	}
	protected  void draw_IFeature_callback(long feature)
	{
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
		draw(featureParamValue);
	}

	native private void draw_IFeature(long pNativeObject, long feature);
	/**
	 * 绘制要素
	 * @param feature 待绘制的要素
	 */
	public void draw(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		draw_IFeature(this.nativeObject.pointer, featureParamValue);
	}
	native private void draw_IFeature_NoVirtual(long pNativeObject, long feature);
	protected void draw_NoVirtual(com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		draw_IFeature_NoVirtual(this.nativeObject.pointer, featureParamValue);
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
	public FeatureRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureRenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取专题图
	 * @param  
	 * @return 返回专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		return super.getTheme_NoVirtual();
	}
	/**
	 * 获取统计专题图
	 * @param  
	 * @return 返回统计专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getStatisticesTheme()
	{
		return super.getStatisticesTheme_NoVirtual();
	}
	/**
	 * 绘制
	 * @param display 显示参数
	 * @param feature 要素
	 * @return 返回统计专题图
	 */
	public void draw(com.earthview.world.display.Idisplay2d display, com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		super.draw_NoVirtual(display, feature);
	}
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_draw_IFeature(long pNativeObject, String method);
	native protected void register_getTheme_void(long pNativeObject, String method);
	native protected void register_getStatisticesTheme_void(long pNativeObject, String method);
	native protected void register_draw_IDisplay2D_IFeature(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_draw_IFeature(this.nativeObject.pointer, "draw_IFeature_callback");
			this.register_getTheme_void(this.nativeObject.pointer, "getTheme_void_callback");
			this.register_getStatisticesTheme_void(this.nativeObject.pointer, "getStatisticesTheme_void_callback");
			this.register_draw_IDisplay2D_IFeature(this.nativeObject.pointer, "draw_IDisplay2D_IFeature_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static FeatureRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureRenderer obj = null;
 		if(baseObj instanceof FeatureRenderer)
		{
			obj = (FeatureRenderer)baseObj;
		} else {
			obj = new FeatureRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFeatureRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
