package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 关于圆角矩形的算法，帮助生成控制点
 */
public class RoundRectAlgori extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CRoundRectAlgori", new RoundRectAlgoriClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public RoundRectAlgori() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRoundRectAlgori", null);
	}

	native private void setRectangleRing_CPoint_CPoint_CPoint_CPoint(long pNativeObject, long p0, long p1, long p2, long p3);
	/**
	 * 通过传入四个控制点，生成第五个控制点和圆角率
	 * @param p0 测试点
	 * @param p1 第一个控制点
	 * @param p2 第二个控制点
	 * @param p3 第三个控制点
	 */
	public void setRectangleRing(com.earthview.world.spatial.geometry.Point p0, com.earthview.world.spatial.geometry.Point p1, com.earthview.world.spatial.geometry.Point p2, com.earthview.world.spatial.geometry.Point p3)
	{
		long p0ParamValue = (p0 == null ? 0L : p0.nativeObject.pointer);
		long p1ParamValue = (p1 == null ? 0L : p1.nativeObject.pointer);
		long p2ParamValue = (p2 == null ? 0L : p2.nativeObject.pointer);
		long p3ParamValue = (p3 == null ? 0L : p3.nativeObject.pointer);
		setRectangleRing_CPoint_CPoint_CPoint_CPoint(this.nativeObject.pointer, p0ParamValue, p1ParamValue, p2ParamValue, p3ParamValue);
	}
	native private void setRectangleRing_CRectangleRing(long pNativeObject, long rect);
	/**
	 * 传入矩形，生成控制点
	 * @param rect 矩形
	 */
	public void setRectangleRing(com.earthview.world.spatial.geometry.RectangleRing rect)
	{
		long rectParamValue = (rect == null ? 0L : rect.nativeObject.pointer);
		setRectangleRing_CRectangleRing(this.nativeObject.pointer, rectParamValue);
	}
	native private long getFirst_void(long pNativeObject);
	/**
	 * 获取第一个控制点
	 * @param  
	 * @return 第一个控制点
	 */
	public com.earthview.world.spatial.geometry.Point getFirst()
	{
		long returnValue = getFirst_void(this.nativeObject.pointer);
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
	native private long getSecond_void(long pNativeObject);
	/**
	 * 获取第二个控制点
	 * @param  
	 * @return 第二个控制点
	 */
	public com.earthview.world.spatial.geometry.Point getSecond()
	{
		long returnValue = getSecond_void(this.nativeObject.pointer);
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
	native private long getThird_void(long pNativeObject);
	/**
	 * 获取第三个控制点
	 * @param  
	 * @return 第三个控制点
	 */
	public com.earthview.world.spatial.geometry.Point getThird()
	{
		long returnValue = getThird_void(this.nativeObject.pointer);
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
	native private long getForth_void(long pNativeObject);
	/**
	 * 获取第四个控制点
	 * @param  
	 * @return 第四个控制点
	 */
	public com.earthview.world.spatial.geometry.Point getForth()
	{
		long returnValue = getForth_void(this.nativeObject.pointer);
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
	native private long getFifth_void(long pNativeObject);
	/**
	 * 获取第五个控制点
	 * @param  
	 * @return 第五个控制点
	 */
	public com.earthview.world.spatial.geometry.Point getFifth()
	{
		long returnValue = getFifth_void(this.nativeObject.pointer);
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
	native private void getRoundRadius_ev_real64_ev_real64(long pNativeObject, long v12, long v23);
	/**
	 * 获取圆角率
	 * @param v12 
	 * @param v23 
	 */
	public void getRoundRadius(DoublePointer v12, DoublePointer v23)
	{
		long v12ParamValue = v12.nativeObject.pointer;
		long v23ParamValue = v23.nativeObject.pointer;
		getRoundRadius_ev_real64_ev_real64(this.nativeObject.pointer, v12ParamValue, v23ParamValue);
	}
	native private long getRectangle_void(long pNativeObject);
	/**
	 * 获取矩形
	 * @param  
	 */
	public com.earthview.world.spatial.geometry.RectangleRing getRectangle()
	{
		long returnValue = getRectangle_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.RectangleRing __returnValue = new com.earthview.world.spatial.geometry.RectangleRing(CreatedWhenConstruct.CWC_NotToCreate, "CRectangleRing");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.RectangleRing)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRectangleRing");
		}
		return __returnValue;
	}
	public RoundRectAlgori(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RoundRectAlgori(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RoundRectAlgori fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RoundRectAlgori obj = null;
 		if(baseObj instanceof RoundRectAlgori)
		{
			obj = (RoundRectAlgori)baseObj;
		} else {
			obj = new RoundRectAlgori(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRoundRectAlgori");
			obj.increaseCast();
		}

		return obj;
	}
}
