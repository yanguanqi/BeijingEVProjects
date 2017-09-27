package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 比例尺类
 */
public class ScaleBar extends com.earthview.world.spatial.carto.Iscalebar {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CScaleBar", new ScaleBarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCScaleBarProxy", new ScaleBarClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ScaleBar() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCScaleBarProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.carto.ScaleBar".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private void setScaleType_EVScaleType(long pNativeObject, int type);
	/**
	 * 设置比例尺类型
	 * @param type 比例尺类型
	 */
	public void setScaleType(com.earthview.world.spatial.carto.EVScaleType type)
	{
		int typeParamValue = type.getValue();
		setScaleType_EVScaleType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setScaleType_EVScaleType_NoVirtual(long pNativeObject, int type);
	protected void setScaleType_NoVirtual(com.earthview.world.spatial.carto.EVScaleType type)
	{
		int typeParamValue = type.getValue();
		setScaleType_EVScaleType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private int getScaleType_void(long pNativeObject);
	/**
	 * 获取比例尺类型
	 * @param  
	 */
	public com.earthview.world.spatial.carto.EVScaleType getScaleType()
	{
		int returnValue = getScaleType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVScaleType.toEnum(returnValue);
	}
	native private int getScaleType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.EVScaleType getScaleType_NoVirtual()
	{
		int returnValue = getScaleType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.EVScaleType.toEnum(returnValue);
	}

	native private void setDataLabelPositon_DataLabelPosition(long pNativeObject, int pos);
	/**
	 * 设置数字标注位置
	 * @param pos 数字标注位置
	 */
	public void setDataLabelPositon(com.earthview.world.spatial.carto.DataLabelPosition pos)
	{
		int posParamValue = pos.getValue();
		setDataLabelPositon_DataLabelPosition(this.nativeObject.pointer, posParamValue);
	}
	native private void setDataLabelPositon_DataLabelPosition_NoVirtual(long pNativeObject, int pos);
	protected void setDataLabelPositon_NoVirtual(com.earthview.world.spatial.carto.DataLabelPosition pos)
	{
		int posParamValue = pos.getValue();
		setDataLabelPositon_DataLabelPosition_NoVirtual(this.nativeObject.pointer, posParamValue);
	}

	native private int getDataLabelPositon_void(long pNativeObject);
	/**
	 * 获取数字标注位置
	 * @param  
	 * @return 数字标注位置
	 */
	public com.earthview.world.spatial.carto.DataLabelPosition getDataLabelPositon()
	{
		int returnValue = getDataLabelPositon_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.DataLabelPosition.toEnum(returnValue);
	}
	native private int getDataLabelPositon_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.carto.DataLabelPosition getDataLabelPositon_NoVirtual()
	{
		int returnValue = getDataLabelPositon_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.carto.DataLabelPosition.toEnum(returnValue);
	}

	native private void setBackgroundColor_IColor(long pNativeObject, long pColor);
	/**
	 * 设置比例尺背景颜色
	 * @param symbol 比例尺背景颜色
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

	native private long getBackgroundColor_void(long pNativeObject);
	/**
	 * 获取比例尺背景颜色
	 * @param  
	 * @return 比例尺背景颜色
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

	native private void setFrameSymbol_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置比例尺边框风格
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

	native private long getFrameSymbol_void(long pNativeObject);
	/**
	 * 获取比例尺边框风格
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

	native private void setIsDrawFrame_ev_bool(long pNativeObject, boolean bDraw);
	/**
	 * 设置是否绘制比例尺边框
	 * @param  bDraw 是否绘制比例尺边框
	 */
	public void setIsDrawFrame(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setIsDrawFrame_ev_bool(this.nativeObject.pointer, bDrawParamValue);
	}
	native private void setIsDrawFrame_ev_bool_NoVirtual(long pNativeObject, boolean bDraw);
	protected void setIsDrawFrame_NoVirtual(boolean bDraw)
	{
		boolean bDrawParamValue = bDraw;
		setIsDrawFrame_ev_bool_NoVirtual(this.nativeObject.pointer, bDrawParamValue);
	}

	native private boolean getIsDrawFrame_void(long pNativeObject);
	/**
	 * 获取是否绘制比例尺边框
	 * @param  
	 * @return 是否绘制比例尺边框
	 */
	public boolean getIsDrawFrame()
	{
		boolean returnValue = getIsDrawFrame_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getIsDrawFrame_void_NoVirtual(long pNativeObject);
	protected boolean getIsDrawFrame_NoVirtual()
	{
		boolean returnValue = getIsDrawFrame_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
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

	native private void setScaleUnit_EVMapUnits(long pNativeObject, int scaleUnit);
	/**
	 * 设置比例尺单位
	 * @param label 比例尺单位
	 */
	public void setScaleUnit(com.earthview.world.spatial.atlas.EVMapUnits scaleUnit)
	{
		int scaleUnitParamValue = scaleUnit.getValue();
		setScaleUnit_EVMapUnits(this.nativeObject.pointer, scaleUnitParamValue);
	}
	native private void setScaleUnit_EVMapUnits_NoVirtual(long pNativeObject, int scaleUnit);
	protected void setScaleUnit_NoVirtual(com.earthview.world.spatial.atlas.EVMapUnits scaleUnit)
	{
		int scaleUnitParamValue = scaleUnit.getValue();
		setScaleUnit_EVMapUnits_NoVirtual(this.nativeObject.pointer, scaleUnitParamValue);
	}

	native private int getScaleUnit_void(long pNativeObject);
	/**
	 * 获取比例尺单位
	 * @param  
	 */
	public com.earthview.world.spatial.atlas.EVMapUnits getScaleUnit()
	{
		int returnValue = getScaleUnit_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}
	native private int getScaleUnit_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVMapUnits getScaleUnit_NoVirtual()
	{
		int returnValue = getScaleUnit_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVMapUnits.toEnum(returnValue);
	}

	native private void setScaleColor_IColor(long pNativeObject, long color);
	/**
	 * 设置比例尺主尺颜色
	 * @param color 
	 */
	public void setScaleColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setScaleColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setScaleColor_IColor_NoVirtual(long pNativeObject, long color);
	protected void setScaleColor_NoVirtual(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setScaleColor_IColor_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	native private long getScaleColor_void(long pNativeObject);
	/**
	 * 获取比例尺主尺颜色
	 * @param  
	 * @return 比例尺主尺颜色
	 */
	public com.earthview.world.spatial.display.Icolor getScaleColor()
	{
		long returnValue = getScaleColor_void(this.nativeObject.pointer);
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
	native private long getScaleColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getScaleColor_NoVirtual()
	{
		long returnValue = getScaleColor_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setDivisions_ev_int32(long pNativeObject, int divisons);
	/**
	 * 设置比例尺主刻度个数
	 * @param divisons 
	 */
	public void setDivisions(int divisons)
	{
		int divisonsParamValue = divisons;
		setDivisions_ev_int32(this.nativeObject.pointer, divisonsParamValue);
	}
	native private void setDivisions_ev_int32_NoVirtual(long pNativeObject, int divisons);
	protected void setDivisions_NoVirtual(int divisons)
	{
		int divisonsParamValue = divisons;
		setDivisions_ev_int32_NoVirtual(this.nativeObject.pointer, divisonsParamValue);
	}

	native private int getDivisions_void(long pNativeObject);
	/**
	 * 获取比例尺主刻度个数
	 * @param  
	 * @return 比例尺主刻度个数
	 */
	public int getDivisions()
	{
		int returnValue = getDivisions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDivisions_void_NoVirtual(long pNativeObject);
	protected int getDivisions_NoVirtual()
	{
		int returnValue = getDivisions_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDivisionLength_ev_real64(long pNativeObject, double dDivLength);
	/**
	 * 		设置比例尺刻度长度
	 * @param dDivLength 比例尺刻度长度
	 */
	public void setDivisionLength(double dDivLength)
	{
		double dDivLengthParamValue = dDivLength;
		setDivisionLength_ev_real64(this.nativeObject.pointer, dDivLengthParamValue);
	}
	native private void setDivisionLength_ev_real64_NoVirtual(long pNativeObject, double dDivLength);
	protected void setDivisionLength_NoVirtual(double dDivLength)
	{
		double dDivLengthParamValue = dDivLength;
		setDivisionLength_ev_real64_NoVirtual(this.nativeObject.pointer, dDivLengthParamValue);
	}

	native private double getDivisionLength_void(long pNativeObject);
	/**
	 * 获取比例尺刻度长度
	 * @param  
	 * @return 比例尺刻度长度
	 */
	public double getDivisionLength()
	{
		double returnValue = getDivisionLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDivisionLength_void_NoVirtual(long pNativeObject);
	protected double getDivisionLength_NoVirtual()
	{
		double returnValue = getDivisionLength_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSubDivisions_ev_int32(long pNativeObject, int subdivisons);
	/**
	 * 设置比例尺分刻度个数
	 * @param subdivisons 
	 */
	public void setSubDivisions(int subdivisons)
	{
		int subdivisonsParamValue = subdivisons;
		setSubDivisions_ev_int32(this.nativeObject.pointer, subdivisonsParamValue);
	}
	native private void setSubDivisions_ev_int32_NoVirtual(long pNativeObject, int subdivisons);
	protected void setSubDivisions_NoVirtual(int subdivisons)
	{
		int subdivisonsParamValue = subdivisons;
		setSubDivisions_ev_int32_NoVirtual(this.nativeObject.pointer, subdivisonsParamValue);
	}

	native private int getSubDivisions_void(long pNativeObject);
	/**
	 * 获取比例尺分刻度个数
	 * @param  
	 * @return 比例尺分刻度个数
	 */
	public int getSubDivisions()
	{
		int returnValue = getSubDivisions_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSubDivisions_void_NoVirtual(long pNativeObject);
	protected int getSubDivisions_NoVirtual()
	{
		int returnValue = getSubDivisions_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setHorizontalGap_ev_real64(long pNativeObject, double horizontalGap);
	/**
	 * 设置比例尺与标注的横向间隔
	 * @param labelGap 
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

	native private double getHorizontalGap_void(long pNativeObject);
	/**
	 * 获取比例尺与标注的横向间隔
	 * @param  
	 * @return 比例尺与标注的横向间隔
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

	native private void setVerticalGap_ev_real64(long pNativeObject, double verticalGap);
	/**
	 * 设置比例尺与标注的纵向间隔
	 * @param verticalGap 比例尺与标注的纵向间隔
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

	native private double getVerticalGap_void(long pNativeObject);
	/**
	 * 获取比例尺与标注的纵向间隔
	 * @param  
	 * @return 比例尺与标注的纵向间隔
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

	native private void setDivisionMarkHeight_ev_real64(long pNativeObject, double divisionMarkHeight);
	/**
	 * 设置比例尺主刻度高度
	 * @param divisionMarkHeight 
	 */
	public void setDivisionMarkHeight(double divisionMarkHeight)
	{
		double divisionMarkHeightParamValue = divisionMarkHeight;
		setDivisionMarkHeight_ev_real64(this.nativeObject.pointer, divisionMarkHeightParamValue);
	}
	native private void setDivisionMarkHeight_ev_real64_NoVirtual(long pNativeObject, double divisionMarkHeight);
	protected void setDivisionMarkHeight_NoVirtual(double divisionMarkHeight)
	{
		double divisionMarkHeightParamValue = divisionMarkHeight;
		setDivisionMarkHeight_ev_real64_NoVirtual(this.nativeObject.pointer, divisionMarkHeightParamValue);
	}

	native private double getDivisionMarkHeight_void(long pNativeObject);
	/**
	 * 获取比例尺主刻度高度
	 * @param  
	 * @return 比例尺主刻度高度
	 */
	public double getDivisionMarkHeight()
	{
		double returnValue = getDivisionMarkHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getDivisionMarkHeight_void_NoVirtual(long pNativeObject);
	protected double getDivisionMarkHeight_NoVirtual()
	{
		double returnValue = getDivisionMarkHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setSubdivisionMarkHeight_ev_real64(long pNativeObject, double subdivisionMarkHeight);
	/**
	 * 设置比例尺分刻度高度
	 * @param subdivisionMarkHeight 
	 */
	public void setSubdivisionMarkHeight(double subdivisionMarkHeight)
	{
		double subdivisionMarkHeightParamValue = subdivisionMarkHeight;
		setSubdivisionMarkHeight_ev_real64(this.nativeObject.pointer, subdivisionMarkHeightParamValue);
	}
	native private void setSubdivisionMarkHeight_ev_real64_NoVirtual(long pNativeObject, double subdivisionMarkHeight);
	protected void setSubdivisionMarkHeight_NoVirtual(double subdivisionMarkHeight)
	{
		double subdivisionMarkHeightParamValue = subdivisionMarkHeight;
		setSubdivisionMarkHeight_ev_real64_NoVirtual(this.nativeObject.pointer, subdivisionMarkHeightParamValue);
	}

	native private double getSubdivisionMarkHeight_void(long pNativeObject);
	/**
	 * 获取比例尺分刻度高度
	 * @param  
	 * @return 比例尺分刻度高度
	 */
	public double getSubdivisionMarkHeight()
	{
		double returnValue = getSubdivisionMarkHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSubdivisionMarkHeight_void_NoVirtual(long pNativeObject);
	protected double getSubdivisionMarkHeight_NoVirtual()
	{
		double returnValue = getSubdivisionMarkHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDivisionMarkSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置比例尺主刻度风格
	 * @param symbol 
	 */
	public void setDivisionMarkSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDivisionMarkSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setDivisionMarkSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setDivisionMarkSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDivisionMarkSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	native private long getDivisionMarkSymbol_void(long pNativeObject);
	/**
	 * 获取比例尺主刻度风格
	 * @param  
	 * @return 比例尺主刻度风格
	 */
	public com.earthview.world.spatial.display.Isymbol getDivisionMarkSymbol()
	{
		long returnValue = getDivisionMarkSymbol_void(this.nativeObject.pointer);
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
	native private long getDivisionMarkSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getDivisionMarkSymbol_NoVirtual()
	{
		long returnValue = getDivisionMarkSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setSubDivisionMarkSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置比例尺分刻度风格
	 * @param symbol 
	 */
	public void setSubDivisionMarkSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSubDivisionMarkSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setSubDivisionMarkSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setSubDivisionMarkSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSubDivisionMarkSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	native private long getSubDivisionMarkSymbol_void(long pNativeObject);
	/**
	 * 获取比例尺分刻度风格
	 * @param  
	 * @return 比例尺分刻度风格
	 */
	public com.earthview.world.spatial.display.Isymbol getSubDivisionMarkSymbol()
	{
		long returnValue = getSubDivisionMarkSymbol_void(this.nativeObject.pointer);
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
	native private long getSubDivisionMarkSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getSubDivisionMarkSymbol_NoVirtual()
	{
		long returnValue = getSubDivisionMarkSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setDataLabelSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置比例尺标注风格
	 * @param symbol 
	 */
	public void setDataLabelSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDataLabelSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setDataLabelSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setDataLabelSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDataLabelSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	native private long getDataLabelSymbol_void(long pNativeObject);
	/**
	 * 获取比例尺数据标注风格
	 * @param  
	 * @return 比例尺数据标注风格
	 */
	public com.earthview.world.spatial.display.Isymbol getDataLabelSymbol()
	{
		long returnValue = getDataLabelSymbol_void(this.nativeObject.pointer);
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
	native private long getDataLabelSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getDataLabelSymbol_NoVirtual()
	{
		long returnValue = getDataLabelSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setUnitLabelSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置比例尺单位标注风格
	 * @param symbol 比例尺单位标注风格
	 */
	public void setUnitLabelSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setUnitLabelSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setUnitLabelSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setUnitLabelSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setUnitLabelSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	native private long getUnitLabelSymbol_void(long pNativeObject);
	/**
	 * 获取比例尺单位标注风格
	 * @param  
	 * @return 比例尺单位标注风格
	 */
	public com.earthview.world.spatial.display.Isymbol getUnitLabelSymbol()
	{
		long returnValue = getUnitLabelSymbol_void(this.nativeObject.pointer);
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
	native private long getUnitLabelSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getUnitLabelSymbol_NoVirtual()
	{
		long returnValue = getUnitLabelSymbol_void_NoVirtual(this.nativeObject.pointer);
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
	 * 获取比例尺边框范围
	 * @param symbol 
	 * @return 比例尺边框范围
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
	 * 设置比例尺边框范围
	 * @param pEnvelope 比例尺边框范围
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
	 * 判断比例尺是否被选择
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
	 * 设置比例尺是否被选择
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

	native private boolean drawPrepare_ISpatialDisplay(long pNativeObject, long pDisplay);
	/**
	 * 绘制比例尺准备
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
	 * 绘制比例尺
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

	public ScaleBar(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ScaleBar(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取元素名称
	 * @param  
	 * @return 元素名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置元素名称
	 * @param name 元素名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
	}
	
	native protected void register_setScaleType_EVScaleType(long pNativeObject, String method);
	native protected void register_getScaleType_void(long pNativeObject, String method);
	native protected void register_setDataLabelPositon_DataLabelPosition(long pNativeObject, String method);
	native protected void register_getDataLabelPositon_void(long pNativeObject, String method);
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
	native protected void register_setIsDrawFrame_ev_bool(long pNativeObject, String method);
	native protected void register_getIsDrawFrame_void(long pNativeObject, String method);
	native protected void register_setMapFrame_IMapFrame(long pNativeObject, String method);
	native protected void register_setScaleUnit_EVMapUnits(long pNativeObject, String method);
	native protected void register_getScaleUnit_void(long pNativeObject, String method);
	native protected void register_setScaleColor_IColor(long pNativeObject, String method);
	native protected void register_getScaleColor_void(long pNativeObject, String method);
	native protected void register_setDivisions_ev_int32(long pNativeObject, String method);
	native protected void register_getDivisions_void(long pNativeObject, String method);
	native protected void register_setDivisionLength_ev_real64(long pNativeObject, String method);
	native protected void register_getDivisionLength_void(long pNativeObject, String method);
	native protected void register_setSubDivisions_ev_int32(long pNativeObject, String method);
	native protected void register_getSubDivisions_void(long pNativeObject, String method);
	native protected void register_setHorizontalGap_ev_real64(long pNativeObject, String method);
	native protected void register_getHorizontalGap_void(long pNativeObject, String method);
	native protected void register_setVerticalGap_ev_real64(long pNativeObject, String method);
	native protected void register_getVerticalGap_void(long pNativeObject, String method);
	native protected void register_setDivisionMarkHeight_ev_real64(long pNativeObject, String method);
	native protected void register_getDivisionMarkHeight_void(long pNativeObject, String method);
	native protected void register_setSubdivisionMarkHeight_ev_real64(long pNativeObject, String method);
	native protected void register_getSubdivisionMarkHeight_void(long pNativeObject, String method);
	native protected void register_setDivisionMarkSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getDivisionMarkSymbol_void(long pNativeObject, String method);
	native protected void register_setSubDivisionMarkSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getSubDivisionMarkSymbol_void(long pNativeObject, String method);
	native protected void register_setDataLabelSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getDataLabelSymbol_void(long pNativeObject, String method);
	native protected void register_setUnitLabelSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_getUnitLabelSymbol_void(long pNativeObject, String method);
	native protected void register_getPreviw_ISpatialDisplay(long pNativeObject, String method);
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
			this.register_setScaleType_EVScaleType(this.nativeObject.pointer, "setScaleType_EVScaleType_callback");
			this.register_getScaleType_void(this.nativeObject.pointer, "getScaleType_void_callback");
			this.register_setDataLabelPositon_DataLabelPosition(this.nativeObject.pointer, "setDataLabelPositon_DataLabelPosition_callback");
			this.register_getDataLabelPositon_void(this.nativeObject.pointer, "getDataLabelPositon_void_callback");
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
			this.register_setIsDrawFrame_ev_bool(this.nativeObject.pointer, "setIsDrawFrame_ev_bool_callback");
			this.register_getIsDrawFrame_void(this.nativeObject.pointer, "getIsDrawFrame_void_callback");
			this.register_setMapFrame_IMapFrame(this.nativeObject.pointer, "setMapFrame_IMapFrame_callback");
			this.register_setScaleUnit_EVMapUnits(this.nativeObject.pointer, "setScaleUnit_EVMapUnits_callback");
			this.register_getScaleUnit_void(this.nativeObject.pointer, "getScaleUnit_void_callback");
			this.register_setScaleColor_IColor(this.nativeObject.pointer, "setScaleColor_IColor_callback");
			this.register_getScaleColor_void(this.nativeObject.pointer, "getScaleColor_void_callback");
			this.register_setDivisions_ev_int32(this.nativeObject.pointer, "setDivisions_ev_int32_callback");
			this.register_getDivisions_void(this.nativeObject.pointer, "getDivisions_void_callback");
			this.register_setDivisionLength_ev_real64(this.nativeObject.pointer, "setDivisionLength_ev_real64_callback");
			this.register_getDivisionLength_void(this.nativeObject.pointer, "getDivisionLength_void_callback");
			this.register_setSubDivisions_ev_int32(this.nativeObject.pointer, "setSubDivisions_ev_int32_callback");
			this.register_getSubDivisions_void(this.nativeObject.pointer, "getSubDivisions_void_callback");
			this.register_setHorizontalGap_ev_real64(this.nativeObject.pointer, "setHorizontalGap_ev_real64_callback");
			this.register_getHorizontalGap_void(this.nativeObject.pointer, "getHorizontalGap_void_callback");
			this.register_setVerticalGap_ev_real64(this.nativeObject.pointer, "setVerticalGap_ev_real64_callback");
			this.register_getVerticalGap_void(this.nativeObject.pointer, "getVerticalGap_void_callback");
			this.register_setDivisionMarkHeight_ev_real64(this.nativeObject.pointer, "setDivisionMarkHeight_ev_real64_callback");
			this.register_getDivisionMarkHeight_void(this.nativeObject.pointer, "getDivisionMarkHeight_void_callback");
			this.register_setSubdivisionMarkHeight_ev_real64(this.nativeObject.pointer, "setSubdivisionMarkHeight_ev_real64_callback");
			this.register_getSubdivisionMarkHeight_void(this.nativeObject.pointer, "getSubdivisionMarkHeight_void_callback");
			this.register_setDivisionMarkSymbol_ISymbol(this.nativeObject.pointer, "setDivisionMarkSymbol_ISymbol_callback");
			this.register_getDivisionMarkSymbol_void(this.nativeObject.pointer, "getDivisionMarkSymbol_void_callback");
			this.register_setSubDivisionMarkSymbol_ISymbol(this.nativeObject.pointer, "setSubDivisionMarkSymbol_ISymbol_callback");
			this.register_getSubDivisionMarkSymbol_void(this.nativeObject.pointer, "getSubDivisionMarkSymbol_void_callback");
			this.register_setDataLabelSymbol_ISymbol(this.nativeObject.pointer, "setDataLabelSymbol_ISymbol_callback");
			this.register_getDataLabelSymbol_void(this.nativeObject.pointer, "getDataLabelSymbol_void_callback");
			this.register_setUnitLabelSymbol_ISymbol(this.nativeObject.pointer, "setUnitLabelSymbol_ISymbol_callback");
			this.register_getUnitLabelSymbol_void(this.nativeObject.pointer, "getUnitLabelSymbol_void_callback");
			this.register_getPreviw_ISpatialDisplay(this.nativeObject.pointer, "getPreviw_ISpatialDisplay_callback");
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
	
	public static ScaleBar fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ScaleBar obj = null;
 		if(baseObj instanceof ScaleBar)
		{
			obj = (ScaleBar)baseObj;
		} else {
			obj = new ScaleBar(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CScaleBar");
			obj.increaseCast();
		}

		return obj;
	}
}
