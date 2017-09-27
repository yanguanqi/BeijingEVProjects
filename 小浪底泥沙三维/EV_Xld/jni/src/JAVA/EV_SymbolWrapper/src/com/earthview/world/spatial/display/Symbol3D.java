package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维符号的基类(抽象类，不允许实例化该类)
 */
public class Symbol3D extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSymbol3D", new Symbol3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSymbol3DProxy", new Symbol3DClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Symbol3D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSymbol3DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.Symbol3D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private float getHightenValue_void(long pNativeObject);
	/**
	 * 获取拉升的高度
	 * @param  
	 * @return 当顶点Z值无效(等于0)时使用
	 */
	public float getHightenValue()
	{
		float returnValue = getHightenValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHightenValue_ev_real32(long pNativeObject, float h);
	/**
	 * 设置拉升的高度
	 * @param h 高度值,当顶点Z值无效(等于0)时使用
	 */
	public void setHightenValue(float h)
	{
		float hParamValue = h;
		setHightenValue_ev_real32(this.nativeObject.pointer, hParamValue);
	}
	native private long getHightenField_void(long pNativeObject);
	/**
	 * 获取拉升的高度
	 * @param  
	 * @return 当顶点Z值无效(等于0)时使用
	 */
	public StringPointer getHightenField()
	{
		long returnValue = getHightenField_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setHightenField_EVString(long pNativeObject, String hf);
	/**
	 * 设置拉升的高度
	 * @param h 高度值,当顶点Z值无效(等于0)时使用
	 */
	public void setHightenField(String hf)
	{
		String hfParamValue = hf;
		setHightenField_EVString(this.nativeObject.pointer, hfParamValue);
	}
	native private int getAltitudeMode_void(long pNativeObject);
	/**
	 * 获取高度模式
	 * @param  
	 */
	public com.earthview.world.spatial.utility.EVAltitudeMode getAltitudeMode()
	{
		int returnValue = getAltitudeMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(returnValue);
	}
	native private void setAltitudeMode_EVAltitudeMode(long pNativeObject, int m);
	/**
	 * 设置高度模式
	 * @param m 高度模式
	 */
	public void setAltitudeMode(com.earthview.world.spatial.utility.EVAltitudeMode m)
	{
		int mParamValue = m.getValue();
		setAltitudeMode_EVAltitudeMode(this.nativeObject.pointer, mParamValue);
	}
	native private int getSymbolType_void(long pNativeObject);
	/**
	 * 获取符号类型
	 * @param  
	 */
	public int getSymbolType()
	{
		int returnValue = getSymbolType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSymbolType_void_NoVirtual(long pNativeObject);
	protected int getSymbolType_NoVirtual()
	{
		int returnValue = getSymbolType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成流
	 * @param  
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 自我复制
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
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
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
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

	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否属性相同
	 * @param pSymbol Symbol对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean equal_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	protected  boolean similar_ISymbol_callback(long pSymbol)
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
		boolean returnValue = similar(pSymbolParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean similar_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否相似如果相似，则可以同一批次创建三维渲染对象
	 * @param pSymbol Symbol对象
	 */
	public boolean similar(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = similar_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean similar_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean similar_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = similar_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private boolean hasImage_void(long pNativeObject);
	/**
	 * 是否含有图片
	 * @param  
	 */
	public boolean hasImage()
	{
		boolean returnValue = hasImage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasImage_void_NoVirtual(long pNativeObject);
	protected boolean hasImage_NoVirtual()
	{
		boolean returnValue = hasImage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getImageCount_void(long pNativeObject);
	/**
	 * 获取图片的个数
	 * @param  
	 * @return 图片个数
	 */
	public long getImageCount()
	{
		long returnValue = getImageCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getImageCount_void_NoVirtual(long pNativeObject);
	protected long getImageCount_NoVirtual()
	{
		long returnValue = getImageCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getImageID_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片的ID
	 * @param index 图片序列号
	 * @return 图片ID
	 */
	public String getImageID(long index)
	{
		long indexParamValue = index;
		String returnValue = getImageID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getImageID_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getImageID_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getImageID_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getImage_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片的数据
	 * @param index 图片序列号
	 * @return 图片数据流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		long indexParamValue = index;
		long returnValue = getImage_ev_uint32(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long getImage_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.core.MemoryDataStreamPtr getImage_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getImage_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}

	native private void setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, long index, String imageID, long stream);
	/**
	 * 设置指定图片的数据
	 * @param index 图片序列号
	 * @param imageID 图片ID
	 * @return 图片数据流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long indexParamValue = index;
		String imageIDParamValue = imageID;
		long streamParamValue = stream.nativeObject.pointer;
		setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, indexParamValue, imageIDParamValue, streamParamValue);
	}
	native private void setImage_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long index, String imageID, long stream);
	protected void setImage_NoVirtual(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long indexParamValue = index;
		String imageIDParamValue = imageID;
		long streamParamValue = stream.nativeObject.pointer;
		setImage_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, indexParamValue, imageIDParamValue, streamParamValue);
	}

	native private long getPropertyName_void(long pNativeObject);
	/**
	 * 获取显示注记的字段名
	 * @param  
	 */
	public StringPointer getPropertyName()
	{
		long returnValue = getPropertyName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPropertyName_EVString(long pNativeObject, String fieldName);
	/**
	 * 设置显示注记的字段名
	 * @param  
	 */
	public void setPropertyName(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		setPropertyName_EVString(this.nativeObject.pointer, fieldNameParamValue);
	}
	native private long getFontName_void(long pNativeObject);
	/**
	 * 获取显示注记的字体名
	 * @param  
	 */
	public StringPointer getFontName()
	{
		long returnValue = getFontName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setFontName_EVString(long pNativeObject, String fontName);
	/**
	 * 设置显示注记的字体名
	 * @param  
	 */
	public void setFontName(String fontName)
	{
		String fontNameParamValue = fontName;
		setFontName_EVString(this.nativeObject.pointer, fontNameParamValue);
	}
	native private float getFontSize_void(long pNativeObject);
	/**
	 * 获取显示注记的字体大小
	 * @param  
	 */
	public float getFontSize()
	{
		float returnValue = getFontSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFontSize_ev_real32(long pNativeObject, float fontSize);
	/**
	 * 设置显示注记的字体大小
	 * @param  
	 */
	public void setFontSize(float fontSize)
	{
		float fontSizeParamValue = fontSize;
		setFontSize_ev_real32(this.nativeObject.pointer, fontSizeParamValue);
	}
	protected  long getFontColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getFontColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFontColor_void(long pNativeObject);
	/**
	 * 获取风格颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getFontColor()
	{
		long returnValue = getFontColor_void(this.nativeObject.pointer);
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
	native private long getFontColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getFontColor_NoVirtual()
	{
		long returnValue = getFontColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  long getFontOutlineColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getFontOutlineColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFontOutlineColor_void(long pNativeObject);
	/**
	 * 获取字体边框颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getFontOutlineColor()
	{
		long returnValue = getFontOutlineColor_void(this.nativeObject.pointer);
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
	native private long getFontOutlineColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getFontOutlineColor_NoVirtual()
	{
		long returnValue = getFontOutlineColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setFontOutlineColor_IColor_callback(long color)
	{
		com.earthview.world.spatial.display.Icolor colorParamValue = (color == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(colorParamValue != null)
		{
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.spatial.display.Icolor)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		}
		setFontOutlineColor(colorParamValue);
	}

	native private void setFontOutlineColor_IColor(long pNativeObject, long color);
	/**
	 * 设置字体边框颜色
	 * @param color 字体边框颜色
	 */
	public void setFontOutlineColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setFontOutlineColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setFontOutlineColor_IColor_NoVirtual(long pNativeObject, long color);
	protected void setFontOutlineColor_NoVirtual(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setFontOutlineColor_IColor_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  void setFontColor_IColor_callback(long color)
	{
		com.earthview.world.spatial.display.Icolor colorParamValue = (color == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(colorParamValue != null)
		{
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.spatial.display.Icolor)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		}
		setFontColor(colorParamValue);
	}

	native private void setFontColor_IColor(long pNativeObject, long color);
	/**
	 * 设置风格颜色
	 * @param color 风格颜色
	 */
	public void setFontColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setFontColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setFontColor_IColor_NoVirtual(long pNativeObject, long color);
	protected void setFontColor_NoVirtual(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setFontColor_IColor_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	native private boolean getTextRightToLeft_void(long pNativeObject);
	/**
	 * 获取显示注记是否从右向左
	 * @param  
	 */
	public boolean getTextRightToLeft()
	{
		boolean returnValue = getTextRightToLeft_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextRightToLeft_ev_bool(long pNativeObject, boolean r2l);
	/**
	 * 设置显示注记是否从右向左
	 * @param  
	 */
	public void setTextRightToLeft(boolean r2l)
	{
		boolean r2lParamValue = r2l;
		setTextRightToLeft_ev_bool(this.nativeObject.pointer, r2lParamValue);
	}
	native private float getTextOffsetX_void(long pNativeObject);
	/**
	 * 获取显示注记的X方向偏移量
	 * @param  
	 */
	public float getTextOffsetX()
	{
		float returnValue = getTextOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextOffsetX_ev_real32(long pNativeObject, float x);
	/**
	 * 设置显示注记的X方向偏移量
	 * @param  
	 */
	public void setTextOffsetX(float x)
	{
		float xParamValue = x;
		setTextOffsetX_ev_real32(this.nativeObject.pointer, xParamValue);
	}
	native private float getTextOffsetY_void(long pNativeObject);
	/**
	 * 获取显示注记的Y方向偏移量
	 * @param  
	 */
	public float getTextOffsetY()
	{
		float returnValue = getTextOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextOffsetY_ev_real32(long pNativeObject, float y);
	/**
	 * 设置显示注记的Y方向偏移量
	 * @param  
	 */
	public void setTextOffsetY(float y)
	{
		float yParamValue = y;
		setTextOffsetY_ev_real32(this.nativeObject.pointer, yParamValue);
	}
	native private float getTextAngle_void(long pNativeObject);
	/**
	 * 获取显示注记的旋转角度
	 * @param  
	 */
	public float getTextAngle()
	{
		float returnValue = getTextAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTextAngle_ev_real32(long pNativeObject, float angle);
	/**
	 * 设置显示注记的旋转角度
	 * @param  
	 */
	public void setTextAngle(float angle)
	{
		float angleParamValue = angle;
		setTextAngle_ev_real32(this.nativeObject.pointer, angleParamValue);
	}
	native private int getTextHAlignment_void(long pNativeObject);
	/**
	 * 获取显示注记的水平对齐方式
	 * @param  
	 */
	public com.earthview.world.core.EVTextHorizontalAlignment getTextHAlignment()
	{
		int returnValue = getTextHAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.core.EVTextHorizontalAlignment.toEnum(returnValue);
	}
	native private void setTextHAlignment_EVTextHorizontalAlignment(long pNativeObject, int alignment);
	/**
	 * 设置显示注记的水平对齐方式
	 * @param  
	 */
	public void setTextHAlignment(com.earthview.world.core.EVTextHorizontalAlignment alignment)
	{
		int alignmentParamValue = alignment.getValue();
		setTextHAlignment_EVTextHorizontalAlignment(this.nativeObject.pointer, alignmentParamValue);
	}
	native private int getTextVAlignment_void(long pNativeObject);
	/**
	 * 获取显示注记的竖直对齐方式
	 * @param  
	 */
	public com.earthview.world.core.EVTextVerticalAlignment getTextVAlignment()
	{
		int returnValue = getTextVAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.core.EVTextVerticalAlignment.toEnum(returnValue);
	}
	native private void setTextVAlignment_EVTextVerticalAlignment(long pNativeObject, int alignment);
	/**
	 * 设置显示注记的竖直对齐方式
	 * @param  
	 */
	public void setTextVAlignment(com.earthview.world.core.EVTextVerticalAlignment alignment)
	{
		int alignmentParamValue = alignment.getValue();
		setTextVAlignment_EVTextVerticalAlignment(this.nativeObject.pointer, alignmentParamValue);
	}
	native private void setBoldEnabled_ev_bool(long pNativeObject, boolean isBold);
	/**
	 * 加粗
	 * @param isBold 是否启用加粗
	 */
	public void setBoldEnabled(boolean isBold)
	{
		boolean isBoldParamValue = isBold;
		setBoldEnabled_ev_bool(this.nativeObject.pointer, isBoldParamValue);
	}
	native private void setItalicEnabled_ev_bool(long pNativeObject, boolean isItalic);
	/**
	 * 倾斜
	 * @param isItalic 是否启用倾斜
	 */
	public void setItalicEnabled(boolean isItalic)
	{
		boolean isItalicParamValue = isItalic;
		setItalicEnabled_ev_bool(this.nativeObject.pointer, isItalicParamValue);
	}
	native private boolean getBoldEnabled_void(long pNativeObject);
	/**
	 * 获取是否加粗
	 * @param  
	 */
	public boolean getBoldEnabled()
	{
		boolean returnValue = getBoldEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getItalicEnabled_void(long pNativeObject);
	/**
	 * 获取是否倾斜
	 * @param  
	 */
	public boolean getItalicEnabled()
	{
		boolean returnValue = getItalicEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAntiAliasEnabled_ev_bool(long pNativeObject, boolean isAntiAlias);
	/**
	 * 反走样
	 * @param isBold 是否启用反走样
	 */
	public void setAntiAliasEnabled(boolean isAntiAlias)
	{
		boolean isAntiAliasParamValue = isAntiAlias;
		setAntiAliasEnabled_ev_bool(this.nativeObject.pointer, isAntiAliasParamValue);
	}
	native private boolean getAntiAliasEnabled_void(long pNativeObject);
	/**
	 * 获取是否反走样
	 * @param  
	 */
	public boolean getAntiAliasEnabled()
	{
		boolean returnValue = getAntiAliasEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getShowText_void(long pNativeObject);
	/**
	 * 询问是否显示显示注记
	 * @param  
	 */
	public boolean getShowText()
	{
		boolean returnValue = getShowText_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShowText_ev_bool(long pNativeObject, boolean bShow);
	/**
	 * 设置是否显示显示注记
	 * @param  
	 */
	public void setShowText(boolean bShow)
	{
		boolean bShowParamValue = bShow;
		setShowText_ev_bool(this.nativeObject.pointer, bShowParamValue);
	}
	native private void setTextShadowEnabled_ev_bool(long pNativeObject, boolean hasShadow);
	/**
	 * 设置注记是否开启阴影
	 * @param hasShadow 是否启用阴影
	 */
	public void setTextShadowEnabled(boolean hasShadow)
	{
		boolean hasShadowParamValue = hasShadow;
		setTextShadowEnabled_ev_bool(this.nativeObject.pointer, hasShadowParamValue);
	}
	native private boolean getTextShadowEnabled_void(long pNativeObject);
	/**
	 * 获取注记阴影是否开启
	 * @return 阴影是否开启
	 */
	public boolean getTextShadowEnabled()
	{
		boolean returnValue = getTextShadowEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将Symbol属性写入XML元素
	 * @param xml XML字符串
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Symbol属性
	 * @param xml XML字符串
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
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

	public Symbol3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Symbol3D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取符号大小
	 * @param  
	 * @return 返回符号大小
	 */
	public double getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef()
	{
		return super.getColorRef_NoVirtual();
	}
	/**
	 * 将符号输出到SLD字符串
	 * @param  
	 * @return 返回SLD字符串
	 */
	public String toSLD()
	{
		return super.toSLD_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		return super.getColor_NoVirtual();
	}
	/**
	 * 设置符号颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setColor_NoVirtual(color);
	}
	/**
	 * 获取符号名称
	 * @param  
	 * @return 返回符号名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置符号名称
	 * @param szName 符号名称
	 */
	public void setName(String szName)
	{
		super.setName_NoVirtual(szName);
	}
	/**
	 * 从SLD读取符号
	 * @param sld SLD
	 */
	public void fromSLD(StringPointer sld)
	{
		super.fromSLD_NoVirtual(sld);
	}
	
	native protected void register_similar_ISymbol(long pNativeObject, String method);
	native protected void register_getFontColor_void(long pNativeObject, String method);
	native protected void register_getFontOutlineColor_void(long pNativeObject, String method);
	native protected void register_setFontOutlineColor_IColor(long pNativeObject, String method);
	native protected void register_setFontColor_IColor(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getColorRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toSLD_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getSymbolType_void(long pNativeObject, String method);
	native protected void register_hasImage_void(long pNativeObject, String method);
	native protected void register_getImageCount_void(long pNativeObject, String method);
	native protected void register_getImageID_ev_uint32(long pNativeObject, String method);
	native protected void register_getImage_ev_uint32(long pNativeObject, String method);
	native protected void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_equal_ISymbol(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromSLD_EVString(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_similar_ISymbol(this.nativeObject.pointer, "similar_ISymbol_callback");
			this.register_getFontColor_void(this.nativeObject.pointer, "getFontColor_void_callback");
			this.register_getFontOutlineColor_void(this.nativeObject.pointer, "getFontOutlineColor_void_callback");
			this.register_setFontOutlineColor_IColor(this.nativeObject.pointer, "setFontOutlineColor_IColor_callback");
			this.register_setFontColor_IColor(this.nativeObject.pointer, "setFontColor_IColor_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getColorRef_void(this.nativeObject.pointer, "getColorRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toSLD_void(this.nativeObject.pointer, "toSLD_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getSymbolType_void(this.nativeObject.pointer, "getSymbolType_void_callback");
			this.register_hasImage_void(this.nativeObject.pointer, "hasImage_void_callback");
			this.register_getImageCount_void(this.nativeObject.pointer, "getImageCount_void_callback");
			this.register_getImageID_ev_uint32(this.nativeObject.pointer, "getImageID_ev_uint32_callback");
			this.register_getImage_ev_uint32(this.nativeObject.pointer, "getImage_ev_uint32_callback");
			this.register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
			this.register_equal_ISymbol(this.nativeObject.pointer, "equal_ISymbol_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromSLD_EVString(this.nativeObject.pointer, "fromSLD_EVString_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Symbol3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Symbol3D obj = null;
 		if(baseObj instanceof Symbol3D)
		{
			obj = (Symbol3D)baseObj;
		} else {
			obj = new Symbol3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbol3D");
			obj.increaseCast();
		}

		return obj;
	}
}
