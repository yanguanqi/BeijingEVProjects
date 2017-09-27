package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 四元数类,定义了四元数操作函数
 */
public class Quaternion extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CQuaternion", new QuaternionClassFactory());
	}

	/**
	 * 从四个实数构造函数
	 * @param fW w
	 * @param fX x
	 * @param fY y
	 * @param fZ z
	 */
	public Quaternion(double fW, double fX, double fY, double fZ) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fWPtr = new BasePointer(fW);
		list.add("fW", fWPtr.get());
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		BasePointer fYPtr = new BasePointer(fY);
		list.add("fY", fYPtr.get());
		BasePointer fZPtr = new BasePointer(fZ);
		list.add("fZ", fZPtr.get());
		Create("CQuaternion", list);
	}

	public Quaternion(double fW, double fX, double fY) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fWPtr = new BasePointer(fW);
		list.add("fW", fWPtr.get());
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		BasePointer fYPtr = new BasePointer(fY);
		list.add("fY", fYPtr.get());
		Create("CQuaternion", list);
	}

	public Quaternion(double fW, double fX) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fWPtr = new BasePointer(fW);
		list.add("fW", fWPtr.get());
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		Create("CQuaternion", list);
	}

	public Quaternion(double fW) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fWPtr = new BasePointer(fW);
		list.add("fW", fWPtr.get());
		Create("CQuaternion", list);
	}

	public Quaternion() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CQuaternion", null);
	}

	/**
	 * 从旋转矩阵构造函数
	 * @param rot 旋转矩阵
	 */
	public Quaternion(com.earthview.world.spatial.math.Matrix3 rot) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rotPtr = new BasePointer(rot);
		list.add("rot", rotPtr.get());
		Create("CQuaternion", list);
	}

	/**
	 * 从弧度角和轴向量构造函数
	 * @param rfAngle 弧度角
	 * @param rkAxis 轴向量
	 */
	public Quaternion(com.earthview.world.spatial.math.Radian rfAngle, com.earthview.world.spatial.math.Vector3 rkAxis) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rfAnglePtr = new BasePointer(rfAngle);
		list.add("rfAngle", rfAnglePtr.get());
		BasePointer rkAxisPtr = new BasePointer(rkAxis);
		list.add("rkAxis", rkAxisPtr.get());
		Create("CQuaternion", list);
	}

	/**
	 * 由3个向量表达的旋转矩阵生成四元数构造函数
	 * @param xaxis x轴向量
	 * @param yaxis y轴向量
	 * @param zaxis z轴向量
	 */
	public Quaternion(com.earthview.world.spatial.math.Vector3 xaxis, com.earthview.world.spatial.math.Vector3 yaxis, com.earthview.world.spatial.math.Vector3 zaxis) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xaxisPtr = new BasePointer(xaxis);
		list.add("xaxis", xaxisPtr.get());
		BasePointer yaxisPtr = new BasePointer(yaxis);
		list.add("yaxis", yaxisPtr.get());
		BasePointer zaxisPtr = new BasePointer(zaxis);
		list.add("zaxis", zaxisPtr.get());
		Create("CQuaternion", list);
	}

	/**
	 * 从实数数组构造函数
	 * @param valptr 实数数组
	 */
	public Quaternion(DoublePointer valptr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer valptrPtr = new BasePointer(valptr);
		list.add("valptr", valptrPtr.get());
		Create("CQuaternion", list);
	}

	native private void swap_CQuaternion(long pNativeObject, long other);
	/**
	 * 与其它四元数交换数据
	 * @param other 其它四元数
	 */
	public void swap(com.earthview.world.spatial.math.Quaternion other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CQuaternion(this.nativeObject.pointer, otherParamValue);
	}
	native private double OperatorIndex_ev_size_t(long pNativeObject, long i);
	/**
	 * 重载[]下标操作符
	 * @param i 下标
	 * @return 四元数元素
	 */
	public double OperatorIndex(long i)
	{
		long iParamValue = i;
		double returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, iParamValue);
		return returnValue;
	}
	native private long ptr_void(long pNativeObject);
	/**
	 * 取得四元数首地址
	 * @param  
	 * @return 四元数地址
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
	native private void FromRotationMatrix_CMatrix3(long pNativeObject, long kRot);
	/**
	 * 从旋转矩阵构造四元数
	 * @param rot 旋转矩阵
	 */
	public void FromRotationMatrix(com.earthview.world.spatial.math.Matrix3 kRot)
	{
		long kRotParamValue = kRot.nativeObject.pointer;
		FromRotationMatrix_CMatrix3(this.nativeObject.pointer, kRotParamValue);
	}
	native private void ToRotationMatrix_CMatrix3(long pNativeObject, long kRot);
	/**
	 * 将四元数转换成旋转矩阵
	 * @param rot 旋转矩阵
	 */
	public void ToRotationMatrix(com.earthview.world.spatial.math.Matrix3 kRot)
	{
		long kRotParamValue = kRot.nativeObject.pointer;
		ToRotationMatrix_CMatrix3(this.nativeObject.pointer, kRotParamValue);
	}
	native private void FromAngleAxis_CRadian_CVector3(long pNativeObject, long rfAngle, long rkAxis);
	/**
	 * 从弧度角和轴向量构造四元数
	 * @param rfAngle 弧度角
	 * @param rkAxis 轴向量
	 */
	public void FromAngleAxis(com.earthview.world.spatial.math.Radian rfAngle, com.earthview.world.spatial.math.Vector3 rkAxis)
	{
		long rfAngleParamValue = rfAngle.nativeObject.pointer;
		long rkAxisParamValue = rkAxis.nativeObject.pointer;
		FromAngleAxis_CRadian_CVector3(this.nativeObject.pointer, rfAngleParamValue, rkAxisParamValue);
	}
	native private void ToAngleAxis_CRadian_CVector3(long pNativeObject, long rfAngle, long rkAxis);
	/**
	 * 将四元数转换成弧度角和轴向量
	 * @param rfAngle 弧度角
	 * @param rkAxis 轴向量
	 */
	public void ToAngleAxis(com.earthview.world.spatial.math.Radian rfAngle, com.earthview.world.spatial.math.Vector3 rkAxis)
	{
		long rfAngleParamValue = rfAngle.nativeObject.pointer;
		long rkAxisParamValue = rkAxis.nativeObject.pointer;
		ToAngleAxis_CRadian_CVector3(this.nativeObject.pointer, rfAngleParamValue, rkAxisParamValue);
	}
	native private void ToAngleAxis_CDegree_CVector3(long pNativeObject, long dAngle, long rkAxis);
	/**
	 * 将四元数转换成弧度角和轴向量
	 * @param rfAngle 弧度角
	 * @param rkAxis 轴向量
	 */
	public void ToAngleAxis(com.earthview.world.spatial.math.Degree dAngle, com.earthview.world.spatial.math.Vector3 rkAxis)
	{
		long dAngleParamValue = dAngle.nativeObject.pointer;
		long rkAxisParamValue = rkAxis.nativeObject.pointer;
		ToAngleAxis_CDegree_CVector3(this.nativeObject.pointer, dAngleParamValue, rkAxisParamValue);
	}
	native private void FromAxes_CVector3_CVector3_CVector3(long pNativeObject, long xAxis, long yAxis, long zAxis);
	/**
	 * 由3个向量表达的旋转矩阵生成四元数
	 * @param xaxis x轴向量
	 * @param yaxis y轴向量
	 * @param zaxis z轴向量
	 */
	public void FromAxes(com.earthview.world.spatial.math.Vector3 xAxis, com.earthview.world.spatial.math.Vector3 yAxis, com.earthview.world.spatial.math.Vector3 zAxis)
	{
		long xAxisParamValue = xAxis.nativeObject.pointer;
		long yAxisParamValue = yAxis.nativeObject.pointer;
		long zAxisParamValue = zAxis.nativeObject.pointer;
		FromAxes_CVector3_CVector3_CVector3(this.nativeObject.pointer, xAxisParamValue, yAxisParamValue, zAxisParamValue);
	}
	native private void ToAxes_CVector3_CVector3_CVector3(long pNativeObject, long xAxis, long yAxis, long zAxis);
	/**
	 * 将四元数转换成3个向量表达的旋转矩阵
	 * @param xaxis x轴向量
	 * @param yaxis y轴向量
	 * @param zaxis z轴向量
	 */
	public void ToAxes(com.earthview.world.spatial.math.Vector3 xAxis, com.earthview.world.spatial.math.Vector3 yAxis, com.earthview.world.spatial.math.Vector3 zAxis)
	{
		long xAxisParamValue = xAxis.nativeObject.pointer;
		long yAxisParamValue = yAxis.nativeObject.pointer;
		long zAxisParamValue = zAxis.nativeObject.pointer;
		ToAxes_CVector3_CVector3_CVector3(this.nativeObject.pointer, xAxisParamValue, yAxisParamValue, zAxisParamValue);
	}
	native private long xAxis_void(long pNativeObject);
	/**
	 * 输出x轴向量
	 * @param  
	 * @return x轴向量
	 */
	public com.earthview.world.spatial.math.Vector3 xAxis()
	{
		long returnValue = xAxis_void(this.nativeObject.pointer);
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
	native private long yAxis_void(long pNativeObject);
	/**
	 * 输出y轴向量
	 * @param  
	 * @return y轴向量
	 */
	public com.earthview.world.spatial.math.Vector3 yAxis()
	{
		long returnValue = yAxis_void(this.nativeObject.pointer);
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
	native private long zAxis_void(long pNativeObject);
	/**
	 * 输出z轴向量
	 * @param  
	 * @return z轴向量
	 */
	public com.earthview.world.spatial.math.Vector3 zAxis()
	{
		long returnValue = zAxis_void(this.nativeObject.pointer);
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
	native private long OperatorAssign_CQuaternion(long pNativeObject, long rkQ);
	/**
	 * 重载"="操作符
	 * @param rkQ 源四元数
	 * @return 赋值四元数
	 */
	public com.earthview.world.spatial.math.Quaternion OperatorAssign(com.earthview.world.spatial.math.Quaternion rkQ)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = OperatorAssign_CQuaternion(this.nativeObject.pointer, rkQParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CQuaternion(long pNativeObject, long rkQ);
	/**
	 * 重载"+"操作符
	 * @param rkQ 四元数
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion OperatorPlus(com.earthview.world.spatial.math.Quaternion rkQ)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = OperatorPlus_CQuaternion(this.nativeObject.pointer, rkQParamValue);
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
	native private long OperatorMinus_CQuaternion(long pNativeObject, long rkQ);
	/**
	 * 重载"-"操作符
	 * @param rkQ 四元数
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion OperatorMinus(com.earthview.world.spatial.math.Quaternion rkQ)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = OperatorMinus_CQuaternion(this.nativeObject.pointer, rkQParamValue);
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
	native private long OperatorMultiply_CQuaternion(long pNativeObject, long rkQ);
	/**
	 * 重载"*"操作符
	 * @param rkQ 四元数
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion OperatorMultiply(com.earthview.world.spatial.math.Quaternion rkQ)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = OperatorMultiply_CQuaternion(this.nativeObject.pointer, rkQParamValue);
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
	native private long OperatorMultiply_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"*"操作符，四元数与实数相乘
	 * @param fScalar 实数
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion OperatorMultiply(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fScalarParamValue);
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
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
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
	native private boolean OperatorEquals_CQuaternion(long pNativeObject, long rhs);
	/**
	 * 重载"=="操作符
	 * @param rhs 四元数
	 * @return 结果相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Quaternion rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CQuaternion(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CQuaternion(long pNativeObject, long rhs);
	/**
	 * 重载"！="操作符
	 * @param rhs 四元数
	 * @return 结果非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Quaternion rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CQuaternion(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private double Dot_CQuaternion(long pNativeObject, long rkQ);
	/**
	 * 点乘
	 * @param rkQ 四元数
	 * @return 结果
	 */
	public double Dot(com.earthview.world.spatial.math.Quaternion rkQ)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		double returnValue = Dot_CQuaternion(this.nativeObject.pointer, rkQParamValue);
		return returnValue;
	}
	native private double Norm_void(long pNativeObject);
	/**
	 * 求模
	 * @param  
	 * @return 结果
	 */
	public double Norm()
	{
		double returnValue = Norm_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double normalise_void(long pNativeObject);
	/**
	 * 单位化
	 * @param  
	 * @return 标准化前四元数大小
	 */
	public double normalise()
	{
		double returnValue = normalise_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long Inverse_void(long pNativeObject);
	/**
	 * 求逆
	 * @param  
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion Inverse()
	{
		long returnValue = Inverse_void(this.nativeObject.pointer);
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
	native private long UnitInverse_void(long pNativeObject);
	/**
	 * 单位四元数求逆
	 * @param  
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion UnitInverse()
	{
		long returnValue = UnitInverse_void(this.nativeObject.pointer);
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
	native private long Exp_void(long pNativeObject);
	/**
	 * 求四元数的指数，即e的四元数次方
	 * @param  
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion Exp()
	{
		long returnValue = Exp_void(this.nativeObject.pointer);
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
	native private long Log_void(long pNativeObject);
	/**
	 * 求以e为底求四元数的对数
	 * @param  
	 * @return 结果四元数
	 */
	public com.earthview.world.spatial.math.Quaternion Log()
	{
		long returnValue = Log_void(this.nativeObject.pointer);
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
	native private long OperatorMultiply_CVector3(long pNativeObject, long rkVector);
	/**
	 * 用四元数旋转向量
	 * @param  
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMultiply(com.earthview.world.spatial.math.Vector3 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorMultiply_CVector3(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long getRoll_ev_bool(long pNativeObject, boolean reprojectAxis);
	/**
	 * 获得绕Z轴的旋转角度
	 * @param reprojectAxis 是否将Y分量投影到XOY平面
	 * @return 弧度角
	 */
	public com.earthview.world.spatial.math.Radian getRoll(boolean reprojectAxis)
	{
		boolean reprojectAxisParamValue = reprojectAxis;
		long returnValue = getRoll_ev_bool(this.nativeObject.pointer, reprojectAxisParamValue);
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
	native private long getRoll_void(long pNativeObject);
	/**
	 * 获得绕Z轴的旋转角度
	 * @param  
	 * @return 弧度角
	 */
	public com.earthview.world.spatial.math.Radian getRoll()
	{
		long returnValue = getRoll_void(this.nativeObject.pointer);
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
	native private long getPitch_ev_bool(long pNativeObject, boolean reprojectAxis);
	/**
	 * 获得绕X轴的旋转角度
	 * @param reprojectAxis 是否将Z分量投影到XOY平面
	 * @return 弧度角
	 */
	public com.earthview.world.spatial.math.Radian getPitch(boolean reprojectAxis)
	{
		boolean reprojectAxisParamValue = reprojectAxis;
		long returnValue = getPitch_ev_bool(this.nativeObject.pointer, reprojectAxisParamValue);
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
	native private long getPitch_void(long pNativeObject);
	/**
	 * 获得绕X轴的旋转角度
	 * @param  
	 * @return 弧度角
	 */
	public com.earthview.world.spatial.math.Radian getPitch()
	{
		long returnValue = getPitch_void(this.nativeObject.pointer);
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
	native private long getYaw_ev_bool(long pNativeObject, boolean reprojectAxis);
	/**
	 * 获得绕Y轴的旋转角度
	 * @param reprojectAxis 是否将Y分量投影到XOZ平面
	 * @return 弧度角
	 */
	public com.earthview.world.spatial.math.Radian getYaw(boolean reprojectAxis)
	{
		boolean reprojectAxisParamValue = reprojectAxis;
		long returnValue = getYaw_ev_bool(this.nativeObject.pointer, reprojectAxisParamValue);
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
	native private long getYaw_void(long pNativeObject);
	/**
	 * 获得绕Y轴的旋转角度
	 * @param  
	 * @return 弧度角
	 */
	public com.earthview.world.spatial.math.Radian getYaw()
	{
		long returnValue = getYaw_void(this.nativeObject.pointer);
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
	native private boolean ev_equals_CQuaternion_CRadian(long pNativeObject, long rhs, long tolerance);
	/**
	 * 在一定角度容差范围内判断两个四元数是否相等
	 * @param rhs 四元数
	 * @param tolerance 弧度角
	 * @return 相等返回true，否则false
	 */
	public boolean ev_equals(com.earthview.world.spatial.math.Quaternion rhs, com.earthview.world.spatial.math.Radian tolerance)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long toleranceParamValue = tolerance.nativeObject.pointer;
		boolean returnValue = ev_equals_CQuaternion_CRadian(this.nativeObject.pointer, rhsParamValue, toleranceParamValue);
		return returnValue;
	}
	native private static long Slerp_Real_CQuaternion_CQuaternion_ev_bool(double fT, long rkP, long rkQ, boolean shortestPath);
	/**
	 * 球面线性插值
	 * @param fT 0-1的插值因子
	 * @param rkP 四元数
	 * @param rkQ 四元数
	 * @param shortestPath 标识是否最短路径
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion Slerp(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkQ, boolean shortestPath)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		boolean shortestPathParamValue = shortestPath;
		long returnValue = Slerp_Real_CQuaternion_CQuaternion_ev_bool(fTParamValue, rkPParamValue, rkQParamValue, shortestPathParamValue);
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
	native private static long Slerp_Real_CQuaternion_CQuaternion(double fT, long rkP, long rkQ);
	/**
	 * 球面线性插值
	 * @param fT 0-1的插值因子
	 * @param rkP 四元数
	 * @param rkQ 四元数
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion Slerp(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkQ)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = Slerp_Real_CQuaternion_CQuaternion(fTParamValue, rkPParamValue, rkQParamValue);
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
	native private static long SlerpExtraSpins_Real_CQuaternion_CQuaternion_ev_int32(double fT, long rkP, long rkQ, int iExtraSpins);
	/**
	 * 带干扰因子的球面线性插值
	 * @param fT 0-1的时间因子
	 * @param rkP 四元数
	 * @param rkQ 四元数
	 * @param iExtraSpins 干扰因子
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion SlerpExtraSpins(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkQ, int iExtraSpins)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		int iExtraSpinsParamValue = iExtraSpins;
		long returnValue = SlerpExtraSpins_Real_CQuaternion_CQuaternion_ev_int32(fTParamValue, rkPParamValue, rkQParamValue, iExtraSpinsParamValue);
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
	native private static void Intermediate_CQuaternion_CQuaternion_CQuaternion_CQuaternion_CQuaternion(long rkQ0, long rkQ1, long rkQ2, long rka, long rkB);
	/**
	 * 配置球面二次内插
	 * @param rkQ0 四元数0
	 * @param rkQ1 四元数1
	 * @param rkQ2 四元数2
	 * @param rka 中间起点
	 * @param rkB 中间终点
	 */
	public static void Intermediate(com.earthview.world.spatial.math.Quaternion rkQ0, com.earthview.world.spatial.math.Quaternion rkQ1, com.earthview.world.spatial.math.Quaternion rkQ2, com.earthview.world.spatial.math.Quaternion rka, com.earthview.world.spatial.math.Quaternion rkB)
	{
		long rkQ0ParamValue = rkQ0.nativeObject.pointer;
		long rkQ1ParamValue = rkQ1.nativeObject.pointer;
		long rkQ2ParamValue = rkQ2.nativeObject.pointer;
		long rkaParamValue = rka.nativeObject.pointer;
		long rkBParamValue = rkB.nativeObject.pointer;
		Intermediate_CQuaternion_CQuaternion_CQuaternion_CQuaternion_CQuaternion(rkQ0ParamValue, rkQ1ParamValue, rkQ2ParamValue, rkaParamValue, rkBParamValue);
	}
	native private static long Squad_Real_CQuaternion_CQuaternion_CQuaternion_CQuaternion_ev_bool(double fT, long rkP, long rkA, long rkB, long rkQ, boolean shortestPath);
	/**
	 * 样条插值（二次插值）
	 * @param fT 0-1的插值因子
	 * @param rkP 样条起点
	 * @param rkA 中间起点
	 * @param rkB 中间终点
	 * @param rkQ 样条终点
	 * @param shortestPath 标识是否最短路径
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion Squad(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkA, com.earthview.world.spatial.math.Quaternion rkB, com.earthview.world.spatial.math.Quaternion rkQ, boolean shortestPath)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkAParamValue = rkA.nativeObject.pointer;
		long rkBParamValue = rkB.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		boolean shortestPathParamValue = shortestPath;
		long returnValue = Squad_Real_CQuaternion_CQuaternion_CQuaternion_CQuaternion_ev_bool(fTParamValue, rkPParamValue, rkAParamValue, rkBParamValue, rkQParamValue, shortestPathParamValue);
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
	native private static long Squad_Real_CQuaternion_CQuaternion_CQuaternion_CQuaternion(double fT, long rkP, long rkA, long rkB, long rkQ);
	/**
	 * 样条插值（二次插值）
	 * @param fT 0-1的插值因子
	 * @param rkP 样条起点
	 * @param rkA 中间起点
	 * @param rkB 中间终点
	 * @param rkQ 样条终点
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion Squad(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkA, com.earthview.world.spatial.math.Quaternion rkB, com.earthview.world.spatial.math.Quaternion rkQ)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkAParamValue = rkA.nativeObject.pointer;
		long rkBParamValue = rkB.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = Squad_Real_CQuaternion_CQuaternion_CQuaternion_CQuaternion(fTParamValue, rkPParamValue, rkAParamValue, rkBParamValue, rkQParamValue);
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
	native private static long nlerp_Real_CQuaternion_CQuaternion_ev_bool(double fT, long rkP, long rkQ, boolean shortestPath);
	/**
	 * 标准化线性插值
	 * @param fT 0-1的插值因子
	 * @param rkP 样条起点
	 * @param rkQ 样条终点
	 * @param shortestPath 标识是否最短路径
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion nlerp(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkQ, boolean shortestPath)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		boolean shortestPathParamValue = shortestPath;
		long returnValue = nlerp_Real_CQuaternion_CQuaternion_ev_bool(fTParamValue, rkPParamValue, rkQParamValue, shortestPathParamValue);
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
	native private static long nlerp_Real_CQuaternion_CQuaternion(double fT, long rkP, long rkQ);
	/**
	 * 标准化线性插值
	 * @param fT 0-1的插值因子
	 * @param rkP 样条起点
	 * @param rkQ 样条终点
	 * @return 返回结果四元数
	 */
	public static com.earthview.world.spatial.math.Quaternion nlerp(double fT, com.earthview.world.spatial.math.Quaternion rkP, com.earthview.world.spatial.math.Quaternion rkQ)
	{
		double fTParamValue = fT;
		long rkPParamValue = rkP.nativeObject.pointer;
		long rkQParamValue = rkQ.nativeObject.pointer;
		long returnValue = nlerp_Real_CQuaternion_CQuaternion(fTParamValue, rkPParamValue, rkQParamValue);
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
	native private static double get_ms_fEpsilon_void();
	public static double get_ms_fEpsilon()
	{
		double jniValue = get_ms_fEpsilon_void();
		
		return jniValue;
	}
	
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.math.Quaternion get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_IDENTITY_void();
	public static com.earthview.world.spatial.math.Quaternion get_IDENTITY()
	{
		long jniValue = get_IDENTITY_void();
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private double get_w_void(long pNativeObject);
	public double get_w()
	{
		double jniValue = get_w_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_w_Real (long pNativeObject, double value);
	public void set_w(double w)
	{
		double wParamValue = w;
		
		set_w_Real(this.nativeObject.pointer, wParamValue);
	}
	
	native private boolean isNaN_void(long pNativeObject);
	/**
	 * 判断元素值是否非数值
	 * @param  
	 * @return 元素存在非数值返回true，否则false
	 */
	public boolean isNaN()
	{
		boolean returnValue = isNaN_void(this.nativeObject.pointer);
		return returnValue;
	}
	public Quaternion(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Quaternion(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Quaternion fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Quaternion obj = null;
 		if(baseObj instanceof Quaternion)
		{
			obj = (Quaternion)baseObj;
		} else {
			obj = new Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CQuaternion");
			obj.increaseCast();
		}

		return obj;
	}
}
