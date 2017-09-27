package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Itextinsert extends com.earthview.world.spatial.carto.Imapsurround {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::ITextInsert", new ItextinsertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JITextInsertProxy", new ItextinsertClassFactory());
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取元素名称
	 * @param  
	 * @return 元素名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getText_void_callback()
	{
		String returnValue = getText();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getText_void(long pNativeObject);
	/**
	 * 获取文本内容
	 * @param  
	 * @return 文本内容
	 */
	public String getText()
	{
		String returnValue = getText_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getText_void_NoVirtual(long pNativeObject);
	protected String getText_NoVirtual()
	{
		String returnValue = getText_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setText_EVString_callback(String strText)
	{
		String strTextParamValue = strText;
		setText(strTextParamValue);
	}

	native private void setText_EVString(long pNativeObject, String strText);
	/**
	 * 设置文本内容
	 * @param strText 文本内容
	 */
	public void setText(String strText)
	{
		String strTextParamValue = strText;
		setText_EVString(this.nativeObject.pointer, strTextParamValue);
	}
	native private void setText_EVString_NoVirtual(long pNativeObject, String strText);
	protected void setText_NoVirtual(String strText)
	{
		String strTextParamValue = strText;
		setText_EVString_NoVirtual(this.nativeObject.pointer, strTextParamValue);
	}

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取元素边框范围
	 * @param symbol 
	 * @return 元素边框范围
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

	native private void setEnvelope_IEnvelope(long pNativeObject, long pEnvelope);
	/**
	 * 设置元素边框范围
	 * @param pEnvelope 元素边框范围
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

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 获取元素是否被选中
	 * @param  
	 * @return 是否被选中
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

	native private void setSelected_ev_bool(long pNativeObject, boolean bSelected);
	/**
	 * 设置元素是否被选中
	 * @param bSelected 是否被选中
	 */
	public void setSelected(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		setSelected_ev_bool(this.nativeObject.pointer, bSelectedParamValue);
	}
	native private void setSelected_ev_bool_NoVirtual(long pNativeObject, boolean bSelected);
	protected void setSelected_NoVirtual(boolean bSelected)
	{
		boolean bSelectedParamValue = bSelected;
		setSelected_ev_bool_NoVirtual(this.nativeObject.pointer, bSelectedParamValue);
	}

	protected  void setHorizontalGap_ev_real64_callback(double horizontalGap)
	{
		double horizontalGapParamValue = horizontalGap;
		setHorizontalGap(horizontalGapParamValue);
	}

	native private void setHorizontalGap_ev_real64(long pNativeObject, double horizontalGap);
	/**
	 * 设置横向间隔
	 * @param horizontalGap 横向间隔
	 */
	public void setHorizontalGap(double horizontalGap)
	{
		double horizontalGapParamValue = horizontalGap;
		setHorizontalGap_ev_real64(this.nativeObject.pointer, horizontalGapParamValue);
	}
	native private void setHorizontalGap_ev_real64_NoVirtual(long pNativeObject, double horizontalGap);
	protected void setHorizontalGap_NoVirtual(double horizontalGap)
	{
		double horizontalGapParamValue = horizontalGap;
		setHorizontalGap_ev_real64_NoVirtual(this.nativeObject.pointer, horizontalGapParamValue);
	}

	protected  double getHorizontalGap_void_callback()
	{
		double returnValue = getHorizontalGap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getHorizontalGap_void(long pNativeObject);
	/**
	 * 获取横向间隔
	 * @param  
	 * @return 横向间隔
	 */
	public double getHorizontalGap()
	{
		double returnValue = getHorizontalGap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getHorizontalGap_void_NoVirtual(long pNativeObject);
	protected double getHorizontalGap_NoVirtual()
	{
		double returnValue = getHorizontalGap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setVerticalGap_ev_real64_callback(double verticalGap)
	{
		double verticalGapParamValue = verticalGap;
		setVerticalGap(verticalGapParamValue);
	}

	native private void setVerticalGap_ev_real64(long pNativeObject, double verticalGap);
	/**
	 * 设置纵向间隔
	 * @param verticalGap 纵向间隔
	 */
	public void setVerticalGap(double verticalGap)
	{
		double verticalGapParamValue = verticalGap;
		setVerticalGap_ev_real64(this.nativeObject.pointer, verticalGapParamValue);
	}
	native private void setVerticalGap_ev_real64_NoVirtual(long pNativeObject, double verticalGap);
	protected void setVerticalGap_NoVirtual(double verticalGap)
	{
		double verticalGapParamValue = verticalGap;
		setVerticalGap_ev_real64_NoVirtual(this.nativeObject.pointer, verticalGapParamValue);
	}

	protected  double getVerticalGap_void_callback()
	{
		double returnValue = getVerticalGap();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getVerticalGap_void(long pNativeObject);
	/**
	 * 获取纵向间隔
	 * @param  
	 * @return 纵向间隔
	 */
	public double getVerticalGap()
	{
		double returnValue = getVerticalGap_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getVerticalGap_void_NoVirtual(long pNativeObject);
	protected double getVerticalGap_NoVirtual()
	{
		double returnValue = getVerticalGap_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getTextSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getTextSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getTextSymbol_void(long pNativeObject);
	/**
	 * 获取地图标题的风格
	 * @param symbol 
	 * @return 地图标题的风格
	 */
	public com.earthview.world.spatial.display.Isymbol getTextSymbol()
	{
		long returnValue = getTextSymbol_void(this.nativeObject.pointer);
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
	native private long getTextSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getTextSymbol_NoVirtual()
	{
		long returnValue = getTextSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setTextSymbol_ISymbol_callback(long symbol)
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
		setTextSymbol(symbolParamValue);
	}

	native private void setTextSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置地图标题的风格
	 * @param symbol 地图标题的风格
	 */
	public void setTextSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setTextSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setTextSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setTextSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setTextSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
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
	 * 设置背景颜色
	 * @param symbol 背景颜色
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
	 * 获取背景颜色
	 * @param  
	 * @return 背景颜色
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
	 * 设置是否绘制背景色
	 * @param bDraw 是否绘制背景色
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
	 * 获取是否绘制背景色
	 * @param  
	 * @return 是否绘制背景色
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
	 * 获取阴影颜色
	 * @param  
	 * @return 阴影颜色
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
	 * 设置是否绘制阴影
	 * @param bDraw 是否绘制阴影
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

	protected  void setFrameSymbol_ISymbol_callback(long pSymbol)
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
		setFrameSymbol(pSymbolParamValue);
	}

	native private void setFrameSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置边框风格
	 * @param pSymbol 边框风格
	 */
	public void setFrameSymbol(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setFrameSymbol_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private void setFrameSymbol_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected void setFrameSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setFrameSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
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
	 * @param pSymbol 
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

	protected  void setDrawFrame_ev_bool_callback(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawFrame(bDrawParamValue);
	}

	native private void setDrawFrame_ev_bool(long pNativeObject, boolean bDraw);
	/**
	 * 设置是否绘制边框
	 * @param  bDraw 是否绘制边框
	 */
	public void setDrawFrame(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawFrame_ev_bool(this.nativeObject.pointer, bDrawParamValue);
	}
	native private void setDrawFrame_ev_bool_NoVirtual(long pNativeObject, boolean bDraw);
	protected void setDrawFrame_NoVirtual(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setDrawFrame_ev_bool_NoVirtual(this.nativeObject.pointer, bDrawParamValue);
	}

	protected  boolean isDrawFrame_void_callback()
	{
		boolean returnValue = isDrawFrame();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDrawFrame_void(long pNativeObject);
	/**
	 * 获取是否绘制边框
	 * @param  
	 * @return 是否绘制边框
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

	native private boolean drawPrepare_ISpatialDisplay(long pNativeObject, long pDisplay);
	/**
	 * 绘制元素准备
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

	native private void draw_void(long pNativeObject);
	/**
	 * 绘制元素
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 创建比例尺的克隆体
	 * @param  
	 * @return 比例尺的克隆体
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

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 将地图的配置以流的方式导出
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 将地图的配置以XML的方式导出
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml元素中恢复指北针的配置
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 把比例尺的配置保存到xml元素中
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
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Itextinsert(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Itextinsert(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置元素名称
	 * @param name 元素名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	
	native protected void register_getText_void(long pNativeObject, String method);
	native protected void register_setText_EVString(long pNativeObject, String method);
	native protected void register_setHorizontalGap_ev_real64(long pNativeObject, String method);
	native protected void register_getHorizontalGap_void(long pNativeObject, String method);
	native protected void register_setVerticalGap_ev_real64(long pNativeObject, String method);
	native protected void register_getVerticalGap_void(long pNativeObject, String method);
	native protected void register_getTextSymbol_void(long pNativeObject, String method);
	native protected void register_setTextSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_setBackgroundColor_IColor(long pNativeObject, String method);
	native protected void register_getBackgroundColor_void(long pNativeObject, String method);
	native protected void register_setDrawBackground_bool(long pNativeObject, String method);
	native protected void register_isDrawBackground_void(long pNativeObject, String method);
	native protected void register_setShadowColor_IColor(long pNativeObject, String method);
	native protected void register_getShadowColor_void(long pNativeObject, String method);
	native protected void register_setDrawShadow_bool(long pNativeObject, String method);
	native protected void register_isDrawShadow_void(long pNativeObject, String method);
	native protected void register_setFrameSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getFrameSymbol_void(long pNativeObject, String method);
	native protected void register_setDrawFrame_ev_bool(long pNativeObject, String method);
	native protected void register_isDrawFrame_void(long pNativeObject, String method);
	native protected void register_getElementType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
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
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getText_void(this.nativeObject.pointer, "getText_void_callback");
			this.register_setText_EVString(this.nativeObject.pointer, "setText_EVString_callback");
			this.register_setHorizontalGap_ev_real64(this.nativeObject.pointer, "setHorizontalGap_ev_real64_callback");
			this.register_getHorizontalGap_void(this.nativeObject.pointer, "getHorizontalGap_void_callback");
			this.register_setVerticalGap_ev_real64(this.nativeObject.pointer, "setVerticalGap_ev_real64_callback");
			this.register_getVerticalGap_void(this.nativeObject.pointer, "getVerticalGap_void_callback");
			this.register_getTextSymbol_void(this.nativeObject.pointer, "getTextSymbol_void_callback");
			this.register_setTextSymbol_ISymbol(this.nativeObject.pointer, "setTextSymbol_ISymbol_callback");
			this.register_setBackgroundColor_IColor(this.nativeObject.pointer, "setBackgroundColor_IColor_callback");
			this.register_getBackgroundColor_void(this.nativeObject.pointer, "getBackgroundColor_void_callback");
			this.register_setDrawBackground_bool(this.nativeObject.pointer, "setDrawBackground_bool_callback");
			this.register_isDrawBackground_void(this.nativeObject.pointer, "isDrawBackground_void_callback");
			this.register_setShadowColor_IColor(this.nativeObject.pointer, "setShadowColor_IColor_callback");
			this.register_getShadowColor_void(this.nativeObject.pointer, "getShadowColor_void_callback");
			this.register_setDrawShadow_bool(this.nativeObject.pointer, "setDrawShadow_bool_callback");
			this.register_isDrawShadow_void(this.nativeObject.pointer, "isDrawShadow_void_callback");
			this.register_setFrameSymbol_ISymbol(this.nativeObject.pointer, "setFrameSymbol_ISymbol_callback");
			this.register_getFrameSymbol_void(this.nativeObject.pointer, "getFrameSymbol_void_callback");
			this.register_setDrawFrame_ev_bool(this.nativeObject.pointer, "setDrawFrame_ev_bool_callback");
			this.register_isDrawFrame_void(this.nativeObject.pointer, "isDrawFrame_void_callback");
			this.register_getElementType_void(this.nativeObject.pointer, "getElementType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
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
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Itextinsert fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Itextinsert obj = null;
 		if(baseObj instanceof Itextinsert)
		{
			obj = (Itextinsert)baseObj;
		} else {
			obj = new Itextinsert(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITextInsert");
			obj.increaseCast();
		}

		return obj;
	}
}
