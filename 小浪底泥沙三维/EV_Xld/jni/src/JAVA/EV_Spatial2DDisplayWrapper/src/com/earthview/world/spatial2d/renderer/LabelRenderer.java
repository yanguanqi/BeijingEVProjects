package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 注记渲染类
 */
public class LabelRenderer extends com.earthview.world.spatial.display.Ilabelrenderer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CLabelRenderer", new LabelRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCLabelRendererProxy", new LabelRendererClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public LabelRenderer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLabelRendererProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.renderer.LabelRenderer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getRendererType_void(long pNativeObject);
	/**
	 * 获取渲染类型
	 * @param  
	 * @return 渲染类型
	 */
	public com.earthview.world.spatial.display.EVRendererType getRendererType()
	{
		int returnValue = getRendererType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVRendererType.toEnum(returnValue);
	}
	native private void startDraw_ISpatialDisplay_ISymbol(long pNativeObject, long ref_display, long symbol);
	/**
	 * 开始绘制
	 * @param display 空间显示参数
	 * @param lableProperty 标注属性
	 */
	public void startDraw(com.earthview.world.spatial.display.Ispatialdisplay ref_display, com.earthview.world.spatial.display.Isymbol symbol)
	{
		long ref_displayParamValue = (ref_display == null ? 0L : ref_display.nativeObject.pointer);
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		startDraw_ISpatialDisplay_ISymbol(this.nativeObject.pointer, ref_displayParamValue, symbolParamValue);
	}
	native private void draw_CLabelElement(long pNativeObject, long element);
	/**
	 * 绘制要素
	 * @param feature 待绘制的要素
	 */
	public void draw(com.earthview.world.spatial.display.LabelElement element)
	{
		long elementParamValue = (element == null ? 0L : element.nativeObject.pointer);
		draw_CLabelElement(this.nativeObject.pointer, elementParamValue);
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
	native private void setRotation_ev_real64(long pNativeObject, double rotation);
	/**
	 * 设置旋转角度
	 * @param  
	 */
	public void setRotation(double rotation)
	{
		double rotationParamValue = rotation;
		setRotation_ev_real64(this.nativeObject.pointer, rotationParamValue);
	}
	native private long get_mpDisplay_void(long pNativeObject);
	public com.earthview.world.spatial.display.Ispatialdisplay get_mpDisplay()
	{
		long jniValue = get_mpDisplay_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialdisplay __returnValue = new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialDisplay");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialdisplay)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialDisplay");
		}
		return __returnValue;
	}
	
	native private void set_mpDisplay_ISpatialDisplay (long pNativeObject, long value);
	public void set_mpDisplay(com.earthview.world.spatial.display.Ispatialdisplay mpDisplay)
	{
		long mpDisplayParamValue = (mpDisplay == null ? 0L : mpDisplay.nativeObject.pointer);
		
		set_mpDisplay_ISpatialDisplay(this.nativeObject.pointer, mpDisplayParamValue);
	}
	
	native private long get_mpTransformer_void(long pNativeObject);
	public com.earthview.world.spatial.display.Ispatialtransformer get_mpTransformer()
	{
		long jniValue = get_mpTransformer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialtransformer __returnValue = new com.earthview.world.spatial.display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialTransformer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialtransformer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialTransformer");
		}
		return __returnValue;
	}
	
	native private void set_mpTransformer_ISpatialTransformer (long pNativeObject, long value);
	public void set_mpTransformer(com.earthview.world.spatial.display.Ispatialtransformer mpTransformer)
	{
		long mpTransformerParamValue = (mpTransformer == null ? 0L : mpTransformer.nativeObject.pointer);
		
		set_mpTransformer_ISpatialTransformer(this.nativeObject.pointer, mpTransformerParamValue);
	}
	
	native private long get_mpSymbolRenderer_void(long pNativeObject);
	public com.earthview.world.spatial.display.SymbolRenderer get_mpSymbolRenderer()
	{
		long jniValue = get_mpSymbolRenderer_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.SymbolRenderer __returnValue = new com.earthview.world.spatial.display.SymbolRenderer(CreatedWhenConstruct.CWC_NotToCreate, "CSymbolRenderer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SymbolRenderer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSymbolRenderer");
		}
		return __returnValue;
	}
	
	native private void set_mpSymbolRenderer_CSymbolRenderer (long pNativeObject, long value);
	public void set_mpSymbolRenderer(com.earthview.world.spatial.display.SymbolRenderer mpSymbolRenderer)
	{
		long mpSymbolRendererParamValue = (mpSymbolRenderer == null ? 0L : mpSymbolRenderer.nativeObject.pointer);
		
		set_mpSymbolRenderer_CSymbolRenderer(this.nativeObject.pointer, mpSymbolRendererParamValue);
	}
	
	native private long get_mpSymbol_void(long pNativeObject);
	public com.earthview.world.spatial.display.Isymbol get_mpSymbol()
	{
		long jniValue = get_mpSymbol_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mpSymbol_ISymbol (long pNativeObject, long value);
	public void set_mpSymbol(com.earthview.world.spatial.display.Isymbol mpSymbol)
	{
		long mpSymbolParamValue = (mpSymbol == null ? 0L : mpSymbol.nativeObject.pointer);
		
		set_mpSymbol_ISymbol(this.nativeObject.pointer, mpSymbolParamValue);
	}
	
	native private double get_m_fRotation_void(long pNativeObject);
	public double get_m_fRotation()
	{
		double jniValue = get_m_fRotation_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_fRotation_ev_real64 (long pNativeObject, double value);
	public void set_m_fRotation(double m_fRotation)
	{
		double m_fRotationParamValue = m_fRotation;
		
		set_m_fRotation_ev_real64(this.nativeObject.pointer, m_fRotationParamValue);
	}
	
	public LabelRenderer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelRenderer(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static LabelRenderer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelRenderer obj = null;
 		if(baseObj instanceof LabelRenderer)
		{
			obj = (LabelRenderer)baseObj;
		} else {
			obj = new LabelRenderer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelRenderer");
			obj.increaseCast();
		}

		return obj;
	}
}
