package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 关于椭圆弧的算法，帮助生成控制点
 */
public class EllipticArcAlgori extends com.earthview.world.spatial2d.controls.EllipticRingAlgori {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEllipticArcAlgori", new EllipticArcAlgoriClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEllipticArcAlgoriProxy", new EllipticArcAlgoriClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public EllipticArcAlgori() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEllipticArcAlgoriProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EllipticArcAlgori".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setEllipticRing_CEllipticRing(long pNativeObject, long ring);
	/**
	 * 设置椭圆
	 * @param ring 椭圆
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

	native private void setEllipticArc_CPoint_CPoint_CPoint_CPoint_CPoint(long pNativeObject, long center, long p1, long p2, long p3, long p4);
	/**
	 * 设置椭圆弧
	 * @param center 椭圆的中心点
	 * @param p1 长半轴控制点
	 * @param p2 短半轴控制点
	 * @param p3 椭圆弧起始角度控制点
	 * @param p4 椭圆弧终止角度控制点
	 */
	public void setEllipticArc(com.earthview.world.spatial.geometry.Point center, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2, com.earthview.world.spatial.geometry.Point p3, com.earthview.world.spatial.geometry.Point p4)
	{
		long centerParamValue = (center == null ? 0L : center.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		long p3ParamValue = (p3 == null ? 0L : p3.nativeObject.pointer);
		long p4ParamValue = (p4 == null ? 0L : p4.nativeObject.pointer);
		setEllipticArc_CPoint_CPoint_CPoint_CPoint_CPoint(this.nativeObject.pointer, centerParamValue, p1ParamValue, p2ParamValue, p3ParamValue, p4ParamValue);
	}
	native private void setEllipticArc_CEllipticArc(long pNativeObject, long arc);
	/**
	 * 设置椭圆弧
	 * @param arc 椭圆弧对象
	 */
	public void setEllipticArc(com.earthview.world.spatial.geometry.EllipticArc arc)
	{
		long arcParamValue = (arc == null ? 0L : arc.nativeObject.pointer);
		setEllipticArc_CEllipticArc(this.nativeObject.pointer, arcParamValue);
	}
	native private double getFromAngle_void(long pNativeObject);
	/**
	 * 获取椭圆弧的起始角度
	 * @param  
	 */
	public double getFromAngle()
	{
		double returnValue = getFromAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSweepAngle_void(long pNativeObject);
	/**
	 * 获取椭圆的旋转角度
	 * @param  
	 */
	public double getSweepAngle()
	{
		double returnValue = getSweepAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCtrlPoint3_void(long pNativeObject);
	/**
	 * 获取椭圆弧的起始角度控制点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getCtrlPoint3()
	{
		long returnValue = getCtrlPoint3_void(this.nativeObject.pointer);
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
	native private long getCtrlPoint4_void(long pNativeObject);
	/**
	 * 获取椭圆弧的终止角度控制点
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.Point getCtrlPoint4()
	{
		long returnValue = getCtrlPoint4_void(this.nativeObject.pointer);
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
	native private long makeEllipticArc_void(long pNativeObject);
	/**
	 * 生成一个椭圆弧
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.EllipticArc makeEllipticArc()
	{
		long returnValue = makeEllipticArc_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.EllipticArc __returnValue = new com.earthview.world.spatial.geometry.EllipticArc(CreatedWhenConstruct.CWC_NotToCreate, "CEllipticArc");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.EllipticArc)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEllipticArc");
		}
		return __returnValue;
	}
	public EllipticArcAlgori(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EllipticArcAlgori(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setEllipticRing_CEllipticRing(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setEllipticRing_CEllipticRing(this.nativeObject.pointer, "setEllipticRing_CEllipticRing_callback");
		}
	}
	
	public static EllipticArcAlgori fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EllipticArcAlgori obj = null;
 		if(baseObj instanceof EllipticArcAlgori)
		{
			obj = (EllipticArcAlgori)baseObj;
		} else {
			obj = new EllipticArcAlgori(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEllipticArcAlgori");
			obj.increaseCast();
		}

		return obj;
	}
}
