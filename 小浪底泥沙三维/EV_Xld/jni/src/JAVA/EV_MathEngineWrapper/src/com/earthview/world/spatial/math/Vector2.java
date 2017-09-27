package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 二维向量类定义了二维向量操作函数
 */
public class Vector2 extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CVector2", new Vector2ClassFactory());
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
	public Vector2() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CVector2", null);
	}

	/**
	 * 从两个实数构造二维向量
	 * @param fX x
	 * @param fY y
	 */
	public Vector2(double fX, double fY) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fXPtr = new BasePointer(fX);
		list.add("fX", fXPtr.get());
		BasePointer fYPtr = new BasePointer(fY);
		list.add("fY", fYPtr.get());
		Create("CVector2", list);
	}

	/**
	 * 从一个实数构造二维向量
	 * @param scaler 缩放系数
	 */
	public Vector2(double scaler) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer scalerPtr = new BasePointer(scaler);
		list.add("scaler", scalerPtr.get());
		Create("CVector2", list);
	}

	/**
	 * 从二维坐标构造二维向量
	 * @param afCoordinate[2] 二维坐标
	 */
	public Vector2(NativeIntegerBuffer aiCoordinate) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer aiCoordinatePtr = new BasePointer(aiCoordinate);
		list.add("aiCoordinate", aiCoordinatePtr.get());
		Create("CVector2", list);
	}

	/**
	 * 从指针构造二维向量
	 * @param afCoordinate[2] 二维坐标
	 */
	public Vector2(DoublePointer r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("CVector2", list);
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
	native private void swap_CVector2(long pNativeObject, long other);
	/**
	 * 与其它二维向量交换数据
	 * @param other 其它二维向量
	 */
	public void swap(com.earthview.world.spatial.math.Vector2 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_CVector2(this.nativeObject.pointer, otherParamValue);
	}
	native private double OperatorIndex_ev_size_t(long pNativeObject, long i);
	/**
	 * 重载[]下标操作符
	 * @param i 下标
	 * @return 二维向量元素
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
	native private long OperatorAssign_CVector2(long pNativeObject, long rkVector);
	/**
	 * 重载"="操作符
	 * @param rkVector 源二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorAssign(com.earthview.world.spatial.math.Vector2 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorAssign_CVector2(this.nativeObject.pointer, rkVectorParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate, "CVector2");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorAssign_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"="操作符，从实数赋值
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorAssign(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorAssign_Real(this.nativeObject.pointer, fScalarParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate, "CVector2");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CVector2(long pNativeObject, long rkVector);
	/**
	 * 重载"=="操作符
	 * @param rkVector 二维向量
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Vector2 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CVector2(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CVector2(long pNativeObject, long rkVector);
	/**
	 * 重载"！="操作符
	 * @param rkVector 二维向量
	 * @return 非相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Vector2 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CVector2(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private long OperatorPlus_CVector2(long pNativeObject, long rkVector);
	/**
	 * 重载"+"操作符
	 * @param rkVector 二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorPlus(com.earthview.world.spatial.math.Vector2 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorPlus_CVector2(this.nativeObject.pointer, rkVectorParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorMinus_CVector2(long pNativeObject, long rkVector);
	/**
	 * 重载"-"操作符
	 * @param rkVector 二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorMinus(com.earthview.world.spatial.math.Vector2 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		long returnValue = OperatorMinus_CVector2(this.nativeObject.pointer, rkVectorParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"*"操作符，与实数相乘
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorMultiply(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, fScalarParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_CVector2(long pNativeObject, long rhs);
	/**
	 * 重载"*"操作符
	 * @param rhs 二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorMultiply(com.earthview.world.spatial.math.Vector2 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorMultiply_CVector2(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorDivide_Real(long pNativeObject, double fScalar);
	/**
	 * 重载"/"操作符，与实数相除
	 * @param fScalar 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorDivide(double fScalar)
	{
		double fScalarParamValue = fScalar;
		long returnValue = OperatorDivide_Real(this.nativeObject.pointer, fScalarParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorDivide_CVector2(long pNativeObject, long rhs);
	/**
	 * 重载"/"操作符
	 * @param rhs 二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorDivide(com.earthview.world.spatial.math.Vector2 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		long returnValue = OperatorDivide_CVector2(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorPosivate_void(long pNativeObject);
	/**
	 * 重载正号操作符
	 * @param  二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorPosivate()
	{
		long returnValue = OperatorPosivate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate, "CVector2");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorPlus_Real(long pNativeObject, double rhs);
	/**
	 * 重载"+"操作符，二维向量相加
	 * @param lhs 左二维向量
	 * @param rhs 右二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorPlus(double rhs)
	{
		double rhsParamValue = rhs;
		long returnValue = OperatorPlus_Real(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long OperatorMinus_Real(long pNativeObject, double rhs);
	/**
	 * 重载"-"操作符，二维向量减实数
	 * @param lhs 左二维向量
	 * @param rhs 实数
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 OperatorMinus(double rhs)
	{
		double rhsParamValue = rhs;
		long returnValue = OperatorMinus_Real(this.nativeObject.pointer, rhsParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private double length_void(long pNativeObject);
	/**
	 * 求向量大小
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
	 * 求向量大小的平方
	 * @param  
	 * @return 结果
	 */
	public double squaredLength()
	{
		double returnValue = squaredLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double distance_CVector2(long pNativeObject, long rhs);
	/**
	 * 求向量间距
	 * @param rhs 其它二维向量
	 * @return 结果
	 */
	public double distance(com.earthview.world.spatial.math.Vector2 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		double returnValue = distance_CVector2(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private double squaredDistance_CVector2(long pNativeObject, long rhs);
	/**
	 * 求向量间距的平方
	 * @param rhs 其它二维向量
	 * @return 结果
	 */
	public double squaredDistance(com.earthview.world.spatial.math.Vector2 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		double returnValue = squaredDistance_CVector2(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private double dotProduct_CVector2(long pNativeObject, long vec);
	/**
	 * 向量点乘
	 * @param vec 其它二维向量
	 * @return 结果
	 */
	public double dotProduct(com.earthview.world.spatial.math.Vector2 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		double returnValue = dotProduct_CVector2(this.nativeObject.pointer, vecParamValue);
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
	native private long midPoint_CVector2(long pNativeObject, long vec);
	/**
	 * 求两向量中点
	 * @param vec 其它二维向量
	 * @return 结果向量
	 */
	public com.earthview.world.spatial.math.Vector2 midPoint(com.earthview.world.spatial.math.Vector2 vec)
	{
		long vecParamValue = vec.nativeObject.pointer;
		long returnValue = midPoint_CVector2(this.nativeObject.pointer, vecParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private boolean OperatorLessThan_CVector2(long pNativeObject, long rhs);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="rhs">其它二维向量</param>
	/// <returns>向量每个元素小于其它向量元素则为true，否则false</returns>
	public boolean OperatorLessThan(com.earthview.world.spatial.math.Vector2 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CVector2(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CVector2(long pNativeObject, long rhs);
	/**
	 * 重载">"操作符
	 * @param rhs 其它二维向量
	 * @return 向量每个元素大于其它向量元素则为true，否则false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.spatial.math.Vector2 rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CVector2(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private void makeFloor_CVector2(long pNativeObject, long cmp);
	/**
	 * 于其它向量各分量的小值组合成新的向量
	 * @param cmp 其它二维向量
	 */
	public void makeFloor(com.earthview.world.spatial.math.Vector2 cmp)
	{
		long cmpParamValue = cmp.nativeObject.pointer;
		makeFloor_CVector2(this.nativeObject.pointer, cmpParamValue);
	}
	native private void makeCeil_CVector2(long pNativeObject, long cmp);
	/**
	 * 于其它向量各分量的大值组合成新的向量
	 * @param cmp 其它二维向量
	 */
	public void makeCeil(com.earthview.world.spatial.math.Vector2 cmp)
	{
		long cmpParamValue = cmp.nativeObject.pointer;
		makeCeil_CVector2(this.nativeObject.pointer, cmpParamValue);
	}
	native private long perpendicular_void(long pNativeObject);
	/**
	 * 返回向量的垂直向量
	 * @param  
	 * @return 返回垂直向量
	 */
	public com.earthview.world.spatial.math.Vector2 perpendicular()
	{
		long returnValue = perpendicular_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private double crossProduct_CVector2(long pNativeObject, long rkVector);
	/**
	 * 向量叉乘
	 * @param rkVector 其它二维向量
	 * @return 叉乘结果
	 */
	public double crossProduct(com.earthview.world.spatial.math.Vector2 rkVector)
	{
		long rkVectorParamValue = rkVector.nativeObject.pointer;
		double returnValue = crossProduct_CVector2(this.nativeObject.pointer, rkVectorParamValue);
		return returnValue;
	}
	native private long randomDeviant_Real(long pNativeObject, double angle);
	/**
	 * 偏离原向量一定角度的随机向量
	 * @param angle 角度
	 * @return 偏离的向量
	 */
	public com.earthview.world.spatial.math.Vector2 randomDeviant(double angle)
	{
		double angleParamValue = angle;
		long returnValue = randomDeviant_Real(this.nativeObject.pointer, angleParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
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
	public com.earthview.world.spatial.math.Vector2 normalisedCopy()
	{
		long returnValue = normalisedCopy_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	native private long reflect_CVector2(long pNativeObject, long normal);
	/**
	 * 根据平面的法线向量，计算反射向量
	 * @param normal 平面的法线向量
	 * @return 反射向量
	 */
	public com.earthview.world.spatial.math.Vector2 reflect(com.earthview.world.spatial.math.Vector2 normal)
	{
		long normalParamValue = normal.nativeObject.pointer;
		long returnValue = reflect_CVector2(this.nativeObject.pointer, normalParamValue);
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
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
	native private long angleBetween_CVector2(long pNativeObject, long other);
	public com.earthview.world.spatial.math.Radian angleBetween(com.earthview.world.spatial.math.Vector2 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = angleBetween_CVector2(this.nativeObject.pointer, otherParamValue);
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
	native private long angleTo_CVector2(long pNativeObject, long other);
	public com.earthview.world.spatial.math.Radian angleTo(com.earthview.world.spatial.math.Vector2 other)
	{
		long otherParamValue = other.nativeObject.pointer;
		long returnValue = angleTo_CVector2(this.nativeObject.pointer, otherParamValue);
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
	native private static long get_ZERO_void();
	public static com.earthview.world.spatial.math.Vector2 get_ZERO()
	{
		long jniValue = get_ZERO_void();
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private static long get_UNIT_X_void();
	public static com.earthview.world.spatial.math.Vector2 get_UNIT_X()
	{
		long jniValue = get_UNIT_X_void();
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private static long get_UNIT_Y_void();
	public static com.earthview.world.spatial.math.Vector2 get_UNIT_Y()
	{
		long jniValue = get_UNIT_Y_void();
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private static long get_NEGATIVE_UNIT_X_void();
	public static com.earthview.world.spatial.math.Vector2 get_NEGATIVE_UNIT_X()
	{
		long jniValue = get_NEGATIVE_UNIT_X_void();
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private static long get_NEGATIVE_UNIT_Y_void();
	public static com.earthview.world.spatial.math.Vector2 get_NEGATIVE_UNIT_Y()
	{
		long jniValue = get_NEGATIVE_UNIT_Y_void();
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	native private static long get_UNIT_SCALE_void();
	public static com.earthview.world.spatial.math.Vector2 get_UNIT_SCALE()
	{
		long jniValue = get_UNIT_SCALE_void();
		
		com.earthview.world.spatial.math.Vector2 __returnValue = new com.earthview.world.spatial.math.Vector2(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector2");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector2)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector2");
		}
		return __returnValue;
	}
	
	public Vector2(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Vector2(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Vector2 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Vector2 obj = null;
 		if(baseObj instanceof Vector2)
		{
			obj = (Vector2)baseObj;
		} else {
			obj = new Vector2(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVector2");
			obj.increaseCast();
		}

		return obj;
	}
}
