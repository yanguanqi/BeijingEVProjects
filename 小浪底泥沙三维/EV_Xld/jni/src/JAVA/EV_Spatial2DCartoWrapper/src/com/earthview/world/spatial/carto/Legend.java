package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图例类
 */
public class Legend extends Ilegend {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegend", new LegendClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCLegendProxy", new LegendClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Legend() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLegendProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.Legend".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  int getElementType_void_callback()
	{
		com.earthview.world.spatial.carto.EVElementType returnValue = getElementType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getElementType_void(long pNativeObject);
	/**
	 * 获取元素类型
	 * @param  
	 * @return 元素类型
	 */
	public com.earthview.world.spatial.carto.EVElementType getElementType()
	{
		int returnValue = getElementType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVElementType.toEnum(returnValue);
	}
	native private int getElementType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVElementType getElementType_NoVirtual()
	{
		int returnValue = getElementType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVElementType.toEnum(returnValue);
	}

	protected  void setBackgroundColor_IColor_callback(long pColor)
	{
		com.earthview.world.spatial.display.Icolor pColorParamValue = (pColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorParamValue != null)
		{
		pColorParamValue.setDelegate(true);
		pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		IClassFactory pColorParamValueClassFactory = GlobalClassFactoryMap.get(pColorParamValue.getCppInstanceTypeName());
		if (pColorParamValueClassFactory != null)
		{
			pColorParamValue.setDelegate(true);
			pColorParamValue = (com.earthview.world.spatial.display.Icolor)pColorParamValueClassFactory.create();
			pColorParamValue.setDelegate(true);
			pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		}
		}
		setBackgroundColor(pColorParamValue);
	}

	native private void setBackgroundColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置图例背景颜色
	 * @param symbol 图例背景颜色
	 */
	public void setBackgroundColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setBackgroundColor_IColor(this.nativeObject.pointer, pColorParamValue);
	}
	native private void setBackgroundColor_IColor_NoVirtual(long pNativeObject, long pColor);
	protected void setBackgroundColor_NoVirtual(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setBackgroundColor_IColor_NoVirtual(this.nativeObject.pointer, pColorParamValue);
	}

	protected  long getBackgroundColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getBackgroundColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBackgroundColor_void(long pNativeObject);
	/**
	 * 获取图例背景颜色
	 * @param  
	 * @return 图例背景颜色
	 */
	public com.earthview.world.spatial.display.Icolor getBackgroundColor()
	{
		long returnValue = getBackgroundColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private long getBackgroundColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getBackgroundColor_NoVirtual()
	{
		long returnValue = getBackgroundColor_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}

	protected  void setDrawBackground_bool_callback(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawBackground(bDrawParamValue);
	}

	native private void setDrawBackground_bool(long pNativeObject, boolean bDraw);
	/**
	 * 设置是否图例背景色
	 * @param bDraw 是否图例背景色
	 */
	public void setDrawBackground(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawBackground_bool(this.nativeObject.pointer, bDrawParamValue);
	}
	native private void setDrawBackground_bool_NoVirtual(long pNativeObject, boolean bDraw);
	protected void setDrawBackground_NoVirtual(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawBackground_bool_NoVirtual(this.nativeObject.pointer, bDrawParamValue);
	}

	protected  boolean isDrawBackground_void_callback()
	{
		boolean returnValue = isDrawBackground();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawBackground_void(long pNativeObject);
	/**
	 * 获取是否图例背景色
	 * @param  
	 * @return 是否图例背景色
	 */
	public boolean isDrawBackground()
	{
		boolean returnValue = isDrawBackground_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawBackground_void_NoVirtual(long pNativeObject);
	protected boolean isDrawBackground_NoVirtual()
	{
		boolean returnValue = isDrawBackground_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setShadowColor_IColor_callback(long pColor)
	{
		com.earthview.world.spatial.display.Icolor pColorParamValue = (pColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorParamValue != null)
		{
		pColorParamValue.setDelegate(true);
		pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		IClassFactory pColorParamValueClassFactory = GlobalClassFactoryMap.get(pColorParamValue.getCppInstanceTypeName());
		if (pColorParamValueClassFactory != null)
		{
			pColorParamValue.setDelegate(true);
			pColorParamValue = (com.earthview.world.spatial.display.Icolor)pColorParamValueClassFactory.create();
			pColorParamValue.setDelegate(true);
			pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		}
		}
		setShadowColor(pColorParamValue);
	}

	native private void setShadowColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置阴影颜色
	 * @param symbol 阴影颜色
	 */
	public void setShadowColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setShadowColor_IColor(this.nativeObject.pointer, pColorParamValue);
	}
	native private void setShadowColor_IColor_NoVirtual(long pNativeObject, long pColor);
	protected void setShadowColor_NoVirtual(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setShadowColor_IColor_NoVirtual(this.nativeObject.pointer, pColorParamValue);
	}

	protected  long getShadowColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getShadowColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getShadowColor_void(long pNativeObject);
	/**
	 * 获取图例阴影颜色
	 * @param  
	 * @return 图例阴影颜色
	 */
	public com.earthview.world.spatial.display.Icolor getShadowColor()
	{
		long returnValue = getShadowColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private long getShadowColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getShadowColor_NoVirtual()
	{
		long returnValue = getShadowColor_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}

	protected  void setDrawShadow_bool_callback(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawShadow(bDrawParamValue);
	}

	native private void setDrawShadow_bool(long pNativeObject, boolean bDraw);
	/**
	 * 设置是否绘制图例
	 * @param bDraw 是否绘制图例
	 */
	public void setDrawShadow(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawShadow_bool(this.nativeObject.pointer, bDrawParamValue);
	}
	native private void setDrawShadow_bool_NoVirtual(long pNativeObject, boolean bDraw);
	protected void setDrawShadow_NoVirtual(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawShadow_bool_NoVirtual(this.nativeObject.pointer, bDrawParamValue);
	}

	protected  boolean isDrawShadow_void_callback()
	{
		boolean returnValue = isDrawShadow();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawShadow_void(long pNativeObject);
	/**
	 * 获取是否绘制阴影
	 * @param  
	 * @return 是否绘制阴影
	 */
	public boolean isDrawShadow()
	{
		boolean returnValue = isDrawShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawShadow_void_NoVirtual(long pNativeObject);
	protected boolean isDrawShadow_NoVirtual()
	{
		boolean returnValue = isDrawShadow_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDrawFrame_bool_callback(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawFrame(bDrawParamValue);
	}

	native private void setDrawFrame_bool(long pNativeObject, boolean bDraw);
	/**
	 * 设置是否绘制图例边框
	 * @param bDraw 是否绘制图例边框
	 */
	public void setDrawFrame(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawFrame_bool(this.nativeObject.pointer, bDrawParamValue);
	}
	native private void setDrawFrame_bool_NoVirtual(long pNativeObject, boolean bDraw);
	protected void setDrawFrame_NoVirtual(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawFrame_bool_NoVirtual(this.nativeObject.pointer, bDrawParamValue);
	}

	protected  boolean isDrawFrame_void_callback()
	{
		boolean returnValue = isDrawFrame();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawFrame_void(long pNativeObject);
	/**
	 * 获取是否绘制图例边框
	 * @param  
	 * @return 是否绘制图例边框
	 */
	public boolean isDrawFrame()
	{
		boolean returnValue = isDrawFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDrawFrame_void_NoVirtual(long pNativeObject);
	protected boolean isDrawFrame_NoVirtual()
	{
		boolean returnValue = isDrawFrame_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setFrameSymbol_ISymbol_callback(long symbol)
	{
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
		setFrameSymbol(symbolParamValue);
	}

	native private void setFrameSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置边框风格
	 * @param symbol 边框风格
	 */
	public void setFrameSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFrameSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setFrameSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setFrameSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFrameSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	protected  long getFrameSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getFrameSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFrameSymbol_void(long pNativeObject);
	/**
	 * 获取边框风格
	 * @param  
	 * @return 边框风格
	 */
	public com.earthview.world.spatial.display.Isymbol getFrameSymbol()
	{
		long returnValue = getFrameSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getFrameSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getFrameSymbol_NoVirtual()
	{
		long returnValue = getFrameSymbol_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  void setTitle_EVString_callback(String strTitle)
	{
		String strTitleParamValue = strTitle;
		setTitle(strTitleParamValue);
	}

	native private void setTitle_EVString(long pNativeObject, String strTitle);
	/**
	 * 设置标题
	 * @param strTitle 标题
	 */
	public void setTitle(String strTitle)
	{
		String strTitleParamValue = strTitle;
		setTitle_EVString(this.nativeObject.pointer, strTitleParamValue);
	}
	native private void setTitle_EVString_NoVirtual(long pNativeObject, String strTitle);
	protected void setTitle_NoVirtual(String strTitle)
	{
		String strTitleParamValue = strTitle;
		setTitle_EVString_NoVirtual(this.nativeObject.pointer, strTitleParamValue);
	}

	protected  String getTitle_void_callback()
	{
		String returnValue = getTitle();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getTitle_void(long pNativeObject);
	/**
	 * 获取标题
	 * @param  
	 * @return 标题
	 */
	public String getTitle()
	{
		String returnValue = getTitle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTitle_void_NoVirtual(long pNativeObject);
	protected String getTitle_NoVirtual()
	{
		String returnValue = getTitle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setTitleSymbol_ISymbol_callback(long pSymbol)
	{
		com.earthview.world.spatial.display.Isymbol pSymbolParamValue = (pSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSymbolParamValue != null)
		{
		pSymbolParamValue.setDelegate(true);
		pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		IClassFactory pSymbolParamValueClassFactory = GlobalClassFactoryMap.get(pSymbolParamValue.getCppInstanceTypeName());
		if (pSymbolParamValueClassFactory != null)
		{
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)pSymbolParamValueClassFactory.create();
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		}
		}
		setTitleSymbol(pSymbolParamValue);
	}

	native private void setTitleSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置标题风格
	 * @param pSymbol 标题风格
	 */
	public void setTitleSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setTitleSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setTitleSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setTitleSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setTitleSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	protected  long getTitleSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getTitleSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTitleSymbol_void(long pNativeObject);
	/**
	 * 获取标题风格
	 * @param  
	 * @return 标题风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTitleSymbol()
	{
		long returnValue = getTitleSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getTitleSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getTitleSymbol_NoVirtual()
	{
		long returnValue = getTitleSymbol_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  void setItemSymbol_ISymbol_callback(long pSymbol)
	{
		com.earthview.world.spatial.display.Isymbol pSymbolParamValue = (pSymbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSymbolParamValue != null)
		{
		pSymbolParamValue.setDelegate(true);
		pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		IClassFactory pSymbolParamValueClassFactory = GlobalClassFactoryMap.get(pSymbolParamValue.getCppInstanceTypeName());
		if (pSymbolParamValueClassFactory != null)
		{
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue = (com.earthview.world.spatial.display.Isymbol)pSymbolParamValueClassFactory.create();
			pSymbolParamValue.setDelegate(true);
			pSymbolParamValue.setInstancePointer(new InstancePointer(pSymbol));
		}
		}
		setItemSymbol(pSymbolParamValue);
	}

	native private void setItemSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置图例项风格
	 * @param pSymbol 图例项风格
	 */
	public void setItemSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setItemSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setItemSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setItemSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setItemSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
	}

	protected  long getItemSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getItemSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getItemSymbol_void(long pNativeObject);
	/**
	 * 获取图例项风格
	 * @param  
	 * @return 图例项风格
	 */
	public com.earthview.world.spatial.display.Isymbol getItemSymbol()
	{
		long returnValue = getItemSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getItemSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getItemSymbol_NoVirtual()
	{
		long returnValue = getItemSymbol_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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

	protected  void setTitleAlignment_LegendTitleAlignment_callback(int alignment)
	{
		com.earthview.world.spatial.carto.LegendTitleAlignment alignmentParamValue = com.earthview.world.spatial.carto.LegendTitleAlignment.toEnum(alignment);
		setTitleAlignment(alignmentParamValue);
	}

	native private void setTitleAlignment_LegendTitleAlignment(long pNativeObject, int alignment);
	/**
	 * 设置标题对齐方式
	 * @param alignment 标题对齐方式
	 */
	public void setTitleAlignment(com.earthview.world.spatial.carto.LegendTitleAlignment alignment)
	{
		int alignmentParamValue = alignment.getValue();
		setTitleAlignment_LegendTitleAlignment(this.nativeObject.pointer, alignmentParamValue);
	}
	native private void setTitleAlignment_LegendTitleAlignment_NoVirtual(long pNativeObject, int alignment);
	protected void setTitleAlignment_NoVirtual(com.earthview.world.spatial.carto.LegendTitleAlignment alignment)
	{
		int alignmentParamValue = alignment.getValue();
		setTitleAlignment_LegendTitleAlignment_NoVirtual(this.nativeObject.pointer, alignmentParamValue);
	}

	protected  int getTitleAlignment_void_callback()
	{
		com.earthview.world.spatial.carto.LegendTitleAlignment returnValue = getTitleAlignment();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getTitleAlignment_void(long pNativeObject);
	/**
	 * 获取标题对齐方式
	 * @param  
	 * @return 标题对齐方式
	 */
	public com.earthview.world.spatial.carto.LegendTitleAlignment getTitleAlignment()
	{
		int returnValue = getTitleAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.LegendTitleAlignment.toEnum(returnValue);
	}
	native private int getTitleAlignment_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.LegendTitleAlignment getTitleAlignment_NoVirtual()
	{
		int returnValue = getTitleAlignment_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.LegendTitleAlignment.toEnum(returnValue);
	}

	protected  void setRowGap_ev_real64_callback(double rowGap)
	{
		double rowGapParamValue = rowGap;
		setRowGap(rowGapParamValue);
	}

	native private void setRowGap_ev_real64(long pNativeObject, double rowGap);
	/**
	 * 设置行间距
	 * @param rowGap 行间距
	 */
	public void setRowGap(double rowGap)
	{
		double rowGapParamValue = rowGap;
		setRowGap_ev_real64(this.nativeObject.pointer, rowGapParamValue);
	}
	native private void setRowGap_ev_real64_NoVirtual(long pNativeObject, double rowGap);
	protected void setRowGap_NoVirtual(double rowGap)
	{
		double rowGapParamValue = rowGap;
		setRowGap_ev_real64_NoVirtual(this.nativeObject.pointer, rowGapParamValue);
	}

	protected  double getRowGap_void_callback()
	{
		double returnValue = getRowGap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getRowGap_void(long pNativeObject);
	/**
	 * 获取行间距
	 * @param  
	 * @return 行间距
	 */
	public double getRowGap()
	{
		double returnValue = getRowGap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getRowGap_void_NoVirtual(long pNativeObject);
	protected double getRowGap_NoVirtual()
	{
		double returnValue = getRowGap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColunmGap_ev_real64_callback(double colunmGap)
	{
		double colunmGapParamValue = colunmGap;
		setColunmGap(colunmGapParamValue);
	}

	native private void setColunmGap_ev_real64(long pNativeObject, double colunmGap);
	/**
	 * 设置列间距
	 * @param colunmGap 列间距
	 */
	public void setColunmGap(double colunmGap)
	{
		double colunmGapParamValue = colunmGap;
		setColunmGap_ev_real64(this.nativeObject.pointer, colunmGapParamValue);
	}
	native private void setColunmGap_ev_real64_NoVirtual(long pNativeObject, double colunmGap);
	protected void setColunmGap_NoVirtual(double colunmGap)
	{
		double colunmGapParamValue = colunmGap;
		setColunmGap_ev_real64_NoVirtual(this.nativeObject.pointer, colunmGapParamValue);
	}

	protected  double getColunmGap_void_callback()
	{
		double returnValue = getColunmGap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getColunmGap_void(long pNativeObject);
	/**
	 * 获取列间距
	 * @param  
	 * @return 列间距
	 */
	public double getColunmGap()
	{
		double returnValue = getColunmGap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getColunmGap_void_NoVirtual(long pNativeObject);
	protected double getColunmGap_NoVirtual()
	{
		double returnValue = getColunmGap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColumnCount_ev_int32_callback(int count)
	{
		int countParamValue = count;
		setColumnCount(countParamValue);
	}

	native private void setColumnCount_ev_int32(long pNativeObject, int count);
	/**
	 * 获取图例项例数
	 * @param count 
	 * @return 图例项例数
	 */
	public void setColumnCount(int count)
	{
		int countParamValue = count;
		setColumnCount_ev_int32(this.nativeObject.pointer, countParamValue);
	}
	native private void setColumnCount_ev_int32_NoVirtual(long pNativeObject, int count);
	protected void setColumnCount_NoVirtual(int count)
	{
		int countParamValue = count;
		setColumnCount_ev_int32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	protected  int getColumnCount_void_callback()
	{
		int returnValue = getColumnCount();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getColumnCount_void(long pNativeObject);
	/**
	 * 获取图例项例数
	 * @param  
	 * @return 图例项例数
	 */
	public int getColumnCount()
	{
		int returnValue = getColumnCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getColumnCount_void_NoVirtual(long pNativeObject);
	protected int getColumnCount_NoVirtual()
	{
		int returnValue = getColumnCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setLegendItem_ILegendItemVector_callback(long pItemVector)
	{
		com.earthview.world.spatial.carto.Ilegenditemvector pItemVectorParamValue = (pItemVector == 0L ? null : new com.earthview.world.spatial.carto.Ilegenditemvector(CreatedWhenConstruct.CWC_NotToCreate));
		if(pItemVectorParamValue != null)
		{
		pItemVectorParamValue.setDelegate(true);
		pItemVectorParamValue.setInstancePointer(new InstancePointer(pItemVector));
		IClassFactory pItemVectorParamValueClassFactory = GlobalClassFactoryMap.get(pItemVectorParamValue.getCppInstanceTypeName());
		if (pItemVectorParamValueClassFactory != null)
		{
			pItemVectorParamValue.setDelegate(true);
			pItemVectorParamValue = (com.earthview.world.spatial.carto.Ilegenditemvector)pItemVectorParamValueClassFactory.create();
			pItemVectorParamValue.setDelegate(true);
			pItemVectorParamValue.setInstancePointer(new InstancePointer(pItemVector));
		}
		}
		setLegendItem(pItemVectorParamValue);
	}

	native private void setLegendItem_ILegendItemVector(long pNativeObject, long pItemVector);
	/**
	 * 添加图例项
	 * @param vecLayer 图例项
	 */
	public void setLegendItem(com.earthview.world.spatial.carto.Ilegenditemvector pItemVector)
	{
		long pItemVectorParamValue = (pItemVector == null ? 0L : pItemVector.nativeObject.pointer);
		setLegendItem_ILegendItemVector(this.nativeObject.pointer, pItemVectorParamValue);
	}
	native private void setLegendItem_ILegendItemVector_NoVirtual(long pNativeObject, long pItemVector);
	protected void setLegendItem_NoVirtual(com.earthview.world.spatial.carto.Ilegenditemvector pItemVector)
	{
		long pItemVectorParamValue = (pItemVector == null ? 0L : pItemVector.nativeObject.pointer);
		setLegendItem_ILegendItemVector_NoVirtual(this.nativeObject.pointer, pItemVectorParamValue);
	}

	protected  void clearLegendItem_void_callback()
	{
		clearLegendItem();
	}

	native private void clearLegendItem_void(long pNativeObject);
	/**
	 * 清空图例项
	 * @param vecLayer 
	 */
	public void clearLegendItem()
	{
		clearLegendItem_void(this.nativeObject.pointer);
	}
	native private void clearLegendItem_void_NoVirtual(long pNativeObject);
	protected void clearLegendItem_NoVirtual()
	{
		clearLegendItem_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getLegendItems_void_callback()
	{
		com.earthview.world.spatial.carto.Ilegenditemvector returnValue = getLegendItems();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLegendItems_void(long pNativeObject);
	/**
	 * 获取图例项
	 * @param symbol 
	 * @return 图例项
	 */
	public com.earthview.world.spatial.carto.Ilegenditemvector getLegendItems()
	{
		long returnValue = getLegendItems_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ilegenditemvector __returnValue = new com.earthview.world.spatial.carto.Ilegenditemvector(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItemVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ilegenditemvector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILegendItemVector");
		}
		return __returnValue;
	}
	native private long getLegendItems_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ilegenditemvector getLegendItems_NoVirtual()
	{
		long returnValue = getLegendItems_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ilegenditemvector __returnValue = new com.earthview.world.spatial.carto.Ilegenditemvector(CreatedWhenConstruct.CWC_NotToCreate, "ILegendItemVector");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ilegenditemvector)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILegendItemVector");
		}
		return __returnValue;
	}

	protected  long getEnvelope_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getEnvelope();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取图例边框范围
	 * @param symbol 
	 * @return 图例边框范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getEnvelope()
	{
		long returnValue = getEnvelope_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getEnvelope_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getEnvelope_NoVirtual()
	{
		long returnValue = getEnvelope_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	protected  void setEnvelope_IEnvelope_callback(long pEnvelope)
	{
		com.earthview.world.spatial.geometry.Ienvelope pEnvelopeParamValue = (pEnvelope == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(pEnvelopeParamValue != null)
		{
		pEnvelopeParamValue.setDelegate(true);
		pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		IClassFactory pEnvelopeParamValueClassFactory = GlobalClassFactoryMap.get(pEnvelopeParamValue.getCppInstanceTypeName());
		if (pEnvelopeParamValueClassFactory != null)
		{
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue = (com.earthview.world.spatial.geometry.Ienvelope)pEnvelopeParamValueClassFactory.create();
			pEnvelopeParamValue.setDelegate(true);
			pEnvelopeParamValue.setInstancePointer(new InstancePointer(pEnvelope));
		}
		}
		setEnvelope(pEnvelopeParamValue);
	}

	native private void setEnvelope_IEnvelope(long pNativeObject, long pEnvelope);
	/**
	 * 设置图例边框范围
	 * @param pEnvelope 图例边框范围
	 */
	public void setEnvelope(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setEnvelope_IEnvelope(this.nativeObject.pointer, pEnvelopeParamValue);
	}
	native private void setEnvelope_IEnvelope_NoVirtual(long pNativeObject, long pEnvelope);
	protected void setEnvelope_NoVirtual(com.earthview.world.spatial.geometry.Ienvelope pEnvelope)
	{
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		setEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, pEnvelopeParamValue);
	}

	protected  boolean isSelected_void_callback()
	{
		boolean returnValue = isSelected();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 判断图例是否被选择
	 * @param pDisplay 
	 * @return 如果是被选择状态，返回true,否则返回false
	 */
	public boolean isSelected()
	{
		boolean returnValue = isSelected_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSelected_void_NoVirtual(long pNativeObject);
	protected boolean isSelected_NoVirtual()
	{
		boolean returnValue = isSelected_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSelected_ev_bool_callback(boolean b)
	{
		boolean bParamValue = b;
		setSelected(bParamValue);
	}

	native private void setSelected_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置图例是否被选择
	 * @param pDisplay 是否被选择
	 */
	public void setSelected(boolean b)
	{
		boolean bParamValue = b;
		setSelected_ev_bool(this.nativeObject.pointer, bParamValue);
	}
	native private void setSelected_ev_bool_NoVirtual(long pNativeObject, boolean b);
	protected void setSelected_NoVirtual(boolean b)
	{
		boolean bParamValue = b;
		setSelected_ev_bool_NoVirtual(this.nativeObject.pointer, bParamValue);
	}

	protected  boolean drawPrepare_ISpatialDisplay_callback(long pDisplay)
	{
		com.earthview.world.spatial.display.Ispatialdisplay pDisplayParamValue = (pDisplay == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(pDisplayParamValue != null)
		{
		pDisplayParamValue.setDelegate(true);
		pDisplayParamValue.setInstancePointer(new InstancePointer(pDisplay));
		IClassFactory pDisplayParamValueClassFactory = GlobalClassFactoryMap.get(pDisplayParamValue.getCppInstanceTypeName());
		if (pDisplayParamValueClassFactory != null)
		{
			pDisplayParamValue.setDelegate(true);
			pDisplayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)pDisplayParamValueClassFactory.create();
			pDisplayParamValue.setDelegate(true);
			pDisplayParamValue.setInstancePointer(new InstancePointer(pDisplay));
		}
		}
		boolean returnValue = drawPrepare(pDisplayParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean drawPrepare_ISpatialDisplay(long pNativeObject, long pDisplay);
	/**
	 * 绘制图例准备
	 * @param pDisplay 指定设备
	 */
	public boolean drawPrepare(com.earthview.world.spatial.display.Ispatialdisplay pDisplay)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		boolean returnValue = drawPrepare_ISpatialDisplay(this.nativeObject.pointer, pDisplayParamValue);
		return returnValue;
	}
	native private boolean drawPrepare_ISpatialDisplay_NoVirtual(long pNativeObject, long pDisplay);
	protected boolean drawPrepare_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay pDisplay)
	{
		long pDisplayParamValue = (pDisplay == null ? 0L : pDisplay.nativeObject.pointer);
		boolean returnValue = drawPrepare_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, pDisplayParamValue);
		return returnValue;
	}

	protected  void draw_void_callback()
	{
		draw();
	}

	native private void draw_void(long pNativeObject);
	/**
	 * 绘制图例
	 * @param  
	 */
	public void draw()
	{
		draw_void(this.nativeObject.pointer);
	}
	native private void draw_void_NoVirtual(long pNativeObject);
	protected void draw_NoVirtual()
	{
		draw_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void drawOver_void_callback()
	{
		drawOver();
	}

	native private void drawOver_void(long pNativeObject);
	/**
	 * 绘制结束后续处理
	 * @param  
	 */
	public void drawOver()
	{
		drawOver_void(this.nativeObject.pointer);
	}
	native private void drawOver_void_NoVirtual(long pNativeObject);
	protected void drawOver_NoVirtual()
	{
		drawOver_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.carto.Ielement returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 创建图例的克隆体
	 * @param  
	 * @return 图例的克隆体
	 */
	public com.earthview.world.spatial.carto.Ielement ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ielement __returnValue = new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ielement ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ielement __returnValue = new com.earthview.world.spatial.carto.Ielement(CreatedWhenConstruct.CWC_NotToCreate, "IElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ielement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IElement");
		}
		return __returnValue;
	}

	protected  void toStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		toStream(streamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 将图例的配置以流的方式导出
	 * @param stream 导出的流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	protected  String toXML_void_callback()
	{
		String returnValue = toXML();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 将图例的配置以XML的方式导出
	 * @param  
	 * @return xml
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素中恢复图例的配置
	 * @param element xml元素
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把图例的配置保存到xml元素中
	 * @param  
	 * @return xml元素
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	public Legend(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Legend(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getElementType_void(long pNativeObject, String method);
	native protected void register_setBackgroundColor_IColor(long pNativeObject, String method);
	native protected void register_getBackgroundColor_void(long pNativeObject, String method);
	native protected void register_setDrawBackground_bool(long pNativeObject, String method);
	native protected void register_isDrawBackground_void(long pNativeObject, String method);
	native protected void register_setShadowColor_IColor(long pNativeObject, String method);
	native protected void register_getShadowColor_void(long pNativeObject, String method);
	native protected void register_setDrawShadow_bool(long pNativeObject, String method);
	native protected void register_isDrawShadow_void(long pNativeObject, String method);
	native protected void register_setDrawFrame_bool(long pNativeObject, String method);
	native protected void register_isDrawFrame_void(long pNativeObject, String method);
	native protected void register_setFrameSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getFrameSymbol_void(long pNativeObject, String method);
	native protected void register_setTitle_EVString(long pNativeObject, String method);
	native protected void register_getTitle_void(long pNativeObject, String method);
	native protected void register_setTitleSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getTitleSymbol_void(long pNativeObject, String method);
	native protected void register_setItemSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getItemSymbol_void(long pNativeObject, String method);
	native protected void register_setTitleAlignment_LegendTitleAlignment(long pNativeObject, String method);
	native protected void register_getTitleAlignment_void(long pNativeObject, String method);
	native protected void register_setRowGap_ev_real64(long pNativeObject, String method);
	native protected void register_getRowGap_void(long pNativeObject, String method);
	native protected void register_setColunmGap_ev_real64(long pNativeObject, String method);
	native protected void register_getColunmGap_void(long pNativeObject, String method);
	native protected void register_setColumnCount_ev_int32(long pNativeObject, String method);
	native protected void register_getColumnCount_void(long pNativeObject, String method);
	native protected void register_setLegendItem_ILegendItemVector(long pNativeObject, String method);
	native protected void register_clearLegendItem_void(long pNativeObject, String method);
	native protected void register_getLegendItems_void(long pNativeObject, String method);
	native protected void register_getEnvelope_void(long pNativeObject, String method);
	native protected void register_setEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_isSelected_void(long pNativeObject, String method);
	native protected void register_setSelected_ev_bool(long pNativeObject, String method);
	native protected void register_drawPrepare_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_draw_void(long pNativeObject, String method);
	native protected void register_drawOver_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getElementType_void(this.nativeObject.pointer, "getElementType_void_callback");
			this.register_setBackgroundColor_IColor(this.nativeObject.pointer, "setBackgroundColor_IColor_callback");
			this.register_getBackgroundColor_void(this.nativeObject.pointer, "getBackgroundColor_void_callback");
			this.register_setDrawBackground_bool(this.nativeObject.pointer, "setDrawBackground_bool_callback");
			this.register_isDrawBackground_void(this.nativeObject.pointer, "isDrawBackground_void_callback");
			this.register_setShadowColor_IColor(this.nativeObject.pointer, "setShadowColor_IColor_callback");
			this.register_getShadowColor_void(this.nativeObject.pointer, "getShadowColor_void_callback");
			this.register_setDrawShadow_bool(this.nativeObject.pointer, "setDrawShadow_bool_callback");
			this.register_isDrawShadow_void(this.nativeObject.pointer, "isDrawShadow_void_callback");
			this.register_setDrawFrame_bool(this.nativeObject.pointer, "setDrawFrame_bool_callback");
			this.register_isDrawFrame_void(this.nativeObject.pointer, "isDrawFrame_void_callback");
			this.register_setFrameSymbol_ISymbol(this.nativeObject.pointer, "setFrameSymbol_ISymbol_callback");
			this.register_getFrameSymbol_void(this.nativeObject.pointer, "getFrameSymbol_void_callback");
			this.register_setTitle_EVString(this.nativeObject.pointer, "setTitle_EVString_callback");
			this.register_getTitle_void(this.nativeObject.pointer, "getTitle_void_callback");
			this.register_setTitleSymbol_ISymbol(this.nativeObject.pointer, "setTitleSymbol_ISymbol_callback");
			this.register_getTitleSymbol_void(this.nativeObject.pointer, "getTitleSymbol_void_callback");
			this.register_setItemSymbol_ISymbol(this.nativeObject.pointer, "setItemSymbol_ISymbol_callback");
			this.register_getItemSymbol_void(this.nativeObject.pointer, "getItemSymbol_void_callback");
			this.register_setTitleAlignment_LegendTitleAlignment(this.nativeObject.pointer, "setTitleAlignment_LegendTitleAlignment_callback");
			this.register_getTitleAlignment_void(this.nativeObject.pointer, "getTitleAlignment_void_callback");
			this.register_setRowGap_ev_real64(this.nativeObject.pointer, "setRowGap_ev_real64_callback");
			this.register_getRowGap_void(this.nativeObject.pointer, "getRowGap_void_callback");
			this.register_setColunmGap_ev_real64(this.nativeObject.pointer, "setColunmGap_ev_real64_callback");
			this.register_getColunmGap_void(this.nativeObject.pointer, "getColunmGap_void_callback");
			this.register_setColumnCount_ev_int32(this.nativeObject.pointer, "setColumnCount_ev_int32_callback");
			this.register_getColumnCount_void(this.nativeObject.pointer, "getColumnCount_void_callback");
			this.register_setLegendItem_ILegendItemVector(this.nativeObject.pointer, "setLegendItem_ILegendItemVector_callback");
			this.register_clearLegendItem_void(this.nativeObject.pointer, "clearLegendItem_void_callback");
			this.register_getLegendItems_void(this.nativeObject.pointer, "getLegendItems_void_callback");
			this.register_getEnvelope_void(this.nativeObject.pointer, "getEnvelope_void_callback");
			this.register_setEnvelope_IEnvelope(this.nativeObject.pointer, "setEnvelope_IEnvelope_callback");
			this.register_isSelected_void(this.nativeObject.pointer, "isSelected_void_callback");
			this.register_setSelected_ev_bool(this.nativeObject.pointer, "setSelected_ev_bool_callback");
			this.register_drawPrepare_ISpatialDisplay(this.nativeObject.pointer, "drawPrepare_ISpatialDisplay_callback");
			this.register_draw_void(this.nativeObject.pointer, "draw_void_callback");
			this.register_drawOver_void(this.nativeObject.pointer, "drawOver_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
		}
	}
	
	public static Legend fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Legend obj = null;
 		if(baseObj instanceof Legend)
		{
			obj = (Legend)baseObj;
		} else {
			obj = new Legend(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLegend");
			obj.increaseCast();
		}

		return obj;
	}
}
