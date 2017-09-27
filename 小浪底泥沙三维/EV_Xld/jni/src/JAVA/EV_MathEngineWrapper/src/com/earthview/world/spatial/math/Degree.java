package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * "*°"度类,定义了弧度操作
 */
public class Degree extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CDegree", new DegreeClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Degree() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDegree", null);
	}

	/**
	 * 构造函数
	 * @param d 浮点型数据
	 */
	public Degree(double d) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dPtr = new BasePointer(d);
		list.add("d", dPtr.get());
		Create("CDegree", list);
	}

	/**
	 * 构造函数
	 * @param r 弧度
	 */
	public Degree(com.earthview.world.spatial.math.Radian r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CDegree", list);
	}

	native private long OperatorAssign_Real(long pNativeObject, double f);
	/**
	 * 重载"="操作符
	 * @param r 实数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorAssign(double f)
	{
		double fParamValue = f;
		long returnValue = OperatorAssign_Real(this.nativeObject.pointer, fParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CDegree(long pNativeObject, long d);
	/**
	 * 重载"="操作符
	 * @param d 度数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorAssign(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		long returnValue = OperatorAssign_CDegree(this.nativeObject.pointer, dParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CRadian(long pNativeObject, long r);
	/**
	 * 重载"="操作符
	 * @param r 弧度
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorAssign(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CRadian(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private double valueDegrees_void(long pNativeObject);
	/**
	 * 转换成度数
	 * @param  
	 * @return 度数结果
	 */
	public double valueDegrees()
	{
		double returnValue = valueDegrees_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double valueRadians_void(long pNativeObject);
	/**
	 * 转换成弧度
	 * @param  
	 * @return 弧度结果
	 */
	public double valueRadians()
	{
		double returnValue = valueRadians_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double valueAngleUnits_void(long pNativeObject);
	/**
	 * 转换成角度单位
	 * @param  
	 * @return 角度单位
	 */
	public double valueAngleUnits()
	{
		double returnValue = valueAngleUnits_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorPosivate_void(long pNativeObject);
	/**
	 * 重载正号操作符
	 * @param  
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorPosivate()
	{
		long returnValue = OperatorPosivate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate, "CDegree");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CDegree(long pNativeObject, long d);
	/**
	 * 重载"+"操作符
	 * @param d 度数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorPlus(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		long returnValue = OperatorPlus_CDegree(this.nativeObject.pointer, dParamValue);
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
	native private long OperatorPlus_CRadian(long pNativeObject, long r);
	/**
	 * 重载"+"操作符
	 * @param r 弧度
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorPlus(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorPlus_CRadian(this.nativeObject.pointer, rParamValue);
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
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
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
	native private long OperatorMinus_CDegree(long pNativeObject, long d);
	/**
	 * 重载"-"操作符
	 * @param d 度数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorMinus(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		long returnValue = OperatorMinus_CDegree(this.nativeObject.pointer, dParamValue);
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
	native private long OperatorMinus_CRadian(long pNativeObject, long r);
	/**
	 * 重载"-"操作符
	 * @param r 弧度
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorMinus(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorMinus_CRadian(this.nativeObject.pointer, rParamValue);
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
	native private long OperatorMultiply_Real(long pNativeObject, double f);
	/**
	 * 重载"*"操作符
	 * @param f 实数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorMultiply(double f)
	{
		double fParamValue = f;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fParamValue);
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
	native private long OperatorMultiply_CDegree(long pNativeObject, long f);
	/**
	 * 重载"*"操作符
	 * @param f 度数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorMultiply(com.earthview.world.spatial.math.Degree f)
	{
		long fParamValue = f.nativeObject.pointer;
		long returnValue = OperatorMultiply_CDegree(this.nativeObject.pointer, fParamValue);
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
	native private long OperatorDivide_Real(long pNativeObject, double f);
	/**
	 * 重载"/"操作符
	 * @param f 实数
	 * @return 度数结果
	 */
	public com.earthview.world.spatial.math.Degree OperatorDivide(double f)
	{
		double fParamValue = f;
		long returnValue = OperatorDivide_Real(this.nativeObject.pointer, fParamValue);
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
	native private boolean OperatorLessThan_CDegree(long pNativeObject, long d);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="d">度数</param>
	/// <returns>小于返回true，否则false</returns>
	public boolean OperatorLessThan(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CDegree(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_CDegree(long pNativeObject, long d);
	/// <summary>
	/// 重载"<="操作符
	/// </summary>
	/// <param name="d">度数</param>
	/// <returns>小于等于返回true，否则false</returns>
	public boolean OperatorLessThanOrEqual(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		boolean returnValue = OperatorLessThanOrEqual_CDegree(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_CDegree(long pNativeObject, long d);
	/**
	 * 重载"=="操作符
	 * @param d 度数
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CDegree(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CDegree(long pNativeObject, long d);
	/**
	 * 重载"！="操作符
	 * @param d 度数
	 * @return 非等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CDegree(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_CDegree(long pNativeObject, long d);
	/**
	 * 重载">="操作符
	 * @param d 度数
	 * @return 大于等于返回true，否则false
	 */
	public boolean OperatorGreaterThanOrEqual(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThanOrEqual_CDegree(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CDegree(long pNativeObject, long d);
	/**
	 * 重载">"操作符
	 * @param r 度数
	 * @return 大于返回true，否则false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CDegree(this.nativeObject.pointer, dParamValue);
		return returnValue;
	}
	native private String toStringDms_void(long pNativeObject);
	/// <summary>
	///重载<<操作符
	/// </summary>
	/// <param name="o">输出流对象</param>
	/// <param name="v">输出度数</param>
	/// <returns>输出流对象</returns>
	public String toStringDms()
	{
		String returnValue = toStringDms_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toStringDmsLat_void(long pNativeObject);
	public String toStringDmsLat()
	{
		String returnValue = toStringDmsLat_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toStringDmsLon_void(long pNativeObject);
	public String toStringDmsLon()
	{
		String returnValue = toStringDmsLon_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static String toStringDms_ev_real64(double degree);
	public static String toStringDms(double degree)
	{
		double degreeParamValue = degree;
		String returnValue = toStringDms_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static long fromStringDms_EVString(String degreeString);
	public static com.earthview.world.spatial.math.Degree fromStringDms(String degreeString)
	{
		String degreeStringParamValue = degreeString;
		long returnValue = fromStringDms_EVString(degreeStringParamValue);
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
	native private static String toStringDmsLat_ev_real64_EVString_EVString(double degree, String southSuffix, String northSuffix);
	public static String toStringDmsLat(double degree, String southSuffix, String northSuffix)
	{
		double degreeParamValue = degree;
		String southSuffixParamValue = southSuffix;
		String northSuffixParamValue = northSuffix;
		String returnValue = toStringDmsLat_ev_real64_EVString_EVString(degreeParamValue, southSuffixParamValue, northSuffixParamValue);
		return returnValue;
	}
	native private static long fromStringDmsLat_EVString(String LatitudeString);
	public static com.earthview.world.spatial.math.Degree fromStringDmsLat(String LatitudeString)
	{
		String LatitudeStringParamValue = LatitudeString;
		long returnValue = fromStringDmsLat_EVString(LatitudeStringParamValue);
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
	native private static String toStringDmsLat_ev_real64(double degree);
	public static String toStringDmsLat(double degree)
	{
		double degreeParamValue = degree;
		String returnValue = toStringDmsLat_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static String toStringDmsLon_ev_real64_EVString_EVString(double degree, String eastSuffix, String westSuffix);
	public static String toStringDmsLon(double degree, String eastSuffix, String westSuffix)
	{
		double degreeParamValue = degree;
		String eastSuffixParamValue = eastSuffix;
		String westSuffixParamValue = westSuffix;
		String returnValue = toStringDmsLon_ev_real64_EVString_EVString(degreeParamValue, eastSuffixParamValue, westSuffixParamValue);
		return returnValue;
	}
	native private static String toStringDmsLon_ev_real64(double degree);
	public static String toStringDmsLon(double degree)
	{
		double degreeParamValue = degree;
		String returnValue = toStringDmsLon_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static long fromStringDmsLon_EVString(String longitudeString);
	public static com.earthview.world.spatial.math.Degree fromStringDmsLon(String longitudeString)
	{
		String longitudeStringParamValue = longitudeString;
		long returnValue = fromStringDmsLon_EVString(longitudeStringParamValue);
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
	public Degree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Degree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Degree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Degree obj = null;
 		if(baseObj instanceof Degree)
		{
			obj = (Degree)baseObj;
		} else {
			obj = new Degree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDegree");
			obj.increaseCast();
		}

		return obj;
	}
}
