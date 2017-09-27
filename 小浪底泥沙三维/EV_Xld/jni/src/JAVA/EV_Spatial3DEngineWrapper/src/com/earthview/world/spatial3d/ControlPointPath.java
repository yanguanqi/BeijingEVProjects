package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字地球控制点路径
 */
public class ControlPointPath extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CControlPointPath", new ControlPointPathClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ControlPointPath() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CControlPointPath", null);
	}

	/**
	 * 挎贝构造函数
	 * @param rhs 
	 */
	public ControlPointPath(com.earthview.world.spatial3d.ControlPointPath rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CControlPointPath", list);
	}

	native private void insertControlPoint_ev_real64_CControlPoint(long pNativeObject, double time, long postion);
	/**
	 * 插入控制点
	 * @param time 时间
	 * @param postion 控制点
	 */
	public void insertControlPoint(double time, com.earthview.world.spatial3d.ControlPoint postion)
	{
		double timeParamValue = time;
		long postionParamValue = postion.nativeObject.pointer;
		insertControlPoint_ev_real64_CControlPoint(this.nativeObject.pointer, timeParamValue, postionParamValue);
	}
	native private int count_void(long pNativeObject);
	/**
	 * 长度
	 */
	public int count()
	{
		int returnValue = count_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean end_CControlPoint(long pNativeObject, long pos);
	/**
	 * 返回最后一个控制点
	 * @param pos 控制点
	 */
	public boolean end(com.earthview.world.spatial3d.ControlPoint pos)
	{
		long posParamValue = pos.nativeObject.pointer;
		boolean returnValue = end_CControlPoint(this.nativeObject.pointer, posParamValue);
		return returnValue;
	}
	native private boolean endTime_ev_real64(long pNativeObject, long time);
	/**
	 * 返回最后一个控制点的时间
	 * @param time 时间
	 */
	public boolean endTime(DoublePointer time)
	{
		long timeParamValue = time.nativeObject.pointer;
		boolean returnValue = endTime_ev_real64(this.nativeObject.pointer, timeParamValue);
		return returnValue;
	}
	native private double timeLength_void(long pNativeObject);
	/**
	 * 总时间长度
	 */
	public double timeLength()
	{
		double returnValue = timeLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	/**
	 * 清空容器
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long getControlPointMap_void(long pNativeObject);
	/**
	 * 返加控制点数据
	 */
	public com.earthview.world.spatial3d.ControlPointMap getControlPointMap()
	{
		long returnValue = getControlPointMap_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.ControlPointMap __returnValue = new com.earthview.world.spatial3d.ControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CControlPointMap");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ControlPointMap)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CControlPointMap");
		}
		return __returnValue;
	}
	native private void toXml_EVString(long pNativeObject, String path);
	/**
	 * 写出为ＸＭＬ
	 * @param path 路径
	 */
	public void toXml(String path)
	{
		String pathParamValue = path;
		toXml_EVString(this.nativeObject.pointer, pathParamValue);
	}
	native private void setlocalCenter_CVector3(long pNativeObject, long localCenter);
	/**
	 * 设置局部中心点
	 * @param localCenter 中心点
	 */
	public void setlocalCenter(com.earthview.world.spatial.math.Vector3 localCenter)
	{
		long localCenterParamValue = localCenter.nativeObject.pointer;
		setlocalCenter_CVector3(this.nativeObject.pointer, localCenterParamValue);
	}
	native private long getLocalCenter_void(long pNativeObject);
	/**
	 * 返回局部中心点
	 */
	public com.earthview.world.spatial.math.Vector3 getLocalCenter()
	{
		long returnValue = getLocalCenter_void(this.nativeObject.pointer);
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
	native private void OperatorAssign_CControlPointPath(long pNativeObject, long rhs);
	public void OperatorAssign(com.earthview.world.spatial3d.ControlPointPath rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CControlPointPath(this.nativeObject.pointer, rhsParamValue);
	}
	public ControlPointPath(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ControlPointPath(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ControlPointPath fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ControlPointPath obj = null;
 		if(baseObj instanceof ControlPointPath)
		{
			obj = (ControlPointPath)baseObj;
		} else {
			obj = new ControlPointPath(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CControlPointPath");
			obj.increaseCast();
		}

		return obj;
	}
}
