package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点对点通视参数
 */
public class Point2PointParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::Point2PointParam", new Point2PointParamClassFactory());
	}

	native private long get_mViewPoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mViewPoint()
	{
		long jniValue = get_mViewPoint_void(this.nativeObject.pointer);
		
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
	
	native private void set_mViewPoint_CVector3 (long pNativeObject, long value);
	public void set_mViewPoint(com.earthview.world.spatial.math.Vector3 mViewPoint)
	{
		long mViewPointParamValue = mViewPoint.nativeObject.pointer;
		
		set_mViewPoint_CVector3(this.nativeObject.pointer, mViewPointParamValue);
	}
	
	native private double get_mViewHeight_void(long pNativeObject);
	public double get_mViewHeight()
	{
		double jniValue = get_mViewHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mViewHeight_ev_real64 (long pNativeObject, double value);
	public void set_mViewHeight(double mViewHeight)
	{
		double mViewHeightParamValue = mViewHeight;
		
		set_mViewHeight_ev_real64(this.nativeObject.pointer, mViewHeightParamValue);
	}
	
	native private long get_mCurrTargetPoint_void(long pNativeObject);
	public com.earthview.world.spatial3d.analysis.Point2PointTarget get_mCurrTargetPoint()
	{
		long jniValue = get_mCurrTargetPoint_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.analysis.Point2PointTarget __returnValue = new com.earthview.world.spatial3d.analysis.Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "Point2PointTarget");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Point2PointTarget)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Point2PointTarget");
		}
		return __returnValue;
	}
	
	native private void set_mCurrTargetPoint_Point2PointTarget (long pNativeObject, long value);
	public void set_mCurrTargetPoint(com.earthview.world.spatial3d.analysis.Point2PointTarget mCurrTargetPoint)
	{
		long mCurrTargetPointParamValue = mCurrTargetPoint.nativeObject.pointer;
		
		set_mCurrTargetPoint_Point2PointTarget(this.nativeObject.pointer, mCurrTargetPointParamValue);
	}
	
	native private long get_mTargetPointList_void(long pNativeObject);
	public com.earthview.world.spatial3d.analysis.Point2PointTargetList get_mTargetPointList()
	{
		long jniValue = get_mTargetPointList_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial3d.analysis.Point2PointTargetList __returnValue = new com.earthview.world.spatial3d.analysis.Point2PointTargetList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "Point2PointTargetList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Point2PointTargetList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "Point2PointTargetList");
		}
		return __returnValue;
	}
	
	native private void set_mTargetPointList_Point2PointTargetList (long pNativeObject, long value);
	public void set_mTargetPointList(com.earthview.world.spatial3d.analysis.Point2PointTargetList mTargetPointList)
	{
		long mTargetPointListParamValue = mTargetPointList.nativeObject.pointer;
		
		set_mTargetPointList_Point2PointTargetList(this.nativeObject.pointer, mTargetPointListParamValue);
	}
	
	native private long get_mViewPointColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mViewPointColor()
	{
		long jniValue = get_mViewPointColor_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_mViewPointColor_CColourValue (long pNativeObject, long value);
	public void set_mViewPointColor(com.earthview.world.graphic.ColourValue mViewPointColor)
	{
		long mViewPointColorParamValue = mViewPointColor.nativeObject.pointer;
		
		set_mViewPointColor_CColourValue(this.nativeObject.pointer, mViewPointColorParamValue);
	}
	
	native private long get_mTargetPointColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mTargetPointColor()
	{
		long jniValue = get_mTargetPointColor_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_mTargetPointColor_CColourValue (long pNativeObject, long value);
	public void set_mTargetPointColor(com.earthview.world.graphic.ColourValue mTargetPointColor)
	{
		long mTargetPointColorParamValue = mTargetPointColor.nativeObject.pointer;
		
		set_mTargetPointColor_CColourValue(this.nativeObject.pointer, mTargetPointColorParamValue);
	}
	
	native private long get_mInTargetPointColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mInTargetPointColor()
	{
		long jniValue = get_mInTargetPointColor_void(this.nativeObject.pointer);
		
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	
	native private void set_mInTargetPointColor_CColourValue (long pNativeObject, long value);
	public void set_mInTargetPointColor(com.earthview.world.graphic.ColourValue mInTargetPointColor)
	{
		long mInTargetPointColorParamValue = mInTargetPointColor.nativeObject.pointer;
		
		set_mInTargetPointColor_CColourValue(this.nativeObject.pointer, mInTargetPointColorParamValue);
	}
	
	public Point2PointParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Point2PointParam", null);
	}

	public Point2PointParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Point2PointParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Point2PointParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Point2PointParam obj = null;
 		if(baseObj instanceof Point2PointParam)
		{
			obj = (Point2PointParam)baseObj;
		} else {
			obj = new Point2PointParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Point2PointParam");
			obj.increaseCast();
		}

		return obj;
	}
}
