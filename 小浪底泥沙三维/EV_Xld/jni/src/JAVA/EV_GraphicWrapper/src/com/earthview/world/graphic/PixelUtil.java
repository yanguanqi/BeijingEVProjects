package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 像素功能类包装和解包像素数据
 */
public class PixelUtil extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPixelUtil", new PixelUtilClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public PixelUtil() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPixelUtil", null);
	}

	native private static long getNumElemBytes_PixelFormat(int format);
	/**
	 * 得到一个有给定像素格式的元素所占字节大小
	 * @param format 像素格式
	 * @return 返回字节大小
	 */
	public static long getNumElemBytes(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		long returnValue = getNumElemBytes_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static long getNumElemBits_PixelFormat(int format);
	/**
	 * 得到一个有给定像素格式的元素所占比特大小
	 * @param format 像素格式
	 * @return 返回比特大小
	 */
	public static long getNumElemBits(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		long returnValue = getNumElemBits_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static long getMemorySize_ev_size_t_ev_size_t_ev_size_t_PixelFormat(long width, long height, long depth, int format);
	/**
	 * 得到一个有给定范围和像素格式的区域在存储器里展开所占大小
	 * @param width 区域的宽度
	 * @param height 区域的高度
	 * @param depth 区域的深度
	 * @param format 给定像素的格式
	 * @return 所占存储器大小
	 */
	public static long getMemorySize(long width, long height, long depth, com.earthview.world.graphic.PixelFormat format)
	{
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int formatParamValue = format.getValue();
		long returnValue = getMemorySize_ev_size_t_ev_size_t_ev_size_t_PixelFormat(widthParamValue, heightParamValue, depthParamValue, formatParamValue);
		return returnValue;
	}
	native private static long getFlags_PixelFormat(int format);
	/**
	 * 得到像素格式的特殊标记
	 * @param format 像素格式
	 * @return 对应的标记
	 */
	public static long getFlags(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		long returnValue = getFlags_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean hasAlpha_PixelFormat(int format);
	/**
	 * 判断该格式是否具有alpha成分（透明度）
	 * @param format 像素格式
	 * @return 有这个成分就返回true，否则返回false
	 */
	public static boolean hasAlpha(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		boolean returnValue = hasAlpha_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean isFloatingPoint_PixelFormat(int format);
	/**
	 * 判断该格式是否是浮点的
	 * @param format 像素格式
	 * @return 是浮点的就返回true，否则返回false
	 */
	public static boolean isFloatingPoint(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		boolean returnValue = isFloatingPoint_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean isCompressed_PixelFormat(int format);
	/**
	 * 判断该格式是否被压缩
	 * @param format 像素格式
	 * @return 被压缩就返回true，否则返回false
	 */
	public static boolean isCompressed(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		boolean returnValue = isCompressed_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean isDepth_PixelFormat(int format);
	/**
	 * 判断该格式是否是具有深度的格式（针对具有深度的纹理）
	 * @param format 像素格式
	 * @return 又具有深度的格式就返回true，否则返回false
	 */
	public static boolean isDepth(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		boolean returnValue = isDepth_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean isNativeEndian_PixelFormat(int format);
	/**
	 * 判断该格式是否是按字节存储次序的格式
	 * @param format 像素格式
	 * @return 是就返回true，否则返回false
	 */
	public static boolean isNativeEndian(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		boolean returnValue = isNativeEndian_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean isLuminance_PixelFormat(int format);
	/**
	 * 判断该格式是否是亮度格式
	 * @param format 像素格式
	 * @return 是就返回true，否则返回false
	 */
	public static boolean isLuminance(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		boolean returnValue = isLuminance_PixelFormat(formatParamValue);
		return returnValue;
	}
	native private static boolean isValidExtent_ev_size_t_ev_size_t_ev_size_t_PixelFormat(long width, long height, long depth, int format);
	/**
	 * 判断对于图像的格式，图像的某个范围是否有效
	 * @param width 区域范围的宽度
	 * @param height 区域范围的高度
	 * @param depth 区域范围的深度
	 * @param format 像素格式
	 * @return 有效就返回true，否则返回false
	 */
	public static boolean isValidExtent(long width, long height, long depth, com.earthview.world.graphic.PixelFormat format)
	{
		long widthParamValue = width;
		long heightParamValue = height;
		long depthParamValue = depth;
		int formatParamValue = format.getValue();
		boolean returnValue = isValidExtent_ev_size_t_ev_size_t_ev_size_t_PixelFormat(widthParamValue, heightParamValue, depthParamValue, formatParamValue);
		return returnValue;
	}
	native private static void getBitDepths_PixelFormat_ev_int32(int format, long rgba);
	/**
	 * 给一个格式设定位数
	 * @param format 像素格式
	 * @param rgba[4] 存放对应的位数值的数组
	 */
	public static void getBitDepths(com.earthview.world.graphic.PixelFormat format, NativeIntegerBuffer rgba)
	{
		int formatParamValue = format.getValue();
		long rgbaParamValue = (rgba == null ? 0L : rgba.nativeObject.pointer);
		getBitDepths_PixelFormat_ev_int32(formatParamValue, rgbaParamValue);
	}
	native private static void getBitMasks_PixelFormat_ev_uint32(int format, long rgba);
	/**
	 * 隐藏颜色值R、G、B、A（用于打包和解包）
	 * @param format 像素格式
	 * @param rgba[4] 存放对应的隐藏值的数组
	 */
	public static void getBitMasks(com.earthview.world.graphic.PixelFormat format, NativeUIntegerBuffer rgba)
	{
		int formatParamValue = format.getValue();
		long rgbaParamValue = (rgba == null ? 0L : rgba.nativeObject.pointer);
		getBitMasks_PixelFormat_ev_uint32(formatParamValue, rgbaParamValue);
	}
	native private static void getBitShifts_PixelFormat_ev_uchar(int format, long rgba);
	/**
	 * 转换颜色值R、G、B、A（用于打包和解包）
	 * @param format 像素格式
	 * @param rgba[4] 存放对应的转换值的数组
	 */
	public static void getBitShifts(com.earthview.world.graphic.PixelFormat format, NativeUByteBuffer rgba)
	{
		int formatParamValue = format.getValue();
		long rgbaParamValue = (rgba == null ? 0L : rgba.nativeObject.pointer);
		getBitShifts_PixelFormat_ev_uchar(formatParamValue, rgbaParamValue);
	}
	native private static String getFormatName_PixelFormat(int srcformat);
	/**
	 * 得到图像的格式
	 * @param srcformat 图像格式
	 * @return 返回格式名称
	 */
	public static String getFormatName(com.earthview.world.graphic.PixelFormat srcformat)
	{
		int srcformatParamValue = srcformat.getValue();
		String returnValue = getFormatName_PixelFormat(srcformatParamValue);
		return returnValue;
	}
	native private static boolean isAccessible_PixelFormat(int srcformat);
	/**
	 * 判断这种格式能否使用打包函数和解包函数（通常情况下压缩和深度格式是不能使用的，只有固定格式才能使用）
	 * @param format 对应的格式
	 * @return 能够使用则返回true，否则返回false
	 */
	public static boolean isAccessible(com.earthview.world.graphic.PixelFormat srcformat)
	{
		int srcformatParamValue = srcformat.getValue();
		boolean returnValue = isAccessible_PixelFormat(srcformatParamValue);
		return returnValue;
	}
	native private static int getComponentType_PixelFormat(int fmt);
	/**
	 * 一个像素格式的构成类型
	 * @param fmt 像素格式
	 * @return 返回像素组成类型
	 */
	public static com.earthview.world.graphic.PixelComponentType getComponentType(com.earthview.world.graphic.PixelFormat fmt)
	{
		int fmtParamValue = fmt.getValue();
		int returnValue = getComponentType_PixelFormat(fmtParamValue);
		return com.earthview.world.graphic.PixelComponentType.toEnum(returnValue);
	}
	native private static long getComponentCount_PixelFormat(int fmt);
	/**
	 * 一个像素格式的构成个数
	 * @param fmt 像素格式
	 * @return 返回对应的个数
	 */
	public static long getComponentCount(com.earthview.world.graphic.PixelFormat fmt)
	{
		int fmtParamValue = fmt.getValue();
		long returnValue = getComponentCount_PixelFormat(fmtParamValue);
		return returnValue;
	}
	native private static int getFormatFromName_EVString(String name);
	/**
	 * 根据给定的名字得到格式
	 * @param name 名字
	 * @return 返回像素格式
	 */
	public static com.earthview.world.graphic.PixelFormat getFormatFromName(String name)
	{
		String nameParamValue = name;
		int returnValue = getFormatFromName_EVString(nameParamValue);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private static int getFormatFromName_EVString_ev_bool(String name, boolean accessibleOnly);
	/**
	 * 根据给定的名字得到格式
	 * @param name 名字
	 * @param accessibleOnly 如果为true，则不能取到的格式都将被视为无效格式，否则所有格式有效
	 * @return 返回像素格式
	 */
	public static com.earthview.world.graphic.PixelFormat getFormatFromName(String name, boolean accessibleOnly)
	{
		String nameParamValue = name;
		boolean accessibleOnlyParamValue = accessibleOnly;
		int returnValue = getFormatFromName_EVString_ev_bool(nameParamValue, accessibleOnlyParamValue);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private static int getFormatFromName_EVString_ev_bool_ev_bool(String name, boolean accessibleOnly, boolean caseSensitive);
	/**
	 * 根据给定的名字得到格式
	 * @param name 名字
	 * @param accessibleOnly 如果为true，则不能取到的格式都将被视为无效格式，否则所有格式有效
	 * @param caseSensitive 名字是否有效（名字在像素格式枚举中是否存在）
	 * @return 返回像素格式
	 */
	public static com.earthview.world.graphic.PixelFormat getFormatFromName(String name, boolean accessibleOnly, boolean caseSensitive)
	{
		String nameParamValue = name;
		boolean accessibleOnlyParamValue = accessibleOnly;
		boolean caseSensitiveParamValue = caseSensitive;
		int returnValue = getFormatFromName_EVString_ev_bool_ev_bool(nameParamValue, accessibleOnlyParamValue, caseSensitiveParamValue);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private static String getBNFExpressionOfPixelFormats_void();
	/**
	 * 得到对格式的BNF表达（BNF：巴科斯范式，用形式化的符号来描述给定的语言语法，是描述计算机语言语法的符号集）
	 * @param  
	 * @return 返回像素格式
	 */
	public static String getBNFExpressionOfPixelFormats()
	{
		String returnValue = getBNFExpressionOfPixelFormats_void();
		return returnValue;
	}
	native private static String getBNFExpressionOfPixelFormats_ev_bool(boolean accessibleOnly);
	/**
	 * 得到对格式的BNF表达（BNF：巴科斯范式，用形式化的符号来描述给定的语言语法，是描述计算机语言语法的符号集）
	 * @param accessibleOnly 如果为true，则只有能取到的格式会被考虑，否则所有在枚举中的格式都会被考虑
	 * @return 返回像素格式
	 */
	public static String getBNFExpressionOfPixelFormats(boolean accessibleOnly)
	{
		boolean accessibleOnlyParamValue = accessibleOnly;
		String returnValue = getBNFExpressionOfPixelFormats_ev_bool(accessibleOnlyParamValue);
		return returnValue;
	}
	native private static int getFormatForBitDepths_PixelFormat_ev_uint16_ev_uint16(int fmt, int integerBits, int floatBits);
	/**
	 * 根据给定比特深度来找到相似的格式
	 * @param fmt 最初的格式
	 * @param integerBits 整型像素格式的首选比特深度
	 * @param floatBits 浮点型像素格式的首选比特深度
	 * @return 像素的格式
	 */
	public static com.earthview.world.graphic.PixelFormat getFormatForBitDepths(com.earthview.world.graphic.PixelFormat fmt, int integerBits, int floatBits)
	{
		int fmtParamValue = fmt.getValue();
		int integerBitsParamValue = integerBits;
		int floatBitsParamValue = floatBits;
		int returnValue = getFormatForBitDepths_PixelFormat_ev_uint16_ev_uint16(fmtParamValue, integerBitsParamValue, floatBitsParamValue);
		return com.earthview.world.graphic.PixelFormat.toEnum(returnValue);
	}
	native private static void packColour_CColourValue_PixelFormat_void(long colour, int pf, long dest);
	/**
	 * 将颜色打包到存储器中
	 * @param colour 颜色值，EarthView::World::Graphic::CColourValue类的对象
	 * @param pf 用何种像素格式来描述颜色值
	 * @param dest 目标存储器的位置
	 */
	public static void packColour(com.earthview.world.graphic.ColourValue colour, com.earthview.world.graphic.PixelFormat pf, VoidPointer dest)
	{
		long colourParamValue = colour.nativeObject.pointer;
		int pfParamValue = pf.getValue();
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		packColour_CColourValue_PixelFormat_void(colourParamValue, pfParamValue, destParamValue);
	}
	native private static void packColour_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(short r, short g, short b, short a, int pf, long dest);
	/**
	 * 将颜色打包到存储器中
	 * @param r 红色值
	 * @param g 绿色值
	 * @param b 蓝色值
	 * @param a 透明值
	 * @param pf 用何种像素格式来描述颜色值
	 * @param dest 目标存储器的位置
	 */
	public static void packColour(short r, short g, short b, short a, com.earthview.world.graphic.PixelFormat pf, VoidPointer dest)
	{
		short rParamValue = r;
		short gParamValue = g;
		short bParamValue = b;
		short aParamValue = a;
		int pfParamValue = pf.getValue();
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		packColour_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(rParamValue, gParamValue, bParamValue, aParamValue, pfParamValue, destParamValue);
	}
	native private static void packColour_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(float r, float g, float b, float a, int pf, long dest);
	/**
	 * 将颜色打包到存储器中
	 * @param r 红色值（范围在0.0f到1.0f之间）
	 * @param g 绿色值（范围在0.0f到1.0f之间）
	 * @param b 蓝色值（范围在0.0f到1.0f之间）
	 * @param a 透明值（范围在0.0f到1.0f之间）
	 * @param pf 用何种像素格式来描述颜色值
	 * @param dest 目标存储器的位置
	 */
	public static void packColour(float r, float g, float b, float a, com.earthview.world.graphic.PixelFormat pf, VoidPointer dest)
	{
		float rParamValue = r;
		float gParamValue = g;
		float bParamValue = b;
		float aParamValue = a;
		int pfParamValue = pf.getValue();
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		packColour_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(rParamValue, gParamValue, bParamValue, aParamValue, pfParamValue, destParamValue);
	}
	native private static void unpackColour_CColourValue_PixelFormat_void(long colour, int pf, long src);
	/**
	 * 从存储器中解包颜色值
	 * @param colour 颜色值，EarthView::World::Graphic::CColourValue类的对象
	 * @param pf 用何种像素格式来描述颜色值
	 * @param src 存放颜色值存储器的位置
	 */
	public static void unpackColour(com.earthview.world.graphic.ColourValue colour, com.earthview.world.graphic.PixelFormat pf, VoidPointer src)
	{
		long colourParamValue = colour.nativeObject.pointer;
		int pfParamValue = pf.getValue();
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		unpackColour_CColourValue_PixelFormat_void(colourParamValue, pfParamValue, srcParamValue);
	}
	native private static void unpackColour_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(long r, long g, long b, long a, int pf, long src);
	/**
	 * 从存储器中解包颜色值
	 * @param r 红色值
	 * @param g 绿色值
	 * @param b 蓝色值
	 * @param a 透明值
	 * @param pf 用何种像素格式来描述颜色值
	 * @param src 存放颜色值存储器的位置
	 */
	public static void unpackColour(UBytePointer r, UBytePointer g, UBytePointer b, UBytePointer a, com.earthview.world.graphic.PixelFormat pf, VoidPointer src)
	{
		long rParamValue = r.nativeObject.pointer;
		long gParamValue = g.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		int pfParamValue = pf.getValue();
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		unpackColour_ev_uint8_ev_uint8_ev_uint8_ev_uint8_PixelFormat_void(rParamValue, gParamValue, bParamValue, aParamValue, pfParamValue, srcParamValue);
	}
	native private static void unpackColour_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(long r, long g, long b, long a, int pf, long src);
	/**
	 * 从存储器中解包颜色值
	 * @param r 红色值（值是浮点型的）
	 * @param g 绿色值（值是浮点型的）
	 * @param b 蓝色值（值是浮点型的）
	 * @param a 透明值（值是浮点型的）
	 * @param pf 用何种像素格式来描述颜色值
	 * @param src 存放颜色值存储器的位置
	 */
	public static void unpackColour(FloatPointer r, FloatPointer g, FloatPointer b, FloatPointer a, com.earthview.world.graphic.PixelFormat pf, VoidPointer src)
	{
		long rParamValue = r.nativeObject.pointer;
		long gParamValue = g.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		int pfParamValue = pf.getValue();
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		unpackColour_ev_real32_ev_real32_ev_real32_ev_real32_PixelFormat_void(rParamValue, gParamValue, bParamValue, aParamValue, pfParamValue, srcParamValue);
	}
	native private static void bulkPixelConversion_void_PixelFormat_void_PixelFormat_ev_uint32(long src, int srcFormat, long dest, int dstFormat, long count);
	/**
	 * 将连续的像素从一个格式转换到另一个格式
	 * @param src 指向原来区域的指针
	 * @param srcFormat 原来区域的格式
	 * @param dest 指向目标区域的指针
	 * @param dstFormat 目标区域的格式
	 * @param count 宽度值
	 */
	public static void bulkPixelConversion(VoidPointer src, com.earthview.world.graphic.PixelFormat srcFormat, VoidPointer dest, com.earthview.world.graphic.PixelFormat dstFormat, long count)
	{
		long srcParamValue = (src == null ? 0L : src.nativeObject.pointer);
		int srcFormatParamValue = srcFormat.getValue();
		long destParamValue = (dest == null ? 0L : dest.nativeObject.pointer);
		int dstFormatParamValue = dstFormat.getValue();
		long countParamValue = count;
		bulkPixelConversion_void_PixelFormat_void_PixelFormat_ev_uint32(srcParamValue, srcFormatParamValue, destParamValue, dstFormatParamValue, countParamValue);
	}
	native private static void bulkPixelConversion_CPixelBox_CPixelBox(long src, long dst);
	/**
	 * 将连续的像素从一个格式转换到另一个格式
	 * @param src 像素盒子类，包含原来区域的像素，位置，格式
	 * @param dst 像素盒子类，包含目标区域的像素，位置，格式
	 */
	public static void bulkPixelConversion(com.earthview.world.graphic.PixelBox src, com.earthview.world.graphic.PixelBox dst)
	{
		long srcParamValue = src.nativeObject.pointer;
		long dstParamValue = dst.nativeObject.pointer;
		bulkPixelConversion_CPixelBox_CPixelBox(srcParamValue, dstParamValue);
	}
	public PixelUtil(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PixelUtil(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PixelUtil fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PixelUtil obj = null;
 		if(baseObj instanceof PixelUtil)
		{
			obj = (PixelUtil)baseObj;
		} else {
			obj = new PixelUtil(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPixelUtil");
			obj.increaseCast();
		}

		return obj;
	}
}
