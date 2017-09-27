package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数字地球上的节点动画控制点类
 */
public class GlobeControlPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGlobeControlPoint", new GlobeControlPointClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeControlPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeControlPoint", null);
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
	
	native private long get_mheading_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mheading()
	{
		long jniValue = get_mheading_void(this.nativeObject.pointer);
		
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
	
	native private void set_mheading_CDegree (long pNativeObject, long value);
	public void set_mheading(com.earthview.world.spatial.math.Degree mheading)
	{
		long mheadingParamValue = mheading.nativeObject.pointer;
		
		set_mheading_CDegree(this.nativeObject.pointer, mheadingParamValue);
	}
	
	native private double get_mradius_void(long pNativeObject);
	public double get_mradius()
	{
		double jniValue = get_mradius_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mradius_ev_real64 (long pNativeObject, double value);
	public void set_mradius(double mradius)
	{
		double mradiusParamValue = mradius;
		
		set_mradius_ev_real64(this.nativeObject.pointer, mradiusParamValue);
	}
	
	native private long get_myaw_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_myaw()
	{
		long jniValue = get_myaw_void(this.nativeObject.pointer);
		
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
	
	native private void set_myaw_CDegree (long pNativeObject, long value);
	public void set_myaw(com.earthview.world.spatial.math.Degree myaw)
	{
		long myawParamValue = myaw.nativeObject.pointer;
		
		set_myaw_CDegree(this.nativeObject.pointer, myawParamValue);
	}
	
	native private long get_mpitch_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mpitch()
	{
		long jniValue = get_mpitch_void(this.nativeObject.pointer);
		
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
	
	native private void set_mpitch_CDegree (long pNativeObject, long value);
	public void set_mpitch(com.earthview.world.spatial.math.Degree mpitch)
	{
		long mpitchParamValue = mpitch.nativeObject.pointer;
		
		set_mpitch_CDegree(this.nativeObject.pointer, mpitchParamValue);
	}
	
	native private long get_mroll_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree get_mroll()
	{
		long jniValue = get_mroll_void(this.nativeObject.pointer);
		
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
	
	native private void set_mroll_CDegree (long pNativeObject, long value);
	public void set_mroll(com.earthview.world.spatial.math.Degree mroll)
	{
		long mrollParamValue = mroll.nativeObject.pointer;
		
		set_mroll_CDegree(this.nativeObject.pointer, mrollParamValue);
	}
	
	native private long transformToControlPoint_void(long pNativeObject);
	/**
	 * 转换为EarthView::World::Spatial3D::CControlPoint对象
	 * @return 笛卡尔坐标控制点
	 */
	public com.earthview.world.spatial3d.ControlPoint transformToControlPoint()
	{
		long returnValue = transformToControlPoint_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.ControlPoint __returnValue = new com.earthview.world.spatial3d.ControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CControlPoint");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ControlPoint)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CControlPoint");
		}
		return __returnValue;
	}
	native private boolean OperatorEquals_CGlobeControlPoint(long pNativeObject, long rhs);
	/**
	 * ==操作符重载
	 */
	public boolean OperatorEquals(com.earthview.world.spatial3d.GlobeControlPoint rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CGlobeControlPoint(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CGlobeControlPoint(long pNativeObject, long rhs);
	/**
	 * !=操作符重载
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial3d.GlobeControlPoint rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CGlobeControlPoint(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	public GlobeControlPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeControlPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeControlPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeControlPoint obj = null;
 		if(baseObj instanceof GlobeControlPoint)
		{
			obj = (GlobeControlPoint)baseObj;
		} else {
			obj = new GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeControlPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
