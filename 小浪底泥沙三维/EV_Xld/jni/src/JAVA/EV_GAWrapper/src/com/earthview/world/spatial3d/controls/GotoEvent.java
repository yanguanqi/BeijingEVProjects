package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GotoEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGotoEvent", new GotoEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GotoEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGotoEvent", null);
	}

	/**
	 * 构造函数
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param timeSpan 时间
	 */
	public GotoEvent(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double timeSpan) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer latitudePtr = new BasePointer(latitude);
		list.add("latitude", latitudePtr.get());
		BasePointer longitudePtr = new BasePointer(longitude);
		list.add("longitude", longitudePtr.get());
		BasePointer timeSpanPtr = new BasePointer(timeSpan);
		list.add("timeSpan", timeSpanPtr.get());
		Create("CGotoEvent", list);
	}

	/**
	 * 构造函数
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 海拔
	 * @param timeSpan 时间
	 */
	public GotoEvent(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double altitude, double timeSpan) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer latitudePtr = new BasePointer(latitude);
		list.add("latitude", latitudePtr.get());
		BasePointer longitudePtr = new BasePointer(longitude);
		list.add("longitude", longitudePtr.get());
		BasePointer altitudePtr = new BasePointer(altitude);
		list.add("altitude", altitudePtr.get());
		BasePointer timeSpanPtr = new BasePointer(timeSpan);
		list.add("timeSpan", timeSpanPtr.get());
		Create("CGotoEvent", list);
	}

	/**
	 * 构造函数
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param heading 偏航角
	 * @param altitude 海拔
	 * @param timeSpan 时间
	 */
	public GotoEvent(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, com.earthview.world.spatial.math.Degree heading, double altitude, double timeSpan) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer latitudePtr = new BasePointer(latitude);
		list.add("latitude", latitudePtr.get());
		BasePointer longitudePtr = new BasePointer(longitude);
		list.add("longitude", longitudePtr.get());
		BasePointer headingPtr = new BasePointer(heading);
		list.add("heading", headingPtr.get());
		BasePointer altitudePtr = new BasePointer(altitude);
		list.add("altitude", altitudePtr.get());
		BasePointer timeSpanPtr = new BasePointer(timeSpan);
		list.add("timeSpan", timeSpanPtr.get());
		Create("CGotoEvent", list);
	}

	/**
	 * 构造函数
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 海拔
	 * @param tilt 倾解
	 * @param timeSpan 时间
	 */
	public GotoEvent(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double altitude, com.earthview.world.spatial.math.Degree tilt, double timeSpan) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer latitudePtr = new BasePointer(latitude);
		list.add("latitude", latitudePtr.get());
		BasePointer longitudePtr = new BasePointer(longitude);
		list.add("longitude", longitudePtr.get());
		BasePointer altitudePtr = new BasePointer(altitude);
		list.add("altitude", altitudePtr.get());
		BasePointer tiltPtr = new BasePointer(tilt);
		list.add("tilt", tiltPtr.get());
		BasePointer timeSpanPtr = new BasePointer(timeSpan);
		list.add("timeSpan", timeSpanPtr.get());
		Create("CGotoEvent", list);
	}

	/**
	 * 构造函数
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 海拔
	 * @param moditifyAltitude 观察点处的海拔
	 * @param timeSpan 时间
	 */
	public GotoEvent(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double altitude, double modifyAltitude, double timeSpan) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer latitudePtr = new BasePointer(latitude);
		list.add("latitude", latitudePtr.get());
		BasePointer longitudePtr = new BasePointer(longitude);
		list.add("longitude", longitudePtr.get());
		BasePointer headingPtr = new BasePointer(heading);
		list.add("heading", headingPtr.get());
		BasePointer tiltPtr = new BasePointer(tilt);
		list.add("tilt", tiltPtr.get());
		BasePointer altitudePtr = new BasePointer(altitude);
		list.add("altitude", altitudePtr.get());
		BasePointer modifyAltitudePtr = new BasePointer(modifyAltitude);
		list.add("modifyAltitude", modifyAltitudePtr.get());
		BasePointer timeSpanPtr = new BasePointer(timeSpan);
		list.add("timeSpan", timeSpanPtr.get());
		Create("CGotoEvent", list);
	}

	native private void OperatorAssign_CGotoEvent(long pNativeObject, long rhs);
	public void OperatorAssign(com.earthview.world.spatial3d.controls.GotoEvent rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		OperatorAssign_CGotoEvent(this.nativeObject.pointer, rhsParamValue);
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
	
	native private boolean get_mincludeHeading_void(long pNativeObject);
	public boolean get_mincludeHeading()
	{
		boolean jniValue = get_mincludeHeading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mincludeHeading_ev_bool (long pNativeObject, boolean value);
	public void set_mincludeHeading(boolean mincludeHeading)
	{
		boolean mincludeHeadingParamValue = mincludeHeading;
		
		set_mincludeHeading_ev_bool(this.nativeObject.pointer, mincludeHeadingParamValue);
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
	
	native private boolean get_mincludeTilt_void(long pNativeObject);
	public boolean get_mincludeTilt()
	{
		boolean jniValue = get_mincludeTilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mincludeTilt_ev_bool (long pNativeObject, boolean value);
	public void set_mincludeTilt(boolean mincludeTilt)
	{
		boolean mincludeTiltParamValue = mincludeTilt;
		
		set_mincludeTilt_ev_bool(this.nativeObject.pointer, mincludeTiltParamValue);
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
	
	native private boolean get_mincludeAltitude_void(long pNativeObject);
	public boolean get_mincludeAltitude()
	{
		boolean jniValue = get_mincludeAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mincludeAltitude_ev_bool (long pNativeObject, boolean value);
	public void set_mincludeAltitude(boolean mincludeAltitude)
	{
		boolean mincludeAltitudeParamValue = mincludeAltitude;
		
		set_mincludeAltitude_ev_bool(this.nativeObject.pointer, mincludeAltitudeParamValue);
	}
	
	native private double get_mmodifyAltitude_void(long pNativeObject);
	public double get_mmodifyAltitude()
	{
		double jniValue = get_mmodifyAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmodifyAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mmodifyAltitude(double mmodifyAltitude)
	{
		double mmodifyAltitudeParamValue = mmodifyAltitude;
		
		set_mmodifyAltitude_ev_real64(this.nativeObject.pointer, mmodifyAltitudeParamValue);
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
	
	native private boolean get_mStopGoto_void(long pNativeObject);
	public boolean get_mStopGoto()
	{
		boolean jniValue = get_mStopGoto_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mStopGoto_ev_bool (long pNativeObject, boolean value);
	public void set_mStopGoto(boolean mStopGoto)
	{
		boolean mStopGotoParamValue = mStopGoto;
		
		set_mStopGoto_ev_bool(this.nativeObject.pointer, mStopGotoParamValue);
	}
	
	public GotoEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GotoEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GotoEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GotoEvent obj = null;
 		if(baseObj instanceof GotoEvent)
		{
			obj = (GotoEvent)baseObj;
		} else {
			obj = new GotoEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGotoEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
