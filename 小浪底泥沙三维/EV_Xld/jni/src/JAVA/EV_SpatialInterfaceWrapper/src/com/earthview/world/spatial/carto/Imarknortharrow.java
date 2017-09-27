package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 库指北针
public class Imarknortharrow extends com.earthview.world.spatial.carto.Imapsurround {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::IMarkNorthArrow", new ImarknortharrowClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JIMarkNorthArrowProxy", new ImarknortharrowClassFactory());
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

	protected  void setType_EVNorthArrowType_callback(int type)
	{
		com.earthview.world.spatial.carto.EVNorthArrowType typeParamValue = com.earthview.world.spatial.carto.EVNorthArrowType.toEnum(type);
		setType(typeParamValue);
	}

	native private void setType_EVNorthArrowType(long pNativeObject, int type);
	/**
	 * 设置指北针类型
	 * @param type 指北针类型
	 */
	public void setType(com.earthview.world.spatial.carto.EVNorthArrowType type)
	{
		int typeParamValue = type.getValue();
		setType_EVNorthArrowType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setType_EVNorthArrowType_NoVirtual(long pNativeObject, int type);
	protected void setType_NoVirtual(com.earthview.world.spatial.carto.EVNorthArrowType type)
	{
		int typeParamValue = type.getValue();
		setType_EVNorthArrowType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.carto.EVNorthArrowType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取指北针类型
	 * @param  
	 * @return 指北针类型
	 */
	public com.earthview.world.spatial.carto.EVNorthArrowType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVNorthArrowType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVNorthArrowType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVNorthArrowType.toEnum(returnValue);
	}

	protected  void setMarkerSymbol_ISymbol_callback(long symbol)
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
		setMarkerSymbol(symbolParamValue);
	}

	native private void setMarkerSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置指北针风格
	 * @param symbol 指北针风格
	 */
	public void setMarkerSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setMarkerSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setMarkerSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setMarkerSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setMarkerSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	protected  long getMarkerSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getMarkerSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getMarkerSymbol_void(long pNativeObject);
	/**
	 * 获取指北针风格
	 * @param  
	 * @return 指北针风格
	 */
	public com.earthview.world.spatial.display.Isymbol getMarkerSymbol()
	{
		long returnValue = getMarkerSymbol_void(this.nativeObject.pointer);
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
	native private long getMarkerSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getMarkerSymbol_NoVirtual()
	{
		long returnValue = getMarkerSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private long getEnvelope_void(long pNativeObject);
	/**
	 * 获取指北针边框范围
	 * @param symbol 
	 * @return 指北针边框范围
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
	 * 设置指北针边框范围
	 * @param pEnvelope 指北针边框范围
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

	protected  double getMapAngle_void_callback()
	{
		double returnValue = getMapAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMapAngle_void(long pNativeObject);
	/**
	 * 获取地图当前角度
	 * @param  
	 * @return symbol
	 */
	public double getMapAngle()
	{
		double returnValue = getMapAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMapAngle_void_NoVirtual(long pNativeObject);
	protected double getMapAngle_NoVirtual()
	{
		double returnValue = getMapAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  double getCorrectionAngle_void_callback()
	{
		double returnValue = getCorrectionAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getCorrectionAngle_void(long pNativeObject);
	/**
	 * 获取指北针校正角度
	 * @param  
	 * @return 校正角度
	 */
	public double getCorrectionAngle()
	{
		double returnValue = getCorrectionAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getCorrectionAngle_void_NoVirtual(long pNativeObject);
	protected double getCorrectionAngle_NoVirtual()
	{
		double returnValue = getCorrectionAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCorrectionAngle_ev_real64_callback(double dAngle)
	{
		double dAngleParamValue = dAngle;
		setCorrectionAngle(dAngleParamValue);
	}

	native private void setCorrectionAngle_ev_real64(long pNativeObject, double dAngle);
	/**
	 * 设置指北针校正角度
	 * @param dAngle 校正角度
	 */
	public void setCorrectionAngle(double dAngle)
	{
		double dAngleParamValue = dAngle;
		setCorrectionAngle_ev_real64(this.nativeObject.pointer, dAngleParamValue);
	}
	native private void setCorrectionAngle_ev_real64_NoVirtual(long pNativeObject, double dAngle);
	protected void setCorrectionAngle_NoVirtual(double dAngle)
	{
		double dAngleParamValue = dAngle;
		setCorrectionAngle_ev_real64_NoVirtual(this.nativeObject.pointer, dAngleParamValue);
	}

	protected  void setMapFrame_IMapFrame_callback(long pMapFrame)
	{
		com.earthview.world.spatial.carto.Imapframe pMapFrameParamValue = (pMapFrame == 0L ? null : new com.earthview.world.spatial.carto.Imapframe(CreatedWhenConstruct.CWC_NotToCreate));
		if(pMapFrameParamValue != null)
		{
		pMapFrameParamValue.setDelegate(true);
		pMapFrameParamValue.setInstancePointer(new InstancePointer(pMapFrame));
		IClassFactory pMapFrameParamValueClassFactory = GlobalClassFactoryMap.get(pMapFrameParamValue.getCppInstanceTypeName());
		if (pMapFrameParamValueClassFactory != null)
		{
			pMapFrameParamValue.setDelegate(true);
			pMapFrameParamValue = (com.earthview.world.spatial.carto.Imapframe)pMapFrameParamValueClassFactory.create();
			pMapFrameParamValue.setDelegate(true);
			pMapFrameParamValue.setInstancePointer(new InstancePointer(pMapFrame));
		}
		}
		setMapFrame(pMapFrameParamValue);
	}

	native private void setMapFrame_IMapFrame(long pNativeObject, long pMapFrame);
	/**
	 * 设置比例尺对应的数据框
	 * @param pMapFrame 比例尺对应的数据框
	 */
	public void setMapFrame(com.earthview.world.spatial.carto.Imapframe pMapFrame)
	{
		long pMapFrameParamValue = (pMapFrame == null ? 0L : pMapFrame.nativeObject.pointer);
		setMapFrame_IMapFrame(this.nativeObject.pointer, pMapFrameParamValue);
	}
	native private void setMapFrame_IMapFrame_NoVirtual(long pNativeObject, long pMapFrame);
	protected void setMapFrame_NoVirtual(com.earthview.world.spatial.carto.Imapframe pMapFrame)
	{
		long pMapFrameParamValue = (pMapFrame == null ? 0L : pMapFrame.nativeObject.pointer);
		setMapFrame_IMapFrame_NoVirtual(this.nativeObject.pointer, pMapFrameParamValue);
	}

	protected  void setSize_ev_real64_callback(double size)
	{
		double sizeParamValue = size;
		setSize(sizeParamValue);
	}

	native private void setSize_ev_real64(long pNativeObject, double size);
	/**
	 * 设置指北针的大小
	 * @param size 大小
	 */
	public void setSize(double size)
	{
		double sizeParamValue = size;
		setSize_ev_real64(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setSize_ev_real64_NoVirtual(long pNativeObject, double size);
	protected void setSize_NoVirtual(double size)
	{
		double sizeParamValue = size;
		setSize_ev_real64_NoVirtual(this.nativeObject.pointer, sizeParamValue);
	}

	protected  double getSize_void_callback()
	{
		double returnValue = getSize();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getSize_void(long pNativeObject);
	/**
	 * 获取指北针的大小
	 * @param  
	 * @return 返回大小
	 */
	public double getSize()
	{
		double returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSize_void_NoVirtual(long pNativeObject);
	protected double getSize_NoVirtual()
	{
		double returnValue = getSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setColor_IColor_callback(long pColor)
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
		setColor(pColorParamValue);
	}

	native private void setColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置指北针颜色
	 * @param pColor 指北针颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setColor_IColor(this.nativeObject.pointer, pColorParamValue);
	}
	native private void setColor_IColor_NoVirtual(long pNativeObject, long pColor);
	protected void setColor_NoVirtual(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		setColor_IColor_NoVirtual(this.nativeObject.pointer, pColorParamValue);
	}

	protected  long getColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColor_void(long pNativeObject);
	/**
	 * 获取指北针颜色
	 * @param  
	 * @return 指北针颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		long returnValue = getColor_void(this.nativeObject.pointer);
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
	native private long getColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getColor_NoVirtual()
	{
		long returnValue = getColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getPreviw_ISpatialDisplay_callback(long pPageDisplay)
	{
		com.earthview.world.spatial.display.Ispatialdisplay pPageDisplayParamValue = (pPageDisplay == 0L ? null : new com.earthview.world.spatial.display.Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate));
		if(pPageDisplayParamValue != null)
		{
		pPageDisplayParamValue.setDelegate(true);
		pPageDisplayParamValue.setInstancePointer(new InstancePointer(pPageDisplay));
		IClassFactory pPageDisplayParamValueClassFactory = GlobalClassFactoryMap.get(pPageDisplayParamValue.getCppInstanceTypeName());
		if (pPageDisplayParamValueClassFactory != null)
		{
			pPageDisplayParamValue.setDelegate(true);
			pPageDisplayParamValue = (com.earthview.world.spatial.display.Ispatialdisplay)pPageDisplayParamValueClassFactory.create();
			pPageDisplayParamValue.setDelegate(true);
			pPageDisplayParamValue.setInstancePointer(new InstancePointer(pPageDisplay));
		}
		}
		com.earthview.world.display.Ibitmap returnValue = getPreviw(pPageDisplayParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getPreviw_ISpatialDisplay(long pNativeObject, long pPageDisplay);
	/**
	 * 获取预览图标
	 * @param pPageDisplay 绘制图标设备
	 * @return 预览图标
	 */
	public com.earthview.world.display.Ibitmap getPreviw(com.earthview.world.spatial.display.Ispatialdisplay pPageDisplay)
	{
		long pPageDisplayParamValue = (pPageDisplay == null ? 0L : pPageDisplay.nativeObject.pointer);
		long returnValue = getPreviw_ISpatialDisplay(this.nativeObject.pointer, pPageDisplayParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getPreviw_ISpatialDisplay_NoVirtual(long pNativeObject, long pPageDisplay);
	protected com.earthview.world.display.Ibitmap getPreviw_NoVirtual(com.earthview.world.spatial.display.Ispatialdisplay pPageDisplay)
	{
		long pPageDisplayParamValue = (pPageDisplay == null ? 0L : pPageDisplay.nativeObject.pointer);
		long returnValue = getPreviw_ISpatialDisplay_NoVirtual(this.nativeObject.pointer, pPageDisplayParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
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

	native private boolean isSelected_void(long pNativeObject);
	/**
	 * 判断指北针是否被选择
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

	native private void setSelected_ev_bool(long pNativeObject, boolean b);
	/**
	 * 设置指北针是否被选择
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆元素
	 * @param  
	 * @return 地图元素
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
	 * 把指北针的配置导出成xml
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

	public Imarknortharrow(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Imarknortharrow(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 鑾峰彇鍏冪礌鍚嶇О
	 * @param  
	 * @return 鍏冪礌鍚嶇О
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 璁剧疆鍏冪礌鍚嶇О
	 * @param name 鍏冪礌鍚嶇О
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	
	native protected void register_setType_EVNorthArrowType(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_setMarkerSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getMarkerSymbol_void(long pNativeObject, String method);
	native protected void register_getMapAngle_void(long pNativeObject, String method);
	native protected void register_getCorrectionAngle_void(long pNativeObject, String method);
	native protected void register_setCorrectionAngle_ev_real64(long pNativeObject, String method);
	native protected void register_setMapFrame_IMapFrame(long pNativeObject, String method);
	native protected void register_setSize_ev_real64(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_getPreviw_ISpatialDisplay(long pNativeObject, String method);
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
			this.register_setType_EVNorthArrowType(this.nativeObject.pointer, "setType_EVNorthArrowType_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_setMarkerSymbol_ISymbol(this.nativeObject.pointer, "setMarkerSymbol_ISymbol_callback");
			this.register_getMarkerSymbol_void(this.nativeObject.pointer, "getMarkerSymbol_void_callback");
			this.register_getMapAngle_void(this.nativeObject.pointer, "getMapAngle_void_callback");
			this.register_getCorrectionAngle_void(this.nativeObject.pointer, "getCorrectionAngle_void_callback");
			this.register_setCorrectionAngle_ev_real64(this.nativeObject.pointer, "setCorrectionAngle_ev_real64_callback");
			this.register_setMapFrame_IMapFrame(this.nativeObject.pointer, "setMapFrame_IMapFrame_callback");
			this.register_setSize_ev_real64(this.nativeObject.pointer, "setSize_ev_real64_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_getPreviw_ISpatialDisplay(this.nativeObject.pointer, "getPreviw_ISpatialDisplay_callback");
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
	
	public static Imarknortharrow fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Imarknortharrow obj = null;
 		if(baseObj instanceof Imarknortharrow)
		{
			obj = (Imarknortharrow)baseObj;
		} else {
			obj = new Imarknortharrow(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IMarkNorthArrow");
			obj.increaseCast();
		}

		return obj;
	}
}
