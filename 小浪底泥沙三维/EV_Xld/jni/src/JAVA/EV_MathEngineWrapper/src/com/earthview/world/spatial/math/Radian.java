package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 弧度类,定义了弧度操作
 */
public class Radian extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CRadian", new RadianClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public Radian() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRadian", null);
	}

	/**
	 * 构造函数
	 * @param r 浮点型数据
	 */
	public Radian(double r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CRadian", list);
	}

	/**
	 * 构造函数
	 * @param d 度数数据
	 */
	public Radian(com.earthview.world.spatial.math.Degree d) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dPtr = new BasePointer(d);
		list.add("d", dPtr.get());
		Create("CRadian", list);
	}

	native private long OperatorAssign_Real(long pNativeObject, double f);
	/**
	 * 重载"="操作符
	 * @param f 实数
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorAssign(double f)
	{
		double fParamValue = f;
		long returnValue = OperatorAssign_Real(this.nativeObject.pointer, fParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CRadian(long pNativeObject, long r);
	/**
	 * 重载"="操作符
	 * @param r 弧度
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorAssign(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorAssign_CRadian(this.nativeObject.pointer, rParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CDegree(long pNativeObject, long d);
	/**
	 * 重载"="操作符
	 * @param d 度数
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorAssign(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		long returnValue = OperatorAssign_CDegree(this.nativeObject.pointer, dParamValue);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
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
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorPosivate()
	{
		long returnValue = OperatorPosivate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Radian __returnValue = new com.earthview.world.spatial.math.Radian(CreatedWhenConstruct.CWC_NotToCreate, "CRadian");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Radian)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRadian");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CRadian(long pNativeObject, long r);
	/**
	 * 重载"+"操作符
	 * @param r 弧度
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorPlus(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorPlus_CRadian(this.nativeObject.pointer, rParamValue);
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
	native private long OperatorPlus_CDegree(long pNativeObject, long d);
	/**
	 * 重载"+"操作符
	 * @param d 度数
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorPlus(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		long returnValue = OperatorPlus_CDegree(this.nativeObject.pointer, dParamValue);
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
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
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
	native private long OperatorMinus_CRadian(long pNativeObject, long r);
	/**
	 * 重载"-"操作符
	 * @param r 弧度
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorMinus(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		long returnValue = OperatorMinus_CRadian(this.nativeObject.pointer, rParamValue);
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
	native private long OperatorMinus_CDegree(long pNativeObject, long d);
	/**
	 * 重载"-"操作符
	 * @param d 度数
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorMinus(com.earthview.world.spatial.math.Degree d)
	{
		long dParamValue = d.nativeObject.pointer;
		long returnValue = OperatorMinus_CDegree(this.nativeObject.pointer, dParamValue);
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
	native private long OperatorMultiply_Real(long pNativeObject, double f);
	/**
	 * 重载"*"操作符
	 * @param f 实数
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorMultiply(double f)
	{
		double fParamValue = f;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fParamValue);
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
	native private long OperatorMultiply_CRadian(long pNativeObject, long f);
	/**
	 * 重载"*"操作符
	 * @param f 弧度
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorMultiply(com.earthview.world.spatial.math.Radian f)
	{
		long fParamValue = f.nativeObject.pointer;
		long returnValue = OperatorMultiply_CRadian(this.nativeObject.pointer, fParamValue);
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
	native private long OperatorDivide_Real(long pNativeObject, double f);
	/**
	 * 重载"/"操作符
	 * @param f 实数
	 * @return 弧度结果
	 */
	public com.earthview.world.spatial.math.Radian OperatorDivide(double f)
	{
		double fParamValue = f;
		long returnValue = OperatorDivide_Real(this.nativeObject.pointer, fParamValue);
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
	native private boolean OperatorLessThan_CRadian(long pNativeObject, long r);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="r">弧度</param>
	/// <returns>小于返回true，否则false</returns>
	public boolean OperatorLessThan(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CRadian(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_CRadian(long pNativeObject, long r);
	/// <summary>
	/// 重载"<="操作符
	/// </summary>
	/// <param name="r">弧度</param>
	/// <returns>小于等于返回true，否则false</returns>
	public boolean OperatorLessThanOrEqual(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = OperatorLessThanOrEqual_CRadian(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_CRadian(long pNativeObject, long r);
	/**
	 * 重载"=="操作符
	 * @param r 弧度
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CRadian(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CRadian(long pNativeObject, long r);
	/**
	 * 重载"！="操作符
	 * @param r 弧度
	 * @return 非等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CRadian(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_CRadian(long pNativeObject, long r);
	/**
	 * 重载">="操作符
	 * @param r 弧度
	 * @return 大于等于返回true，否则false
	 */
	public boolean OperatorGreaterThanOrEqual(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThanOrEqual_CRadian(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CRadian(long pNativeObject, long r);
	/**
	 * 重载">"操作符
	 * @param r 弧度
	 * @return 大于返回true，否则false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.spatial.math.Radian r)
	{
		long rParamValue = r.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CRadian(this.nativeObject.pointer, rParamValue);
		return returnValue;
	}
	public Radian(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Radian(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Radian fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Radian obj = null;
 		if(baseObj instanceof Radian)
		{
			obj = (Radian)baseObj;
		} else {
			obj = new Radian(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRadian");
			obj.increaseCast();
		}

		return obj;
	}
}
