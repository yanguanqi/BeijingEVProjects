package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数学类,定义了基本的数学函数
 */
public class EVMath extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMath", new EVMathClassFactory());
	}

	public enum AngleUnit implements INativeEnum<AngleUnit> {
		AU_DEGREE(AngleUnitHelper.ENUM_VALUES[0]),
		AU_RADIAN(AngleUnitHelper.ENUM_VALUES[1]);
		private int value;
		AngleUnit(int i) {
			this.value = i;
		}
		public AngleUnit getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final AngleUnit toEnum(int retval) {
			if(retval == AU_DEGREE.value){
				return AU_DEGREE;
			}
			else if(retval == AU_RADIAN.value){
				return AU_RADIAN;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class AngleUnitHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * CMath构造函数
	 * @param  
	 */
	public EVMath() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMath", null);
	}

	/**
	 * 构造函数
	 * @param trigTableSize 三角函数表容量
	 */
	public EVMath(long trigTableSize) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer trigTableSizePtr = new BasePointer(trigTableSize);
		list.add("trigTableSize", trigTableSizePtr.get());
		Create("CMath", list);
	}

	native private static int IAbs_ev_int32(int iValue);
	/**
	 * 求绝对值
	 * @param iValue 待计算值
	 * @return 绝对值
	 */
	public static int IAbs(int iValue)
	{
		int iValueParamValue = iValue;
		int returnValue = IAbs_ev_int32(iValueParamValue);
		return returnValue;
	}
	native private static int ICeil_ev_real32(float fValue);
	/**
	 * 求不小于浮点数的最小整数
	 * @param fValue 浮点数值
	 * @return 最小整数值
	 */
	public static int ICeil(float fValue)
	{
		float fValueParamValue = fValue;
		int returnValue = ICeil_ev_real32(fValueParamValue);
		return returnValue;
	}
	native private static int IFloor_ev_real32(float fValue);
	/**
	 * 求不大于浮点数的最小整数
	 * @param fValue 浮点数值
	 * @return 最大整数值
	 */
	public static int IFloor(float fValue)
	{
		float fValueParamValue = fValue;
		int returnValue = IFloor_ev_real32(fValueParamValue);
		return returnValue;
	}
	native private static int ISign_ev_int32(int iValue);
	/**
	 * 求数值的符号
	 * @param iValue 待求符号数值
	 * @return 返回符号-1为负，0为0，1为正
	 */
	public static int ISign(int iValue)
	{
		int iValueParamValue = iValue;
		int returnValue = ISign_ev_int32(iValueParamValue);
		return returnValue;
	}
	native private static double Abs_Real(double fValue);
	/**
	 * 求浮点数绝对值
	 * @param fValue 待计算值
	 * @return 绝对值
	 */
	public static double Abs(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Abs_Real(fValueParamValue);
		return returnValue;
	}
	native private static long Abs_CDegree(long dValue);
	/**
	 * 求角度数绝对值
	 * @param dValue 待求符号数值
	 * @return 绝对值
	 */
	public static com.earthview.world.spatial.math.Degree Abs(com.earthview.world.spatial.math.Degree dValue)
	{
		long dValueParamValue = dValue.nativeObject.pointer;
		long returnValue = Abs_CDegree(dValueParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private static long Abs_CRadian(long rValue);
	/**
	 * 求弧度数绝对值
	 * @param rValue 待求符号数值
	 * @return 绝对值
	 */
	public static com.earthview.world.spatial.math.Radian Abs(com.earthview.world.spatial.math.Radian rValue)
	{
		long rValueParamValue = rValue.nativeObject.pointer;
		long returnValue = Abs_CRadian(rValueParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long ACos_Real(double fValue);
	/**
	 * 求反余弦值
	 * @param fValue 待计算数值
	 * @return 反余弦值弧度
	 */
	public static com.earthview.world.spatial.math.Radian ACos(double fValue)
	{
		double fValueParamValue = fValue;
		long returnValue = ACos_Real(fValueParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long ACos_Real_ev_bool(double fValue, boolean fast);
	public static com.earthview.world.spatial.math.Radian ACos(double fValue, boolean fast)
	{
		double fValueParamValue = fValue;
		boolean fastParamValue = fast;
		long returnValue = ACos_Real_ev_bool(fValueParamValue, fastParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long ASin_Real(double fValue);
	/**
	 * 求反正弦值
	 * @param fValue 待计算数值
	 * @return 反正弦值弧度
	 */
	public static com.earthview.world.spatial.math.Radian ASin(double fValue)
	{
		double fValueParamValue = fValue;
		long returnValue = ASin_Real(fValueParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long ATan_Real(double fValue);
	/**
	 * 求反正切值
	 * @param fValue 待计算数值
	 * @return 反正切值弧度
	 */
	public static com.earthview.world.spatial.math.Radian ATan(double fValue)
	{
		double fValueParamValue = fValue;
		long returnValue = ATan_Real(fValueParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long ATan2_Real_Real(double fY, double fX);
	/**
	 * 求Y/X反正切值
	 * @param fY 待计算数值
	 * @param fX 待计算数值
	 * @return 反正切值弧度
	 */
	public static com.earthview.world.spatial.math.Radian ATan2(double fY, double fX)
	{
		double fYParamValue = fY;
		double fXParamValue = fX;
		long returnValue = ATan2_Real_Real(fYParamValue, fXParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static double Ceil_Real(double fValue);
	/**
	 * 求不小于浮点数的最小整数
	 * @param fValue 浮点数值
	 * @return 浮点型最小整数值
	 */
	public static double Ceil(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Ceil_Real(fValueParamValue);
		return returnValue;
	}
	native private static boolean isNaN_Real(double f);
	/**
	 * 判断是否是非数值型数据
	 * @param f 浮点数值
	 * @return 不是返回TURE，是返回False
	 */
	public static boolean isNaN(double f)
	{
		double fParamValue = f;
		boolean returnValue = isNaN_Real(fParamValue);
		return returnValue;
	}
	native private static double Cos_CRadian_ev_bool(long fValue, boolean useTables);
	/**
	 * 求余弦值
	 * @param fValue 弧度值
	 * @param useTables 标志是否使用三角函数表
	 * @return 余弦值
	 */
	public static double Cos(com.earthview.world.spatial.math.Radian fValue, boolean useTables)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		boolean useTablesParamValue = useTables;
		double returnValue = Cos_CRadian_ev_bool(fValueParamValue, useTablesParamValue);
		return returnValue;
	}
	native private static double Cos_CRadian(long fValue);
	/**
	 * 求余弦值
	 * @param fValue 弧度值
	 * @return 余弦值
	 */
	public static double Cos(com.earthview.world.spatial.math.Radian fValue)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		double returnValue = Cos_CRadian(fValueParamValue);
		return returnValue;
	}
	native private static double Cos_Real_ev_bool(double fValue, boolean useTables);
	/**
	 * 求余弦值
	 * @param fValue 浮点型数值
	 * @param useTables 标志是否使用三角函数表
	 * @return 余弦值
	 */
	public static double Cos(double fValue, boolean useTables)
	{
		double fValueParamValue = fValue;
		boolean useTablesParamValue = useTables;
		double returnValue = Cos_Real_ev_bool(fValueParamValue, useTablesParamValue);
		return returnValue;
	}
	native private static double Cos_Real(double fValue);
	/**
	 * 求余弦值
	 * @param fValue 浮点型数值
	 * @return 余弦值
	 */
	public static double Cos(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Cos_Real(fValueParamValue);
		return returnValue;
	}
	native private static double Exp_Real(double fValue);
	/**
	 * 求e的指数
	 * @param fValue 幂值
	 * @return 指数值
	 */
	public static double Exp(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Exp_Real(fValueParamValue);
		return returnValue;
	}
	native private static double Floor_Real(double fValue);
	/**
	 * 求不大于浮点数的最小整数
	 * @param fValue 浮点数值
	 * @return 浮点型最大整数值
	 */
	public static double Floor(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Floor_Real(fValueParamValue);
		return returnValue;
	}
	native private static double Log_Real(double fValue);
	/**
	 * 求自然对数
	 * @param fValue 浮点数值
	 * @return 自然对数值
	 */
	public static double Log(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Log_Real(fValueParamValue);
		return returnValue;
	}
	native private static double get_LOG2_void();
	public static double get_LOG2()
	{
		double jniValue = get_LOG2_void();
		
		return jniValue;
	}
	
	native private static double Log2_Real(double fValue);
	/**
	 * 求以2为底对数
	 * @param fValue 浮点数值
	 * @return 对数值
	 */
	public static double Log2(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Log2_Real(fValueParamValue);
		return returnValue;
	}
	native private static double LogN_Real_Real(double fBase, double fValue);
	/**
	 * 求以N为底对数
	 * @param fBase 对数的底
	 * @param fValue 浮点数值
	 * @return 对数值
	 */
	public static double LogN(double fBase, double fValue)
	{
		double fBaseParamValue = fBase;
		double fValueParamValue = fValue;
		double returnValue = LogN_Real_Real(fBaseParamValue, fValueParamValue);
		return returnValue;
	}
	native private static double Pow_Real_Real(double fBase, double fExponent);
	/**
	 * 求指数
	 * @param fBase 对数的底
	 * @param fExponent 浮点数值
	 * @return 指数值
	 */
	public static double Pow(double fBase, double fExponent)
	{
		double fBaseParamValue = fBase;
		double fExponentParamValue = fExponent;
		double returnValue = Pow_Real_Real(fBaseParamValue, fExponentParamValue);
		return returnValue;
	}
	native private static double Sign_Real(double fValue);
	/**
	 * 求浮点数值的符号
	 * @param fValue 待求符号数值
	 * @return 返回符号-1.0为负，0.0为0.0，1.0为正
	 */
	public static double Sign(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Sign_Real(fValueParamValue);
		return returnValue;
	}
	native private static long Sign_CRadian(long rValue);
	/**
	 * /求弧度数值的符号/
	 * @param rValue 待求符号数值
	 * @return 弧度型符号
	 */
	public static com.earthview.world.spatial.math.Radian Sign(com.earthview.world.spatial.math.Radian rValue)
	{
		long rValueParamValue = rValue.nativeObject.pointer;
		long returnValue = Sign_CRadian(rValueParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long Sign_CDegree(long dValue);
	/**
	 * 求度数数值的符号
	 * @param iValue 待求符号数值
	 * @return 度数型符号
	 */
	public static com.earthview.world.spatial.math.Degree Sign(com.earthview.world.spatial.math.Degree dValue)
	{
		long dValueParamValue = dValue.nativeObject.pointer;
		long returnValue = Sign_CDegree(dValueParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private static double Sin_CRadian_ev_bool(long fValue, boolean useTables);
	/**
	 * 求正弦值
	 * @param fValue 弧度值
	 * @param useTables 标志是否使用三角函数表
	 * @return 正弦值
	 */
	public static double Sin(com.earthview.world.spatial.math.Radian fValue, boolean useTables)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		boolean useTablesParamValue = useTables;
		double returnValue = Sin_CRadian_ev_bool(fValueParamValue, useTablesParamValue);
		return returnValue;
	}
	native private static double Sin_ev_real64(double dValue);
	/**
	 * 求正弦值
	 * @param dValue 弧度值
	 * @return 正弦值
	 */
	public static double Sin(double dValue)
	{
		double dValueParamValue = dValue;
		double returnValue = Sin_ev_real64(dValueParamValue);
		return returnValue;
	}
	native private static double Sin_CRadian(long fValue);
	/**
	 * 求正弦值
	 * @param fValue 弧度值
	 * @param useTables 标志是否使用三角函数表
	 * @return 正弦值
	 */
	public static double Sin(com.earthview.world.spatial.math.Radian fValue)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		double returnValue = Sin_CRadian(fValueParamValue);
		return returnValue;
	}
	native private static double Sin_Real_ev_bool(double fValue, boolean useTables);
	/**
	 * 求正弦值
	 * @param fValue 浮点型数值
	 * @param useTables 标志是否使用三角函数表
	 * @return 正弦值
	 */
	public static double Sin(double fValue, boolean useTables)
	{
		double fValueParamValue = fValue;
		boolean useTablesParamValue = useTables;
		double returnValue = Sin_Real_ev_bool(fValueParamValue, useTablesParamValue);
		return returnValue;
	}
	native private static double Sqr_Real(double fValue);
	/**
	 * 求平方值
	 * @param fValue 浮点型值底
	 * @return 平方值
	 */
	public static double Sqr(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Sqr_Real(fValueParamValue);
		return returnValue;
	}
	native private static double Sqrt_Real(double fValue);
	/**
	 * 求平方根
	 * @param fValue 浮点型值
	 * @return 根值
	 */
	public static double Sqrt(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Sqrt_Real(fValueParamValue);
		return returnValue;
	}
	native private static long Sqrt_CRadian(long fValue);
	/**
	 * 求平方根
	 * @param fValue 弧度型值
	 * @return 根值
	 */
	public static com.earthview.world.spatial.math.Radian Sqrt(com.earthview.world.spatial.math.Radian fValue)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		long returnValue = Sqrt_CRadian(fValueParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRadian");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private static long Sqrt_CDegree(long fValue);
	/**
	 * 求平方根
	 * @param fValue 度数型值
	 * @return 根值
	 */
	public static com.earthview.world.spatial.math.Degree Sqrt(com.earthview.world.spatial.math.Degree fValue)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		long returnValue = Sqrt_CDegree(fValueParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private static double InvSqrt_Real(double fValue);
	/**
	 * 求平方根倒数
	 * @param fValue 浮点型值
	 * @return 平方根倒数值
	 */
	public static double InvSqrt(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = InvSqrt_Real(fValueParamValue);
		return returnValue;
	}
	native private static double UnitRandom_void();
	/**
	 * 求基本随机数
	 * @return [0，1]随机数
	 */
	public static double UnitRandom()
	{
		double returnValue = UnitRandom_void();
		return returnValue;
	}
	native private static double RangeRandom_Real_Real(double fLow, double fHigh);
	/**
	 * 求随机数
	 * @param fLow 最小值
	 * @param fLow 最大值
	 * @return [fLow,fHigh]随机数
	 */
	public static double RangeRandom(double fLow, double fHigh)
	{
		double fLowParamValue = fLow;
		double fHighParamValue = fHigh;
		double returnValue = RangeRandom_Real_Real(fLowParamValue, fHighParamValue);
		return returnValue;
	}
	native private static double SymmetricRandom_void();
	/**
	 * 求对称随机数
	 * @return [-1，1]随机数
	 */
	public static double SymmetricRandom()
	{
		double returnValue = SymmetricRandom_void();
		return returnValue;
	}
	native private static double Tan_CRadian_ev_bool(long fValue, boolean useTables);
	/**
	 * 求正切数
	 * @param fValue 弧度值
	 * @param useTables 标志是否使用三角函数表
	 * @return 正切值
	 */
	public static double Tan(com.earthview.world.spatial.math.Radian fValue, boolean useTables)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		boolean useTablesParamValue = useTables;
		double returnValue = Tan_CRadian_ev_bool(fValueParamValue, useTablesParamValue);
		return returnValue;
	}
	native private static double Tan_CRadian(long fValue);
	/**
	 * 求正切数
	 * @param fValue 弧度值
	 * @return 正切值
	 */
	public static double Tan(com.earthview.world.spatial.math.Radian fValue)
	{
		long fValueParamValue = fValue.nativeObject.pointer;
		double returnValue = Tan_CRadian(fValueParamValue);
		return returnValue;
	}
	native private static double Tan_Real_ev_bool(double fValue, boolean useTables);
	/**
	 * 求正切数
	 * @param fValue 浮点型数值
	 * @param useTables 标志是否使用三角函数表
	 * @return 正切值
	 */
	public static double Tan(double fValue, boolean useTables)
	{
		double fValueParamValue = fValue;
		boolean useTablesParamValue = useTables;
		double returnValue = Tan_Real_ev_bool(fValueParamValue, useTablesParamValue);
		return returnValue;
	}
	native private static double Tan_Real(double fValue);
	/**
	 * 求正切数
	 * @param fValue 浮点型数值
	 * @return 正切值
	 */
	public static double Tan(double fValue)
	{
		double fValueParamValue = fValue;
		double returnValue = Tan_Real(fValueParamValue);
		return returnValue;
	}
	native private static double DegreesToRadians_Real(double degrees);
	/**
	 * 度数转换为弧度
	 * @param degrees 度数值
	 * @return 弧度值
	 */
	public static double DegreesToRadians(double degrees)
	{
		double degreesParamValue = degrees;
		double returnValue = DegreesToRadians_Real(degreesParamValue);
		return returnValue;
	}
	native private static double RadiansToDegrees_Real(double radians);
	/**
	 * 弧度值转换为度数值
	 * @param radians 弧度值
	 * @return 度数值
	 */
	public static double RadiansToDegrees(double radians)
	{
		double radiansParamValue = radians;
		double returnValue = RadiansToDegrees_Real(radiansParamValue);
		return returnValue;
	}
	native private static void setAngleUnit_AngleUnit(int unit);
	/**
	 * 设置角度单位
	 * @param unit 单位枚举
	 * @return 角度单位
	 */
	public static void setAngleUnit(com.earthview.world.spatial.math.EVMath.AngleUnit unit)
	{
		int unitParamValue = unit.getValue();
		setAngleUnit_AngleUnit(unitParamValue);
	}
	native private static int getAngleUnit_void();
	/**
	 * 获得角度单位
	 * @return 角度单位
	 */
	public static com.earthview.world.spatial.math.EVMath.AngleUnit getAngleUnit()
	{
		int returnValue = getAngleUnit_void();
		return com.earthview.world.spatial.math.EVMath.AngleUnit.toEnum(returnValue);
	}
	native private static double AngleUnitsToRadians_Real(double units);
	/**
	 * 当前角度单位转换为弧度
	 * @param unit 角度单位
	 * @return 弧度值
	 */
	public static double AngleUnitsToRadians(double units)
	{
		double unitsParamValue = units;
		double returnValue = AngleUnitsToRadians_Real(unitsParamValue);
		return returnValue;
	}
	native private static double RadiansToAngleUnits_Real(double radians);
	/**
	 * 弧度转换为当前角度单位
	 * @param unit 角度单位
	 * @return 弧度值
	 */
	public static double RadiansToAngleUnits(double radians)
	{
		double radiansParamValue = radians;
		double returnValue = RadiansToAngleUnits_Real(radiansParamValue);
		return returnValue;
	}
	native private static double AngleUnitsToDegrees_Real(double units);
	/**
	 * 当前角度单位转换为度数值
	 * @param unit 角度单位
	 * @return 度数值
	 */
	public static double AngleUnitsToDegrees(double units)
	{
		double unitsParamValue = units;
		double returnValue = AngleUnitsToDegrees_Real(unitsParamValue);
		return returnValue;
	}
	native private static double DegreesToAngleUnits_Real(double degrees);
	/**
	 * 度数转换为当前角度单位
	 * @param unit 角度单位
	 * @return 度数值
	 */
	public static double DegreesToAngleUnits(double degrees)
	{
		double degreesParamValue = degrees;
		double returnValue = DegreesToAngleUnits_Real(degreesParamValue);
		return returnValue;
	}
	native private static boolean pointInTri2D_CVector2_CVector2_CVector2_CVector2(long p, long a, long b, long c);
	/**
	 * 在二维空间中判断一个点是否在三角形内
	 * @param  p 二维点
	 * @param  a 三角形顶点
	 * @param  b 三角形顶点
	 * @param  c 三角形顶点
	 * @return 在三角形内返回true，否则返回false
	 */
	public static boolean pointInTri2D(com.earthview.world.spatial.math.Vector2 p, com.earthview.world.spatial.math.Vector2 a, com.earthview.world.spatial.math.Vector2 b, com.earthview.world.spatial.math.Vector2 c)
	{
		long pParamValue = p.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		boolean returnValue = pointInTri2D_CVector2_CVector2_CVector2_CVector2(pParamValue, aParamValue, bParamValue, cParamValue);
		return returnValue;
	}
	native private static boolean pointInTri3D_CVector3_CVector3_CVector3_CVector3_CVector3(long p, long a, long b, long c, long normal);
	/**
	 * 在三维空间中判断一个点是否在三角形内
	 * @param  p 三维点
	 * @param  a 三角形顶点
	 * @param  b 三角形顶点
	 * @param  c 三角形顶点
	 * @param  normal 三角形法线向量
	 * @return 在三角形内返回true，否则返回false
	 */
	public static boolean pointInTri3D(com.earthview.world.spatial.math.Vector3 p, com.earthview.world.spatial.math.Vector3 a, com.earthview.world.spatial.math.Vector3 b, com.earthview.world.spatial.math.Vector3 c, com.earthview.world.spatial.math.Vector3 normal)
	{
		long pParamValue = p.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		long normalParamValue = normal.nativeObject.pointer;
		boolean returnValue = pointInTri3D_CVector3_CVector3_CVector3_CVector3_CVector3(pParamValue, aParamValue, bParamValue, cParamValue, normalParamValue);
		return returnValue;
	}
	native private static long intersects_CRay_CPlane(long ray, long plane);
	/**
	 * 判断射线是否穿过平面
	 * @param ray 射线对象
	 * @param plane 平面对象
	 * @return 返回pair型值
	 */
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Plane plane)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long planeParamValue = plane.nativeObject.pointer;
		long returnValue = intersects_CRay_CPlane(rayParamValue, planeParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CSphere_ev_bool(long ray, long sphere, boolean discardInside);
	/**
	 * 判断射线是否穿过球体
	 * @param ray 射线对象
	 * @param sphere 球体对象
	 * @param discardInside 标志是否在球内发出光线
	 * @return 返回pair型值
	 */
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Sphere sphere, boolean discardInside)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long sphereParamValue = sphere.nativeObject.pointer;
		boolean discardInsideParamValue = discardInside;
		long returnValue = intersects_CRay_CSphere_ev_bool(rayParamValue, sphereParamValue, discardInsideParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CSphere(long ray, long sphere);
	/**
	 * 判断射线是否穿过球体
	 * @param ray 射线对象
	 * @param sphere 球体对象
	 * @return 返回pair型值
	 */
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Sphere sphere)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long sphereParamValue = sphere.nativeObject.pointer;
		long returnValue = intersects_CRay_CSphere(rayParamValue, sphereParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CAxisAlignedBox(long ray, long box);
	/**
	 * 判断射线是否穿过轴对齐矩形边界框
	 * @param ray 射线对象
	 * @param box 轴对齐矩形边界框对象
	 * @return 返回pair型值
	 */
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long boxParamValue = box.nativeObject.pointer;
		long returnValue = intersects_CRay_CAxisAlignedBox(rayParamValue, boxParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static boolean intersects_CRay_CAxisAlignedBox_Real_Real(long ray, long box, long d1, long d2);
	/**
	 * 判断射线是否穿过轴对齐矩形边界框
	 * @param ray 射线对象
	 * @param box 轴对齐矩形边界框对象
	 * @param d1 近交点距离
	 * @param d2 远交点距离
	 * @return 穿过返回true，否则false
	 */
	public static boolean intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.AxisAlignedBox box, DoublePointer d1, DoublePointer d2)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long boxParamValue = box.nativeObject.pointer;
		long d1ParamValue = (d1 == null ? 0L : d1.nativeObject.pointer);
		long d2ParamValue = (d2 == null ? 0L : d2.nativeObject.pointer);
		boolean returnValue = intersects_CRay_CAxisAlignedBox_Real_Real(rayParamValue, boxParamValue, d1ParamValue, d2ParamValue);
		return returnValue;
	}
	native private static long intersects_CRay_CVector3_CVector3_CVector3_CVector3_ev_bool_ev_bool(long ray, long a, long b, long c, long normal, boolean positiveSide, boolean negativeSide);
	/// <summary>
	/// 判断射线穿过三角形
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name=" a">三角形顶点</param>
	/// <param name=" b">三角形顶点</param>
	/// <param name=" c">三角形顶点</param>
	/// <param name=" normal">三角形法线向量</param>
	/// <param name="positiveSide">标志正面穿过</param>
	/// <param name="negativeSide">标志负面穿过</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 a, com.earthview.world.spatial.math.Vector3 b, com.earthview.world.spatial.math.Vector3 c, com.earthview.world.spatial.math.Vector3 normal, boolean positiveSide, boolean negativeSide)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		long normalParamValue = normal.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long returnValue = intersects_CRay_CVector3_CVector3_CVector3_CVector3_ev_bool_ev_bool(rayParamValue, aParamValue, bParamValue, cParamValue, normalParamValue, positiveSideParamValue, negativeSideParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CVector3_CVector3_CVector3_CVector3(long ray, long a, long b, long c, long normal);
	/// <summary>
	/// 判断射线穿过三角形
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name=" a">三角形顶点</param>
	/// <param name=" b">三角形顶点</param>
	/// <param name=" c">三角形顶点</param>
	/// <param name=" normal">三角形法线向量</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 a, com.earthview.world.spatial.math.Vector3 b, com.earthview.world.spatial.math.Vector3 c, com.earthview.world.spatial.math.Vector3 normal)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		long normalParamValue = normal.nativeObject.pointer;
		long returnValue = intersects_CRay_CVector3_CVector3_CVector3_CVector3(rayParamValue, aParamValue, bParamValue, cParamValue, normalParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CVector3_CVector3_CVector3_ev_bool_ev_bool(long ray, long a, long b, long c, boolean positiveSide, boolean negativeSide);
	/// <summary>
	/// 判断射线穿过三角形
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name=" a">三角形顶点</param>
	/// <param name=" b">三角形顶点</param>
	/// <param name=" c">三角形顶点</param>
	/// <param name="positiveSide">标志正面穿过</param>
	/// <param name="negativeSide">标志负面穿过</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 a, com.earthview.world.spatial.math.Vector3 b, com.earthview.world.spatial.math.Vector3 c, boolean positiveSide, boolean negativeSide)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long returnValue = intersects_CRay_CVector3_CVector3_CVector3_ev_bool_ev_bool(rayParamValue, aParamValue, bParamValue, cParamValue, positiveSideParamValue, negativeSideParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CVector3_CVector3_CVector3_ev_bool(long ray, long a, long b, long c, boolean positiveSide);
	/// <summary>
	/// 判断射线穿过三角形
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name=" a">三角形顶点</param>
	/// <param name=" b">三角形顶点</param>
	/// <param name=" c">三角形顶点</param>
	/// <param name="positiveSide">标志正面穿过</param>
	/// <param name="negativeSide">标志负面穿过</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 a, com.earthview.world.spatial.math.Vector3 b, com.earthview.world.spatial.math.Vector3 c, boolean positiveSide)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		boolean positiveSideParamValue = positiveSide;
		long returnValue = intersects_CRay_CVector3_CVector3_CVector3_ev_bool(rayParamValue, aParamValue, bParamValue, cParamValue, positiveSideParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_CVector3_CVector3_CVector3(long ray, long a, long b, long c);
	/// <summary>
	/// 判断射线穿过三角形
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name=" a">三角形顶点</param>
	/// <param name=" b">三角形顶点</param>
	/// <param name=" c">三角形顶点</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 a, com.earthview.world.spatial.math.Vector3 b, com.earthview.world.spatial.math.Vector3 c)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		long cParamValue = c.nativeObject.pointer;
		long returnValue = intersects_CRay_CVector3_CVector3_CVector3(rayParamValue, aParamValue, bParamValue, cParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static boolean intersects_CSphere_CAxisAlignedBox(long sphere, long box);
	/**
	 * 判断球体和轴对齐边界框相交情况
	 * @param sphere 球体对象
	 * @param box 轴对齐边界框对象
	 * @return 相交返回true，否则false
	 */
	public static boolean intersects(com.earthview.world.spatial.math.Sphere sphere, com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		long boxParamValue = box.nativeObject.pointer;
		boolean returnValue = intersects_CSphere_CAxisAlignedBox(sphereParamValue, boxParamValue);
		return returnValue;
	}
	native private static boolean intersects_CPlane_CAxisAlignedBox(long plane, long box);
	/**
	 * 判断平面和轴对齐边界框相交情况
	 * @param plane 平面对象
	 * @param box 轴对齐边界框对象
	 * @return 相交返回true，否则false
	 */
	public static boolean intersects(com.earthview.world.spatial.math.Plane plane, com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long planeParamValue = plane.nativeObject.pointer;
		long boxParamValue = box.nativeObject.pointer;
		boolean returnValue = intersects_CPlane_CAxisAlignedBox(planeParamValue, boxParamValue);
		return returnValue;
	}
	native private static long intersects_CRay_PlaneList_ev_bool(long ray, long planes, boolean normalIsOutside);
	/// <summary>
	/// 判断射线穿过凸多面体
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name="planeList">凸多面体vector集合</param>
	/// <param name="normalIsOutside">标志是否法线向外</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.PlaneList planes, boolean normalIsOutside)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long planesParamValue = planes.nativeObject.pointer;
		boolean normalIsOutsideParamValue = normalIsOutside;
		long returnValue = intersects_CRay_PlaneList_ev_bool(rayParamValue, planesParamValue, normalIsOutsideParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static long intersects_CRay_Planes_ev_bool(long ray, long planeList, boolean normalIsOutside);
	/// <summary>
	/// 判断射线穿过凸多面体
	/// </summary>
	/// <param name="ray">射线对象</param>
	/// <param name="planeList">凸多面体List集合</param>
	/// <param name="normalIsOutside">标志是否法线向外</param>
	/// <returns>射线穿过返回pair<true,distance>，否则pair<false,0></returns>
	public static com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Planes planeList, boolean normalIsOutside)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long planeListParamValue = planeList.nativeObject.pointer;
		boolean normalIsOutsideParamValue = normalIsOutside;
		long returnValue = intersects_CRay_Planes_ev_bool(rayParamValue, planeListParamValue, normalIsOutsideParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private static boolean intersects_CSphere_CPlane(long sphere, long plane);
	/**
	 * 判断球体和平面相交情况
	 * @param sphere 球体对象
	 * @param plane 平面对象
	 * @return 相交返回true，否则false
	 */
	public static boolean intersects(com.earthview.world.spatial.math.Sphere sphere, com.earthview.world.spatial.math.Plane plane)
	{
		long sphereParamValue = sphere.nativeObject.pointer;
		long planeParamValue = plane.nativeObject.pointer;
		boolean returnValue = intersects_CSphere_CPlane(sphereParamValue, planeParamValue);
		return returnValue;
	}
	native private static boolean RealEqual_Real_Real_Real(double a, double b, double tolerance);
	/**
	 * 判断浮点型数据在一定误差范围内是否相等
	 * @param a 浮点数
	 * @param b 浮点数
	 * @param tolerance 误差
	 * @return 相等返回true，否则false
	 */
	public static boolean RealEqual(double a, double b, double tolerance)
	{
		double aParamValue = a;
		double bParamValue = b;
		double toleranceParamValue = tolerance;
		boolean returnValue = RealEqual_Real_Real_Real(aParamValue, bParamValue, toleranceParamValue);
		return returnValue;
	}
	native private static boolean RealEqual_Real_Real(double a, double b);
	/**
	 * 判断浮点型数据在一定误差范围内是否相等
	 * @param a 浮点数
	 * @param b 浮点数
	 * @param tolerance 误差
	 * @return 相等返回true，否则false
	 */
	public static boolean RealEqual(double a, double b)
	{
		double aParamValue = a;
		double bParamValue = b;
		boolean returnValue = RealEqual_Real_Real(aParamValue, bParamValue);
		return returnValue;
	}
	native private static long calculateTangentSpaceVector_CVector3_CVector3_CVector3_Real_Real_Real_Real_Real_Real(long position1, long position2, long position3, double u1, double v1, double u2, double v2, double u3, double v3);
	/**
	 * /根据点和纹理坐标计算切线空间向量/
	 * @param position1 空间点
	 * @param position2 空间点
	 * @param position3 空间点
	 * @param u1 纹理坐标u
	 * @param v1 纹理坐标v
	 * @param u2 纹理坐标u
	 * @param v2 纹理坐标v
	 * @param u3 纹理坐标u
	 * @param v3 纹理坐标v
	 * @return 返回切线空间向量
	 */
	public static com.earthview.world.spatial.math.Vector3 calculateTangentSpaceVector(com.earthview.world.spatial.math.Vector3 position1, com.earthview.world.spatial.math.Vector3 position2, com.earthview.world.spatial.math.Vector3 position3, double u1, double v1, double u2, double v2, double u3, double v3)
	{
		long position1ParamValue = position1.nativeObject.pointer;
		long position2ParamValue = position2.nativeObject.pointer;
		long position3ParamValue = position3.nativeObject.pointer;
		double u1ParamValue = u1;
		double v1ParamValue = v1;
		double u2ParamValue = u2;
		double v2ParamValue = v2;
		double u3ParamValue = u3;
		double v3ParamValue = v3;
		long returnValue = calculateTangentSpaceVector_CVector3_CVector3_CVector3_Real_Real_Real_Real_Real_Real(position1ParamValue, position2ParamValue, position3ParamValue, u1ParamValue, v1ParamValue, u2ParamValue, v2ParamValue, u3ParamValue, v3ParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static long buildReflectionMatrix_CPlane(long p);
	/**
	 * 建立被穿过平面的反射矩阵
	 * @param p 平面对象
	 * @return 返回反射矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 buildReflectionMatrix(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		long returnValue = buildReflectionMatrix_CPlane(pParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static long calculateFaceNormal_CVector3_CVector3_CVector3(long v1, long v2, long v3);
	/**
	 * 计算包括w(偏离远点距离)信息的正面向量
	 * @param v1 空间向量
	 * @param v2 空间向量
	 * @param v3 空间向量
	 * @return 返回正面向量
	 */
	public static com.earthview.world.spatial.math.Vector4 calculateFaceNormal(com.earthview.world.spatial.math.Vector3 v1, com.earthview.world.spatial.math.Vector3 v2, com.earthview.world.spatial.math.Vector3 v3)
	{
		long v1ParamValue = v1.nativeObject.pointer;
		long v2ParamValue = v2.nativeObject.pointer;
		long v3ParamValue = v3.nativeObject.pointer;
		long returnValue = calculateFaceNormal_CVector3_CVector3_CVector3(v1ParamValue, v2ParamValue, v3ParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private static long calculateBasicFaceNormal_CVector3_CVector3_CVector3(long v1, long v2, long v3);
	/**
	 * 计算包括无w(偏离远点距离)信息的正面向量
	 * @param v1 空间向量
	 * @param v2 空间向量
	 * @param v3 空间向量
	 * @return 返回正面向量
	 */
	public static com.earthview.world.spatial.math.Vector3 calculateBasicFaceNormal(com.earthview.world.spatial.math.Vector3 v1, com.earthview.world.spatial.math.Vector3 v2, com.earthview.world.spatial.math.Vector3 v3)
	{
		long v1ParamValue = v1.nativeObject.pointer;
		long v2ParamValue = v2.nativeObject.pointer;
		long v3ParamValue = v3.nativeObject.pointer;
		long returnValue = calculateBasicFaceNormal_CVector3_CVector3_CVector3(v1ParamValue, v2ParamValue, v3ParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static long calculateFaceNormalWithoutNormalize_CVector3_CVector3_CVector3(long v1, long v2, long v3);
	/**
	 * 计算非规格化带w(偏离远点距离)信息的正面向量
	 * @param v1 空间向量
	 * @param v2 空间向量
	 * @param v3 空间向量
	 * @return 返回正面向量
	 */
	public static com.earthview.world.spatial.math.Vector4 calculateFaceNormalWithoutNormalize(com.earthview.world.spatial.math.Vector3 v1, com.earthview.world.spatial.math.Vector3 v2, com.earthview.world.spatial.math.Vector3 v3)
	{
		long v1ParamValue = v1.nativeObject.pointer;
		long v2ParamValue = v2.nativeObject.pointer;
		long v3ParamValue = v3.nativeObject.pointer;
		long returnValue = calculateFaceNormalWithoutNormalize_CVector3_CVector3_CVector3(v1ParamValue, v2ParamValue, v3ParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private static long calculateBasicFaceNormalWithoutNormalize_CVector3_CVector3_CVector3(long v1, long v2, long v3);
	/**
	 * 计算非规格化无w(偏离远点距离)信息的正面向量
	 * @param v1 空间向量
	 * @param v2 空间向量
	 * @param v3 空间向量
	 * @return 返回正面向量
	 */
	public static com.earthview.world.spatial.math.Vector3 calculateBasicFaceNormalWithoutNormalize(com.earthview.world.spatial.math.Vector3 v1, com.earthview.world.spatial.math.Vector3 v2, com.earthview.world.spatial.math.Vector3 v3)
	{
		long v1ParamValue = v1.nativeObject.pointer;
		long v2ParamValue = v2.nativeObject.pointer;
		long v3ParamValue = v3.nativeObject.pointer;
		long returnValue = calculateBasicFaceNormalWithoutNormalize_CVector3_CVector3_CVector3(v1ParamValue, v2ParamValue, v3ParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static double gaussianDistribution_Real_Real_Real(double x, double offset, double scale);
	/**
	 * 根据偏移和缩放参数，利用数据计算高斯分布的值
	 * @param x 浮点数据
	 * @param offset 偏移量
	 * @param scale 缩放系数
	 * @return 高斯分布值
	 */
	public static double gaussianDistribution(double x, double offset, double scale)
	{
		double xParamValue = x;
		double offsetParamValue = offset;
		double scaleParamValue = scale;
		double returnValue = gaussianDistribution_Real_Real_Real(xParamValue, offsetParamValue, scaleParamValue);
		return returnValue;
	}
	native private static double gaussianDistribution_Real_Real(double x, double offset);
	/**
	 * 根据偏移和缩放参数，利用数据计算高斯分布的值
	 * @param x 浮点数据
	 * @param offset 偏移量
	 * @return 高斯分布值
	 */
	public static double gaussianDistribution(double x, double offset)
	{
		double xParamValue = x;
		double offsetParamValue = offset;
		double returnValue = gaussianDistribution_Real_Real(xParamValue, offsetParamValue);
		return returnValue;
	}
	native private static double gaussianDistribution_Real(double x);
	/**
	 * 根据偏移和缩放参数，利用数据计算高斯分布的值
	 * @param x 浮点数据
	 * @return 高斯分布值
	 */
	public static double gaussianDistribution(double x)
	{
		double xParamValue = x;
		double returnValue = gaussianDistribution_Real(xParamValue);
		return returnValue;
	}
	native private static double Clamp_Real_Real_Real(double val, double minval, double maxval);
	/**
	 * 根据数据和一个范围返回值，若数据超过max，则返回max；若数据在范围内，返回数据值；若数据小于min，则返回min
	 * @param val 浮点型数据
	 * @param minval 范围最小值
	 * @param maxval 范围最大值
	 * @return 若数据超过max，则返回max；若数据在范围内，返回数据值；若数据小于min，则返回min
	 */
	public static double Clamp(double val, double minval, double maxval)
	{
		double valParamValue = val;
		double minvalParamValue = minval;
		double maxvalParamValue = maxval;
		double returnValue = Clamp_Real_Real_Real(valParamValue, minvalParamValue, maxvalParamValue);
		return returnValue;
	}
	native private static int Clamp_ev_int32_ev_int32_ev_int32(int val, int minval, int maxval);
	public static int Clamp(int val, int minval, int maxval)
	{
		int valParamValue = val;
		int minvalParamValue = minval;
		int maxvalParamValue = maxval;
		int returnValue = Clamp_ev_int32_ev_int32_ev_int32(valParamValue, minvalParamValue, maxvalParamValue);
		return returnValue;
	}
	native private static long makeViewMatrix_CVector3_CQuaternion_CMatrix4(long position, long orientation, long reflectMatrix);
	/**
	 * 计算可视矩阵
	 * @param position 视点坐标
	 * @param orientation 方向
	 * @param reflectMatrix 反射矩阵
	 * @return 可视矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 makeViewMatrix(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation, com.earthview.world.spatial.math.Matrix4 reflectMatrix)
	{
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long reflectMatrixParamValue = (reflectMatrix == null ? 0L : reflectMatrix.nativeObject.pointer);
		long returnValue = makeViewMatrix_CVector3_CQuaternion_CMatrix4(positionParamValue, orientationParamValue, reflectMatrixParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static long makeViewMatrix_CVector3_CQuaternion(long position, long orientation);
	/**
	 * 计算可视矩阵
	 * @param position 视点坐标
	 * @param orientation 方向
	 * @return 可视矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 makeViewMatrix(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Quaternion orientation)
	{
		long positionParamValue = position.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		long returnValue = makeViewMatrix_CVector3_CQuaternion(positionParamValue, orientationParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static double boundingRadiusFromAABB_CAxisAlignedBox(long aabb);
	/**
	 * 根据边界框计算边界半径
	 * @param aabb 边界框对象
	 * @return 半径值
	 */
	public static double boundingRadiusFromAABB(com.earthview.world.spatial.math.AxisAlignedBox aabb)
	{
		long aabbParamValue = aabb.nativeObject.pointer;
		double returnValue = boundingRadiusFromAABB_CAxisAlignedBox(aabbParamValue);
		return returnValue;
	}
	native private static double get_POS_INFINITY_void();
	public static double get_POS_INFINITY()
	{
		double jniValue = get_POS_INFINITY_void();
		
		return jniValue;
	}
	
	native private static double get_NEG_INFINITY_void();
	public static double get_NEG_INFINITY()
	{
		double jniValue = get_NEG_INFINITY_void();
		
		return jniValue;
	}
	
	native private static double get_PI_void();
	public static double get_PI()
	{
		double jniValue = get_PI_void();
		
		return jniValue;
	}
	
	native private static double get_TWO_PI_void();
	public static double get_TWO_PI()
	{
		double jniValue = get_TWO_PI_void();
		
		return jniValue;
	}
	
	native private static double get_HALF_PI_void();
	public static double get_HALF_PI()
	{
		double jniValue = get_HALF_PI_void();
		
		return jniValue;
	}
	
	native private static double get_fDeg2Rad_void();
	public static double get_fDeg2Rad()
	{
		double jniValue = get_fDeg2Rad_void();
		
		return jniValue;
	}
	
	native private static double get_fRad2Deg_void();
	public static double get_fRad2Deg()
	{
		double jniValue = get_fRad2Deg_void();
		
		return jniValue;
	}
	
	native private static double get_EARTH_RADIUS_void();
	public static double get_EARTH_RADIUS()
	{
		double jniValue = get_EARTH_RADIUS_void();
		
		return jniValue;
	}
	
	public EVMath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EVMath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EVMath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EVMath obj = null;
 		if(baseObj instanceof EVMath)
		{
			obj = (EVMath)baseObj;
		} else {
			obj = new EVMath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath");
			obj.increaseCast();
		}

		return obj;
	}
}
