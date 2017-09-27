package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点对线通视参数
 */
public class Point2LineParam extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::Point2LineParam", new Point2LineParamClassFactory());
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
	
	public Point2LineParam() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("Point2LineParam", null);
	}

	public Point2LineParam(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Point2LineParam(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Point2LineParam fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Point2LineParam obj = null;
 		if(baseObj instanceof Point2LineParam)
		{
			obj = (Point2LineParam)baseObj;
		} else {
			obj = new Point2LineParam(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "Point2LineParam");
			obj.increaseCast();
		}

		return obj;
	}
}
