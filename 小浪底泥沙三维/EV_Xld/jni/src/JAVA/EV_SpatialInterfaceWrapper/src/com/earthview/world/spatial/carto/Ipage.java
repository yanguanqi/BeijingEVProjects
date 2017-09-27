package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ipage extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::IPage", new IpageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JIPageProxy", new IpageClassFactory());
	}

	protected  int getPageType_void_callback()
	{
		com.earthview.world.spatial.carto.EVPageSize returnValue = getPageType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getPageType_void(long pNativeObject);
	/**
	 * 获取纸张类型
	 * @param  
	 * @return 纸张类型
	 */
	public com.earthview.world.spatial.carto.EVPageSize getPageType()
	{
		int returnValue = getPageType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageSize.toEnum(returnValue);
	}
	native private int getPageType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVPageSize getPageType_NoVirtual()
	{
		int returnValue = getPageType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageSize.toEnum(returnValue);
	}

	protected  void setPageType_EVPageSize_callback(int type)
	{
		com.earthview.world.spatial.carto.EVPageSize typeParamValue = com.earthview.world.spatial.carto.EVPageSize.toEnum(type);
		setPageType(typeParamValue);
	}

	native private void setPageType_EVPageSize(long pNativeObject, int type);
	/**
	 * 设置纸张类型
	 * @param type 纸张类型
	 */
	public void setPageType(com.earthview.world.spatial.carto.EVPageSize type)
	{
		int typeParamValue = type.getValue();
		setPageType_EVPageSize(this.nativeObject.pointer, typeParamValue);
	}
	native private void setPageType_EVPageSize_NoVirtual(long pNativeObject, int type);
	protected void setPageType_NoVirtual(com.earthview.world.spatial.carto.EVPageSize type)
	{
		int typeParamValue = type.getValue();
		setPageType_EVPageSize_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  long getBoderSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getBoderSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBoderSymbol_void(long pNativeObject);
	/**
	 * 获取边框风格
	 * @param  
	 * @return 边框风格
	 */
	public com.earthview.world.spatial.display.Isymbol getBoderSymbol()
	{
		long returnValue = getBoderSymbol_void(this.nativeObject.pointer);
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
	native private long getBoderSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getBoderSymbol_NoVirtual()
	{
		long returnValue = getBoderSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setBoderSymbol_ISymbol_callback(long boder)
	{
		com.earthview.world.spatial.display.Isymbol boderParamValue = (boder == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(boderParamValue != null)
		{
		boderParamValue.setDelegate(true);
		boderParamValue.setInstancePointer(new InstancePointer(boder));
		IClassFactory boderParamValueClassFactory = GlobalClassFactoryMap.get(boderParamValue.getCppInstanceTypeName());
		if (boderParamValueClassFactory != null)
		{
			boderParamValue.setDelegate(true);
			boderParamValue = (com.earthview.world.spatial.display.Isymbol)boderParamValueClassFactory.create();
			boderParamValue.setDelegate(true);
			boderParamValue.setInstancePointer(new InstancePointer(boder));
		}
		}
		setBoderSymbol(boderParamValue);
	}

	native private void setBoderSymbol_ISymbol(long pNativeObject, long boder);
	/**
	 * 设置边框风格
	 * @param boder 边框风格
	 */
	public void setBoderSymbol(com.earthview.world.spatial.display.Isymbol boder)
	{
		long boderParamValue = (boder == null ? 0L : boder.nativeObject.pointer);
		setBoderSymbol_ISymbol(this.nativeObject.pointer, boderParamValue);
	}
	native private void setBoderSymbol_ISymbol_NoVirtual(long pNativeObject, long boder);
	protected void setBoderSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol boder)
	{
		long boderParamValue = (boder == null ? 0L : boder.nativeObject.pointer);
		setBoderSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, boderParamValue);
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
	 * 获取背景风格
	 * @param  
	 * @return 背景风格
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

	protected  void setBackgroundColor_IColor_callback(long background)
	{
		com.earthview.world.spatial.display.Icolor backgroundParamValue = (background == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(backgroundParamValue != null)
		{
		backgroundParamValue.setDelegate(true);
		backgroundParamValue.setInstancePointer(new InstancePointer(background));
		IClassFactory backgroundParamValueClassFactory = GlobalClassFactoryMap.get(backgroundParamValue.getCppInstanceTypeName());
		if (backgroundParamValueClassFactory != null)
		{
			backgroundParamValue.setDelegate(true);
			backgroundParamValue = (com.earthview.world.spatial.display.Icolor)backgroundParamValueClassFactory.create();
			backgroundParamValue.setDelegate(true);
			backgroundParamValue.setInstancePointer(new InstancePointer(background));
		}
		}
		setBackgroundColor(backgroundParamValue);
	}

	native private void setBackgroundColor_IColor(long pNativeObject, long background);
	/**
	 * 设置背景风格
	 * @param background 背景风格
	 */
	public void setBackgroundColor(com.earthview.world.spatial.display.Icolor background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackgroundColor_IColor(this.nativeObject.pointer, backgroundParamValue);
	}
	native private void setBackgroundColor_IColor_NoVirtual(long pNativeObject, long background);
	protected void setBackgroundColor_NoVirtual(com.earthview.world.spatial.display.Icolor background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackgroundColor_IColor_NoVirtual(this.nativeObject.pointer, backgroundParamValue);
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
	 * @param background 阴影颜色
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

	protected  int getOrientation_void_callback()
	{
		com.earthview.world.spatial.carto.EVPageOrientation returnValue = getOrientation();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getOrientation_void(long pNativeObject);
	/**
	 * 获取方向
	 * @param  
	 * @return 方向类型
	 */
	public com.earthview.world.spatial.carto.EVPageOrientation getOrientation()
	{
		int returnValue = getOrientation_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageOrientation.toEnum(returnValue);
	}
	native private int getOrientation_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVPageOrientation getOrientation_NoVirtual()
	{
		int returnValue = getOrientation_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageOrientation.toEnum(returnValue);
	}

	protected  void setPageSize_ev_real64_ev_real64_callback(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setPageSize(widthParamValue, heightParamValue);
	}

	native private void setPageSize_ev_real64_ev_real64(long pNativeObject, double width, double height);
	/**
	 * 自定义设置纸张大小
	 * @param width 宽度
	 * @param height 高度
	 */
	public void setPageSize(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setPageSize_ev_real64_ev_real64(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void setPageSize_ev_real64_ev_real64_NoVirtual(long pNativeObject, double width, double height);
	protected void setPageSize_NoVirtual(double width, double height)
	{
		double widthParamValue = width;
		double heightParamValue = height;
		setPageSize_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}

	protected  void setOrientation_EVPageOrientation_callback(int oritention)
	{
		com.earthview.world.spatial.carto.EVPageOrientation oritentionParamValue = com.earthview.world.spatial.carto.EVPageOrientation.toEnum(oritention);
		setOrientation(oritentionParamValue);
	}

	native private void setOrientation_EVPageOrientation(long pNativeObject, int oritention);
	/**
	 * 设置方向
	 * @param oritention 方向类型
	 */
	public void setOrientation(com.earthview.world.spatial.carto.EVPageOrientation oritention)
	{
		int oritentionParamValue = oritention.getValue();
		setOrientation_EVPageOrientation(this.nativeObject.pointer, oritentionParamValue);
	}
	native private void setOrientation_EVPageOrientation_NoVirtual(long pNativeObject, int oritention);
	protected void setOrientation_NoVirtual(com.earthview.world.spatial.carto.EVPageOrientation oritention)
	{
		int oritentionParamValue = oritention.getValue();
		setOrientation_EVPageOrientation_NoVirtual(this.nativeObject.pointer, oritentionParamValue);
	}

	protected  void queryPageSize_ev_real64_ev_real64_EVPageUnits_callback(long width, long height, long pageUnit)
	{
		DoublePointer widthParamValue = new DoublePointer(new InstancePointer(width));
		DoublePointer heightParamValue = new DoublePointer(new InstancePointer(height));
		EnumPointer pageUnitParamValue = new EnumPointer(new InstancePointer(pageUnit));
		queryPageSize(widthParamValue, heightParamValue, pageUnitParamValue);
	}

	native private void queryPageSize_ev_real64_ev_real64_EVPageUnits(long pNativeObject, long width, long height, long pageUnit);
	/**
	 * 查询纸张大小
	 * @param width 宽度
	 * @param height 高度
	 * @param pageUnit 高度
	 */
	public void queryPageSize(DoublePointer width, DoublePointer height, EnumPointer pageUnit)
	{
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long pageUnitParamValue = pageUnit.nativeObject.pointer;
		queryPageSize_ev_real64_ev_real64_EVPageUnits(this.nativeObject.pointer, widthParamValue, heightParamValue, pageUnitParamValue);
	}
	native private void queryPageSize_ev_real64_ev_real64_EVPageUnits_NoVirtual(long pNativeObject, long width, long height, long pageUnit);
	protected void queryPageSize_NoVirtual(DoublePointer width, DoublePointer height, EnumPointer pageUnit)
	{
		long widthParamValue = width.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long pageUnitParamValue = pageUnit.nativeObject.pointer;
		queryPageSize_ev_real64_ev_real64_EVPageUnits_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue, pageUnitParamValue);
	}

	protected  int getPageUnits_void_callback()
	{
		com.earthview.world.spatial.carto.EVPageUnits returnValue = getPageUnits();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getPageUnits_void(long pNativeObject);
	/**
	 * 获取纸张单位
	 * @param  
	 * @return 纸张单位
	 */
	public com.earthview.world.spatial.carto.EVPageUnits getPageUnits()
	{
		int returnValue = getPageUnits_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageUnits.toEnum(returnValue);
	}
	native private int getPageUnits_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVPageUnits getPageUnits_NoVirtual()
	{
		int returnValue = getPageUnits_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVPageUnits.toEnum(returnValue);
	}

	protected  void setPageUnits_EVPageUnits_callback(int pageUnit)
	{
		com.earthview.world.spatial.carto.EVPageUnits pageUnitParamValue = com.earthview.world.spatial.carto.EVPageUnits.toEnum(pageUnit);
		setPageUnits(pageUnitParamValue);
	}

	native private void setPageUnits_EVPageUnits(long pNativeObject, int pageUnit);
	/**
	 * 设置纸张单位
	 * @param pageUnit 纸张单位
	 */
	public void setPageUnits(com.earthview.world.spatial.carto.EVPageUnits pageUnit)
	{
		int pageUnitParamValue = pageUnit.getValue();
		setPageUnits_EVPageUnits(this.nativeObject.pointer, pageUnitParamValue);
	}
	native private void setPageUnits_EVPageUnits_NoVirtual(long pNativeObject, int pageUnit);
	protected void setPageUnits_NoVirtual(com.earthview.world.spatial.carto.EVPageUnits pageUnit)
	{
		int pageUnitParamValue = pageUnit.getValue();
		setPageUnits_EVPageUnits_NoVirtual(this.nativeObject.pointer, pageUnitParamValue);
	}

	protected  void draw_ISpatialDisplay_callback(long display)
	{
		com.earthview.world.spatial.display.Ispatialdisplay displayParamValue = (display == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(displayParamValue != null)
		{
		displayParamValue.setDelegate(true);
		displayParamValue.setInstancePointer(new InstancePointer(display));
		IClassFactory displayParamValueClassFactory = GlobalClassFactoryMap.get(displayParamValue.getCppInstanceTypeName());
		if (displayParamValueClassFactory != null)
		{
			displayParamValue.setDelegate(true);
			displayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)displayParamValueClassFactory.create();
			displayParamValue.setDelegate(true);
			displayParamValue.setInstancePointer(new InstancePointer(display));
		}
		}
		draw(displayParamValue);
	}

	native private void draw_ISpatialDisplay(long pNativeObject, long display);
	/**
	 * 绘制纸张
	 * @param display 绘制设备
	 * @param earseColor 纸张颜色
	 */
	public void draw(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		draw_ISpatialDisplay(this.nativeObject.pointer, displayParamValue);
	}
	native private void draw_ISpatialDisplay_NoVirtual(long pNativeObject, long display);
	protected void draw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay display)
	{
		long displayParamValue = (display == null ? 0L : display.nativeObject.pointer);
		draw_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, displayParamValue);
	}

	protected  void setCustomPageWidth_ev_real64_callback(double dPageCustomWidth)
	{
		double dPageCustomWidthParamValue = dPageCustomWidth;
		setCustomPageWidth(dPageCustomWidthParamValue);
	}

	native private void setCustomPageWidth_ev_real64(long pNativeObject, double dPageCustomWidth);
	/**
	 * 设置自定义纸张类型宽度（单位：CM）
	 * @param dPageCustomWidth 宽度
	 */
	public void setCustomPageWidth(double dPageCustomWidth)
	{
		double dPageCustomWidthParamValue = dPageCustomWidth;
		setCustomPageWidth_ev_real64(this.nativeObject.pointer, dPageCustomWidthParamValue);
	}
	native private void setCustomPageWidth_ev_real64_NoVirtual(long pNativeObject, double dPageCustomWidth);
	protected void setCustomPageWidth_NoVirtual(double dPageCustomWidth)
	{
		double dPageCustomWidthParamValue = dPageCustomWidth;
		setCustomPageWidth_ev_real64_NoVirtual(this.nativeObject.pointer, dPageCustomWidthParamValue);
	}

	protected  void setCustomPageHeight_ev_real64_callback(double dPageCustomHeight)
	{
		double dPageCustomHeightParamValue = dPageCustomHeight;
		setCustomPageHeight(dPageCustomHeightParamValue);
	}

	native private void setCustomPageHeight_ev_real64(long pNativeObject, double dPageCustomHeight);
	/**
	 * 设置自定义纸张类型宽度（单位：CM）
	 * @param dPageCustomWidth 高度
	 */
	public void setCustomPageHeight(double dPageCustomHeight)
	{
		double dPageCustomHeightParamValue = dPageCustomHeight;
		setCustomPageHeight_ev_real64(this.nativeObject.pointer, dPageCustomHeightParamValue);
	}
	native private void setCustomPageHeight_ev_real64_NoVirtual(long pNativeObject, double dPageCustomHeight);
	protected void setCustomPageHeight_NoVirtual(double dPageCustomHeight)
	{
		double dPageCustomHeightParamValue = dPageCustomHeight;
		setCustomPageHeight_ev_real64_NoVirtual(this.nativeObject.pointer, dPageCustomHeightParamValue);
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.carto.Ipage returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆纸张
	 * @param  
	 * @return 地图纸张
	 */
	public com.earthview.world.spatial.carto.Ipage ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipage __returnValue = new com.earthview.world.spatial.carto.Ipage(CreatedWhenConstruct.CWC_NotToCreate, "IPage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPage");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.Ipage ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipage __returnValue = new com.earthview.world.spatial.carto.Ipage(CreatedWhenConstruct.CWC_NotToCreate, "IPage");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipage)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPage");
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
	 * 将纸张的配置以流的方式导出
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
	 * 将纸张的配置以XML的方式导出
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
	 * 从xml元素中恢复纸张的配置
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
	 * 把纸张的配置保存到xml元素中
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

	protected  void fromStream_CDataStream_callback(long stream)
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
		fromStream(streamParamValue);
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

	public Ipage(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ipage(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getPageType_void(long pNativeObject, String method);
	native protected void register_setPageType_EVPageSize(long pNativeObject, String method);
	native protected void register_getBoderSymbol_void(long pNativeObject, String method);
	native protected void register_setBoderSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getBackgroundColor_void(long pNativeObject, String method);
	native protected void register_setBackgroundColor_IColor(long pNativeObject, String method);
	native protected void register_getShadowColor_void(long pNativeObject, String method);
	native protected void register_setShadowColor_IColor(long pNativeObject, String method);
	native protected void register_getOrientation_void(long pNativeObject, String method);
	native protected void register_setPageSize_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_setOrientation_EVPageOrientation(long pNativeObject, String method);
	native protected void register_queryPageSize_ev_real64_ev_real64_EVPageUnits(long pNativeObject, String method);
	native protected void register_getPageUnits_void(long pNativeObject, String method);
	native protected void register_setPageUnits_EVPageUnits(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay(long pNativeObject, String method);
	native protected void register_setCustomPageWidth_ev_real64(long pNativeObject, String method);
	native protected void register_setCustomPageHeight_ev_real64(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getPageType_void(this.nativeObject.pointer, "getPageType_void_callback");
			this.register_setPageType_EVPageSize(this.nativeObject.pointer, "setPageType_EVPageSize_callback");
			this.register_getBoderSymbol_void(this.nativeObject.pointer, "getBoderSymbol_void_callback");
			this.register_setBoderSymbol_ISymbol(this.nativeObject.pointer, "setBoderSymbol_ISymbol_callback");
			this.register_getBackgroundColor_void(this.nativeObject.pointer, "getBackgroundColor_void_callback");
			this.register_setBackgroundColor_IColor(this.nativeObject.pointer, "setBackgroundColor_IColor_callback");
			this.register_getShadowColor_void(this.nativeObject.pointer, "getShadowColor_void_callback");
			this.register_setShadowColor_IColor(this.nativeObject.pointer, "setShadowColor_IColor_callback");
			this.register_getOrientation_void(this.nativeObject.pointer, "getOrientation_void_callback");
			this.register_setPageSize_ev_real64_ev_real64(this.nativeObject.pointer, "setPageSize_ev_real64_ev_real64_callback");
			this.register_setOrientation_EVPageOrientation(this.nativeObject.pointer, "setOrientation_EVPageOrientation_callback");
			this.register_queryPageSize_ev_real64_ev_real64_EVPageUnits(this.nativeObject.pointer, "queryPageSize_ev_real64_ev_real64_EVPageUnits_callback");
			this.register_getPageUnits_void(this.nativeObject.pointer, "getPageUnits_void_callback");
			this.register_setPageUnits_EVPageUnits(this.nativeObject.pointer, "setPageUnits_EVPageUnits_callback");
			this.register_draw_ISpatialDisplay(this.nativeObject.pointer, "draw_ISpatialDisplay_callback");
			this.register_setCustomPageWidth_ev_real64(this.nativeObject.pointer, "setCustomPageWidth_ev_real64_callback");
			this.register_setCustomPageHeight_ev_real64(this.nativeObject.pointer, "setCustomPageHeight_ev_real64_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Ipage fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ipage obj = null;
 		if(baseObj instanceof Ipage)
		{
			obj = (Ipage)baseObj;
		} else {
			obj = new Ipage(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IPage");
			obj.increaseCast();
		}

		return obj;
	}
}
