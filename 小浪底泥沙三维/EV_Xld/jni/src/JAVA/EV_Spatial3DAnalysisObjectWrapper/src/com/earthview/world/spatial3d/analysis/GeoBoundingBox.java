package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 包围盒类
 */
public class GeoBoundingBox extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CGeoBoundingBox", new GeoBoundingBoxClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GeoBoundingBox() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGeoBoundingBox", null);
	}

	native private void computeBox_void(long pNativeObject);
	/**
	 * 计算包围盒
	 * @param  
	 */
	public void computeBox()
	{
		computeBox_void(this.nativeObject.pointer);
	}
	native private double get_mNorth_void(long pNativeObject);
	public double get_mNorth()
	{
		double jniValue = get_mNorth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mNorth_ev_real64 (long pNativeObject, double value);
	public void set_mNorth(double mNorth)
	{
		double mNorthParamValue = mNorth;
		
		set_mNorth_ev_real64(this.nativeObject.pointer, mNorthParamValue);
	}
	
	native private double get_mSouth_void(long pNativeObject);
	public double get_mSouth()
	{
		double jniValue = get_mSouth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mSouth_ev_real64 (long pNativeObject, double value);
	public void set_mSouth(double mSouth)
	{
		double mSouthParamValue = mSouth;
		
		set_mSouth_ev_real64(this.nativeObject.pointer, mSouthParamValue);
	}
	
	native private double get_mWest_void(long pNativeObject);
	public double get_mWest()
	{
		double jniValue = get_mWest_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mWest_ev_real64 (long pNativeObject, double value);
	public void set_mWest(double mWest)
	{
		double mWestParamValue = mWest;
		
		set_mWest_ev_real64(this.nativeObject.pointer, mWestParamValue);
	}
	
	native private double get_mEast_void(long pNativeObject);
	public double get_mEast()
	{
		double jniValue = get_mEast_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mEast_ev_real64 (long pNativeObject, double value);
	public void set_mEast(double mEast)
	{
		double mEastParamValue = mEast;
		
		set_mEast_ev_real64(this.nativeObject.pointer, mEastParamValue);
	}
	
	native private double get_mBottomRadius_void(long pNativeObject);
	public double get_mBottomRadius()
	{
		double jniValue = get_mBottomRadius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mBottomRadius_ev_real64 (long pNativeObject, double value);
	public void set_mBottomRadius(double mBottomRadius)
	{
		double mBottomRadiusParamValue = mBottomRadius;
		
		set_mBottomRadius_ev_real64(this.nativeObject.pointer, mBottomRadiusParamValue);
	}
	
	native private double get_mTopRadius_void(long pNativeObject);
	public double get_mTopRadius()
	{
		double jniValue = get_mTopRadius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTopRadius_ev_real64 (long pNativeObject, double value);
	public void set_mTopRadius(double mTopRadius)
	{
		double mTopRadiusParamValue = mTopRadius;
		
		set_mTopRadius_ev_real64(this.nativeObject.pointer, mTopRadiusParamValue);
	}
	
	native private long get_mCenter_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mCenter()
	{
		long jniValue = get_mCenter_void(this.nativeObject.pointer);
		
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
	
	native private void set_mCenter_CVector3 (long pNativeObject, long value);
	public void set_mCenter(com.earthview.world.spatial.math.Vector3 mCenter)
	{
		long mCenterParamValue = mCenter.nativeObject.pointer;
		
		set_mCenter_CVector3(this.nativeObject.pointer, mCenterParamValue);
	}
	
	native private boolean get_mIsComputed_void(long pNativeObject);
	public boolean get_mIsComputed()
	{
		boolean jniValue = get_mIsComputed_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mIsComputed_ev_bool (long pNativeObject, boolean value);
	public void set_mIsComputed(boolean mIsComputed)
	{
		boolean mIsComputedParamValue = mIsComputed;
		
		set_mIsComputed_ev_bool(this.nativeObject.pointer, mIsComputedParamValue);
	}
	
	public GeoBoundingBox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoBoundingBox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeoBoundingBox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoBoundingBox obj = null;
 		if(baseObj instanceof GeoBoundingBox)
		{
			obj = (GeoBoundingBox)baseObj;
		} else {
			obj = new GeoBoundingBox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoBoundingBox");
			obj.increaseCast();
		}

		return obj;
	}
}
