package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 描绘颜色的类通过设置四个参数的值来呈现不同的颜色
 */
public class ColourValue extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CColourValue", new ColourValueClassFactory());
	}

	native private static long get_ZERO_void();
	public static com.earthview.world.graphic.ColourValue get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_Black_void();
	public static com.earthview.world.graphic.ColourValue get_Black()
	{
		long jniValue = get_Black_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_White_void();
	public static com.earthview.world.graphic.ColourValue get_White()
	{
		long jniValue = get_White_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_Red_void();
	public static com.earthview.world.graphic.ColourValue get_Red()
	{
		long jniValue = get_Red_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_Green_void();
	public static com.earthview.world.graphic.ColourValue get_Green()
	{
		long jniValue = get_Green_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_Blue_void();
	public static com.earthview.world.graphic.ColourValue get_Blue()
	{
		long jniValue = get_Blue_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_Selection_void();
	public static com.earthview.world.graphic.ColourValue get_Selection()
	{
		long jniValue = get_Selection_void();
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public ColourValue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CColourValue", null);
	}

	/**
	 * 构造函数
	 * @param red 红色的值
	 */
	public ColourValue(float red) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer redPtr = new BasePointer(red);
		list.add("red", redPtr.get());
		Create("CColourValue", list);
	}

	/**
	 * 构造函数
	 * @param red 红色的值
	 * @param green 绿色的值
	 */
	public ColourValue(float red, float green) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer redPtr = new BasePointer(red);
		list.add("red", redPtr.get());
		BasePointer greenPtr = new BasePointer(green);
		list.add("green", greenPtr.get());
		Create("CColourValue", list);
	}

	/**
	 * 构造函数
	 * @param red 红色的值
	 * @param green 绿色的值
	 * @param blue 蓝色的值
	 */
	public ColourValue(float red, float green, float blue) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer redPtr = new BasePointer(red);
		list.add("red", redPtr.get());
		BasePointer greenPtr = new BasePointer(green);
		list.add("green", greenPtr.get());
		BasePointer bluePtr = new BasePointer(blue);
		list.add("blue", bluePtr.get());
		Create("CColourValue", list);
	}

	/**
	 * 构造函数
	 * @param red 红色的值
	 * @param green 绿色的值
	 * @param blue 蓝色的值
	 * @param blue alpha的值
	 */
	public ColourValue(float red, float green, float blue, float alpha) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer redPtr = new BasePointer(red);
		list.add("red", redPtr.get());
		BasePointer greenPtr = new BasePointer(green);
		list.add("green", greenPtr.get());
		BasePointer bluePtr = new BasePointer(blue);
		list.add("blue", bluePtr.get());
		BasePointer alphaPtr = new BasePointer(alpha);
		list.add("alpha", alphaPtr.get());
		Create("CColourValue", list);
	}

	native private boolean OperatorEquals_CColourValue(long pNativeObject, long rhs);
	/**
	 * 等号"=="重载
	 * @param rhs EarthView::World::Graphic::CColourValue类的引用
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.graphic.ColourValue rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CColourValue(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CColourValue(long pNativeObject, long rhs);
	/**
	 * 不等号"!="重载
	 * @param rhs EarthView::World::Graphic::CColourValue类的引用
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.graphic.ColourValue rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CColourValue(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private float get_g_void(long pNativeObject);
	public float get_g()
	{
		float jniValue = get_g_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_g_ev_real32 (long pNativeObject, float value);
	public void set_g(float g)
	{
		float gParamValue = g;
		
		set_g_ev_real32(this.nativeObject.pointer, gParamValue);
	}
	
	native private float get_b_void(long pNativeObject);
	public float get_b()
	{
		float jniValue = get_b_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_b_ev_real32 (long pNativeObject, float value);
	public void set_b(float b)
	{
		float bParamValue = b;
		
		set_b_ev_real32(this.nativeObject.pointer, bParamValue);
	}
	
	native private float get_a_void(long pNativeObject);
	public float get_a()
	{
		float jniValue = get_a_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_a_ev_real32 (long pNativeObject, float value);
	public void set_a(float a)
	{
		float aParamValue = a;
		
		set_a_ev_real32(this.nativeObject.pointer, aParamValue);
	}
	
	native private float get_r_void(long pNativeObject);
	public float get_r()
	{
		float jniValue = get_r_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_r_ev_real32 (long pNativeObject, float value);
	public void set_r(float r)
	{
		float rParamValue = r;
		
		set_r_ev_real32(this.nativeObject.pointer, rParamValue);
	}
	
	native private long getAsRGBA_void(long pNativeObject);
	/**
	 * 当作为RGBA时重新得到颜色
	 * @param  
	 * @param  
	 * @return 返回RGBA颜色值
	 */
	public long getAsRGBA()
	{
		long returnValue = getAsRGBA_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAsARGB_void(long pNativeObject);
	/**
	 * 当作为ARGB时重新得到颜色
	 * @param  
	 * @param  
	 * @return 返回ARGB颜色值
	 */
	public long getAsARGB()
	{
		long returnValue = getAsARGB_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAsBGRA_void(long pNativeObject);
	/**
	 * 当作为BGRA时重新得到颜色
	 * @param  
	 * @param  
	 * @return 返回BGRA颜色值
	 */
	public long getAsBGRA()
	{
		long returnValue = getAsBGRA_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getAsABGR_void(long pNativeObject);
	/**
	 * 当作为ABGR时重新得到颜色
	 * @param  
	 * @param  
	 * @return 返回ABGR颜色值
	 */
	public long getAsABGR()
	{
		long returnValue = getAsABGR_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAsRGBA_ev_uint32(long pNativeObject, long val);
	/**
	 * 当作为RGBA时设置颜色
	 * @param val RGBA的const变量
	 */
	public void setAsRGBA(long val)
	{
		long valParamValue = val;
		setAsRGBA_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsARGB_ev_uint32(long pNativeObject, long val);
	/**
	 * 当作为ARGB时设置颜色
	 * @param val ARGB的const变量
	 */
	public void setAsARGB(long val)
	{
		long valParamValue = val;
		setAsARGB_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsBGRA_ev_uint32(long pNativeObject, long val);
	/**
	 * 当作为BGRA时设置颜色
	 * @param val BGRA的const变量
	 */
	public void setAsBGRA(long val)
	{
		long valParamValue = val;
		setAsBGRA_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private void setAsABGR_ev_uint32(long pNativeObject, long val);
	/**
	 * 当作为ABGR时设置颜色
	 * @param val ABGR的const变量
	 */
	public void setAsABGR(long val)
	{
		long valParamValue = val;
		setAsABGR_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private void saturate_void(long pNativeObject);
	/**
	 * 使颜色的值处于[0,1]范围内，即颜色值得归一化处理
	 * @param  
	 */
	public void saturate()
	{
		saturate_void(this.nativeObject.pointer);
	}
	native private long saturateCopy_void(long pNativeObject);
	/**
	 * 将归一化处理的值赋给原来的值
	 * @param  
	 * @return 返回归一化处理后的值
	 */
	public com.earthview.world.graphic.ColourValue saturateCopy()
	{
		long returnValue = saturateCopy_void(this.nativeObject.pointer);
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
	native private float OperatorIndex_ev_size_t(long pNativeObject, long i);
	/**
	 * 重载数组访问器,即为数组"[]"下标符号的重载
	 * @param i 数组下标
	 * @return 返回成员变量r的地址移动i位后地址里的值
	 */
	public float OperatorIndex(long i)
	{
		long iParamValue = i;
		float returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private long ptr_void(long pNativeObject);
	/**
	 * 指针访问器重载，用于直接拷贝
	 * @param  
	 * @return 返回成员变量r的地址
	 */
	public FloatPointer ptr()
	{
		long returnValue = ptr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		FloatPointer __returnValue = new FloatPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long OperatorPlus_CColourValue(long pNativeObject, long rkVector);
	/**
	 * 算术运算符"+"重载
	 * @param rkVector EarthView::World::Graphic::CColourValue类的引用
	 * @return 返回相加之后的EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue OperatorPlus(com.earthview.world.graphic.ColourValue rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorPlus_CColourValue(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long OperatorMinus_CColourValue(long pNativeObject, long rkVector);
	/**
	 * 算术运算符"-"重载
	 * @param rkVector EarthView::World::Graphic::CColourValue类的引用
	 * @return 返回相减之后的EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue OperatorMinus(com.earthview.world.graphic.ColourValue rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorMinus_CColourValue(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long OperatorMultiply_ev_real32(long pNativeObject, float fScalar);
	/**
	 * 算术运算符"*"重载
	 * @param fScalar 浮点型的变量
	 * @return 返回fScalar与成员变量相乘之后的EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue OperatorMultiply(float fScalar)
	{
		float fScalarParamValue = fScalar;
		long returnValue = OperatorMultiply_ev_real32(this.nativeObject.pointer, fScalarParamValue);
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
	native private long OperatorMultiply_CColourValue(long pNativeObject, long rhs);
	/**
	 * 算术运算符"*"重载
	 * @param rhs EarthView::World::Graphic::CColourValue类的引用
	 * @return 返回成员变量相乘之后的EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue OperatorMultiply(com.earthview.world.graphic.ColourValue rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorMultiply_CColourValue(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorDivide_CColourValue(long pNativeObject, long rhs);
	/**
	 * 算术运算符"/"重载
	 * @param rhs EarthView::World::Graphic::CColourValue类的引用
	 * @return 返回成员变量相除之后的EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue OperatorDivide(com.earthview.world.graphic.ColourValue rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorDivide_CColourValue(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorDivide_ev_real32(long pNativeObject, float fScalar);
	/**
	 * 算术运算符"*"重载
	 * @param fScalar 浮点型的变量
	 * @return 返回成员变量与fScalar相除之后的EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue OperatorDivide(float fScalar)
	{
		float fScalarParamValue = fScalar;
		long returnValue = OperatorDivide_ev_real32(this.nativeObject.pointer, fScalarParamValue);
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
	native private void setHSB_Real_Real_Real(long pNativeObject, double hue, double saturation, double brightness);
	/**
	 * 从色调、饱和度、亮度方面来设置颜色值
	 * @param hue 色调变量
	 * @param saturation 饱和度变量
	 * @param brightness 亮度变量
	 */
	public void setHSB(double hue, double saturation, double brightness)
	{
		double hueParamValue = hue;
		double saturationParamValue = saturation;
		double brightnessParamValue = brightness;
		setHSB_Real_Real_Real(this.nativeObject.pointer, hueParamValue, saturationParamValue, brightnessParamValue);
	}
	native private void getHSB_Real_Real_Real(long pNativeObject, long hue, long saturation, long brightness);
	/**
	 * 将当前的颜色值转换成HSB值
	 * @param hue 指向色调变量的指针
	 * @param saturation 指向饱和度变量的指针
	 * @param brightness 指向亮度变量的指针
	 */
	public void getHSB(DoublePointer hue, DoublePointer saturation, DoublePointer brightness)
	{
		long hueParamValue = (hue == null ? 0L : hue.nativeObject.pointer);
		long saturationParamValue = (saturation == null ? 0L : saturation.nativeObject.pointer);
		long brightnessParamValue = (brightness == null ? 0L : brightness.nativeObject.pointer);
		getHSB_Real_Real_Real(this.nativeObject.pointer, hueParamValue, saturationParamValue, brightnessParamValue);
	}
	public ColourValue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColourValue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ColourValue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColourValue obj = null;
 		if(baseObj instanceof ColourValue)
		{
			obj = (ColourValue)baseObj;
		} else {
			obj = new ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColourValue");
			obj.increaseCast();
		}

		return obj;
	}
}
