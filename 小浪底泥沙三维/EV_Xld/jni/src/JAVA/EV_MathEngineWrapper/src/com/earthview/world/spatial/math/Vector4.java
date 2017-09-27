package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 四维向量类定义了四维向量操作函数
 */
public class Vector4 extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CVector4", new Vector4ClassFactory());
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
	public Vector4() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVector4", null);
	}

	/**
	 * 从四个实数构造四维向量
	 * @param fX x
	 * @param fY y
	 */
	public Vector4(double fX, double fY, double fZ, double fW) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		BasePointer fYPtr = new BasePointer(fY);
		list.add("fY", fYPtr.get());
		BasePointer fZPtr = new BasePointer(fZ);
		list.add("fZ", fZPtr.get());
		BasePointer fWPtr = new BasePointer(fW);
		list.add("fW", fWPtr.get());
		Create("CVector4", list);
	}

	/**
	 * 从三维坐标构造四维向量
	 * @param afCoordinate[4] 四维坐标
	 */
	public Vector4(NativeIntegerBuffer aiCoordinate) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer aiCoordinatePtr = new BasePointer(aiCoordinate);
		list.add("aiCoordinate", aiCoordinatePtr.get());
		Create("CVector4", list);
	}

	/**
	 * 从指针构造四维向量
	 * @param afCoordinate[2] 四维坐标
	 */
	public Vector4(DoublePointer r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CVector4", list);
	}

	/**
	 * 从一个实数构造四维向量
	 * @param scaler 缩放系数
	 */
	public Vector4(double scaler) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer scalerPtr = new BasePointer(scaler);
		list.add("scaler", scalerPtr.get());
		Create("CVector4", list);
	}

	/**
	 * 从四维向量构造四维向量
	 * @param scaler 缩放系数
	 */
	public Vector4(com.earthview.world.spatial.math.Vector3 rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CVector4", list);
	}

	native private int toDataStream_CDataStream(long pNativeObject, long dataStream);
	/**
	 * 序列化到数据流
	 * @param dataStream 数据流
	 * @return 序列化到流的字节数
	 */
	public int toDataStream(com.earthview.world.core.DataStream dataStream)
	{
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		int returnValue = toDataStream_CDataStream(this.nativeObject.pointer, dataStreamParamValue);
		return returnValue;
	}
	native private int fromDataStream_CDataStream(long pNativeObject, long dataStream);
	/**
	 * 从数据流反序列化
	 * @param dataStream 数据流
	 * @return 反序列化的字节数
	 */
	public int fromDataStream(com.earthview.world.core.DataStream dataStream)
	{
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		int returnValue = fromDataStream_CDataStream(this.nativeObject.pointer, dataStreamParamValue);
		return returnValue;
	}
	native private void swap_CVector4(long pNativeObject, long other);
	/**
	 * 与其它四维向量交换数据
	 * @param other 其它四维向量
	 */
	public void swap(com.earthview.world.spatial.math.Vector4 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CVector4(this.nativeObject.pointer, otherParamValue);
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
	native private long OperatorAssign_CVector4(long pNativeObject, long rkVector);
	/**
	 * 重载"="操作符
	 * @param rkVector 源四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorAssign(com.earthview.world.spatial.math.Vector4 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorAssign_CVector4(this.nativeObject.pointer, rkVectorParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long OperatorAssign_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"="操作符，从实数赋值
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorAssign(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorAssign_Real(this.nativeObject.pointer, fScalarParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CVector4(long pNativeObject, long rkVector);
	/**
	 * 重载"=="操作符
	 * @param rkVector 四维向量
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Vector4 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CVector4(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CVector4(long pNativeObject, long rkVector);
	/**
	 * 重载"！="操作符
	 * @param rkVector 四维向量
	 * @return 非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Vector4 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CVector4(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private long OperatorAssign_CVector3(long pNativeObject, long rhs);
	/**
	 * 重载"=="操作符
	 * @param rhs 三维向量
	 * @return 相等返回true，否则false
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorAssign(com.earthview.world.spatial.math.Vector3 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorAssign_CVector3(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CVector4(long pNativeObject, long rkVector);
	/**
	 * 重载"+"操作符
	 * @param rkVector 四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorPlus(com.earthview.world.spatial.math.Vector4 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorPlus_CVector4(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long OperatorMinus_CVector4(long pNativeObject, long rkVector);
	/**
	 * 重载"-"操作符
	 * @param rkVector 四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorMinus(com.earthview.world.spatial.math.Vector4 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorMinus_CVector4(this.nativeObject.pointer, rkVectorParamValue);
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
	native private long OperatorMultiply_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"*"操作符，与实数相乘
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorMultiply(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fScalarParamValue);
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
	native private long OperatorMultiply_CVector4(long pNativeObject, long rhs);
	/**
	 * 重载"*"操作符
	 * @param rhs 四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorMultiply(com.earthview.world.spatial.math.Vector4 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorMultiply_CVector4(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorDivide_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"/"操作符，与实数相除
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorDivide(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorDivide_Real(this.nativeObject.pointer, fScalarParamValue);
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
	native private long OperatorDivide_CVector4(long pNativeObject, long rhs);
	/**
	 * 重载"/"操作符
	 * @param rhs 四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorDivide(com.earthview.world.spatial.math.Vector4 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorDivide_CVector4(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorPosivate_void(long pNativeObject);
	/**
	 * 重载正号操作符
	 * @param  四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorPosivate()
	{
		long returnValue = OperatorPosivate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate, "CVector4");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector4)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector4");
		}
		return __returnValue;
	}
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  四维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
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
	native private long OperatorPlus_Real(long pNativeObject, double rhs);
	/**
	 * 重载"+"操作符，实数与四维向量相加
	 * @param lhs 左四维向量
	 * @param rhs 右实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorPlus(double rhs)
	{
		double rhsParamValue = rhs;
		long returnValue = OperatorPlus_Real(this.nativeObject.pointer, rhsParamValue);
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
	native private long OperatorMinus_Real(long pNativeObject, double rhs);
	/**
	 * 重载"-"操作符，四维向量减实数
	 * @param lhs 左四维向量
	 * @param rhs 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector4 OperatorMinus(double rhs)
	{
		double rhsParamValue = rhs;
		long returnValue = OperatorMinus_Real(this.nativeObject.pointer, rhsParamValue);
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
	native private double dotProduct_CVector4(long pNativeObject, long vec);
	/**
	 * 向量点乘
	 * @param vec 其它四维向量
	 * @return 结果
	 */
	public double dotProduct(com.earthview.world.spatial.math.Vector4 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		double returnValue = dotProduct_CVector4(this.nativeObject.pointer, vecParamValue);
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
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.math.Vector4 get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.math.Vector4 __returnValue = new com.earthview.world.spatial.math.Vector4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	public Vector4(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Vector4(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Vector4 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Vector4 obj = null;
 		if(baseObj instanceof Vector4)
		{
			obj = (Vector4)baseObj;
		} else {
			obj = new Vector4(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVector4");
			obj.increaseCast();
		}

		return obj;
	}
}
