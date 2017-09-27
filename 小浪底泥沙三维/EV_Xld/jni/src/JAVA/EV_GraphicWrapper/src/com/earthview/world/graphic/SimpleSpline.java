package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单样条类定义了简单样条操作
 */
public class SimpleSpline extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CSimpleSpline", new SimpleSplineClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public SimpleSpline() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSimpleSpline", null);
	}

	native private void addPoint_CVector3(long pNativeObject, long p);
	/**
	 * 在曲线末端增加控制点
	 * @param p 控制点对象
	 */
	public void addPoint(com.earthview.world.spatial.math.Vector3 p)
	{
		long pParamValue = p.nativeObject.pointer;
		addPoint_CVector3(this.nativeObject.pointer, pParamValue);
	}
	native private long getPoint_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得曲线中某控制点的详细信息
	 * @param index 控制点索引
	 * @return 三维坐标点
	 */
	public com.earthview.world.spatial.math.Vector3 getPoint(int index)
	{
		int indexParamValue = index;
		long returnValue = getPoint_ev_uint16(this.nativeObject.pointer, indexParamValue);
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
	native private int getNumPoints_void(long pNativeObject);
	/**
	 * 获得曲线中控制点总数
	 * @param  
	 * @return 控制点总数
	 */
	public int getNumPoints()
	{
		int returnValue = getNumPoints_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清除曲线所有控制点
	 * @param  
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private void updatePoint_ev_uint16_CVector3(long pNativeObject, int index, long value);
	/**
	 * 更新曲线中某点坐标
	 * @param index 控制点索引
	 * @param value 控制点坐标
	 */
	public void updatePoint(int index, com.earthview.world.spatial.math.Vector3 value)
	{
		int indexParamValue = index;
		long valueParamValue = value.nativeObject.pointer;
		updatePoint_ev_uint16_CVector3(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private long interpolate_Real(long pNativeObject, double t);
	/**
	 * 插值生成曲线上某点坐标
	 * @param t 参变量t
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 interpolate(double t)
	{
		double tParamValue = t;
		long returnValue = interpolate_Real(this.nativeObject.pointer, tParamValue);
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
	native private long interpolate_ev_uint32_Real(long pNativeObject, long fromIndex, double t);
	/**
	 * 插值生成曲线上某点坐标
	 * @param fromIndex 控制点索引
	 * @param t 参变量t
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 interpolate(long fromIndex, double t)
	{
		long fromIndexParamValue = fromIndex;
		double tParamValue = t;
		long returnValue = interpolate_ev_uint32_Real(this.nativeObject.pointer, fromIndexParamValue, tParamValue);
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
	native private void setAutoCalculate_ev_bool(long pNativeObject, boolean autoCalc);
	/**
	 * 设置养条曲线在增加控制点时是否自动计算其切线
	 * @param autoCalc 标识是否自动计算切线
	 */
	public void setAutoCalculate(boolean autoCalc)
	{
		boolean autoCalcParamValue = autoCalc;
		setAutoCalculate_ev_bool(this.nativeObject.pointer, autoCalcParamValue);
	}
	native private void recalcTangents_void(long pNativeObject);
	/**
	 * 重新计算曲线中控制点切线
	 * @param  
	 */
	public void recalcTangents()
	{
		recalcTangents_void(this.nativeObject.pointer);
	}
	public SimpleSpline(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SimpleSpline(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SimpleSpline fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SimpleSpline obj = null;
 		if(baseObj instanceof SimpleSpline)
		{
			obj = (SimpleSpline)baseObj;
		} else {
			obj = new SimpleSpline(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSimpleSpline");
			obj.increaseCast();
		}

		return obj;
	}
}
