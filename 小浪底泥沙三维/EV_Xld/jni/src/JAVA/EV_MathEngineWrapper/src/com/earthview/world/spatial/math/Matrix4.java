package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 四维矩阵类,定义了四维矩阵操作函数
 */
public class Matrix4 extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMatrix4", new Matrix4ClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Matrix4() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMatrix4", null);
	}

	/**
	 * 构造函数
	 * @param m00 数组元素
	 * @param m01 数组元素
	 * @param m02 数组元素
	 * @param m03 数组元素
	 * @param m10 数组元素
	 * @param m11 数组元素
	 * @param m12 数组元素
	 * @param m13 数组元素
	 * @param m20 数组元素
	 * @param m21 数组元素
	 * @param m22 数组元素
	 * @param m23 数组元素
	 * @param m30 数组元素
	 * @param m31 数组元素
	 * @param m32 数组元素
	 * @param m33 数组元素
	 */
	public Matrix4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer m00Ptr = new BasePointer(m00);
		list.add("m00", m00Ptr.get());
		BasePointer m01Ptr = new BasePointer(m01);
		list.add("m01", m01Ptr.get());
		BasePointer m02Ptr = new BasePointer(m02);
		list.add("m02", m02Ptr.get());
		BasePointer m03Ptr = new BasePointer(m03);
		list.add("m03", m03Ptr.get());
		BasePointer m10Ptr = new BasePointer(m10);
		list.add("m10", m10Ptr.get());
		BasePointer m11Ptr = new BasePointer(m11);
		list.add("m11", m11Ptr.get());
		BasePointer m12Ptr = new BasePointer(m12);
		list.add("m12", m12Ptr.get());
		BasePointer m13Ptr = new BasePointer(m13);
		list.add("m13", m13Ptr.get());
		BasePointer m20Ptr = new BasePointer(m20);
		list.add("m20", m20Ptr.get());
		BasePointer m21Ptr = new BasePointer(m21);
		list.add("m21", m21Ptr.get());
		BasePointer m22Ptr = new BasePointer(m22);
		list.add("m22", m22Ptr.get());
		BasePointer m23Ptr = new BasePointer(m23);
		list.add("m23", m23Ptr.get());
		BasePointer m30Ptr = new BasePointer(m30);
		list.add("m30", m30Ptr.get());
		BasePointer m31Ptr = new BasePointer(m31);
		list.add("m31", m31Ptr.get());
		BasePointer m32Ptr = new BasePointer(m32);
		list.add("m32", m32Ptr.get());
		BasePointer m33Ptr = new BasePointer(m33);
		list.add("m33", m33Ptr.get());
		Create("CMatrix4", list);
	}

	/**
	 * 从三维矩阵扩展成四维矩阵构造函数
	 * @param m3x3 三维矩阵
	 */
	public Matrix4(com.earthview.world.spatial.math.Matrix3 m3x3) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer m3x3Ptr = new BasePointer(m3x3);
		list.add("m3x3", m3x3Ptr.get());
		Create("CMatrix4", list);
	}

	/**
	 * 从四元数扩展成四维矩阵构造函数
	 * @param rot 四元数
	 */
	public Matrix4(com.earthview.world.spatial.math.Quaternion rot) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rotPtr = new BasePointer(rot);
		list.add("rot", rotPtr.get());
		Create("CMatrix4", list);
	}

	native private void swap_CMatrix4(long pNativeObject, long other);
	/**
	 * 与另一矩阵元素交换
	 * @param other 其它矩阵
	 */
	public void swap(com.earthview.world.spatial.math.Matrix4 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CMatrix4(this.nativeObject.pointer, otherParamValue);
	}
	native private long OperatorIndex_ev_size_t(long pNativeObject, long iRow);
	/**
	 * 重载操作下标符[]
	 * @param iRow 矩阵行数大小
	 * @return 浮点型数组
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
	native private long concatenate_CMatrix4(long pNativeObject, long m2);
	/**
	 * 与其它矩阵相乘连接
	 * @param m2 其它矩阵
	 * @return 连接后结果矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 concatenate(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		long returnValue = concatenate_CMatrix4(this.nativeObject.pointer, m2ParamValue);
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
	native private long OperatorMultiply_CMatrix4(long pNativeObject, long m2);
	/**
	 * 矩阵乘法
	 * @param m2 其它矩阵
	 * @return 相乘后结果矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 OperatorMultiply(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		long returnValue = OperatorMultiply_CMatrix4(this.nativeObject.pointer, m2ParamValue);
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
	native private long OperatorMultiply_CVector3(long pNativeObject, long v);
	/**
	 * 矩阵与三维向量相乘
	 * @param v 三维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMultiply(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = OperatorMultiply_CVector3(this.nativeObject.pointer, vParamValue);
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
	native private long OperatorMultiply_CVector4(long pNativeObject, long v);
	/**
	 * 矩阵与四维向量相乘
	 * @param v 四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorMultiply(com.earthview.world.spatial.math.Vector4 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = OperatorMultiply_CVector4(this.nativeObject.pointer, vParamValue);
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
	native private long OperatorMultiply_CPlane(long pNativeObject, long p);
	/**
	 * 矩阵与平面相乘
	 * @param p 平面对象
	 * @return 结果平面
	 */
	public com.earthview.world.spatial.math.Plane OperatorMultiply(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		long returnValue = OperatorMultiply_CPlane(this.nativeObject.pointer, pParamValue);
		com.earthview.world.spatial.math.Plane __returnValue = new com.earthview.world.spatial.math.Plane(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPlane");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Plane)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPlane");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CMatrix4(long pNativeObject, long m2);
	/**
	 * 矩阵加法
	 * @param m2 其它四维矩阵
	 * @return 结果矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 OperatorPlus(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		long returnValue = OperatorPlus_CMatrix4(this.nativeObject.pointer, m2ParamValue);
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
	native private long OperatorMinus_CMatrix4(long pNativeObject, long m2);
	/**
	 * 矩阵减法
	 * @param m2 其它四维矩阵
	 * @return 结果矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 OperatorMinus(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		long returnValue = OperatorMinus_CMatrix4(this.nativeObject.pointer, m2ParamValue);
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
	native private boolean OperatorEquals_CMatrix4(long pNativeObject, long m2);
	/**
	 * 判断矩阵相等
	 * @param m2 其它四维矩阵
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CMatrix4(this.nativeObject.pointer, m2ParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CMatrix4(long pNativeObject, long m2);
	/**
	 * 判断矩阵非相等
	 * @param m2 其它四维矩阵
	 * @return 非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CMatrix4(this.nativeObject.pointer, m2ParamValue);
		return returnValue;
	}
	native private void OperatorAssign_CMatrix3(long pNativeObject, long mat3);
	/**
	 * 从三维矩阵赋值
	 * @param mat3 三维矩阵
	 */
	public void OperatorAssign(com.earthview.world.spatial.math.Matrix3 mat3)
	{
		long mat3ParamValue = mat3.nativeObject.pointer;
		OperatorAssign_CMatrix3(this.nativeObject.pointer, mat3ParamValue);
	}
	native private long transpose_void(long pNativeObject);
	/**
	 * 矩阵转置
	 * @param  
	 * @return 转置后矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix4 transpose()
	{
		long returnValue = transpose_void(this.nativeObject.pointer);
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
	native private void setTrans_CVector3(long pNativeObject, long v);
	/**
	 * 设置变换矩阵中平移部分
	 * @param v 平移的三维向量
	 */
	public void setTrans(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		setTrans_CVector3(this.nativeObject.pointer, vParamValue);
	}
	native private long getTrans_void(long pNativeObject);
	/**
	 * 提取变换矩阵中平移部分
	 * @param  
	 * @return 平移向量
	 */
	public com.earthview.world.spatial.math.Vector3 getTrans()
	{
		long returnValue = getTrans_void(this.nativeObject.pointer);
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
	native private void makeTrans_CVector3(long pNativeObject, long v);
	/**
	 * 构建平移变换矩阵
	 * @param v 平移三维向量
	 */
	public void makeTrans(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		makeTrans_CVector3(this.nativeObject.pointer, vParamValue);
	}
	native private void makeTrans_Real_Real_Real(long pNativeObject, double tx, double ty, double tz);
	/**
	 * 构建平移变换矩阵
	 * @param tx x方向值
	 * @param ty y方向值
	 * @param tz z方向值
	 */
	public void makeTrans(double tx, double ty, double tz)
	{
		double txParamValue = tx;
		double tyParamValue = ty;
		double tzParamValue = tz;
		makeTrans_Real_Real_Real(this.nativeObject.pointer, txParamValue, tyParamValue, tzParamValue);
	}
	native private static long getTrans_CVector3(long v);
	/**
	 * 由三维向量获得平移矩阵
	 * @param v 向量
	 * @return 平移矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 getTrans(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = getTrans_CVector3(vParamValue);
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
	native private static long getTrans_Real_Real_Real(double t_x, double t_y, double t_z);
	/**
	 * 由实数获得平移矩阵
	 * @param tx x方向值
	 * @param ty y方向值
	 * @param tz z方向值
	 * @return 平移矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 getTrans(double t_x, double t_y, double t_z)
	{
		double t_xParamValue = t_x;
		double t_yParamValue = t_y;
		double t_zParamValue = t_z;
		long returnValue = getTrans_Real_Real_Real(t_xParamValue, t_yParamValue, t_zParamValue);
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
	native private void setScale_CVector3(long pNativeObject, long v);
	/**
	 * 设置矩阵缩放部分
	 * @param v 
	 */
	public void setScale(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		setScale_CVector3(this.nativeObject.pointer, vParamValue);
	}
	native private static long getScale_CVector3(long v);
	/**
	 * 由三维向量获得缩放矩阵
	 * @param v 向量
	 * @return 缩放矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 getScale(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = getScale_CVector3(vParamValue);
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
	native private static long getScale_Real_Real_Real(double s_x, double s_y, double s_z);
	/**
	 * 由实数获得缩放矩阵
	 * @param tx x方向值
	 * @param ty y方向值
	 * @param tz z方向值
	 * @return 缩放矩阵
	 */
	public static com.earthview.world.spatial.math.Matrix4 getScale(double s_x, double s_y, double s_z)
	{
		double s_xParamValue = s_x;
		double s_yParamValue = s_y;
		double s_zParamValue = s_z;
		long returnValue = getScale_Real_Real_Real(s_xParamValue, s_yParamValue, s_zParamValue);
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
	native private void extract3x3Matrix_CMatrix3(long pNativeObject, long m3x3);
	/**
	 * 由矩阵析出旋转和缩放三维矩阵
	 * @param m3x3 结果三维矩阵
	 */
	public void extract3x3Matrix(com.earthview.world.spatial.math.Matrix3 m3x3)
	{
		long m3x3ParamValue = m3x3.nativeObject.pointer;
		extract3x3Matrix_CMatrix3(this.nativeObject.pointer, m3x3ParamValue);
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
	native private boolean hasNegativeScale_void(long pNativeObject);
	/**
	 * 判断矩阵是否可负值缩放
	 * @param  
	 * @return 可以返回true，否则false
	 */
	public boolean hasNegativeScale()
	{
		boolean returnValue = hasNegativeScale_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void get_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(long pNativeObject, long m00, long m01, long m02, long m03, long m10, long m11, long m12, long m13, long m20, long m21, long m22, long m23, long m30, long m31, long m32, long m33);
	public void get(DoublePointer m00, DoublePointer m01, DoublePointer m02, DoublePointer m03, DoublePointer m10, DoublePointer m11, DoublePointer m12, DoublePointer m13, DoublePointer m20, DoublePointer m21, DoublePointer m22, DoublePointer m23, DoublePointer m30, DoublePointer m31, DoublePointer m32, DoublePointer m33)
	{
		long m00ParamValue = m00.nativeObject.pointer;
		long m01ParamValue = m01.nativeObject.pointer;
		long m02ParamValue = m02.nativeObject.pointer;
		long m03ParamValue = m03.nativeObject.pointer;
		long m10ParamValue = m10.nativeObject.pointer;
		long m11ParamValue = m11.nativeObject.pointer;
		long m12ParamValue = m12.nativeObject.pointer;
		long m13ParamValue = m13.nativeObject.pointer;
		long m20ParamValue = m20.nativeObject.pointer;
		long m21ParamValue = m21.nativeObject.pointer;
		long m22ParamValue = m22.nativeObject.pointer;
		long m23ParamValue = m23.nativeObject.pointer;
		long m30ParamValue = m30.nativeObject.pointer;
		long m31ParamValue = m31.nativeObject.pointer;
		long m32ParamValue = m32.nativeObject.pointer;
		long m33ParamValue = m33.nativeObject.pointer;
		get_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(this.nativeObject.pointer, m00ParamValue, m01ParamValue, m02ParamValue, m03ParamValue, m10ParamValue, m11ParamValue, m12ParamValue, m13ParamValue, m20ParamValue, m21ParamValue, m22ParamValue, m23ParamValue, m30ParamValue, m31ParamValue, m32ParamValue, m33ParamValue);
	}
	native private void set_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(long pNativeObject, double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33);
	public void set(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23, double m30, double m31, double m32, double m33)
	{
		double m00ParamValue = m00;
		double m01ParamValue = m01;
		double m02ParamValue = m02;
		double m03ParamValue = m03;
		double m10ParamValue = m10;
		double m11ParamValue = m11;
		double m12ParamValue = m12;
		double m13ParamValue = m13;
		double m20ParamValue = m20;
		double m21ParamValue = m21;
		double m22ParamValue = m22;
		double m23ParamValue = m23;
		double m30ParamValue = m30;
		double m31ParamValue = m31;
		double m32ParamValue = m32;
		double m33ParamValue = m33;
		set_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real_Real(this.nativeObject.pointer, m00ParamValue, m01ParamValue, m02ParamValue, m03ParamValue, m10ParamValue, m11ParamValue, m12ParamValue, m13ParamValue, m20ParamValue, m21ParamValue, m22ParamValue, m23ParamValue, m30ParamValue, m31ParamValue, m32ParamValue, m33ParamValue);
	}
	native private long extractQuaternion_void(long pNativeObject);
	/**
	 * 由矩阵析出旋转和缩放四元数
	 * @param  
	 * @return 四元数结果
	 */
	public com.earthview.world.spatial.math.Quaternion extractQuaternion()
	{
		long returnValue = extractQuaternion_void(this.nativeObject.pointer);
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
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.math.Matrix4 get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_ZEROAFFINE_void();
	public static com.earthview.world.spatial.math.Matrix4 get_ZEROAFFINE()
	{
		long jniValue = get_ZEROAFFINE_void();
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_IDENTITY_void();
	public static com.earthview.world.spatial.math.Matrix4 get_IDENTITY()
	{
		long jniValue = get_IDENTITY_void();
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private static long get_CLIPSPACE2DTOIMAGESPACE_void();
	public static com.earthview.world.spatial.math.Matrix4 get_CLIPSPACE2DTOIMAGESPACE()
	{
		long jniValue = get_CLIPSPACE2DTOIMAGESPACE_void();
		
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private long OperatorMultiply_Real(long pNativeObject, double scalar);
	/**
	 * 由矩阵与实数相乘，缩放
	 * @param scalar 实数系数
	 * @return 结果矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 OperatorMultiply(double scalar)
	{
		double scalarParamValue = scalar;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, scalarParamValue);
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
	native private long adjoint_void(long pNativeObject);
	/**
	 * 求伴随矩阵
	 * @param  输出流对象
	 * @return 伴随矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix4 adjoint()
	{
		long returnValue = adjoint_void(this.nativeObject.pointer);
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
	native private double determinant_void(long pNativeObject);
	/**
	 * 矩阵行列式化(求模)
	 * @param  
	 * @return 模结果
	 */
	public double determinant()
	{
		double returnValue = determinant_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long inverse_void(long pNativeObject);
	/**
	 * 矩阵求逆
	 * @param  
	 * @return 求逆后矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix4 inverse()
	{
		long returnValue = inverse_void(this.nativeObject.pointer);
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
	native private void makeTransform_CVector3_CVector3_CQuaternion(long pNativeObject, long position, long scale, long orientation);
	/**
	 * 构建方向/缩放/位置变换矩阵，变换顺序为缩放、旋转、平移
	 * @param position 平移向量
	 * @param scale 缩放向量
	 * @param orientation 旋转四元数
	 */
	public void makeTransform(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion orientation)
	{
		long positionParamValue = position.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		makeTransform_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, positionParamValue, scaleParamValue, orientationParamValue);
	}
	native private void makeInverseTransform_CVector3_CVector3_CQuaternion(long pNativeObject, long position, long scale, long orientation);
	/**
	 * 构建方向/缩放/位置变换逆矩阵，变换顺序为缩放、旋转、平移
	 * @param position 平移向量
	 * @param scale 缩放向量
	 * @param orientation 旋转四元数
	 */
	public void makeInverseTransform(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion orientation)
	{
		long positionParamValue = position.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		makeInverseTransform_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, positionParamValue, scaleParamValue, orientationParamValue);
	}
	native private void decomposition_CVector3_CVector3_CQuaternion(long pNativeObject, long position, long scale, long orientation);
	/**
	 * 分解矩阵为缩放、旋转、平移向量
	 * @param position 平移向量
	 * @param scale 缩放向量
	 * @param orientation 旋转四元数
	 */
	public void decomposition(com.earthview.world.spatial.math.Vector3 position, com.earthview.world.spatial.math.Vector3 scale, com.earthview.world.spatial.math.Quaternion orientation)
	{
		long positionParamValue = position.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long orientationParamValue = orientation.nativeObject.pointer;
		decomposition_CVector3_CVector3_CQuaternion(this.nativeObject.pointer, positionParamValue, scaleParamValue, orientationParamValue);
	}
	native private boolean isAffine_void(long pNativeObject);
	/**
	 * 判断矩阵是否为相似矩阵
	 * @param  
	 * @return 是返回true，否则false
	 */
	public boolean isAffine()
	{
		boolean returnValue = isAffine_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long inverseAffine_void(long pNativeObject);
	/**
	 * 求相似矩阵逆矩阵
	 * @param  
	 * @return 返回相似矩阵逆矩阵结果
	 */
	public com.earthview.world.spatial.math.Matrix4 inverseAffine()
	{
		long returnValue = inverseAffine_void(this.nativeObject.pointer);
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
	native private long concatenateAffine_CMatrix4(long pNativeObject, long m2);
	/**
	 * 与相似矩阵相乘连接
	 * @param m2 其它相似矩阵
	 * @return 返回连接结果
	 */
	public com.earthview.world.spatial.math.Matrix4 concatenateAffine(com.earthview.world.spatial.math.Matrix4 m2)
	{
		long m2ParamValue = m2.nativeObject.pointer;
		long returnValue = concatenateAffine_CMatrix4(this.nativeObject.pointer, m2ParamValue);
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
	native private long transformAffine_CVector3(long pNativeObject, long v);
	/**
	 * 用相似矩阵变换三维向量
	 * @param v 三维向量
	 * @return 返回结果向量
	 */
	public com.earthview.world.spatial.math.Vector3 transformAffine(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = transformAffine_CVector3(this.nativeObject.pointer, vParamValue);
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
	native private long transformAffine_CVector4(long pNativeObject, long v);
	/**
	 * 用相似矩阵变换四维向量
	 * @param v 四维向量
	 * @return 返回结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 transformAffine(com.earthview.world.spatial.math.Vector4 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = transformAffine_CVector4(this.nativeObject.pointer, vParamValue);
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
	native private long toMatrix4f_void(long pNativeObject);
	public com.earthview.world.spatial.math.Matrix4 toMatrix4f()
	{
		long returnValue = toMatrix4f_void(this.nativeObject.pointer);
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
	public Matrix4(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Matrix4(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Matrix4 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Matrix4 obj = null;
 		if(baseObj instanceof Matrix4)
		{
			obj = (Matrix4)baseObj;
		} else {
			obj = new Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMatrix4");
			obj.increaseCast();
		}

		return obj;
	}
}
