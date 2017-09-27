package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocationEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CLocationEvent", new LocationEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public LocationEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLocationEvent", null);
	}

	native private void OperatorAssign_CLocationEvent(long pNativeObject, long rhs);
	public void OperatorAssign(com.earthview.world.spatial3d.controls.LocationEvent rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CLocationEvent(this.nativeObject.pointer, rhsParamValue);
	}
	native private long get_mTarget_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_mTarget()
	{
		long jniValue = get_mTarget_void(this.nativeObject.pointer);
		
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
	
	native private void set_mTarget_CVector3 (long pNativeObject, long value);
	public void set_mTarget(com.earthview.world.spatial.math.Vector3 mTarget)
	{
		long mTargetParamValue = mTarget.nativeObject.pointer;
		
		set_mTarget_CVector3(this.nativeObject.pointer, mTargetParamValue);
	}
	
	native private long get_mTilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mTilt()
	{
		long jniValue = get_mTilt_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mTilt_CDegree (long pNativeObject, long value);
	public void set_mTilt(com.earthview.world.spatial.math.Degree mTilt)
	{
		long mTiltParamValue = mTilt.nativeObject.pointer;
		
		set_mTilt_CDegree(this.nativeObject.pointer, mTiltParamValue);
	}
	
	native private long get_mHeading_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mHeading()
	{
		long jniValue = get_mHeading_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	
	native private void set_mHeading_CDegree (long pNativeObject, long value);
	public void set_mHeading(com.earthview.world.spatial.math.Degree mHeading)
	{
		long mHeadingParamValue = mHeading.nativeObject.pointer;
		
		set_mHeading_CDegree(this.nativeObject.pointer, mHeadingParamValue);
	}
	
	native private double get_mDistance_void(long pNativeObject);
	public double get_mDistance()
	{
		double jniValue = get_mDistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mDistance_double (long pNativeObject, double value);
	public void set_mDistance(double mDistance)
	{
		double mDistanceParamValue = mDistance;
		
		set_mDistance_double(this.nativeObject.pointer, mDistanceParamValue);
	}
	
	native private double get_mtimeSpan_void(long pNativeObject);
	public double get_mtimeSpan()
	{
		double jniValue = get_mtimeSpan_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtimeSpan_ev_real64 (long pNativeObject, double value);
	public void set_mtimeSpan(double mtimeSpan)
	{
		double mtimeSpanParamValue = mtimeSpan;
		
		set_mtimeSpan_ev_real64(this.nativeObject.pointer, mtimeSpanParamValue);
	}
	
	public LocationEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LocationEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LocationEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LocationEvent obj = null;
 		if(baseObj instanceof LocationEvent)
		{
			obj = (LocationEvent)baseObj;
		} else {
			obj = new LocationEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLocationEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
