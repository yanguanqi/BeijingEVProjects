package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点对点通视目标点
 */
public class Point2PointTarget extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::Point2PointTarget", new Point2PointTargetClassFactory());
	}

	native private long get_mTargetPoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mTargetPoint()
	{
		long jniValue = get_mTargetPoint_void(this.nativeObject.pointer);
		
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
	
	native private void set_mTargetPoint_CVector3 (long pNativeObject, long value);
	public void set_mTargetPoint(com.earthview.world.spatial.math.Vector3 mTargetPoint)
	{
		long mTargetPointParamValue = mTargetPoint.nativeObject.pointer;
		
		set_mTargetPoint_CVector3(this.nativeObject.pointer, mTargetPointParamValue);
	}
	
	native private double get_mTargetHeight_void(long pNativeObject);
	public double get_mTargetHeight()
	{
		double jniValue = get_mTargetHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTargetHeight_ev_real64 (long pNativeObject, double value);
	public void set_mTargetHeight(double mTargetHeight)
	{
		double mTargetHeightParamValue = mTargetHeight;
		
		set_mTargetHeight_ev_real64(this.nativeObject.pointer, mTargetHeightParamValue);
	}
	
	public Point2PointTarget() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Point2PointTarget", null);
	}

	public Point2PointTarget(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Point2PointTarget(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Point2PointTarget fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Point2PointTarget obj = null;
 		if(baseObj instanceof Point2PointTarget)
		{
			obj = (Point2PointTarget)baseObj;
		} else {
			obj = new Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Point2PointTarget");
			obj.increaseCast();
		}

		return obj;
	}
}
