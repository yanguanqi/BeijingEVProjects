package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 关于椭圆的算法，帮助生成控制点
 */
public class EllipticRingAlgori extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEllipticRingAlgori", new EllipticRingAlgoriClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEllipticRingAlgoriProxy", new EllipticRingAlgoriClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public EllipticRingAlgori() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEllipticRingAlgoriProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EllipticRingAlgori".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setEllipticRing_CPoint_CPoint_CPoint(long pNativeObject, long center, long p1, long p2);
	/**
	 * 设置椭圆的三个控制点
	 * @param center 椭圆的中心点
	 * @param p1 第一个控制点
	 * @param p2 第二个控制点
	 */
	public void setEllipticRing(com.earthview.world.spatial.geometry.Point center, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2)
	{
		long centerParamValue = (center == null ? 0L : center.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		setEllipticRing_CPoint_CPoint_CPoint(this.nativeObject.pointer, centerParamValue, p1ParamValue, p2ParamValue);
	}
	protected  void setEllipticRing_CEllipticRing_callback(long ring)
	{
		com.earthview.world.spatial.geometry.EllipticRing ringParamValue = (ring == 0L ? null : new com.earthview.world.spatial.geometry.EllipticRing(CreatedWhenConstruct.CWC_NotToCreate));
		if(ringParamValue != null)
		{
		ringParamValue.setDelegate(true);
		ringParamValue.setInstancePointer(new InstancePointer(ring));
		IClassFactory ringParamValueClassFactory = GlobalClassFactoryMap.get(ringParamValue.getCppInstanceTypeName());
		if (ringParamValueClassFactory != null)
		{
			ringParamValue.setDelegate(true);
			ringParamValue = (com.earthview.world.spatial.geometry.EllipticRing)ringParamValueClassFactory.create();
			ringParamValue.setDelegate(true);
			ringParamValue.setInstancePointer(new InstancePointer(ring));
		}
		}
		setEllipticRing(ringParamValue);
	}

	native private void setEllipticRing_CEllipticRing(long pNativeObject, long ring);
	/**
	 * 设置椭圆
	 * @param ring 椭圆对象
	 */
	public void setEllipticRing(com.earthview.world.spatial.geometry.EllipticRing ring)
	{
		long ringParamValue = (ring == null ? 0L : ring.nativeObject.pointer);
		setEllipticRing_CEllipticRing(this.nativeObject.pointer, ringParamValue);
	}
	native private void setEllipticRing_CEllipticRing_NoVirtual(long pNativeObject, long ring);
	protected void setEllipticRing_NoVirtual(com.earthview.world.spatial.geometry.EllipticRing ring)
	{
		long ringParamValue = (ring == null ? 0L : ring.nativeObject.pointer);
		setEllipticRing_CEllipticRing_NoVirtual(this.nativeObject.pointer, ringParamValue);
	}

	native private double getSemiMajorAxe_void(long pNativeObject);
	/**
	 * 获取长半轴
	 * @param  
	 */
	public double getSemiMajorAxe()
	{
		double returnValue = getSemiMajorAxe_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSemiMinorAxe_void(long pNativeObject);
	/**
	 * 获取短半轴
	 * @param  
	 */
	public double getSemiMinorAxe()
	{
		double returnValue = getSemiMinorAxe_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAngle_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @param  
	 */
	public double getAngle()
	{
		double returnValue = getAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCenter_void(long pNativeObject);
	/**
	 * 获取中心点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getCenter()
	{
		long returnValue = getCenter_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getCtrlPoint1_void(long pNativeObject);
	/**
	 * 获取长半轴控制点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getCtrlPoint1()
	{
		long returnValue = getCtrlPoint1_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long getCtrlPoint2_void(long pNativeObject);
	/**
	 * 获取短半轴控制点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getCtrlPoint2()
	{
		long returnValue = getCtrlPoint2_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Point __returnValue = new com.earthview.world.spatial.geometry.Point(CreatedWhenConstruct.CWC_NotToCreate, "CPoint");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Point)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPoint");
		}
		return __returnValue;
	}
	native private long makeEllipticRing_void(long pNativeObject);
	/**
	 * 生成一个椭圆，内存外部释放
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.EllipticRing makeEllipticRing()
	{
		long returnValue = makeEllipticRing_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.EllipticRing __returnValue = new com.earthview.world.spatial.geometry.EllipticRing(CreatedWhenConstruct.CWC_NotToCreate, "CEllipticRing");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.EllipticRing)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CEllipticRing");
		}
		return __returnValue;
	}
	native private void getPointOnEllipse_ev_real64_ev_real64_ev_real64(long pNativeObject, double angle, double x, double y);
	/**
	 * 获取在椭圆上指定角度处的坐标
	 * @param angle 输入角度
	 * @param x 返回的X坐标
	 * @param y 返回的Y坐标
	 */
	public void getPointOnEllipse(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		getPointOnEllipse_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, angleParamValue, xParamValue, yParamValue);
	}
	public EllipticRingAlgori(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EllipticRingAlgori(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setEllipticRing_CEllipticRing(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setEllipticRing_CEllipticRing(this.nativeObject.pointer, "setEllipticRing_CEllipticRing_callback");
		}
	}
	
	public static EllipticRingAlgori fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EllipticRingAlgori obj = null;
 		if(baseObj instanceof EllipticRingAlgori)
		{
			obj = (EllipticRingAlgori)baseObj;
		} else {
			obj = new EllipticRingAlgori(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEllipticRingAlgori");
			obj.increaseCast();
		}

		return obj;
	}
}
