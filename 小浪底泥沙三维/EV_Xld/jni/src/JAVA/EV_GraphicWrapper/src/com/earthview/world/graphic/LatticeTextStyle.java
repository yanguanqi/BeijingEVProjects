package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatticeTextStyle extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeTextStyle", new LatticeTextStyleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCLatticeTextStyleProxy", new LatticeTextStyleClassFactory());
	}

	public enum EShadeMode implements INativeEnum<EShadeMode> {
		HIGHLIGHT(EShadeModeHelper.ENUM_VALUES[0]),
		OUTLINE(EShadeModeHelper.ENUM_VALUES[1]),
		SHADOW(EShadeModeHelper.ENUM_VALUES[2]),
		NORMAL(EShadeModeHelper.ENUM_VALUES[3]);
		private int value;
		EShadeMode(int i) {
			this.value = i;
		}
		public EShadeMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EShadeMode toEnum(int retval) {
			if(retval == HIGHLIGHT.value){
				return HIGHLIGHT;
			}
			else if(retval == OUTLINE.value){
				return OUTLINE;
			}
			else if(retval == SHADOW.value){
				return SHADOW;
			}
			else if(retval == NORMAL.value){
				return NORMAL;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EShadeModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setColor_ev_uint32(long pNativeObject, long rgbVal);
	/**
	 * 设置字体颜色
	 * @param rgbval 24位颜色值，如：“0x0000ff”(OPENGL下表示红色，D3D下表示蓝色)
	 */
	public void setColor(long rgbVal)
	{
		long rgbValParamValue = rgbVal;
		setColor_ev_uint32(this.nativeObject.pointer, rgbValParamValue);
	}
	native private void setColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置字体颜色
	 * @param color setColor的跨渲染平台版本,在不频繁改变颜色值的前提下优先调用此重载版本
	 */
	public void setColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setUnderline_ev_bool(long pNativeObject, boolean bUnderline);
	/**
	 * 下划线
	 * @param bUnderline 
	 */
	public void setUnderline(boolean bUnderline)
	{
		boolean bUnderlineParamValue = bUnderline;
		setUnderline_ev_bool(this.nativeObject.pointer, bUnderlineParamValue);
	}
	native private void setStrikeOut_ev_bool(long pNativeObject, boolean bStrikeOut);
	/**
	 * 删除线
	 * @param bStrikeOut 
	 */
	public void setStrikeOut(boolean bStrikeOut)
	{
		boolean bStrikeOutParamValue = bStrikeOut;
		setStrikeOut_ev_bool(this.nativeObject.pointer, bStrikeOutParamValue);
	}
	native private void setBold_ev_bool(long pNativeObject, boolean bBold);
	/**
	 * 加粗
	 * @param bBold 
	 */
	public void setBold(boolean bBold)
	{
		boolean bBoldParamValue = bBold;
		setBold_ev_bool(this.nativeObject.pointer, bBoldParamValue);
	}
	native private void setItalic_ev_bool(long pNativeObject, boolean bItalic);
	/**
	 * 倾斜
	 * @param bItalic 
	 */
	public void setItalic(boolean bItalic)
	{
		boolean bItalicParamValue = bItalic;
		setItalic_ev_bool(this.nativeObject.pointer, bItalicParamValue);
	}
	native private void setFont_EarthView_World_Core_ev_string(long pNativeObject, String fontFamily);
	/**
	 * 字体
	 * @param choice 
	 */
	public void setFont(String fontFamily)
	{
		String fontFamilyParamValue = fontFamily;
		setFont_EarthView_World_Core_ev_string(this.nativeObject.pointer, fontFamilyParamValue);
	}
	native private void setFontSize_ev_byte(long pNativeObject, short size);
	/**
	 * 字号
	 * @param size 
	 */
	public void setFontSize(short size)
	{
		short sizeParamValue = size;
		setFontSize_ev_byte(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setTransparence_ev_real32(long pNativeObject, float rate);
	/**
	 * 透明度设置,注意:鉴于历史原因，这里的透明度rate的值越大，文本将越不透明，更贴切地说这是"不透明度"设置
	 * @param rate rate有效值在0到1之间
	 */
	public void setTransparence(float rate)
	{
		float rateParamValue = rate;
		setTransparence_ev_real32(this.nativeObject.pointer, rateParamValue);
	}
	native private void setShadeMode_EShadeMode(long pNativeObject, int mode);
	/**
	 * 着色模式设置
	 * @param mode 
	 */
	public void setShadeMode(com.earthview.world.graphic.LatticeTextStyle.EShadeMode mode)
	{
		int modeParamValue = mode.getValue();
		setShadeMode_EShadeMode(this.nativeObject.pointer, modeParamValue);
	}
	protected  void toDefaultVal_void_callback()
	{
		toDefaultVal();
	}

	native private void toDefaultVal_void(long pNativeObject);
	/**
	 * 返回到默认值
	 */
	public void toDefaultVal()
	{
		toDefaultVal_void(this.nativeObject.pointer);
	}
	native private void toDefaultVal_void_NoVirtual(long pNativeObject);
	protected void toDefaultVal_NoVirtual()
	{
		toDefaultVal_void_NoVirtual(this.nativeObject.pointer);
	}

	native private static long create_void();
	/// <summary>
	/// 创建移动文本属性对象
	/// </summary>
	/// <returns>属性对象指针</return>		
	public static com.earthview.world.graphic.LatticeTextStyle create()
	{
		long returnValue = create_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeTextStyle __returnValue = new com.earthview.world.graphic.LatticeTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeTextStyle");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeTextStyle)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLatticeTextStyle");
		}
		return __returnValue;
	}
	native private static long create_EarthView_World_Core_ev_string_ev_byte_CColourValue(String fontFamily, short fontSize, long color);
	/// <summary>
	/// 创建可渲染文本属性对象
	/// </summary>
	/// <param name="fontFamily">字体家族,如"宋体"</param>
	/// <param name="fontSize">字体像素大小</param>
	/// <param name="color">字体主轮廓颜色</param>
	/// <returns>属性对象指针</return>	
	public static com.earthview.world.graphic.LatticeTextStyle create(String fontFamily, short fontSize, com.earthview.world.graphic.ColourValue color)
	{
		String fontFamilyParamValue = fontFamily;
		short fontSizeParamValue = fontSize;
		long colorParamValue = color.nativeObject.pointer;
		long returnValue = create_EarthView_World_Core_ev_string_ev_byte_CColourValue(fontFamilyParamValue, fontSizeParamValue, colorParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeTextStyle __returnValue = new com.earthview.world.graphic.LatticeTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeTextStyle");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeTextStyle)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLatticeTextStyle");
		}
		return __returnValue;
	}
	native private void destroy_void(long pNativeObject);
	/**
	 * 销毁移动文本属性对象
	 */
	public void destroy()
	{
		destroy_void(this.nativeObject.pointer);
	}
	native private long getRGB_void(long pNativeObject);
	public long getRGB()
	{
		long returnValue = getRGB_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue getColor()
	{
		long returnValue = getColor_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private boolean isUnderline_void(long pNativeObject);
	public boolean isUnderline()
	{
		boolean returnValue = isUnderline_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isStrikeOut_void(long pNativeObject);
	public boolean isStrikeOut()
	{
		boolean returnValue = isStrikeOut_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBold_void(long pNativeObject);
	public boolean isBold()
	{
		boolean returnValue = isBold_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isItalic_void(long pNativeObject);
	public boolean isItalic()
	{
		boolean returnValue = isItalic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFont_void(long pNativeObject);
	public int getFont()
	{
		int returnValue = getFont_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getFontSize_void(long pNativeObject);
	public short getFontSize()
	{
		short returnValue = getFontSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private float getTransparence_void(long pNativeObject);
	public float getTransparence()
	{
		float returnValue = getTransparence_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getKey_void(long pNativeObject);
	public LongPointer getKey()
	{
		long returnValue = getKey_void(this.nativeObject.pointer);
		LongPointer __returnValue = new LongPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	public LatticeTextStyle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatticeTextStyle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_toDefaultVal_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_toDefaultVal_void(this.nativeObject.pointer, "toDefaultVal_void_callback");
		}
	}
	
	public static LatticeTextStyle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatticeTextStyle obj = null;
 		if(baseObj instanceof LatticeTextStyle)
		{
			obj = (LatticeTextStyle)baseObj;
		} else {
			obj = new LatticeTextStyle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatticeTextStyle");
			obj.increaseCast();
		}

		return obj;
	}
}
