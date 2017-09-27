package com.earthview.world.spatial2d.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素渲染基类
 */
public class Ifeaturerenderer extends com.earthview.world.spatial.display.Irenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Display::IFeatureRenderer", new IfeaturerendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Display::JIFeatureRendererProxy", new IfeaturerendererClassFactory());
	}

	protected  long getTheme_void_callback()
	{
		com.earthview.world.spatial.theme.Itheme returnValue = getTheme();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTheme_void(long pNativeObject);
	/**
	 * 获取专题图
	 * @param  
	 * @return 返回专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getTheme()
	{
		long returnValue = getTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long getTheme_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme getTheme_NoVirtual()
	{
		long returnValue = getTheme_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	protected  long getStatisticesTheme_void_callback()
	{
		com.earthview.world.spatial.theme.Itheme returnValue = getStatisticesTheme();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getStatisticesTheme_void(long pNativeObject);
	/**
	 * 获取统计专题图
	 * @param  
	 * @return 返回统计专题图
	 */
	public com.earthview.world.spatial.theme.Itheme getStatisticesTheme()
	{
		long returnValue = getStatisticesTheme_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long getStatisticesTheme_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme getStatisticesTheme_NoVirtual()
	{
		long returnValue = getStatisticesTheme_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	protected  void draw_IDisplay2D_IFeature_callback(long display, long feature)
	{
		com.earthview.world.display.Idisplay2d displayParamValue = (display == 0L ? null : new com.earthview.world.display.Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.display.Idisplay2d)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
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
		draw(displayParamValue, featureParamValue);
	}

	native private void draw_IDisplay2D_IFeature(long pNativeObject, long display, long feature);
	/**
	 * 绘制
	 * @param display 显示参数
	 * @param feature 要素
	 * @return 返回统计专题图
	 */
	public void draw(com.earthview.world.display.Idisplay2d display, com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		draw_IDisplay2D_IFeature(this.nativeObject.pointer, displayParamValue, featureParamValue);
	}
	native private void draw_IDisplay2D_IFeature_NoVirtual(long pNativeObject, long display, long feature);
	protected void draw_NoVirtual(com.earthview.world.display.Idisplay2d display, com.earthview.world.spatial.geodataset.Ifeature feature)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		long featureParamValue = (feature == null ? 0L : feature.nativeObject.pointer);
		draw_IDisplay2D_IFeature_NoVirtual(this.nativeObject.pointer, displayParamValue, featureParamValue);
	}

	public Ifeaturerenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ifeaturerenderer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取渲染类型
	 * @param  
	 */
	public com.earthview.world.spatial.display.EVRendererType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_getTheme_void(long pNativeObject, String method);
	native protected void register_getStatisticesTheme_void(long pNativeObject, String method);
	native protected void register_draw_IDisplay2D_IFeature(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getTheme_void(this.nativeObject.pointer, "getTheme_void_callback");
			this.register_getStatisticesTheme_void(this.nativeObject.pointer, "getStatisticesTheme_void_callback");
			this.register_draw_IDisplay2D_IFeature(this.nativeObject.pointer, "draw_IDisplay2D_IFeature_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static Ifeaturerenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ifeaturerenderer obj = null;
 		if(baseObj instanceof Ifeaturerenderer)
		{
			obj = (Ifeaturerenderer)baseObj;
		} else {
			obj = new Ifeaturerenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IFeatureRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
