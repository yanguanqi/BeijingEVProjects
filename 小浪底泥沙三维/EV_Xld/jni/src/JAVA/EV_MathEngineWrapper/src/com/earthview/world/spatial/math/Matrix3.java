package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维矩阵类,定义了三维矩阵操作函数
 */
public class Matrix3 extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMatrix3", new Matrix3ClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Matrix3() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMatrix3", null);
	}

	/**
	 * 构造函数
	 * @param arr[3][3] 数组
	 */
	public Matrix3(NativeObjectPointer<DoublePointer> arr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer arrPtr = new BasePointer(arr);
		list.add("arr", arrPtr.get());
		Create("CMatrix3", list);
	}

	/**
	 * 构造函数
	 * @param rkMatrix 类对象
	 */
	public Matrix3(com.earthview.world.spatial.math.Matrix3 rkMatrix) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rkMatrixPtr = new BasePointer(rkMatrix);
		list.add("rkMatrix", rkMatrixPtr.get());
		Create("CMatrix3", list);
	}

	/**
	 * 构造函数
	 * @param fEntry00 数组元素
	 * @param fEntry01 数组元素
	 * @param fEntry02 数组元素
	 * @param fEntry10 数组元素
	 * @param fEntry11 数组元素
	 * @param fEntry12 数组元素
	 * @param fEntry20 数组元素
	 * @param fEntry21 数组元素
	 * @param fEntry22 数组元素
	 */
	public Matrix3(double fEntry00, double fEntry01, double fEntry02, double fEntry10, double fEntry11, double fEntry12, double fEntry20, double fEntry21, double fEntry22) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fEntry00Ptr = new BasePointer(fEntry00);
		list.add("fEntry00", fEntry00Ptr.get());
		BasePointer fEntry01Ptr = new BasePointer(fEntry01);
		list.add("fEntry01", fEntry01Ptr.get());
		BasePointer fEntry02Ptr = new BasePointer(fEntry02);
		list.add("fEntry02", fEntry02Ptr.get());
		BasePointer fEntry10Ptr = new BasePointer(fEntry10);
		list.add("fEntry10", fEntry10Ptr.get());
		BasePointer fEntry11Ptr = new BasePointer(fEntry11);
		list.add("fEntry11", fEntry11Ptr.get());
		BasePointer fEntry12Ptr = new BasePointer(fEntry12);
		list.add("fEntry12", fEntry12Ptr.get());
		BasePointer fEntry20Ptr = new BasePointer(fEntry20);
		list.add("fEntry20", fEntry20Ptr.get());
		BasePointer fEntry21Ptr = new BasePointer(fEntry21);
		list.add("fEntry21", fEntry21Ptr.get());
		BasePointer fEntry22Ptr = new BasePointer(fEntry22);
		list.add("fEntry22", fEntry22Ptr.get());
		Create("CMatrix3", list);
	}

	native private void swap_CMatrix3(long pNativeObject, long other);
	/**
	 * 与另一矩阵元素交换
	 * @param other 其它矩阵
	 */
	public void swap(com.earthview.world.spatial.math.Matrix3 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CMatrix3(this.nativeObject.pointer, otherParamValue);
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long iRow);
	/**
	 * 重载操作下标符[]
	 * @param iRow 矩阵行数大小
	 * @return 浮点型指针
	 */
	public DoublePointer OperatorIndex(long iRow)
	{
		long iRowParamValue = iRow;
		long returnValue = OperatorIndex_ev_size_t(this.nativeObject.pointer, iRowParamValue);
		if(returnValue == 0L) {
			return null;
		}
		DoublePointer __returnValue = new DoublePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long GetColumn_ev_size_t(long pNativeObject, long iCol);
	/**
	 * 获得某列元素值
	 * @param iCol 列标号
	 * @return 一列元素的vector集合
	 */
	public com.earthview.world.spatial.math.Vector3 GetColumn(long iCol)
	{
		long iColParamValue = iCol;
		long returnValue = GetColumn_ev_size_t(this.nativeObject.pointer, iColParamValue);
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
	native private void SetColumn_ev_size_t_CVector3(long pNativeObject, long iCol, long vec);
	/**
	 * 设置某列元素值
	 * @param iCol 列标号
	 * @param vec vector元素集合
	 */
	public void SetColumn(long iCol, com.earthview.world.spatial.math.Vector3 vec)
	{
		long iColParamValue = iCol;
		long vecParamValue = vec.nativeObject.pointer;
		SetColumn_ev_size_t_CVector3(this.nativeObject.pointer, iColParamValue, vecParamValue);
	}
	native private void FromAxes_CVector3_CVector3_CVector3(long pNativeObject, long xAxis, long yAxis, long zAxis);
	/**
	 * 从坐标轴向量建立矩阵
	 * @param xAxis x轴
	 * @param yAxis y轴
	 * @param zAxis z轴
	 */
	public void FromAxes(com.earthview.world.spatial.math.Vector3 xAxis, com.earthview.world.spatial.math.Vector3 yAxis, com.earthview.world.spatial.math.Vector3 zAxis)
	{
		long xAxisParamValue = xAxis.nativeObject.pointer;
		long yAxisParamValue = yAxis.nativeObject.pointer;
		long zAxisParamValue = zAxis.nativeObject.pointer;
		FromAxes_CVector3_CVector3_CVector3(this.nativeObject.pointer, xAxisParamValue, yAxisParamValue, zAxisParamValue);
	}
	native private long OperatorAssign_CMatrix3(long pNativeObject, long rkMatrix);
	/**
	 * 矩阵赋值
	 * @param rkMatrix 源矩阵
	 * @return 赋值矩阵
	 */
	public com.earthview.world.spatial.math.Matrix3 OperatorAssign(com.earthview.world.spatial.math.Matrix3 rkMatrix)
	{
		long rkMatrixParamValue = rkMatrix.nativeObject.pointer;
		long returnValue = OperatorAssign_CMatrix3(this.nativeObject.pointer, rkMatrixParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate, "CMatrix3");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CMatrix3(long pNativeObject, long rkMatrix);
	/**
	 * 判断矩阵相等
	 * @param rkMatrix 矩阵
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Matrix3 rkMatrix)
	{
		long rkMatrixParamValue = rkMatrix.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CMatrix3(this.nativeObject.pointer, rkMatrixParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CMatrix3(long pNativeObject, long rkMatrix);
	/**
	 * 判断矩阵不相等
	 * @param rkMatrix 矩阵
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Matrix3 rkMatrix)
	{
		long rkMatrixParamValue = rkMatrix.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CMatrix3(this.nativeObject.pointer, rkMatrixParamValue);
		return returnValue;
	}
	native private long OperatorPlus_CMatrix3(long pNativeObject, long rkMatrix);
	/**
	 * 矩阵加操作
	 * @param rkMatrix 矩阵
	 * @return 矩阵相加结果
	 */
	public com.earthview.world.spatial.math.Matrix3 OperatorPlus(com.earthview.world.spatial.math.Matrix3 rkMatrix)
	{
		long rkMatrixParamValue = rkMatrix.nativeObject.pointer;
		long returnValue = OperatorPlus_CMatrix3(this.nativeObject.pointer, rkMatrixParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long OperatorMinus_CMatrix3(long pNativeObject, long rkMatrix);
	/**
	 * 矩阵减操作
	 * @param rkMatrix 矩阵
	 * @return 矩阵相减结果
	 */
	public com.earthview.world.spatial.math.Matrix3 OperatorMinus(com.earthview.world.spatial.math.Matrix3 rkMatrix)
	{
		long rkMatrixParamValue = rkMatrix.nativeObject.pointer;
		long returnValue = OperatorMinus_CMatrix3(this.nativeObject.pointer, rkMatrixParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_CMatrix3(long pNativeObject, long rkMatrix);
	/**
	 * 矩阵乘操作
	 * @param rkMatrix 矩阵
	 * @return 矩阵相乘结果
	 */
	public com.earthview.world.spatial.math.Matrix3 OperatorMultiply(com.earthview.world.spatial.math.Matrix3 rkMatrix)
	{
		long rkMatrixParamValue = rkMatrix.nativeObject.pointer;
		long returnValue = OperatorMultiply_CMatrix3(this.nativeObject.pointer, rkMatrixParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 矩阵符号取反
	 * @param rkMatrix 矩阵
	 * @return 矩阵符号取反结果
	 */
	public com.earthview.world.spatial.math.Matrix3 OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_CVector3(long pNativeObject, long rkVector);
	/**
	 * 矩阵与3x1向量相乘
	 * @param rkVector 3x1向量
	 * @return 相乘后3x1向量结果
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
	native private long OperatorMultiply_Real(long pNativeObject, double fScalar);
	/**
	 * 矩阵缩放
	 * @param fScalar 缩放系数
	 * @return 缩放后矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix3 OperatorMultiply(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fScalarParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long Transpose_void(long pNativeObject);
	/**
	 * 矩阵转置
	 * @param  
	 * @return 转置后矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix3 Transpose()
	{
		long returnValue = Transpose_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private boolean Inverse_CMatrix3_Real(long pNativeObject, long rkInverse, double fTolerance);
	/**
	 * 矩阵求逆
	 * @param rkInverse 求逆后矩阵结果
	 * @param fTolerance 精确度
	 * @return 成功返回true，否则false
	 */
	public boolean Inverse(com.earthview.world.spatial.math.Matrix3 rkInverse, double fTolerance)
	{
		long rkInverseParamValue = rkInverse.nativeObject.pointer;
		double fToleranceParamValue = fTolerance;
		boolean returnValue = Inverse_CMatrix3_Real(this.nativeObject.pointer, rkInverseParamValue, fToleranceParamValue);
		return returnValue;
	}
	native private boolean Inverse_CMatrix3(long pNativeObject, long rkInverse);
	/**
	 * 矩阵求逆
	 * @param rkInverse 求逆后矩阵结果
	 * @return 成功返回true，否则false
	 */
	public boolean Inverse(com.earthview.world.spatial.math.Matrix3 rkInverse)
	{
		long rkInverseParamValue = rkInverse.nativeObject.pointer;
		boolean returnValue = Inverse_CMatrix3(this.nativeObject.pointer, rkInverseParamValue);
		return returnValue;
	}
	native private long Inverse_Real(long pNativeObject, double fTolerance);
	/**
	 * 矩阵求逆
	 * @param fTolerance 精确度
	 * @return 求逆后矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix3 Inverse(double fTolerance)
	{
		double fToleranceParamValue = fTolerance;
		long returnValue = Inverse_Real(this.nativeObject.pointer, fToleranceParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private long Inverse_void(long pNativeObject);
	/**
	 * 矩阵求逆
	 * @param  
	 * @return 求逆后矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix3 Inverse()
	{
		long returnValue = Inverse_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private double Determinant_void(long pNativeObject);
	/**
	 * 矩阵行列式化(求模)
	 * @param  
	 * @return 模结果
	 */
	public double Determinant()
	{
		double returnValue = Determinant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void SingularValueDecomposition_CMatrix3_CVector3_CMatrix3(long pNativeObject, long rkL, long rkS, long rkR);
	/**
	 * 矩阵奇异值分解
	 * @param rkL 左奇异矩阵
	 * @param rkS 中奇异矩阵
	 * @param rkR 右奇异矩阵
	 */
	public void SingularValueDecomposition(com.earthview.world.spatial.math.Matrix3 rkL, com.earthview.world.spatial.math.Vector3 rkS, com.earthview.world.spatial.math.Matrix3 rkR)
	{
		long rkLParamValue = rkL.nativeObject.pointer;
		long rkSParamValue = rkS.nativeObject.pointer;
		long rkRParamValue = rkR.nativeObject.pointer;
		SingularValueDecomposition_CMatrix3_CVector3_CMatrix3(this.nativeObject.pointer, rkLParamValue, rkSParamValue, rkRParamValue);
	}
	native private void SingularValueComposition_CMatrix3_CVector3_CMatrix3(long pNativeObject, long rkL, long rkS, long rkR);
	/**
	 * 矩阵奇异值合并
	 * @param rkL 左奇异矩阵
	 * @param rkS 中奇异矩阵
	 * @param rkR 右奇异矩阵
	 */
	public void SingularValueComposition(com.earthview.world.spatial.math.Matrix3 rkL, com.earthview.world.spatial.math.Vector3 rkS, com.earthview.world.spatial.math.Matrix3 rkR)
	{
		long rkLParamValue = rkL.nativeObject.pointer;
		long rkSParamValue = rkS.nativeObject.pointer;
		long rkRParamValue = rkR.nativeObject.pointer;
		SingularValueComposition_CMatrix3_CVector3_CMatrix3(this.nativeObject.pointer, rkLParamValue, rkSParamValue, rkRParamValue);
	}
	native private void Orthonormalize_void(long pNativeObject);
	/**
	 * 矩阵正交化
	 * @param  
	 */
	public void Orthonormalize()
	{
		Orthonormalize_void(this.nativeObject.pointer);
	}
	native private void QDUDecomposition_CMatrix3_CVector3_CVector3(long pNativeObject, long rkQ, long rkD, long rkU);
	/**
	 * 矩阵分解出正交矩阵、对角线矩阵和上三角矩阵
	 * @param rkQ 正交矩阵
	 * @param rkD 对角线矩阵
	 * @param rkU 上三角矩阵
	 */
	public void QDUDecomposition(com.earthview.world.spatial.math.Matrix3 rkQ, com.earthview.world.spatial.math.Vector3 rkD, com.earthview.world.spatial.math.Vector3 rkU)
	{
		long rkQParamValue = rkQ.nativeObject.pointer;
		long rkDParamValue = rkD.nativeObject.pointer;
		long rkUParamValue = rkU.nativeObject.pointer;
		QDUDecomposition_CMatrix3_CVector3_CVector3(this.nativeObject.pointer, rkQParamValue, rkDParamValue, rkUParamValue);
	}
	native private double SpectralNorm_void(long pNativeObject);
	/**
	 * 矩阵求模
	 * @param  
	 */
	public double SpectralNorm()
	{
		double returnValue = SpectralNorm_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void ToAngleAxis_CVector3_CRadian(long pNativeObject, long rkAxis, long rfAngle);
	/**
	 * 正交矩阵计算出轴向量和弧度角
	 * @param rkAxis 轴向量
	 * @param rfAngle 轴角
	 */
	public void ToAngleAxis(com.earthview.world.spatial.math.Vector3 rkAxis, com.earthview.world.spatial.math.Radian rfAngle)
	{
		long rkAxisParamValue = rkAxis.nativeObject.pointer;
		long rfAngleParamValue = rfAngle.nativeObject.pointer;
		ToAngleAxis_CVector3_CRadian(this.nativeObject.pointer, rkAxisParamValue, rfAngleParamValue);
	}
	native private void ToAngleAxis_CVector3_CDegree(long pNativeObject, long rkAxis, long rfAngle);
	/**
	 * 正交矩阵计算出轴向量和角度
	 * @param rkAxis 轴向量
	 * @param rfAngle 轴角
	 */
	public void ToAngleAxis(com.earthview.world.spatial.math.Vector3 rkAxis, com.earthview.world.spatial.math.Degree rfAngle)
	{
		long rkAxisParamValue = rkAxis.nativeObject.pointer;
		long rfAngleParamValue = rfAngle.nativeObject.pointer;
		ToAngleAxis_CVector3_CDegree(this.nativeObject.pointer, rkAxisParamValue, rfAngleParamValue);
	}
	native private void FromAngleAxis_CVector3_CRadian(long pNativeObject, long rkAxis, long fRadians);
	/**
	 * 由轴向量和角度转化为矩阵
	 * @param rkAxis 轴向量
	 * @param fRadians 轴角
	 */
	public void FromAngleAxis(com.earthview.world.spatial.math.Vector3 rkAxis, com.earthview.world.spatial.math.Radian fRadians)
	{
		long rkAxisParamValue = rkAxis.nativeObject.pointer;
		long fRadiansParamValue = fRadians.nativeObject.pointer;
		FromAngleAxis_CVector3_CRadian(this.nativeObject.pointer, rkAxisParamValue, fRadiansParamValue);
	}
	native private boolean ToEulerAnglesXYZ_CRadian_CRadian_CRadian(long pNativeObject, long rfYAngle, long rfPAngle, long rfRAngle);
	/**
	 * 正交化矩阵转换成为XYZ旋转角
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public boolean ToEulerAnglesXYZ(com.earthview.world.spatial.math.Radian rfYAngle, com.earthview.world.spatial.math.Radian rfPAngle, com.earthview.world.spatial.math.Radian rfRAngle)
	{
		long rfYAngleParamValue = rfYAngle.nativeObject.pointer;
		long rfPAngleParamValue = rfPAngle.nativeObject.pointer;
		long rfRAngleParamValue = rfRAngle.nativeObject.pointer;
		boolean returnValue = ToEulerAnglesXYZ_CRadian_CRadian_CRadian(this.nativeObject.pointer, rfYAngleParamValue, rfPAngleParamValue, rfRAngleParamValue);
		return returnValue;
	}
	native private boolean ToEulerAnglesXZY_CRadian_CRadian_CRadian(long pNativeObject, long rfYAngle, long rfPAngle, long rfRAngle);
	/**
	 * 正交化矩阵转换成为XYZ旋转角
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public boolean ToEulerAnglesXZY(com.earthview.world.spatial.math.Radian rfYAngle, com.earthview.world.spatial.math.Radian rfPAngle, com.earthview.world.spatial.math.Radian rfRAngle)
	{
		long rfYAngleParamValue = rfYAngle.nativeObject.pointer;
		long rfPAngleParamValue = rfPAngle.nativeObject.pointer;
		long rfRAngleParamValue = rfRAngle.nativeObject.pointer;
		boolean returnValue = ToEulerAnglesXZY_CRadian_CRadian_CRadian(this.nativeObject.pointer, rfYAngleParamValue, rfPAngleParamValue, rfRAngleParamValue);
		return returnValue;
	}
	native private boolean ToEulerAnglesYXZ_CRadian_CRadian_CRadian(long pNativeObject, long rfYAngle, long rfPAngle, long rfRAngle);
	/**
	 * 正交化矩阵转换成为YXZ旋转角
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public boolean ToEulerAnglesYXZ(com.earthview.world.spatial.math.Radian rfYAngle, com.earthview.world.spatial.math.Radian rfPAngle, com.earthview.world.spatial.math.Radian rfRAngle)
	{
		long rfYAngleParamValue = rfYAngle.nativeObject.pointer;
		long rfPAngleParamValue = rfPAngle.nativeObject.pointer;
		long rfRAngleParamValue = rfRAngle.nativeObject.pointer;
		boolean returnValue = ToEulerAnglesYXZ_CRadian_CRadian_CRadian(this.nativeObject.pointer, rfYAngleParamValue, rfPAngleParamValue, rfRAngleParamValue);
		return returnValue;
	}
	native private boolean ToEulerAnglesYZX_CRadian_CRadian_CRadian(long pNativeObject, long rfYAngle, long rfPAngle, long rfRAngle);
	/**
	 * 正交化矩阵转换成为YZX旋转角
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public boolean ToEulerAnglesYZX(com.earthview.world.spatial.math.Radian rfYAngle, com.earthview.world.spatial.math.Radian rfPAngle, com.earthview.world.spatial.math.Radian rfRAngle)
	{
		long rfYAngleParamValue = rfYAngle.nativeObject.pointer;
		long rfPAngleParamValue = rfPAngle.nativeObject.pointer;
		long rfRAngleParamValue = rfRAngle.nativeObject.pointer;
		boolean returnValue = ToEulerAnglesYZX_CRadian_CRadian_CRadian(this.nativeObject.pointer, rfYAngleParamValue, rfPAngleParamValue, rfRAngleParamValue);
		return returnValue;
	}
	native private boolean ToEulerAnglesZXY_CRadian_CRadian_CRadian(long pNativeObject, long rfYAngle, long rfPAngle, long rfRAngle);
	/**
	 * 正交化矩阵转换成为ZXY旋转角
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public boolean ToEulerAnglesZXY(com.earthview.world.spatial.math.Radian rfYAngle, com.earthview.world.spatial.math.Radian rfPAngle, com.earthview.world.spatial.math.Radian rfRAngle)
	{
		long rfYAngleParamValue = rfYAngle.nativeObject.pointer;
		long rfPAngleParamValue = rfPAngle.nativeObject.pointer;
		long rfRAngleParamValue = rfRAngle.nativeObject.pointer;
		boolean returnValue = ToEulerAnglesZXY_CRadian_CRadian_CRadian(this.nativeObject.pointer, rfYAngleParamValue, rfPAngleParamValue, rfRAngleParamValue);
		return returnValue;
	}
	native private boolean ToEulerAnglesZYX_CRadian_CRadian_CRadian(long pNativeObject, long rfYAngle, long rfPAngle, long rfRAngle);
	/**
	 * 正交化矩阵转换成为ZYX旋转角
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public boolean ToEulerAnglesZYX(com.earthview.world.spatial.math.Radian rfYAngle, com.earthview.world.spatial.math.Radian rfPAngle, com.earthview.world.spatial.math.Radian rfRAngle)
	{
		long rfYAngleParamValue = rfYAngle.nativeObject.pointer;
		long rfPAngleParamValue = rfPAngle.nativeObject.pointer;
		long rfRAngleParamValue = rfRAngle.nativeObject.pointer;
		boolean returnValue = ToEulerAnglesZYX_CRadian_CRadian_CRadian(this.nativeObject.pointer, rfYAngleParamValue, rfPAngleParamValue, rfRAngleParamValue);
		return returnValue;
	}
	native private void FromEulerAnglesXYZ_CRadian_CRadian_CRadian(long pNativeObject, long fYAngle, long fPAngle, long fRAngle);
	/**
	 * XYZ旋转角转换成为正交化矩阵
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public void FromEulerAnglesXYZ(com.earthview.world.spatial.math.Radian fYAngle, com.earthview.world.spatial.math.Radian fPAngle, com.earthview.world.spatial.math.Radian fRAngle)
	{
		long fYAngleParamValue = fYAngle.nativeObject.pointer;
		long fPAngleParamValue = fPAngle.nativeObject.pointer;
		long fRAngleParamValue = fRAngle.nativeObject.pointer;
		FromEulerAnglesXYZ_CRadian_CRadian_CRadian(this.nativeObject.pointer, fYAngleParamValue, fPAngleParamValue, fRAngleParamValue);
	}
	native private void FromEulerAnglesXZY_CRadian_CRadian_CRadian(long pNativeObject, long fYAngle, long fPAngle, long fRAngle);
	/**
	 * XZY旋转角转换成为正交化矩阵
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public void FromEulerAnglesXZY(com.earthview.world.spatial.math.Radian fYAngle, com.earthview.world.spatial.math.Radian fPAngle, com.earthview.world.spatial.math.Radian fRAngle)
	{
		long fYAngleParamValue = fYAngle.nativeObject.pointer;
		long fPAngleParamValue = fPAngle.nativeObject.pointer;
		long fRAngleParamValue = fRAngle.nativeObject.pointer;
		FromEulerAnglesXZY_CRadian_CRadian_CRadian(this.nativeObject.pointer, fYAngleParamValue, fPAngleParamValue, fRAngleParamValue);
	}
	native private void FromEulerAnglesYXZ_CRadian_CRadian_CRadian(long pNativeObject, long fYAngle, long fPAngle, long fRAngle);
	/**
	 * YXZ旋转角转换成为正交化矩阵
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public void FromEulerAnglesYXZ(com.earthview.world.spatial.math.Radian fYAngle, com.earthview.world.spatial.math.Radian fPAngle, com.earthview.world.spatial.math.Radian fRAngle)
	{
		long fYAngleParamValue = fYAngle.nativeObject.pointer;
		long fPAngleParamValue = fPAngle.nativeObject.pointer;
		long fRAngleParamValue = fRAngle.nativeObject.pointer;
		FromEulerAnglesYXZ_CRadian_CRadian_CRadian(this.nativeObject.pointer, fYAngleParamValue, fPAngleParamValue, fRAngleParamValue);
	}
	native private void FromEulerAnglesYZX_CRadian_CRadian_CRadian(long pNativeObject, long fYAngle, long fPAngle, long fRAngle);
	/**
	 * YZX旋转角转换成为正交化矩阵
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public void FromEulerAnglesYZX(com.earthview.world.spatial.math.Radian fYAngle, com.earthview.world.spatial.math.Radian fPAngle, com.earthview.world.spatial.math.Radian fRAngle)
	{
		long fYAngleParamValue = fYAngle.nativeObject.pointer;
		long fPAngleParamValue = fPAngle.nativeObject.pointer;
		long fRAngleParamValue = fRAngle.nativeObject.pointer;
		FromEulerAnglesYZX_CRadian_CRadian_CRadian(this.nativeObject.pointer, fYAngleParamValue, fPAngleParamValue, fRAngleParamValue);
	}
	native private void FromEulerAnglesZXY_CRadian_CRadian_CRadian(long pNativeObject, long fYAngle, long fPAngle, long fRAngle);
	/**
	 * ZXY旋转角转换成为正交化矩阵
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public void FromEulerAnglesZXY(com.earthview.world.spatial.math.Radian fYAngle, com.earthview.world.spatial.math.Radian fPAngle, com.earthview.world.spatial.math.Radian fRAngle)
	{
		long fYAngleParamValue = fYAngle.nativeObject.pointer;
		long fPAngleParamValue = fPAngle.nativeObject.pointer;
		long fRAngleParamValue = fRAngle.nativeObject.pointer;
		FromEulerAnglesZXY_CRadian_CRadian_CRadian(this.nativeObject.pointer, fYAngleParamValue, fPAngleParamValue, fRAngleParamValue);
	}
	native private void FromEulerAnglesZYX_CRadian_CRadian_CRadian(long pNativeObject, long fYAngle, long fPAngle, long fRAngle);
	/**
	 * ZYX旋转角转换成为正交化矩阵
	 * @param rfYAngle Yaw角度
	 * @param rfPAngle Pitch角度
	 * @param rfRAngle Roll角度
	 * @return 成功：true，否则false
	 */
	public void FromEulerAnglesZYX(com.earthview.world.spatial.math.Radian fYAngle, com.earthview.world.spatial.math.Radian fPAngle, com.earthview.world.spatial.math.Radian fRAngle)
	{
		long fYAngleParamValue = fYAngle.nativeObject.pointer;
		long fPAngleParamValue = fPAngle.nativeObject.pointer;
		long fRAngleParamValue = fRAngle.nativeObject.pointer;
		FromEulerAnglesZYX_CRadian_CRadian_CRadian(this.nativeObject.pointer, fYAngleParamValue, fPAngleParamValue, fRAngleParamValue);
	}
	native private void EigenSolveSymmetric_Real_CVector3(long pNativeObject, long afEigenvalue, long[] akEigenvector);
	/**
	 * 求矩阵特征值
	 * @param afEigenvalue[3] 特征值
	 * @param akEigenvector 特征向量
	 */
	public void EigenSolveSymmetric(NativeDoubleBuffer afEigenvalue, com.earthview.world.spatial.math.Vector3[] akEigenvector)
	{
		long afEigenvalueParamValue = (afEigenvalue == null ? 0L : afEigenvalue.nativeObject.pointer);
		long[] akEigenvectorParamValue = (akEigenvector == null ? null : ArrayUtils.convertToLongArray(akEigenvector));
		EigenSolveSymmetric_Real_CVector3(this.nativeObject.pointer, afEigenvalueParamValue, akEigenvectorParamValue);
	}
	native private static void TensorProduct_CVector3_CVector3_CMatrix3(long rkU, long rkV, long rkProduct);
	/**
	 * 张量乘积
	 * @param rkU U向量
	 * @param rkV V向量
	 */
	public static void TensorProduct(com.earthview.world.spatial.math.Vector3 rkU, com.earthview.world.spatial.math.Vector3 rkV, com.earthview.world.spatial.math.Matrix3 rkProduct)
	{
		long rkUParamValue = rkU.nativeObject.pointer;
		long rkVParamValue = rkV.nativeObject.pointer;
		long rkProductParamValue = rkProduct.nativeObject.pointer;
		TensorProduct_CVector3_CVector3_CMatrix3(rkUParamValue, rkVParamValue, rkProductParamValue);
	}
	native private boolean hasScale_void(long pNativeObject);
	/**
	 * 判断矩阵是否可缩放
	 * @param  
	 * @return 可以缩放返回true，否则false
	 */
	public boolean hasScale()
	{
		boolean returnValue = hasScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private static double get_EPSILON_void();
	public static double get_EPSILON()
	{
		double jniValue = get_EPSILON_void();
		
		return jniValue;
	}
	
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.math.Matrix3 get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	
	native private static long get_IDENTITY_void();
	public static com.earthview.world.spatial.math.Matrix3 get_IDENTITY()
	{
		long jniValue = get_IDENTITY_void();
		
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	
	public Matrix3(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Matrix3(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Matrix3 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Matrix3 obj = null;
 		if(baseObj instanceof Matrix3)
		{
			obj = (Matrix3)baseObj;
		} else {
			obj = new Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMatrix3");
			obj.increaseCast();
		}

		return obj;
	}
}
