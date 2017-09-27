package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * kml飞行
 */
public class KmlFlyTo extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlFlyTo", new KmlFlyToClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlFlyTo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlFlyTo", null);
	}

	native private boolean OperatorEquals_CKmlFlyTo(long pNativeObject, long rhs);
	/**
	 * 重载==运算符
	 * @param rhs 比较的对象
	 */
	public boolean OperatorEquals(com.earthview.world.spatial3d.kmlmanager.KmlFlyTo rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorEquals_CKmlFlyTo(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private boolean OperatorNotEquals_CKmlFlyTo(long pNativeObject, long rhs);
	/**
	 * 重载！=运算符
	 * @param rhs 比较的对象
	 */
	public boolean OperatorNotEquals(com.earthview.world.spatial3d.kmlmanager.KmlFlyTo rhs)
	{
		long rhsParamValue = rhs.nativeObject.pointer;
		boolean returnValue = OperatorNotEquals_CKmlFlyTo(this.nativeObject.pointer, rhsParamValue);
		return returnValue;
	}
	native private double get_mlatitude_void(long pNativeObject);
	public double get_mlatitude()
	{
		double jniValue = get_mlatitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlatitude_ev_real64 (long pNativeObject, double value);
	public void set_mlatitude(double mlatitude)
	{
		double mlatitudeParamValue = mlatitude;
		
		set_mlatitude_ev_real64(this.nativeObject.pointer, mlatitudeParamValue);
	}
	
	native private double get_mlongitude_void(long pNativeObject);
	public double get_mlongitude()
	{
		double jniValue = get_mlongitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlongitude_ev_real64 (long pNativeObject, double value);
	public void set_mlongitude(double mlongitude)
	{
		double mlongitudeParamValue = mlongitude;
		
		set_mlongitude_ev_real64(this.nativeObject.pointer, mlongitudeParamValue);
	}
	
	native private double get_mheading_void(long pNativeObject);
	public double get_mheading()
	{
		double jniValue = get_mheading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mheading_ev_real64 (long pNativeObject, double value);
	public void set_mheading(double mheading)
	{
		double mheadingParamValue = mheading;
		
		set_mheading_ev_real64(this.nativeObject.pointer, mheadingParamValue);
	}
	
	native private double get_mtilt_void(long pNativeObject);
	public double get_mtilt()
	{
		double jniValue = get_mtilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtilt_ev_real64 (long pNativeObject, double value);
	public void set_mtilt(double mtilt)
	{
		double mtiltParamValue = mtilt;
		
		set_mtilt_ev_real64(this.nativeObject.pointer, mtiltParamValue);
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
	
	native private double get_mmoditifAltitude_void(long pNativeObject);
	public double get_mmoditifAltitude()
	{
		double jniValue = get_mmoditifAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mmoditifAltitude_ev_real64 (long pNativeObject, double value);
	public void set_mmoditifAltitude(double mmoditifAltitude)
	{
		double mmoditifAltitudeParamValue = mmoditifAltitude;
		
		set_mmoditifAltitude_ev_real64(this.nativeObject.pointer, mmoditifAltitudeParamValue);
	}
	
	native private double get_mdistance_void(long pNativeObject);
	public double get_mdistance()
	{
		double jniValue = get_mdistance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mdistance_ev_real64 (long pNativeObject, double value);
	public void set_mdistance(double mdistance)
	{
		double mdistanceParamValue = mdistance;
		
		set_mdistance_ev_real64(this.nativeObject.pointer, mdistanceParamValue);
	}
	
	native private boolean get_mneedStop_void(long pNativeObject);
	public boolean get_mneedStop()
	{
		boolean jniValue = get_mneedStop_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mneedStop_ev_bool (long pNativeObject, boolean value);
	public void set_mneedStop(boolean mneedStop)
	{
		boolean mneedStopParamValue = mneedStop;
		
		set_mneedStop_ev_bool(this.nativeObject.pointer, mneedStopParamValue);
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
	
	native private boolean get_misWait_void(long pNativeObject);
	public boolean get_misWait()
	{
		boolean jniValue = get_misWait_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_misWait_ev_bool (long pNativeObject, boolean value);
	public void set_misWait(boolean misWait)
	{
		boolean misWaitParamValue = misWait;
		
		set_misWait_ev_bool(this.nativeObject.pointer, misWaitParamValue);
	}
	
	public KmlFlyTo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlFlyTo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlFlyTo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlFlyTo obj = null;
 		if(baseObj instanceof KmlFlyTo)
		{
			obj = (KmlFlyTo)baseObj;
		} else {
			obj = new KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlFlyTo");
			obj.increaseCast();
		}

		return obj;
	}
}
