package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 定点数类将浮点型数据转换成定点数进行运算
 */
public class FixedPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CFixedPoint", new FixedPointClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FixedPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFixedPoint", null);
	}

	native private long get_m_intPart_void(long pNativeObject);
	public long get_m_intPart()
	{
		long jniValue = get_m_intPart_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_m_intPart_ev_int64 (long pNativeObject, long value);
	public void set_m_intPart(long m_intPart)
	{
		long m_intPartParamValue = m_intPart;
		
		set_m_intPart_ev_int64(this.nativeObject.pointer, m_intPartParamValue);
	}
	
	/**
	 * 构造函数
	 * @param fval 单精度浮点数据
	 */
	public FixedPoint(float fval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer fvalPtr = new BasePointer(fval);
		list.add("fval", fvalPtr.get());
		Create("CFixedPoint", list);
	}

	/**
	 * 构造函数
	 * @param dval 双精度浮点数据
	 */
	public FixedPoint(double dval) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer dvalPtr = new BasePointer(dval);
		list.add("dval", dvalPtr.get());
		Create("CFixedPoint", list);
	}

	/**
	 * 构造函数
	 * @param ival int整型数据
	 */
	public FixedPoint(int ival) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ivalPtr = new BasePointer(ival);
		list.add("ival", ivalPtr.get());
		Create("CFixedPoint", list);
	}

	/**
	 * 复制构造函数
	 * @param val 定点型数据
	 */
	public FixedPoint(com.earthview.world.spatial.math.FixedPoint val) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer valPtr = new BasePointer(val);
		list.add("val", valPtr.get());
		Create("CFixedPoint", list);
	}

	native private long OperatorAssign_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"="操作符
	 * @param val 单精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorAssign(float val)
	{
		float valParamValue = val;
		long returnValue = OperatorAssign_ev_real32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"="操作符
	 * @param val 双精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorAssign(double val)
	{
		double valParamValue = val;
		long returnValue = OperatorAssign_ev_real64(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorAssign_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"="操作符
	 * @param val int整形数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorAssign(int val)
	{
		int valParamValue = val;
		long returnValue = OperatorAssign_ev_int32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorAssign_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"="操作符
	 * @param val 定点型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorAssign(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = OperatorAssign_CFixedPoint(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorNegative_void(long pNativeObject);
	/**
	 * 重载负号操作符
	 * @param  
	 * @return 相反符号定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorNegative()
	{
		long returnValue = OperatorNegative_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorPosivate_void(long pNativeObject);
	/**
	 * 重载正号操作符
	 * @param  
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPosivate()
	{
		long returnValue = OperatorPosivate_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorPlus_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"+"操作符
	 * @param val 定点型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPlus(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = OperatorPlus_CFixedPoint(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorPlus_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"+"操作符
	 * @param val 单精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPlus(float val)
	{
		float valParamValue = val;
		long returnValue = OperatorPlus_ev_real32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorPlus_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"+"操作符
	 * @param val 双精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPlus(double val)
	{
		double valParamValue = val;
		long returnValue = OperatorPlus_ev_real64(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorPlus_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"+"操作符
	 * @param val int32整型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPlus(int val)
	{
		int valParamValue = val;
		long returnValue = OperatorPlus_ev_int32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMinus_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"-"操作符
	 * @param val 定点型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMinus(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = OperatorMinus_CFixedPoint(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMinus_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"-"操作符
	 * @param val 单精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMinus(float val)
	{
		float valParamValue = val;
		long returnValue = OperatorMinus_ev_real32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMinus_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"-"操作符
	 * @param val 双精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMinus(double val)
	{
		double valParamValue = val;
		long returnValue = OperatorMinus_ev_real64(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMinus_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"-"操作符
	 * @param val int32整型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMinus(int val)
	{
		int valParamValue = val;
		long returnValue = OperatorMinus_ev_int32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"*"操作符
	 * @param val 定点型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMultiply(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = OperatorMultiply_CFixedPoint(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"*"操作符
	 * @param val 单精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMultiply(float val)
	{
		float valParamValue = val;
		long returnValue = OperatorMultiply_ev_real32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"*"操作符
	 * @param val 双精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMultiply(double val)
	{
		double valParamValue = val;
		long returnValue = OperatorMultiply_ev_real64(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMultiply_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"*"操作符
	 * @param val int32整型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMultiply(int val)
	{
		int valParamValue = val;
		long returnValue = OperatorMultiply_ev_int32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorDivide_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"/"操作符
	 * @param val 定点型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorDivide(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		long returnValue = OperatorDivide_CFixedPoint(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorDivide_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"/"操作符
	 * @param val 单精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorDivide(float val)
	{
		float valParamValue = val;
		long returnValue = OperatorDivide_ev_real32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorDivide_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"/"操作符
	 * @param val 双精度浮点数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorDivide(double val)
	{
		double valParamValue = val;
		long returnValue = OperatorDivide_ev_real64(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorDivide_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"/"操作符
	 * @param val int32整型数据
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorDivide(int val)
	{
		int valParamValue = val;
		long returnValue = OperatorDivide_ev_int32(this.nativeObject.pointer, valParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private float OperatorConvertionev_real32_void(long pNativeObject);
	/**
	 * 转换成为单精度数据
	 * @param  
	 * @return 单精度数据数据
	 */
	public float OperatorConvertionev_real32()
	{
		float returnValue = OperatorConvertionev_real32_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double OperatorConvertionev_real64_void(long pNativeObject);
	/**
	 * 转换成为双精度数据
	 * @param  
	 * @return 双精度数据数据
	 */
	public double OperatorConvertionev_real64()
	{
		double returnValue = OperatorConvertionev_real64_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int OperatorConvertionev_int32_void(long pNativeObject);
	/**
	 * 转换成为int32整型数据
	 * @param  
	 * @return int32整型数据
	 */
	public int OperatorConvertionev_int32()
	{
		int returnValue = OperatorConvertionev_int32_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long OperatorPlusLeftIncrease_void(long pNativeObject);
	/**
	 * 重载左自增操作符
	 * @param  
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPlusLeftIncrease()
	{
		long returnValue = OperatorPlusLeftIncrease_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMinusLeftDecrease_void(long pNativeObject);
	/**
	 * 重载左自减操作符
	 * @param  
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMinusLeftDecrease()
	{
		long returnValue = OperatorMinusLeftDecrease_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate, "CFixedPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorPlusRightIncrease_ev_int32(long pNativeObject, int val1);
	/**
	 * 重载右自增操作符
	 * @param  
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorPlusRightIncrease(int val1)
	{
		int val1ParamValue = val1;
		long returnValue = OperatorPlusRightIncrease_ev_int32(this.nativeObject.pointer, val1ParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private long OperatorMinusRightDecrease_ev_int32(long pNativeObject, int val1);
	/**
	 * 重载右自减操作符
	 * @param  
	 * @return 定点型数据
	 */
	public com.earthview.world.spatial.math.FixedPoint OperatorMinusRightDecrease(int val1)
	{
		int val1ParamValue = val1;
		long returnValue = OperatorMinusRightDecrease_ev_int32(this.nativeObject.pointer, val1ParamValue);
		com.earthview.world.spatial.math.FixedPoint __returnValue = new com.earthview.world.spatial.math.FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.FixedPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CFixedPoint");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"=="操作符
	 * @param val 单精度浮点数据
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(float val)
	{
		float valParamValue = val;
		boolean returnValue = OperatorEquals_ev_real32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"=="操作符
	 * @param val 双精度浮点数据
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(double val)
	{
		double valParamValue = val;
		boolean returnValue = OperatorEquals_ev_real64(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"=="操作符
	 * @param val int32整型数据
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(int val)
	{
		int valParamValue = val;
		boolean returnValue = OperatorEquals_ev_int32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorEquals_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"=="操作符
	 * @param val 定点型数据
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CFixedPoint(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_ev_real32(long pNativeObject, float val);
	/**
	 * 重载"!="操作符
	 * @param val 单精度浮点数据
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(float val)
	{
		float valParamValue = val;
		boolean returnValue = OperatorNotEquals_ev_real32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_ev_real64(long pNativeObject, double val);
	/**
	 * 重载"!="操作符
	 * @param val 双精度浮点数据
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(double val)
	{
		double valParamValue = val;
		boolean returnValue = OperatorNotEquals_ev_real64(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_ev_int32(long pNativeObject, int val);
	/**
	 * 重载"!="操作符
	 * @param val int32整型数据
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(int val)
	{
		int valParamValue = val;
		boolean returnValue = OperatorNotEquals_ev_int32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载"!="操作符
	 * @param val 定点型数据
	 * @return 不相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CFixedPoint(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_ev_real32(long pNativeObject, float val);
	/**
	 * 重载">"操作符
	 * @param val 单精度浮点数据
	 * @return 大于返回true，否则false
	 */
	public boolean OperatorGreaterThan(float val)
	{
		float valParamValue = val;
		boolean returnValue = OperatorGreaterThan_ev_real32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_ev_real64(long pNativeObject, double val);
	/**
	 * 重载">"操作符
	 * @param val 双精度浮点数据
	 * @return 大于返回true，否则false
	 */
	public boolean OperatorGreaterThan(double val)
	{
		double valParamValue = val;
		boolean returnValue = OperatorGreaterThan_ev_real64(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_ev_int32(long pNativeObject, int val);
	/**
	 * 重载">"操作符
	 * @param val int32整型数据
	 * @return 大于返回true，否则false
	 */
	public boolean OperatorGreaterThan(int val)
	{
		int valParamValue = val;
		boolean returnValue = OperatorGreaterThan_ev_int32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThan_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载">"操作符
	 * @param val 定点型数据
	 * @return 大于返回true，否则false
	 */
	public boolean OperatorGreaterThan(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThan_CFixedPoint(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_ev_real32(long pNativeObject, float val);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="val">单精度浮点数据</param>
	/// <returns>小于返回true，否则false</returns>
	public boolean OperatorLessThan(float val)
	{
		float valParamValue = val;
		boolean returnValue = OperatorLessThan_ev_real32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_ev_real64(long pNativeObject, double val);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="val">双精度浮点数据</param>
	/// <returns>小于返回true，否则false</returns>
	public boolean OperatorLessThan(double val)
	{
		double valParamValue = val;
		boolean returnValue = OperatorLessThan_ev_real64(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_ev_int32(long pNativeObject, int val);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="val">int32整型数据</param>
	/// <returns>小于返回true，否则false</returns>
	public boolean OperatorLessThan(int val)
	{
		int valParamValue = val;
		boolean returnValue = OperatorLessThan_ev_int32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThan_CFixedPoint(long pNativeObject, long val);
	/// <summary>
	/// 重载"<"操作符
	/// </summary>
	/// <param name="val">定点型数据</param>
	/// <returns>小于返回true，否则false</returns>
	public boolean OperatorLessThan(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = OperatorLessThan_CFixedPoint(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_ev_real32(long pNativeObject, float val);
	/**
	 * 重载">="操作符
	 * @param val 单精度浮点数据
	 * @return 大于相等返回true，否则false
	 */
	public boolean OperatorGreaterThanOrEqual(float val)
	{
		float valParamValue = val;
		boolean returnValue = OperatorGreaterThanOrEqual_ev_real32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_ev_real64(long pNativeObject, double val);
	/**
	 * 重载">="操作符
	 * @param val 双精度浮点数据
	 * @return 大于相等返回true，否则false
	 */
	public boolean OperatorGreaterThanOrEqual(double val)
	{
		double valParamValue = val;
		boolean returnValue = OperatorGreaterThanOrEqual_ev_real64(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_ev_int32(long pNativeObject, int val);
	/**
	 * 重载">="操作符
	 * @param val int32数据
	 * @return 大于相等返回true，否则false
	 */
	public boolean OperatorGreaterThanOrEqual(int val)
	{
		int valParamValue = val;
		boolean returnValue = OperatorGreaterThanOrEqual_ev_int32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorGreaterThanOrEqual_CFixedPoint(long pNativeObject, long val);
	/**
	 * 重载">="操作符
	 * @param val 定点型数据
	 * @return 大于相等返回true，否则false
	 */
	public boolean OperatorGreaterThanOrEqual(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = OperatorGreaterThanOrEqual_CFixedPoint(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_ev_real32(long pNativeObject, float val);
	/// <summary>
	/// 重载"<="操作符
	/// </summary>
	/// <param name="val">单精度浮点数据</param>
	/// <returns>小于相等返回true，否则false</returns>
	public boolean OperatorLessThanOrEqual(float val)
	{
		float valParamValue = val;
		boolean returnValue = OperatorLessThanOrEqual_ev_real32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_ev_real64(long pNativeObject, double val);
	/// <summary>
	/// 重载"<="操作符
	/// </summary>
	/// <param name="val">双精度浮点数据</param>
	/// <returns>小于相等返回true，否则false</returns>
	public boolean OperatorLessThanOrEqual(double val)
	{
		double valParamValue = val;
		boolean returnValue = OperatorLessThanOrEqual_ev_real64(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_ev_int32(long pNativeObject, int val);
	/// <summary>
	/// 重载"<="操作符
	/// </summary>
	/// <param name="val">int32数据</param>
	/// <returns>小于相等返回true，否则false</returns>
	public boolean OperatorLessThanOrEqual(int val)
	{
		int valParamValue = val;
		boolean returnValue = OperatorLessThanOrEqual_ev_int32(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	native private boolean OperatorLessThanOrEqual_CFixedPoint(long pNativeObject, long val);
	/// <summary>
	/// 重载"<="操作符
	/// </summary>
	/// <param name="val">定点型数据</param>
	/// <returns>小于相等返回true，否则false</returns>
	public boolean OperatorLessThanOrEqual(com.earthview.world.spatial.math.FixedPoint val)
	{
		long valParamValue = val.nativeObject.pointer;
		boolean returnValue = OperatorLessThanOrEqual_CFixedPoint(this.nativeObject.pointer, valParamValue);
		return returnValue;
	}
	public FixedPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FixedPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FixedPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FixedPoint obj = null;
 		if(baseObj instanceof FixedPoint)
		{
			obj = (FixedPoint)baseObj;
		} else {
			obj = new FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFixedPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
