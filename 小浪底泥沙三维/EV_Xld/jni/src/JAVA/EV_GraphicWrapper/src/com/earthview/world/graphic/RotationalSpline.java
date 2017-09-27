package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 旋转样条类定义了旋转样条操作
 */
public class RotationalSpline extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRotationalSpline", new RotationalSplineClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public RotationalSpline() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRotationalSpline", null);
	}

	native private void addPoint_CQuaternion(long pNativeObject, long p);
	/**
	 * 在曲线末端增加控制点
	 * @param p 控制点对象
	 */
	public void addPoint(com.earthview.world.spatial.math.Quaternion p)
	{
		long pParamValue = p.nativeObject.pointer;
		addPoint_CQuaternion(this.nativeObject.pointer, pParamValue);
	}
	native private long getPoint_ev_uint16(long pNativeObject, int index);
	/**
	 * 获得曲线中某控制点的详细信息
	 * @param index 控制点索引
	 * @return 四元数
	 */
	public com.earthview.world.spatial.math.Quaternion getPoint(int index)
	{
		int indexParamValue = index;
		long returnValue = getPoint_ev_uint16(this.nativeObject.pointer, indexParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate, "CQuaternion");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
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
	native private void updatePoint_ev_uint16_CQuaternion(long pNativeObject, int index, long value);
	/**
	 * 更新曲线中某点坐标
	 * @param index 控制点索引
	 * @param value 控制点坐标
	 */
	public void updatePoint(int index, com.earthview.world.spatial.math.Quaternion value)
	{
		int indexParamValue = index;
		long valueParamValue = value.nativeObject.pointer;
		updatePoint_ev_uint16_CQuaternion(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private long interpolate_Real_ev_bool(long pNativeObject, double t, boolean useShortestPath);
	/**
	 * 插值生成曲线上某点坐标
	 * @param t 参变量t
	 * @param useShortestPath 是否利用最短路径
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Quaternion interpolate(double t, boolean useShortestPath)
	{
		double tParamValue = t;
		boolean useShortestPathParamValue = useShortestPath;
		long returnValue = interpolate_Real_ev_bool(this.nativeObject.pointer, tParamValue, useShortestPathParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long interpolate_Real(long pNativeObject, double t);
	/**
	 * 插值生成曲线上某点坐标
	 * @param t 参变量t
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Quaternion interpolate(double t)
	{
		double tParamValue = t;
		long returnValue = interpolate_Real(this.nativeObject.pointer, tParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	native private long interpolate_ev_uint32_Real_ev_bool(long pNativeObject, long fromIndex, double t, boolean useShortestPath);
	/**
	 * 插值生成曲线上某点坐标
	 * @param fromIndex 控制点索引
	 * @param t 参变量t
	 * @param useShortestPath 是否利用最短路径
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Quaternion interpolate(long fromIndex, double t, boolean useShortestPath)
	{
		long fromIndexParamValue = fromIndex;
		double tParamValue = t;
		boolean useShortestPathParamValue = useShortestPath;
		long returnValue = interpolate_ev_uint32_Real_ev_bool(this.nativeObject.pointer, fromIndexParamValue, tParamValue, useShortestPathParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
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
	public com.earthview.world.spatial.math.Quaternion interpolate(long fromIndex, double t)
	{
		long fromIndexParamValue = fromIndex;
		double tParamValue = t;
		long returnValue = interpolate_ev_uint32_Real(this.nativeObject.pointer, fromIndexParamValue, tParamValue);
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
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
	public RotationalSpline(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotationalSpline(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RotationalSpline fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotationalSpline obj = null;
 		if(baseObj instanceof RotationalSpline)
		{
			obj = (RotationalSpline)baseObj;
		} else {
			obj = new RotationalSpline(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRotationalSpline");
			obj.increaseCast();
		}

		return obj;
	}
}
