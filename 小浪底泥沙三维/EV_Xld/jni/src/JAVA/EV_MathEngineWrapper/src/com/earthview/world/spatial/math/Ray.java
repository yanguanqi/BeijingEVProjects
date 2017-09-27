package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 射线类,定义了射线操作
 */
public class Ray extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CRay", new RayClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Ray() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRay", null);
	}

	/**
	 * 构造函数
	 * @param origin 射线源点
	 * @param direction 射线方向
	 */
	public Ray(com.earthview.world.spatial.math.Vector3 origin, com.earthview.world.spatial.math.Vector3 direction) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer originPtr = new BasePointer(origin);
		list.add("origin", originPtr.get());
		BasePointer directionPtr = new BasePointer(direction);
		list.add("direction", directionPtr.get());
		Create("CRay", list);
	}

	native private void setOrigin_CVector3(long pNativeObject, long origin);
	/**
	 * 设置射线源点坐标
	 * @param origin 源点坐标
	 */
	public void setOrigin(com.earthview.world.spatial.math.Vector3 origin)
	{
		long originParamValue = origin.nativeObject.pointer;
		setOrigin_CVector3(this.nativeObject.pointer, originParamValue);
	}
	native private long getOrigin_void(long pNativeObject);
	/**
	 * 获得射线源点坐标
	 * @param  
	 * @return 源点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getOrigin()
	{
		long returnValue = getOrigin_void(this.nativeObject.pointer);
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
	native private void setDirection_CVector3(long pNativeObject, long dir);
	/**
	 * 设置射线方向向量
	 * @param dir 方向向量
	 */
	public void setDirection(com.earthview.world.spatial.math.Vector3 dir)
	{
		long dirParamValue = dir.nativeObject.pointer;
		setDirection_CVector3(this.nativeObject.pointer, dirParamValue);
	}
	native private long getDirection_void(long pNativeObject);
	/**
	 * 返回射线方向向量
	 * @param  
	 * @return 射线方向向量
	 */
	public com.earthview.world.spatial.math.Vector3 getDirection()
	{
		long returnValue = getDirection_void(this.nativeObject.pointer);
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
	native private long getPoint_Real(long pNativeObject, double t);
	/**
	 * 返回射线方向t单位长度的点坐标
	 * @param t 长度t
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getPoint(double t)
	{
		double tParamValue = t;
		long returnValue = getPoint_Real(this.nativeObject.pointer, tParamValue);
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
	native private long getPoint_CVector3(long pNativeObject, long point);
	/**
	 * 返回点与射线的垂足
	 * @param point 点
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getPoint(com.earthview.world.spatial.math.Vector3 point)
	{
		long pointParamValue = point.nativeObject.pointer;
		long returnValue = getPoint_CVector3(this.nativeObject.pointer, pointParamValue);
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
	native private long OperatorMultiply_Real(long pNativeObject, double t);
	/**
	 * 返回射线方向t单位长度的点坐标
	 * @param t 长度t
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 OperatorMultiply(double t)
	{
		double tParamValue = t;
		long returnValue = OperatorMultiply_Real(this.nativeObject.pointer, tParamValue);
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
	native private long intersects_CPlane(long pNativeObject, long p);
	/**
	 * 判断射线是否与面相交
	 * @param p 面对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Plane p)
	{
		long pParamValue = p.nativeObject.pointer;
		long returnValue = intersects_CPlane(this.nativeObject.pointer, pParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private long intersects_CPlaneBoundedVolume(long pNativeObject, long p);
	/**
	 * 判断射线是否与凸多面体相交
	 * @param p 凸多面体对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.PlaneBoundedVolume p)
	{
		long pParamValue = p.nativeObject.pointer;
		long returnValue = intersects_CPlaneBoundedVolume(this.nativeObject.pointer, pParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private long intersects_CSphere(long pNativeObject, long s);
	/**
	 * 判断射线是否与球体相交
	 * @param s 球体对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Sphere s)
	{
		long sParamValue = s.nativeObject.pointer;
		long returnValue = intersects_CSphere(this.nativeObject.pointer, sParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private long intersects_CAxisAlignedBox(long pNativeObject, long box);
	/**
	 * 判断射线是否与平行轴线框盒相交
	 * @param box 线框盒对像
	 * @return 返回是否相交，和若相交其距离
	 */
	public com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		long returnValue = intersects_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private long intersects_CVector3_CVector3_CMatrix4_ev_uint32(long pNativeObject, long startPt, long endPt, long vpvMatrix, long piexlTolerance);
	/**
	 * 判断射线是否与线段相交
	 * @param startPt 线段起点
	 * @param entPt 线段终点
	 * @param vpvMatrix 视口投影观察矩阵
	 * @param piexlTolerance 像素容差
	 * @return 返回是否相交，和若相交其距离
	 */
	public com.earthview.world.spatial.math.IntersectResPair intersects(com.earthview.world.spatial.math.Vector3 startPt, com.earthview.world.spatial.math.Vector3 endPt, com.earthview.world.spatial.math.Matrix4 vpvMatrix, long piexlTolerance)
	{
		long startPtParamValue = startPt.nativeObject.pointer;
		long endPtParamValue = endPt.nativeObject.pointer;
		long vpvMatrixParamValue = vpvMatrix.nativeObject.pointer;
		long piexlToleranceParamValue = piexlTolerance;
		long returnValue = intersects_CVector3_CVector3_CMatrix4_ev_uint32(this.nativeObject.pointer, startPtParamValue, endPtParamValue, vpvMatrixParamValue, piexlToleranceParamValue);
		com.earthview.world.spatial.math.IntersectResPair __returnValue = new com.earthview.world.spatial.math.IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.IntersectResPair)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IntersectResPair");
		}
		return __returnValue;
	}
	native private void mul_CMatrix4(long pNativeObject, long matrix);
	public void mul(com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		mul_CMatrix4(this.nativeObject.pointer, matrixParamValue);
	}
	native private void devide_CMatrix4(long pNativeObject, long matrix);
	public void devide(com.earthview.world.spatial.math.Matrix4 matrix)
	{
		long matrixParamValue = matrix.nativeObject.pointer;
		devide_CMatrix4(this.nativeObject.pointer, matrixParamValue);
	}
	public Ray(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ray(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ray fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ray obj = null;
 		if(baseObj instanceof Ray)
		{
			obj = (Ray)baseObj;
		} else {
			obj = new Ray(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRay");
			obj.increaseCast();
		}

		return obj;
	}
}
