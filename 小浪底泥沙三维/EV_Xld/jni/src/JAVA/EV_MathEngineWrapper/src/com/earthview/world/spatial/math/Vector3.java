package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维向量类定义了三维向量操作函数
 */
public class Vector3 extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CVector3", new Vector3ClassFactory());
	}

	native private double get_y_void(long pNativeObject);
	public double get_y()
	{
		double jniValue = get_y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y_Real (long pNativeObject, double value);
	public void set_y(double y)
	{
		double yParamValue = y;
		
		set_y_Real(this.nativeObject.pointer, yParamValue);
	}
	
	native private double get_z_void(long pNativeObject);
	public double get_z()
	{
		double jniValue = get_z_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_z_Real (long pNativeObject, double value);
	public void set_z(double z)
	{
		double zParamValue = z;
		
		set_z_Real(this.nativeObject.pointer, zParamValue);
	}
	
	native private double get_x_void(long pNativeObject);
	public double get_x()
	{
		double jniValue = get_x_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x_Real (long pNativeObject, double value);
	public void set_x(double x)
	{
		double xParamValue = x;
		
		set_x_Real(this.nativeObject.pointer, xParamValue);
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Vector3() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVector3", null);
	}

	/**
	 * 从三个实数构造三维向量
	 * @param fX x
	 * @param fY y
	 */
	public Vector3(double fX, double fY, double fZ) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		BasePointer fYPtr = new BasePointer(fY);
		list.add("fY", fYPtr.get());
		BasePointer fZPtr = new BasePointer(fZ);
		list.add("fZ", fZPtr.get());
		Create("CVector3", list);
	}

	/**
	 * 从三维坐标构造三维向量
	 * @param afCoordinate[3] 三维坐标
	 */
	public Vector3(NativeIntegerBuffer aiCoordinate) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer aiCoordinatePtr = new BasePointer(aiCoordinate);
		list.add("aiCoordinate", aiCoordinatePtr.get());
		Create("CVector3", list);
	}

	/**
	 * 从指针构造三维向量
	 * @param afCoordinate[2] 三维坐标
	 */
	public Vector3(DoublePointer r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CVector3", list);
	}

	/**
	 * 从一个实数构造三维向量
	 * @param scaler 缩放系数
	 */
	public Vector3(double scaler) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer scalerPtr = new BasePointer(scaler);
		list.add("scaler", scalerPtr.get());
		Create("CVector3", list);
	}

	native private void swap_CVector3(long pNativeObject, long other);
	/**
	 * 与其它三维向量交换数据
	 * @param other 其它三维向量
	 */
	public void swap(com.earthview.world.spatial.math.Vector3 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CVector3(this.nativeObject.pointer, otherParamValue);
	}
	native private double OperatorIndex_ev_size_t(long pNativeObject, long i);
	/**
	 * 重载[]下标操作符
	 * @param i 下标
	 * @return 向量元素
	 */
	public double OperatorIndex(long i)
	{
		long iParamValue = i;
		double returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private long ptr_void(long pNativeObject);
	/**
	 * 指针复制
	 * @param  
	 * @return 向量地址
	 */
	public DoublePointer ptr()
	{
		long returnValue = ptr_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long OperatorAssign_CVector3(long pNativeObject, long rkVector);
	/**
	 * 重载"="操作符
	 * @param rkVector 源三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorAssign(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorAssign_CVector3(this.nativeObject.pointer, rkVectorParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long OperatorAssign_Real(long pNativeObject, double fScaler);
	/**
	 * 重载"="操作符，从实数赋值
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorAssign(double fScaler)
	{
		double fScalerParamValue = fScaler;
		long returnValue = OperatorAssign_Real(this.nativeObject.pointer, fScalerParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CVector3(long pNativeObject, long rkVector);
	/**
	 * 重载"=="操作符
	 * @param rkVector 三维向量
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CVector3(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CVector3(long pNativeObject, long rkVector);
	/**
	 * 重载"！="操作符
	 * @param rkVector 三维向量
	 * @return 非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CVector3(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private long OperatorPlus_CVector3(long pNativeObject, long rkVector);
	/**
	 * 重载"+"操作符
	 * @param rkVector 三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorPlus(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorPlus_CVector3(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long OperatorMinus_CVector3(long pNativeObject, long rkVector);
	/**
	 * 重载"-"操作符
	 * @param rkVector 三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMinus(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorMinus_CVector3(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long OperatorMultiply_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"*"操作符，与实数相乘
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMultiply(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fScalarParamValue);
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
	native private long OperatorMultiply_CVector3(long pNativeObject, long rhs);
	/**
	 * 重载"*"操作符
	 * @param rhs 三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMultiply(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorMultiply_CVector3(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorDivide_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"/"操作符，与实数相除
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorDivide(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorDivide_Real(this.nativeObject.pointer, fScalarParamValue);
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
	native private long OperatorDivide_CVector3(long pNativeObject, long rhs);
	/**
	 * 重载"/"操作符
	 * @param rhs 三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorDivide(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorDivide_CVector3(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorPosivate_void(long pNativeObject);
	/**
	 * 重载正号操作符
	 * @param  三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorPosivate()
	{
		long returnValue = OperatorPosivate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate, "CVector3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
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
	native private long OperatorPlus_Real(long pNativeObject, double rhs);
	/**
	 * 重载"+"操作符，实数与三维向量相加
	 * @param lhs 左三维向量
	 * @param rhs 右实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorPlus(double rhs)
	{
		double rhsParamValue = rhs;
		long returnValue = OperatorPlus_Real(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorMinus_Real(long pNativeObject, double rhs);
	/**
	 * 重载"-"操作符，三维向量减实数
	 * @param lhs 左三维向量
	 * @param rhs 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMinus(double rhs)
	{
		double rhsParamValue = rhs;
		long returnValue = OperatorMinus_Real(this.nativeObject.pointer, rhsParamValue);
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
	native private double length_void(long pNativeObject);
	/**
	 * 求向量长度
	 * @param  
	 * @return 结果
	 */
	public double length()
	{
		double returnValue = length_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double squaredLength_void(long pNativeObject);
	/**
	 * 求向量长度的平方
	 * @param  
	 * @return 结果
	 */
	public double squaredLength()
	{
		double returnValue = squaredLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double distance_CVector3(long pNativeObject, long rhs);
	/**
	 * 求向量间距
	 * @param rhs 其它三维向量
	 * @return 结果
	 */
	public double distance(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		double returnValue = distance_CVector3(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private double squaredDistance_CVector3(long pNativeObject, long rhs);
	/**
	 * 求向量间距的平方
	 * @param rhs 其它三维向量
	 * @return 结果
	 */
	public double squaredDistance(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		double returnValue = squaredDistance_CVector3(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private double dotProduct_CVector3(long pNativeObject, long vec);
	/**
	 * 向量点乘
	 * @param vec 其它三维向量
	 * @return 结果
	 */
	public double dotProduct(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		double returnValue = dotProduct_CVector3(this.nativeObject.pointer, vecParamValue);
		return returnValue;
	}
	native private double absDotProduct_CVector3(long pNativeObject, long vec);
	/**
	 * 向量绝对值点乘
	 * @param vec 其它三维向量
	 * @return 结果
	 */
	public double absDotProduct(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		double returnValue = absDotProduct_CVector3(this.nativeObject.pointer, vecParamValue);
		return returnValue;
	}
	native private double normalise_void(long pNativeObject);
	/**
	 * 向量求模
	 * @param  
	 * @return 结果
	 */
	public double normalise()
	{
		double returnValue = normalise_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long crossProduct_CVector3(long pNativeObject, long rkVector);
	/**
	 * 向量叉乘
	 * @param rkVector 其它三维向量
	 * @return 叉乘结果
	 */
	public com.earthview.world.spatial.math.Vector3 crossProduct(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = crossProduct_CVector3(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long midPoint_CVector3(long pNativeObject, long vec);
	/**
	 * 求两向量中点
	 * @param vec 其它三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 midPoint(com.earthview.world.spatial.math.Vector3 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		long returnValue = midPoint_CVector3(this.nativeObject.pointer, vecParamValue);
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
	native private boolean OperatorLessThan_CVector3(long pNativeObject, long rhs);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="rhs">其它三维向量</param>
	/// <returns>向量每个元素小于其它向量元素则为true，否则false</returns>
	public boolean OperatorLessThan(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CVector3(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CVector3(long pNativeObject, long rhs);
	/**
	 * 重载">"操作符
	 * @param rhs 其它三维向量
	 * @return 向量每个元素大于其它向量元素则为true，否则false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CVector3(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void makeFloor_CVector3(long pNativeObject, long cmp);
	/**
	 * 于其它向量各分量的小值组合成新的向量
	 * @param cmp 其它三维向量
	 */
	public void makeFloor(com.earthview.world.spatial.math.Vector3 cmp)
	{
		long cmpParamValue = cmp.nativeObject.pointer;
		makeFloor_CVector3(this.nativeObject.pointer, cmpParamValue);
	}
	native private void makeCeil_CVector3(long pNativeObject, long cmp);
	/**
	 * 于其它向量各分量的大值组合成新的向量
	 * @param cmp 其它三维向量
	 */
	public void makeCeil(com.earthview.world.spatial.math.Vector3 cmp)
	{
		long cmpParamValue = cmp.nativeObject.pointer;
		makeCeil_CVector3(this.nativeObject.pointer, cmpParamValue);
	}
	native private long perpendicular_void(long pNativeObject);
	/**
	 * 返回向量的垂直向量
	 * @param  
	 * @return 返回垂直向量
	 */
	public com.earthview.world.spatial.math.Vector3 perpendicular()
	{
		long returnValue = perpendicular_void(this.nativeObject.pointer);
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
	native private long randomDeviant_CRadian(long pNativeObject, long angle);
	/**
	 * 偏离原向量一定角度的随机向量
	 * @param angle 角度
	 * @return 偏离的向量
	 */
	public com.earthview.world.spatial.math.Vector3 randomDeviant(com.earthview.world.spatial.math.Radian angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		long returnValue = randomDeviant_CRadian(this.nativeObject.pointer, angleParamValue);
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
	native private long randomDeviant_CRadian_CVector3(long pNativeObject, long angle, long up);
	/**
	 * 偏离原向量一定角度的随机向量
	 * @param angle 角度
	 * @param up 向量的垂直向量
	 * @return 偏离的向量
	 */
	public com.earthview.world.spatial.math.Vector3 randomDeviant(com.earthview.world.spatial.math.Radian angle, com.earthview.world.spatial.math.Vector3 up)
	{
		long angleParamValue = angle.nativeObject.pointer;
		long upParamValue = up.nativeObject.pointer;
		long returnValue = randomDeviant_CRadian_CVector3(this.nativeObject.pointer, angleParamValue, upParamValue);
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
	native private long angleBetween_CVector3(long pNativeObject, long dest);
	/**
	 * 求向量夹角
	 * @param dest 另一向量
	 * @return 向量夹角
	 */
	public com.earthview.world.spatial.math.Radian angleBetween(com.earthview.world.spatial.math.Vector3 dest)
	{
		long destParamValue = dest.nativeObject.pointer;
		long returnValue = angleBetween_CVector3(this.nativeObject.pointer, destParamValue);
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
	native private long getRotationTo_CVector3_CVector3(long pNativeObject, long dest, long fallbackAxis);
	/**
	 * 求旋转到另一向量的旋转四元数
	 * @param dest 另一向量
	 * @param fallbackAxis 依靠向量轴
	 * @return 向量夹角
	 */
	public com.earthview.world.spatial.math.Quaternion getRotationTo(com.earthview.world.spatial.math.Vector3 dest, com.earthview.world.spatial.math.Vector3 fallbackAxis)
	{
		long destParamValue = dest.nativeObject.pointer;
		long fallbackAxisParamValue = fallbackAxis.nativeObject.pointer;
		long returnValue = getRotationTo_CVector3_CVector3(this.nativeObject.pointer, destParamValue, fallbackAxisParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long getRotationTo_CVector3(long pNativeObject, long dest);
	/**
	 * 求旋转到另一向量的旋转四元数
	 * @param dest 另一向量
	 * @return 向量夹角
	 */
	public com.earthview.world.spatial.math.Quaternion getRotationTo(com.earthview.world.spatial.math.Vector3 dest)
	{
		long destParamValue = dest.nativeObject.pointer;
		long returnValue = getRotationTo_CVector3(this.nativeObject.pointer, destParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private boolean isZeroLength_void(long pNativeObject);
	/**
	 * 判断向量是否为零向量
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean isZeroLength()
	{
		boolean returnValue = isZeroLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long normalisedCopy_void(long pNativeObject);
	/**
	 * 返回标准化向量
	 * @param  
	 * @return 返回标准化向量
	 */
	public com.earthview.world.spatial.math.Vector3 normalisedCopy()
	{
		long returnValue = normalisedCopy_void(this.nativeObject.pointer);
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
	native private long reflect_CVector3(long pNativeObject, long normal);
	/**
	 * 根据平面的法线向量，计算反射向量
	 * @param normal 平面的法线向量
	 * @return 反射向量
	 */
	public com.earthview.world.spatial.math.Vector3 reflect(com.earthview.world.spatial.math.Vector3 normal)
	{
		long normalParamValue = normal.nativeObject.pointer;
		long returnValue = reflect_CVector3(this.nativeObject.pointer, normalParamValue);
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
	native private boolean positionEquals_CVector3(long pNativeObject, long rhs);
	/**
	 * 在一定公差内判断两三维点是否相等
	 * @param rhs 另一三维点
	 * @return 相等返回true，否则false
	 */
	public boolean positionEquals(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = positionEquals_CVector3(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean positionEquals_CVector3_Real(long pNativeObject, long rhs, double tolerance);
	/**
	 * 在一定公差内判断两三维点是否相等
	 * @param rhs 另一三维点
	 * @param tolerance 公差
	 * @return 相等返回true，否则false
	 */
	public boolean positionEquals(com.earthview.world.spatial.math.Vector3 rhs, double tolerance)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		boolean returnValue = positionEquals_CVector3_Real(this.nativeObject.pointer, rhsParamValue, toleranceParamValue);
		return returnValue;
	}
	native private boolean positionCloses_CVector3(long pNativeObject, long rhs);
	/**
	 * 在一定公差内判断两三维点是否相近
	 * @param rhs 另一三维点
	 * @param tolerance 公差
	 * @return 相近返回true，否则false
	 */
	public boolean positionCloses(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = positionCloses_CVector3(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean positionCloses_CVector3_Real(long pNativeObject, long rhs, double tolerance);
	/**
	 * 在一定公差内判断两三维点是否相近
	 * @param rhs 另一三维点
	 * @param tolerance 公差
	 * @return 相近返回true，否则false
	 */
	public boolean positionCloses(com.earthview.world.spatial.math.Vector3 rhs, double tolerance)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		double toleranceParamValue = tolerance;
		boolean returnValue = positionCloses_CVector3_Real(this.nativeObject.pointer, rhsParamValue, toleranceParamValue);
		return returnValue;
	}
	native private boolean directionEquals_CVector3_CRadian(long pNativeObject, long rhs, long tolerance);
	/**
	 * 在一定夹角范围内判断两三维向量是否方向一致
	 * @param rhs 另一三维点
	 * @param tolerance 夹角公差
	 * @return 方向一致返回true，否则false
	 */
	public boolean directionEquals(com.earthview.world.spatial.math.Vector3 rhs, com.earthview.world.spatial.math.Radian tolerance)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long toleranceParamValue = tolerance.nativeObject.pointer;
		boolean returnValue = directionEquals_CVector3_CRadian(this.nativeObject.pointer, rhsParamValue, toleranceParamValue);
		return returnValue;
	}
	native private boolean isNaN_void(long pNativeObject);
	/**
	 * 判断向量元素值是否非数值
	 * @param  
	 * @return 元素存在非数值返回true，否则false
	 */
	public boolean isNaN()
	{
		boolean returnValue = isNaN_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long primaryAxis_void(long pNativeObject);
	//// Extract the primary (dominant) axis from this direction vector
	public com.earthview.world.spatial.math.Vector3 primaryAxis()
	{
		long returnValue = primaryAxis_void(this.nativeObject.pointer);
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
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.math.Vector3 get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_UNIT_X_void();
	public static com.earthview.world.spatial.math.Vector3 get_UNIT_X()
	{
		long jniValue = get_UNIT_X_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_UNIT_Y_void();
	public static com.earthview.world.spatial.math.Vector3 get_UNIT_Y()
	{
		long jniValue = get_UNIT_Y_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_UNIT_Z_void();
	public static com.earthview.world.spatial.math.Vector3 get_UNIT_Z()
	{
		long jniValue = get_UNIT_Z_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_NEGATIVE_UNIT_X_void();
	public static com.earthview.world.spatial.math.Vector3 get_NEGATIVE_UNIT_X()
	{
		long jniValue = get_NEGATIVE_UNIT_X_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_NEGATIVE_UNIT_Y_void();
	public static com.earthview.world.spatial.math.Vector3 get_NEGATIVE_UNIT_Y()
	{
		long jniValue = get_NEGATIVE_UNIT_Y_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_NEGATIVE_UNIT_Z_void();
	public static com.earthview.world.spatial.math.Vector3 get_NEGATIVE_UNIT_Z()
	{
		long jniValue = get_NEGATIVE_UNIT_Z_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_UNIT_SCALE_void();
	public static com.earthview.world.spatial.math.Vector3 get_UNIT_SCALE()
	{
		long jniValue = get_UNIT_SCALE_void();
		
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	public Vector3(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Vector3(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Vector3 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Vector3 obj = null;
 		if(baseObj instanceof Vector3)
		{
			obj = (Vector3)baseObj;
		} else {
			obj = new Vector3(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVector3");
			obj.increaseCast();
		}

		return obj;
	}
}
