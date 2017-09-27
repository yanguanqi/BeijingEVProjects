package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 断面分析结果类
 */
public class SectionLineInfo extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CSectionLineInfo", new SectionLineInfoClassFactory());
	}

	/**
	 * 构造函数
	 */
	public SectionLineInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSectionLineInfo", null);
	}

	native private long get_mGeoPoints_void(long pNativeObject);
	public com.earthview.world.spatial.math.VertexList get_mGeoPoints()
	{
		long jniValue = get_mGeoPoints_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.VertexList __returnValue = new com.earthview.world.spatial.math.VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "VertexList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.VertexList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VertexList");
		}
		return __returnValue;
	}
	
	native private void set_mGeoPoints_VertexList (long pNativeObject, long value);
	public void set_mGeoPoints(com.earthview.world.spatial.math.VertexList mGeoPoints)
	{
		long mGeoPointsParamValue = mGeoPoints.nativeObject.pointer;
		
		set_mGeoPoints_VertexList(this.nativeObject.pointer, mGeoPointsParamValue);
	}
	
	native private long get_mSlopeVec_void(long pNativeObject);
	public com.earthview.world.core.RealVector get_mSlopeVec()
	{
		long jniValue = get_mSlopeVec_void(this.nativeObject.pointer);
		
		com.earthview.world.core.RealVector __returnValue = new com.earthview.world.core.RealVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "RealVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.RealVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "RealVector");
		}
		return __returnValue;
	}
	
	native private void set_mSlopeVec_RealVector (long pNativeObject, long value);
	public void set_mSlopeVec(com.earthview.world.core.RealVector mSlopeVec)
	{
		long mSlopeVecParamValue = mSlopeVec.nativeObject.pointer;
		
		set_mSlopeVec_RealVector(this.nativeObject.pointer, mSlopeVecParamValue);
	}
	
	native private double get_mMaxSlope_void(long pNativeObject);
	public double get_mMaxSlope()
	{
		double jniValue = get_mMaxSlope_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxSlope_ev_real64 (long pNativeObject, double value);
	public void set_mMaxSlope(double mMaxSlope)
	{
		double mMaxSlopeParamValue = mMaxSlope;
		
		set_mMaxSlope_ev_real64(this.nativeObject.pointer, mMaxSlopeParamValue);
	}
	
	native private double get_mMinSlope_void(long pNativeObject);
	public double get_mMinSlope()
	{
		double jniValue = get_mMinSlope_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinSlope_ev_real64 (long pNativeObject, double value);
	public void set_mMinSlope(double mMinSlope)
	{
		double mMinSlopeParamValue = mMinSlope;
		
		set_mMinSlope_ev_real64(this.nativeObject.pointer, mMinSlopeParamValue);
	}
	
	native private double get_mMaxAltitude_void(long pNativeObject);
	public double get_mMaxAltitude()
	{
		double jniValue = get_mMaxAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mMaxAltitude(double mMaxAltitude)
	{
		double mMaxAltitudeParamValue = mMaxAltitude;
		
		set_mMaxAltitude_ev_real64(this.nativeObject.pointer, mMaxAltitudeParamValue);
	}
	
	native private double get_mMinAltitude_void(long pNativeObject);
	public double get_mMinAltitude()
	{
		double jniValue = get_mMinAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mMinAltitude(double mMinAltitude)
	{
		double mMinAltitudeParamValue = mMinAltitude;
		
		set_mMinAltitude_ev_real64(this.nativeObject.pointer, mMinAltitudeParamValue);
	}
	
	native private int get_mMaxSlopeIndex_void(long pNativeObject);
	public int get_mMaxSlopeIndex()
	{
		int jniValue = get_mMaxSlopeIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxSlopeIndex_ev_int32 (long pNativeObject, int value);
	public void set_mMaxSlopeIndex(int mMaxSlopeIndex)
	{
		int mMaxSlopeIndexParamValue = mMaxSlopeIndex;
		
		set_mMaxSlopeIndex_ev_int32(this.nativeObject.pointer, mMaxSlopeIndexParamValue);
	}
	
	native private int get_mMinSlopeIndex_void(long pNativeObject);
	public int get_mMinSlopeIndex()
	{
		int jniValue = get_mMinSlopeIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinSlopeIndex_ev_int32 (long pNativeObject, int value);
	public void set_mMinSlopeIndex(int mMinSlopeIndex)
	{
		int mMinSlopeIndexParamValue = mMinSlopeIndex;
		
		set_mMinSlopeIndex_ev_int32(this.nativeObject.pointer, mMinSlopeIndexParamValue);
	}
	
	native private int get_mMaxAltitudeIndex_void(long pNativeObject);
	public int get_mMaxAltitudeIndex()
	{
		int jniValue = get_mMaxAltitudeIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMaxAltitudeIndex_ev_int32 (long pNativeObject, int value);
	public void set_mMaxAltitudeIndex(int mMaxAltitudeIndex)
	{
		int mMaxAltitudeIndexParamValue = mMaxAltitudeIndex;
		
		set_mMaxAltitudeIndex_ev_int32(this.nativeObject.pointer, mMaxAltitudeIndexParamValue);
	}
	
	native private int get_mMinAltitudeIndex_void(long pNativeObject);
	public int get_mMinAltitudeIndex()
	{
		int jniValue = get_mMinAltitudeIndex_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mMinAltitudeIndex_ev_int32 (long pNativeObject, int value);
	public void set_mMinAltitudeIndex(int mMinAltitudeIndex)
	{
		int mMinAltitudeIndexParamValue = mMinAltitudeIndex;
		
		set_mMinAltitudeIndex_ev_int32(this.nativeObject.pointer, mMinAltitudeIndexParamValue);
	}
	
	native private long get_mMaxSlopePoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mMaxSlopePoint()
	{
		long jniValue = get_mMaxSlopePoint_void(this.nativeObject.pointer);
		
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
	
	native private void set_mMaxSlopePoint_CVector3 (long pNativeObject, long value);
	public void set_mMaxSlopePoint(com.earthview.world.spatial.math.Vector3 mMaxSlopePoint)
	{
		long mMaxSlopePointParamValue = mMaxSlopePoint.nativeObject.pointer;
		
		set_mMaxSlopePoint_CVector3(this.nativeObject.pointer, mMaxSlopePointParamValue);
	}
	
	native private long get_mMinSlopePoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mMinSlopePoint()
	{
		long jniValue = get_mMinSlopePoint_void(this.nativeObject.pointer);
		
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
	
	native private void set_mMinSlopePoint_CVector3 (long pNativeObject, long value);
	public void set_mMinSlopePoint(com.earthview.world.spatial.math.Vector3 mMinSlopePoint)
	{
		long mMinSlopePointParamValue = mMinSlopePoint.nativeObject.pointer;
		
		set_mMinSlopePoint_CVector3(this.nativeObject.pointer, mMinSlopePointParamValue);
	}
	
	native private long get_mMaxAltitudePoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mMaxAltitudePoint()
	{
		long jniValue = get_mMaxAltitudePoint_void(this.nativeObject.pointer);
		
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
	
	native private void set_mMaxAltitudePoint_CVector3 (long pNativeObject, long value);
	public void set_mMaxAltitudePoint(com.earthview.world.spatial.math.Vector3 mMaxAltitudePoint)
	{
		long mMaxAltitudePointParamValue = mMaxAltitudePoint.nativeObject.pointer;
		
		set_mMaxAltitudePoint_CVector3(this.nativeObject.pointer, mMaxAltitudePointParamValue);
	}
	
	native private long get_mMinAltitudePoint_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mMinAltitudePoint()
	{
		long jniValue = get_mMinAltitudePoint_void(this.nativeObject.pointer);
		
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
	
	native private void set_mMinAltitudePoint_CVector3 (long pNativeObject, long value);
	public void set_mMinAltitudePoint(com.earthview.world.spatial.math.Vector3 mMinAltitudePoint)
	{
		long mMinAltitudePointParamValue = mMinAltitudePoint.nativeObject.pointer;
		
		set_mMinAltitudePoint_CVector3(this.nativeObject.pointer, mMinAltitudePointParamValue);
	}
	
	native private double get_mClampedDistance_void(long pNativeObject);
	public double get_mClampedDistance()
	{
		double jniValue = get_mClampedDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mClampedDistance_ev_real64 (long pNativeObject, double value);
	public void set_mClampedDistance(double mClampedDistance)
	{
		double mClampedDistanceParamValue = mClampedDistance;
		
		set_mClampedDistance_ev_real64(this.nativeObject.pointer, mClampedDistanceParamValue);
	}
	
	native private double get_mStraightDistance_void(long pNativeObject);
	public double get_mStraightDistance()
	{
		double jniValue = get_mStraightDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStraightDistance_ev_real64 (long pNativeObject, double value);
	public void set_mStraightDistance(double mStraightDistance)
	{
		double mStraightDistanceParamValue = mStraightDistance;
		
		set_mStraightDistance_ev_real64(this.nativeObject.pointer, mStraightDistanceParamValue);
	}
	
	native private double get_mProjectDistance_void(long pNativeObject);
	public double get_mProjectDistance()
	{
		double jniValue = get_mProjectDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mProjectDistance_ev_real64 (long pNativeObject, double value);
	public void set_mProjectDistance(double mProjectDistance)
	{
		double mProjectDistanceParamValue = mProjectDistance;
		
		set_mProjectDistance_ev_real64(this.nativeObject.pointer, mProjectDistanceParamValue);
	}
	
	public SectionLineInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SectionLineInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SectionLineInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SectionLineInfo obj = null;
 		if(baseObj instanceof SectionLineInfo)
		{
			obj = (SectionLineInfo)baseObj;
		} else {
			obj = new SectionLineInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSectionLineInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
