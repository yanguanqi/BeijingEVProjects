package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAnimationControlPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint", new GlobeAnimationControlPointClassFactory());
	}

	native private long get_mlatitude_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlatitude()
	{
		long jniValue = get_mlatitude_void(this.nativeObject.pointer);
		
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
	
	native private void set_mlatitude_CDegree (long pNativeObject, long value);
	public void set_mlatitude(com.earthview.world.spatial.math.Degree mlatitude)
	{
		long mlatitudeParamValue = mlatitude.nativeObject.pointer;
		
		set_mlatitude_CDegree(this.nativeObject.pointer, mlatitudeParamValue);
	}
	
	native private long get_mlongitude_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mlongitude()
	{
		long jniValue = get_mlongitude_void(this.nativeObject.pointer);
		
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
	
	native private void set_mlongitude_CDegree (long pNativeObject, long value);
	public void set_mlongitude(com.earthview.world.spatial.math.Degree mlongitude)
	{
		long mlongitudeParamValue = mlongitude.nativeObject.pointer;
		
		set_mlongitude_CDegree(this.nativeObject.pointer, mlongitudeParamValue);
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
	
	native private double get_maltitude_void(long pNativeObject);
	public double get_maltitude()
	{
		double jniValue = get_maltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_maltitude_ev_real64 (long pNativeObject, double value);
	public void set_maltitude(double maltitude)
	{
		double maltitudeParamValue = maltitude;
		
		set_maltitude_ev_real64(this.nativeObject.pointer, maltitudeParamValue);
	}
	
	native private long get_mtilt_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mtilt()
	{
		long jniValue = get_mtilt_void(this.nativeObject.pointer);
		
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
	
	native private void set_mtilt_CDegree (long pNativeObject, long value);
	public void set_mtilt(com.earthview.world.spatial.math.Degree mtilt)
	{
		long mtiltParamValue = mtilt.nativeObject.pointer;
		
		set_mtilt_CDegree(this.nativeObject.pointer, mtiltParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public GlobeAnimationControlPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeAnimationControlPoint", null);
	}

	public GlobeAnimationControlPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeAnimationControlPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeAnimationControlPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeAnimationControlPoint obj = null;
 		if(baseObj instanceof GlobeAnimationControlPoint)
		{
			obj = (GlobeAnimationControlPoint)baseObj;
		} else {
			obj = new GlobeAnimationControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeAnimationControlPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
