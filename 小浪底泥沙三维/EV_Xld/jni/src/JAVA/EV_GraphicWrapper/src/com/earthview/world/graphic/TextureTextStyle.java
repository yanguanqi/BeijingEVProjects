package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 定义文本风格数据结构和操作
 */
public class TextureTextStyle extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CTextureTextStyle", new TextureTextStyleClassFactory());
	}

	/**
	 * 显示模式
	 */
	public enum DisplayMode implements INativeEnum<DisplayMode> {
		FONT_3D(DisplayModeHelper.ENUM_VALUES[0]),
		KEEP_PIXELSIZE(DisplayModeHelper.ENUM_VALUES[1]),
		FACETO_CAMERA(DisplayModeHelper.ENUM_VALUES[2]),
		STANDARD(DisplayModeHelper.ENUM_VALUES[3]);
		private int value;
		DisplayMode(int i) {
			this.value = i;
		}
		public DisplayMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final DisplayMode toEnum(int retval) {
			if(retval == FONT_3D.value){
				return FONT_3D;
			}
			else if(retval == KEEP_PIXELSIZE.value){
				return KEEP_PIXELSIZE;
			}
			else if(retval == FACETO_CAMERA.value){
				return FACETO_CAMERA;
			}
			else if(retval == STANDARD.value){
				return STANDARD;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class DisplayModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 文本停靠点与文本矩形块相对的水平布局
	 */
	public enum HoriLayout implements INativeEnum<HoriLayout> {
		HORI_LEFT(HoriLayoutHelper.ENUM_VALUES[0]),
		HORI_MID(HoriLayoutHelper.ENUM_VALUES[1]),
		HORI_RIGHT(HoriLayoutHelper.ENUM_VALUES[2]);
		private int value;
		HoriLayout(int i) {
			this.value = i;
		}
		public HoriLayout getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final HoriLayout toEnum(int retval) {
			if(retval == HORI_LEFT.value){
				return HORI_LEFT;
			}
			else if(retval == HORI_MID.value){
				return HORI_MID;
			}
			else if(retval == HORI_RIGHT.value){
				return HORI_RIGHT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class HoriLayoutHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 文本停靠点与文本矩形块相对的垂直布局
	 */
	public enum VertLayout implements INativeEnum<VertLayout> {
		VERT_TOP(VertLayoutHelper.ENUM_VALUES[0]),
		VERT_MID(VertLayoutHelper.ENUM_VALUES[1]),
		VERT_BOTTOM(VertLayoutHelper.ENUM_VALUES[2]);
		private int value;
		VertLayout(int i) {
			this.value = i;
		}
		public VertLayout getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final VertLayout toEnum(int retval) {
			if(retval == VERT_TOP.value){
				return VERT_TOP;
			}
			else if(retval == VERT_MID.value){
				return VERT_MID;
			}
			else if(retval == VERT_BOTTOM.value){
				return VERT_BOTTOM;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class VertLayoutHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private void setFontStyle_FontStyle(long pNativeObject, long style);
	/**
	 * 设置字体风格
	 * @return 字体风格对象
	 */
	public void setFontStyle(com.earthview.world.graphic.FontStyle style)
	{
		long styleParamValue = style.nativeObject.pointer;
		setFontStyle_FontStyle(this.nativeObject.pointer, styleParamValue);
	}
	native private void setColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setOutlineColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置字体轮廓的颜色
	 * @param color 颜色
	 */
	public void setOutlineColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setOutlineColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setColorRange_CColourValue_CColourValue(long pNativeObject, long colorBegin, long colorEnd);
	/**
	 * 设置颜色范围:通过该函数设置可使字体呈现平滑着色效果
	 * @param colorBegin 颜色区间起始值
	 * @param colorEnd 颜色区间末尾值
	 */
	public void setColorRange(com.earthview.world.graphic.ColourValue colorBegin, com.earthview.world.graphic.ColourValue colorEnd)
	{
		long colorBeginParamValue = colorBegin.nativeObject.pointer;
		long colorEndParamValue = colorEnd.nativeObject.pointer;
		setColorRange_CColourValue_CColourValue(this.nativeObject.pointer, colorBeginParamValue, colorEndParamValue);
	}
	native private void setFontName_EVString(long pNativeObject, String family);
	/**
	 * 设置字体家族名称,即fontfamily如"宋体","楷体"等(由于历史原因,此接口采用此命名,和CTextAreaOverlayElement::setFontName()的意义毫不相干，请注意甄别
	 * @param family 字体家族名称
	 */
	public void setFontName(String family)
	{
		String familyParamValue = family;
		setFontName_EVString(this.nativeObject.pointer, familyParamValue);
	}
	native private void setFontSize_ev_uint8(long pNativeObject, short size);
	/**
	 * 设置字体大小
	 * @param size size的值所对应的字体尺寸即常用文字处理程序中相应字号的大小
	 */
	public void setFontSize(short size)
	{
		short sizeParamValue = size;
		setFontSize_ev_uint8(this.nativeObject.pointer, sizeParamValue);
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
	native private void setShadowEnabled_ev_bool(long pNativeObject, boolean hasShadow);
	/**
	 * 阴影描边
	 * @param hasShadow 是否启用阴影描边
	 */
	public void setShadowEnabled(boolean hasShadow)
	{
		boolean hasShadowParamValue = hasShadow;
		setShadowEnabled_ev_bool(this.nativeObject.pointer, hasShadowParamValue);
	}
	native private void setLayout_HoriLayout_VertLayout(long pNativeObject, int hLayout, int vLayout);
	/**
	 * 设置布局
	 * @param hLayout 水平布局
	 * @param vLayout 垂直布局
	 */
	public void setLayout(com.earthview.world.graphic.TextureTextStyle.HoriLayout hLayout, com.earthview.world.graphic.TextureTextStyle.VertLayout vLayout)
	{
		int hLayoutParamValue = hLayout.getValue();
		int vLayoutParamValue = vLayout.getValue();
		setLayout_HoriLayout_VertLayout(this.nativeObject.pointer, hLayoutParamValue, vLayoutParamValue);
	}
	native private void setOffset_Real_Real_Real(long pNativeObject, double offsetX, double offsetY, double offsetZ);
	/**
	 * 设置可渲染文本的本地坐标系原点相对于文本在各个坐标轴分量上的偏移标量值,偏移方向视mHLayout和mVLayout的值而定
	 */
	public void setOffset(double offsetX, double offsetY, double offsetZ)
	{
		double offsetXParamValue = offsetX;
		double offsetYParamValue = offsetY;
		double offsetZParamValue = offsetZ;
		setOffset_Real_Real_Real(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue, offsetZParamValue);
	}
	native private void setRowHeight_Real(long pNativeObject, double scale);
	/**
	 * 设置行高
	 * @param scale 正常行高的倍数
	 */
	public void setRowHeight(double scale)
	{
		double scaleParamValue = scale;
		setRowHeight_Real(this.nativeObject.pointer, scaleParamValue);
	}
	native private void setDisplayMode_DisplayMode(long pNativeObject, int mode);
	/**
	 * 设置显示模式
	 * @param mode 显示模式
	 */
	public void setDisplayMode(com.earthview.world.graphic.TextureTextStyle.DisplayMode mode)
	{
		int modeParamValue = mode.getValue();
		setDisplayMode_DisplayMode(this.nativeObject.pointer, modeParamValue);
	}
	native private void commit_void(long pNativeObject);
	/**
	 * 提交更改，通知所有使用该文本风格的对象
	 */
	public void commit()
	{
		commit_void(this.nativeObject.pointer);
	}
	native private void attach_ITextStyleListener(long pNativeObject, long listener);
	/**
	 * 绑定一个文本风格监听对象
	 * @param listener 文本风格监听对象
	 */
	public void attach(com.earthview.world.graphic.Itextstylelistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		attach_ITextStyleListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void remove_ITextStyleListener(long pNativeObject, long listener);
	/**
	 * 移除一个文本风格监听对象
	 * @param listener 文本风格监听对象
	 */
	public void remove(com.earthview.world.graphic.Itextstylelistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		remove_ITextStyleListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private long getFontStyle_void(long pNativeObject);
	/**
	 * 获取字体风格对象
	 * @return 字体风格对象
	 */
	public com.earthview.world.graphic.FontStyle getFontStyle()
	{
		long returnValue = getFontStyle_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FontStyle __returnValue = new com.earthview.world.graphic.FontStyle(CreatedWhenConstruct.CWC_NotToCreate, "FontStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FontStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "FontStyle");
		}
		return __returnValue;
	}
	native private long getFontName_void(long pNativeObject);
	/**
	 * 获取字体风格对象相关属性
	 */
	public StringPointer getFontName()
	{
		long returnValue = getFontName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private short getFontSize_void(long pNativeObject);
	public short getFontSize()
	{
		short returnValue = getFontSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isItalic_void(long pNativeObject);
	public boolean isItalic()
	{
		boolean returnValue = isItalic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isBold_void(long pNativeObject);
	public boolean isBold()
	{
		boolean returnValue = isBold_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasShadow_void(long pNativeObject);
	public boolean hasShadow()
	{
		boolean returnValue = hasShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getColorBegin_void(long pNativeObject);
	/**
	 * 获取颜色区间起始值
	 * @return 颜色ARGB整数值
	 */
	public long getColorBegin()
	{
		long returnValue = getColorBegin_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getColorEnd_void(long pNativeObject);
	/**
	 * 获取颜色区间末尾值
	 * @return 颜色ARGB整数值
	 */
	public long getColorEnd()
	{
		long returnValue = getColorEnd_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getColorRange_CColourValue_CColourValue(long pNativeObject, long beginColor, long endColor);
	/**
	 * 获取颜色区间
	 * @param beginColor 开始颜色
	 * @param endColor 结束颜色
	 */
	public void getColorRange(com.earthview.world.graphic.ColourValue beginColor, com.earthview.world.graphic.ColourValue endColor)
	{
		long beginColorParamValue = beginColor.nativeObject.pointer;
		long endColorParamValue = endColor.nativeObject.pointer;
		getColorRange_CColourValue_CColourValue(this.nativeObject.pointer, beginColorParamValue, endColorParamValue);
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
	native private long getOutlineColor_void(long pNativeObject);
	public long getOutlineColor()
	{
		long returnValue = getOutlineColor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean geometryOutOfDate_void(long pNativeObject);
	/**
	 * 获知几何信息是否过期
	 * @return 是否过期
	 */
	public boolean geometryOutOfDate()
	{
		boolean returnValue = geometryOutOfDate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean colorOutOfDate_void(long pNativeObject);
	/**
	 * 获知颜色信息是否过期
	 * @return 是否过期
	 */
	public boolean colorOutOfDate()
	{
		boolean returnValue = colorOutOfDate_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHorizontalLayout_void(long pNativeObject);
	/**
	 * 获取水平布局
	 * @return 水平布局
	 */
	public com.earthview.world.graphic.TextureTextStyle.HoriLayout getHorizontalLayout()
	{
		int returnValue = getHorizontalLayout_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureTextStyle.HoriLayout.toEnum(returnValue);
	}
	native private int getVerticalLayout_void(long pNativeObject);
	/**
	 * 获取垂直布局
	 * @return 垂直布局
	 */
	public com.earthview.world.graphic.TextureTextStyle.VertLayout getVerticalLayout()
	{
		int returnValue = getVerticalLayout_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureTextStyle.VertLayout.toEnum(returnValue);
	}
	native private double getOffsetX_void(long pNativeObject);
	/// <summary>
	/// 获取X轴偏移值
	/// </summary>
	/// <returns>X轴偏移值<returns>
	public double getOffsetX()
	{
		double returnValue = getOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOffsetY_void(long pNativeObject);
	/// <summary>
	/// 获取Y轴偏移值
	/// </summary>
	/// <returns>Y轴偏移值<returns>
	public double getOffsetY()
	{
		double returnValue = getOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOffsetZ_void(long pNativeObject);
	/// <summary>
	/// 获取Z轴偏移值
	/// </summary>
	/// <returns>Z轴偏移值<returns>
	public double getOffsetZ()
	{
		double returnValue = getOffsetZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDisplayMode_void(long pNativeObject);
	/// <summary>
	/// 获取显示模式
	/// </summary>
	/// <returns>显示模式<returns>
	public com.earthview.world.graphic.TextureTextStyle.DisplayMode getDisplayMode()
	{
		int returnValue = getDisplayMode_void(this.nativeObject.pointer);
		return com.earthview.world.graphic.TextureTextStyle.DisplayMode.toEnum(returnValue);
	}
	native private long getFontResoure_void(long pNativeObject);
	/// <summary>
	/// 获取字体资源
	/// </summary>
	/// <returns>字体资源指针<returns>
	public com.earthview.world.graphic.FontPtr getFontResoure()
	{
		long returnValue = getFontResoure_void(this.nativeObject.pointer);
		com.earthview.world.graphic.FontPtr __returnValue = new com.earthview.world.graphic.FontPtr(CreatedWhenConstruct.CWC_NotToCreate, "CFontPtr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.FontPtr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFontPtr");
		}
		return __returnValue;
	}
	native private long getRowHeight_void(long pNativeObject);
	/**
	 * 获取行高
	 * @return 行的像素高度
	 */
	public long getRowHeight()
	{
		long returnValue = getRowHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getStandardRowHeight_void(long pNativeObject);
	/**
	 * 获取标准行高
	 * @return 行的像素高度
	 */
	public long getStandardRowHeight()
	{
		long returnValue = getStandardRowHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static long create_EVString_ev_uint8_CColourValue_ev_bool(String famliy, short fontSize, long color, boolean hasShadow);
	/// <summary>
	/// 创建文本风格实例
	/// </summary>
	/// <param name="family">字体家族名称</param>
	/// <param name="fontSize">字体大小：所对应的字体尺寸即常用文字处理程序中相应数值字号的大小</param>
	/// <param name="color">颜色</param>
	/// <param name="hasShadow">是否采用阴影描边</param>
	/// <returns>文本风格实例指针<returns>
	public static com.earthview.world.graphic.TextureTextStyle create(String famliy, short fontSize, com.earthview.world.graphic.ColourValue color, boolean hasShadow)
	{
		String famliyParamValue = famliy;
		short fontSizeParamValue = fontSize;
		long colorParamValue = color.nativeObject.pointer;
		boolean hasShadowParamValue = hasShadow;
		long returnValue = create_EVString_ev_uint8_CColourValue_ev_bool(famliyParamValue, fontSizeParamValue, colorParamValue, hasShadowParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureTextStyle __returnValue = new com.earthview.world.graphic.TextureTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CTextureTextStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureTextStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureTextStyle");
		}
		return __returnValue;
	}
	native private static long create_void();
	/// <summary>
	/// 创建文本风格实例
	/// </summary>
	/// <returns>文本风格实例指针<returns>
	public static com.earthview.world.graphic.TextureTextStyle create()
	{
		long returnValue = create_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.TextureTextStyle __returnValue = new com.earthview.world.graphic.TextureTextStyle(CreatedWhenConstruct.CWC_NotToCreate, "CTextureTextStyle");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.TextureTextStyle)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTextureTextStyle");
		}
		return __returnValue;
	}
	native private static void destroy_CTextureTextStyle(long ref_instance);
	/**
	 * 销毁文本风格实例(如果实例正在被使用,调用destory并不会马上析构该实例,直到使用者计数为0时，该实例会自动析构）
	 */
	public static void destroy(com.earthview.world.graphic.TextureTextStyle ref_instance)
	{
		long ref_instanceParamValue = (ref_instance == null ? 0L : ref_instance.nativeObject.pointer);
		destroy_CTextureTextStyle(ref_instanceParamValue);
	}
	native private boolean isToDestroy_void(long pNativeObject);
	/**
	 * 获知该实例是否即将被销毁
	 */
	public boolean isToDestroy()
	{
		boolean returnValue = isToDestroy_void(this.nativeObject.pointer);
		return returnValue;
	}
	public TextureTextStyle(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextureTextStyle(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TextureTextStyle fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextureTextStyle obj = null;
 		if(baseObj instanceof TextureTextStyle)
		{
			obj = (TextureTextStyle)baseObj;
		} else {
			obj = new TextureTextStyle(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextureTextStyle");
			obj.increaseCast();
		}

		return obj;
	}
}
