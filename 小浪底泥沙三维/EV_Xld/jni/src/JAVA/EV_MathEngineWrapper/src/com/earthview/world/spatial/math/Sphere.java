package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 球体类定义了球体操作
 */
public class Sphere extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CSphere", new SphereClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Sphere() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSphere", null);
	}

	/**
	 * 构造函数
	 * @param center 球体中心点
	 * @param radius 球体半径
	 */
	public Sphere(com.earthview.world.spatial.math.Vector3 center, double radius) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer centerPtr = new BasePointer(center);
		list.add("center", centerPtr.get());
		BasePointer radiusPtr = new BasePointer(radius);
		list.add("radius", radiusPtr.get());
		Create("CSphere", list);
	}

	native private double getRadius_void(long pNativeObject);
	/**
	 * 获得球体半径
	 * @param  
	 * @return 球体半径
	 */
	public double getRadius()
	{
		double returnValue = getRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRadius_Real(long pNativeObject, double radius);
	/**
	 * 设置球体半径
	 * @param radius 球体半径
	 */
	public void setRadius(double radius)
	{
		double radiusParamValue = radius;
		setRadius_Real(this.nativeObject.pointer, radiusParamValue);
	}
	native private long getCenter_void(long pNativeObject);
	/**
	 * 获得球心坐标
	 * @param  
	 * @return 球心坐标
	 */
	public com.earthview.world.spatial.math.Vector3 getCenter()
	{
		long returnValue = getCenter_void(this.nativeObject.pointer);
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
	native private void setCenter_CVector3(long pNativeObject, long center);
	/**
	 * 设置球心坐标
	 * @param center 球心坐标
	 */
	public void setCenter(com.earthview.world.spatial.math.Vector3 center)
	{
		long centerParamValue = center.nativeObject.pointer;
		setCenter_CVector3(this.nativeObject.pointer, centerParamValue);
	}
	native private boolean intersects_CSphere(long pNativeObject, long s);
	/**
	 * 判断与另一球体是否相交
	 * @param s 另一球体
	 * @return 相交返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.Sphere s)
	{
		long sParamValue = s.nativeObject.pointer;
		boolean returnValue = intersects_CSphere(this.nativeObject.pointer, sParamValue);
		return returnValue;
	}
	native private boolean intersects_CAxisAlignedBox(long pNativeObject, long box);
	/**
	 * 判断与平行轴边框盒是否相交
	 * @param box 边框盒对象
	 * @return 相交返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.AxisAlignedBox box)
	{
		long boxParamValue = box.nativeObject.pointer;
		boolean returnValue = intersects_CAxisAlignedBox(this.nativeObject.pointer, boxParamValue);
		return returnValue;
	}
	native private boolean intersects_CPlane(long pNativeObject, long plane);
	/**
	 * 判断与平面是否相交
	 * @param plane 平面对象
	 * @return 相交返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.Plane plane)
	{
		long planeParamValue = plane.nativeObject.pointer;
		boolean returnValue = intersects_CPlane(this.nativeObject.pointer, planeParamValue);
		return returnValue;
	}
	native private boolean intersects_CVector3(long pNativeObject, long v);
	/**
	 * 判断是否包含某点
	 * @param v 空间点坐标
	 * @return 包含返回true，否则false
	 */
	public boolean intersects(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		boolean returnValue = intersects_CVector3(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private void merge_CSphere(long pNativeObject, long oth);
	///zxt updatefor v1.8
	public void merge(com.earthview.world.spatial.math.Sphere oth)
	{
		long othParamValue = oth.nativeObject.pointer;
		merge_CSphere(this.nativeObject.pointer, othParamValue);
	}
	public Sphere(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Sphere(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Sphere fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Sphere obj = null;
 		if(baseObj instanceof Sphere)
		{
			obj = (Sphere)baseObj;
		} else {
			obj = new Sphere(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSphere");
			obj.increaseCast();
		}

		return obj;
	}
}
