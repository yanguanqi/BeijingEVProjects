package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 平面类定义了平面操作
 */
public class Plane extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPlane", new PlaneClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Plane() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPlane", null);
	}

	/**
	 * 复制构造函数
	 * @param rhs 
	 */
	public Plane(com.earthview.world.spatial.math.Plane rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CPlane", list);
	}

	/**
	 * 根据平面法线和平移常量构造平面
	 * @param rkNormal 法线向量
	 * @param fConstant 常量
	 */
	public Plane(com.earthview.world.spatial.math.Vector3 rkNormal, double fConstant) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rkNormalPtr = new BasePointer(rkNormal);
		list.add("rkNormal", rkNormalPtr.get());
		BasePointer fConstantPtr = new BasePointer(fConstant);
		list.add("fConstant", fConstantPtr.get());
		Create("CPlane", list);
	}

	/**
	 * 从四个常量构造平面
	 * @param a 常量
	 * @param b 常量
	 * @param c 常量
	 * @param d 常量
	 */
	public Plane(double fa, double fb, double fc, double fd) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer faPtr = new BasePointer(fa);
		list.add("fa", faPtr.get());
		BasePointer fbPtr = new BasePointer(fb);
		list.add("fb", fbPtr.get());
		BasePointer fcPtr = new BasePointer(fc);
		list.add("fc", fcPtr.get());
		BasePointer fdPtr = new BasePointer(fd);
		list.add("fd", fdPtr.get());
		Create("CPlane", list);
	}

	/**
	 * 根据平面法线和点坐标构造平面
	 * @param rkNormal 法线向量
	 * @param rkPoint 点坐标
	 */
	public Plane(com.earthview.world.spatial.math.Vector3 rkNormal, com.earthview.world.spatial.math.Vector3 rkPoint) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rkNormalPtr = new BasePointer(rkNormal);
		list.add("rkNormal", rkNormalPtr.get());
		BasePointer rkPointPtr = new BasePointer(rkPoint);
		list.add("rkPoint", rkPointPtr.get());
		Create("CPlane", list);
	}

	/**
	 * 从三个空间点构造平面
	 * @param rkPoint0 点坐标
	 * @param rkPoint1 点坐标
	 * @param rkPoint2 点坐标
	 */
	public Plane(com.earthview.world.spatial.math.Vector3 rkPoint0, com.earthview.world.spatial.math.Vector3 rkPoint1, com.earthview.world.spatial.math.Vector3 rkPoint2) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rkPoint0Ptr = new BasePointer(rkPoint0);
		list.add("rkPoint0", rkPoint0Ptr.get());
		BasePointer rkPoint1Ptr = new BasePointer(rkPoint1);
		list.add("rkPoint1", rkPoint1Ptr.get());
		BasePointer rkPoint2Ptr = new BasePointer(rkPoint2);
		list.add("rkPoint2", rkPoint2Ptr.get());
		Create("CPlane", list);
	}

	public enum Side implements INativeEnum<Side> {
		NO_SIDE(SideHelper.ENUM_VALUES[0]),
		POSITIVE_SIDE(SideHelper.ENUM_VALUES[1]),
		NEGATIVE_SIDE(SideHelper.ENUM_VALUES[2]),
		BOTH_SIDE(SideHelper.ENUM_VALUES[3]);
		private int value;
		Side(int i) {
			this.value = i;
		}
		public Side getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final Side toEnum(int retval) {
			if(retval == NO_SIDE.value){
				return NO_SIDE;
			}
			else if(retval == POSITIVE_SIDE.value){
				return POSITIVE_SIDE;
			}
			else if(retval == NEGATIVE_SIDE.value){
				return NEGATIVE_SIDE;
			}
			else if(retval == BOTH_SIDE.value){
				return BOTH_SIDE;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class SideHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private int getSide_CVector3(long pNativeObject, long rkPoint);
	/**
	 * 根据到点的距离返回平面的类型
	 * @param rkPoint 点坐标
	 * @return 平面类型
	 */
	public com.earthview.world.spatial.math.Plane.Side getSide(com.earthview.world.spatial.math.Vector3 rkPoint)
	{
		long rkPointParamValue = rkPoint.nativeObject.pointer;
		int returnValue = getSide_CVector3(this.nativeObject.pointer, rkPointParamValue);
		return com.earthview.world.spatial.math.Plane.Side.toEnum(returnValue);
	}
	native private int getSide_CAxisAlignedBox(long pNativeObject, long rkBox);
	/**
	 * 根据平行轴边框盒返回平面的类型
	 * @param rkBox 边框盒对象
	 * @return 平面类型
	 */
	public com.earthview.world.spatial.math.Plane.Side getSide(com.earthview.world.spatial.math.AxisAlignedBox rkBox)
	{
		long rkBoxParamValue = rkBox.nativeObject.pointer;
		int returnValue = getSide_CAxisAlignedBox(this.nativeObject.pointer, rkBoxParamValue);
		return com.earthview.world.spatial.math.Plane.Side.toEnum(returnValue);
	}
	native private int getSide_CVector3_CVector3(long pNativeObject, long centre, long halfSize);
	/**
	 * 根据平行轴边框盒中心点和大小返回平面的类型
	 * @param centre 边框盒对象中心点
	 * @param halfSize 边框盒半边长
	 * @return 平面类型
	 */
	public com.earthview.world.spatial.math.Plane.Side getSide(com.earthview.world.spatial.math.Vector3 centre, com.earthview.world.spatial.math.Vector3 halfSize)
	{
		long centreParamValue = centre.nativeObject.pointer;
		long halfSizeParamValue = halfSize.nativeObject.pointer;
		int returnValue = getSide_CVector3_CVector3(this.nativeObject.pointer, centreParamValue, halfSizeParamValue);
		return com.earthview.world.spatial.math.Plane.Side.toEnum(returnValue);
	}
	native private double getDistance_CVector3(long pNativeObject, long rkPoint);
	/**
	 * 计算点到平面的距离
	 * @param rkPoint 点坐标
	 * @return 距离
	 */
	public double getDistance(com.earthview.world.spatial.math.Vector3 rkPoint)
	{
		long rkPointParamValue = rkPoint.nativeObject.pointer;
		double returnValue = getDistance_CVector3(this.nativeObject.pointer, rkPointParamValue);
		return returnValue;
	}
	native private void redefine_CVector3_CVector3_CVector3(long pNativeObject, long rkPoint0, long rkPoint1, long rkPoint2);
	/**
	 * 从三个空间点重新构建平面
	 * @param rkPoint0 点坐标
	 * @param rkPoint1 点坐标
	 * @param rkPoint2 点坐标
	 * @return 距离
	 */
	public void redefine(com.earthview.world.spatial.math.Vector3 rkPoint0, com.earthview.world.spatial.math.Vector3 rkPoint1, com.earthview.world.spatial.math.Vector3 rkPoint2)
	{
		long rkPoint0ParamValue = rkPoint0.nativeObject.pointer;
		long rkPoint1ParamValue = rkPoint1.nativeObject.pointer;
		long rkPoint2ParamValue = rkPoint2.nativeObject.pointer;
		redefine_CVector3_CVector3_CVector3(this.nativeObject.pointer, rkPoint0ParamValue, rkPoint1ParamValue, rkPoint2ParamValue);
	}
	native private void redefine_CVector3_CVector3(long pNativeObject, long rkNormal, long rkPoint);
	/**
	 * 根据平面法线和点坐标构造平面
	 * @param rkNormal 法线向量
	 * @param rkPoint 点坐标
	 */
	public void redefine(com.earthview.world.spatial.math.Vector3 rkNormal, com.earthview.world.spatial.math.Vector3 rkPoint)
	{
		long rkNormalParamValue = rkNormal.nativeObject.pointer;
		long rkPointParamValue = rkPoint.nativeObject.pointer;
		redefine_CVector3_CVector3(this.nativeObject.pointer, rkNormalParamValue, rkPointParamValue);
	}
	native private long projectVector_CVector3(long pNativeObject, long v);
	/**
	 * 在平面上构建一个点
	 * @param v 垂直平面法线的向量
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 projectVector(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = projectVector_CVector3(this.nativeObject.pointer, vParamValue);
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
	native private double normalise_void(long pNativeObject);
	/**
	 * 标准化平面法线
	 * @param  
	 * @return 法线的模
	 */
	public double normalise()
	{
		double returnValue = normalise_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long get_normal_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_normal()
	{
		long jniValue = get_normal_void(this.nativeObject.pointer);
		
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
	
	native private void set_normal_CVector3 (long pNativeObject, long value);
	public void set_normal(com.earthview.world.spatial.math.Vector3 normal)
	{
		long normalParamValue = normal.nativeObject.pointer;
		
		set_normal_CVector3(this.nativeObject.pointer, normalParamValue);
	}
	
	native private double get_d_void(long pNativeObject);
	public double get_d()
	{
		double jniValue = get_d_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_d_Real (long pNativeObject, double value);
	public void set_d(double d)
	{
		double dParamValue = d;
		
		set_d_Real(this.nativeObject.pointer, dParamValue);
	}
	
	native private boolean OperatorEquals_CPlane(long pNativeObject, long rhs);
	/**
	 * 重载"=="
	 * @param rhs 平面对象
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorEquals(com.earthview.world.spatial.math.Plane rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CPlane(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CPlane(long pNativeObject, long rhs);
	/**
	 * 重载"!="
	 * @param rhs 平面对象
	 * @return 相等返回true，否则false
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial.math.Plane rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CPlane(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public Plane(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Plane(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Plane fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Plane obj = null;
 		if(baseObj instanceof Plane)
		{
			obj = (Plane)baseObj;
		} else {
			obj = new Plane(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPlane");
			obj.increaseCast();
		}

		return obj;
	}
}
