package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点对面通视参数
 */
public class Point2AreaParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::Point2AreaParam", new Point2AreaParamClassFactory());
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
	
	native private double get_mRadius_void(long pNativeObject);
	public double get_mRadius()
	{
		double jniValue = get_mRadius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRadius_ev_real64 (long pNativeObject, double value);
	public void set_mRadius(double mRadius)
	{
		double mRadiusParamValue = mRadius;
		
		set_mRadius_ev_real64(this.nativeObject.pointer, mRadiusParamValue);
	}
	
	native private int get_mRayAngle_void(long pNativeObject);
	public int get_mRayAngle()
	{
		int jniValue = get_mRayAngle_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mRayAngle_ev_int32 (long pNativeObject, int value);
	public void set_mRayAngle(int mRayAngle)
	{
		int mRayAngleParamValue = mRayAngle;
		
		set_mRayAngle_ev_int32(this.nativeObject.pointer, mRayAngleParamValue);
	}
	
	native private long get_mVisibleLineColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mVisibleLineColor()
	{
		long jniValue = get_mVisibleLineColor_void(this.nativeObject.pointer);
		
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
	
	native private void set_mVisibleLineColor_CColourValue (long pNativeObject, long value);
	public void set_mVisibleLineColor(com.earthview.world.graphic.ColourValue mVisibleLineColor)
	{
		long mVisibleLineColorParamValue = mVisibleLineColor.nativeObject.pointer;
		
		set_mVisibleLineColor_CColourValue(this.nativeObject.pointer, mVisibleLineColorParamValue);
	}
	
	native private long get_mInVisibleLineColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mInVisibleLineColor()
	{
		long jniValue = get_mInVisibleLineColor_void(this.nativeObject.pointer);
		
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
	
	native private void set_mInVisibleLineColor_CColourValue (long pNativeObject, long value);
	public void set_mInVisibleLineColor(com.earthview.world.graphic.ColourValue mInVisibleLineColor)
	{
		long mInVisibleLineColorParamValue = mInVisibleLineColor.nativeObject.pointer;
		
		set_mInVisibleLineColor_CColourValue(this.nativeObject.pointer, mInVisibleLineColorParamValue);
	}
	
	native private long get_mCircleColor_void(long pNativeObject);
	public com.earthview.world.graphic.ColourValue get_mCircleColor()
	{
		long jniValue = get_mCircleColor_void(this.nativeObject.pointer);
		
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
	
	native private void set_mCircleColor_CColourValue (long pNativeObject, long value);
	public void set_mCircleColor(com.earthview.world.graphic.ColourValue mCircleColor)
	{
		long mCircleColorParamValue = mCircleColor.nativeObject.pointer;
		
		set_mCircleColor_CColourValue(this.nativeObject.pointer, mCircleColorParamValue);
	}
	
	public Point2AreaParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Point2AreaParam", null);
	}

	public Point2AreaParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Point2AreaParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Point2AreaParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Point2AreaParam obj = null;
 		if(baseObj instanceof Point2AreaParam)
		{
			obj = (Point2AreaParam)baseObj;
		} else {
			obj = new Point2AreaParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Point2AreaParam");
			obj.increaseCast();
		}

		return obj;
	}
}
