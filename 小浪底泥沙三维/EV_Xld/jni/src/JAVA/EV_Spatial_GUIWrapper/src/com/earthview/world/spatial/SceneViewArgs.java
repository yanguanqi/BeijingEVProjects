package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneViewArgs extends com.earthview.world.spatial.Iviewargs {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CSceneViewArgs", new SceneViewArgsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCSceneViewArgsProxy", new SceneViewArgsClassFactory());
	}

	public SceneViewArgs() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSceneViewArgsProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.SceneViewArgs".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	public com.earthview.world.spatial.Iviewargs.ViewArgsType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.Iviewargs.ViewArgsType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.Iviewargs.ViewArgsType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.Iviewargs.ViewArgsType.toEnum(returnValue);
	}

	native private long get_camera_void(long pNativeObject);
	public com.earthview.world.core.BaseObject get_camera()
	{
		long jniValue = get_camera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.core.BaseObject __returnValue = new com.earthview.world.core.BaseObject(CreatedWhenConstruct.CWC_NotToCreate, "CBaseObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BaseObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBaseObject");
		}
		return __returnValue;
	}
	
	native private void set_camera_CBaseObject (long pNativeObject, long value);
	public void set_camera(com.earthview.world.core.BaseObject camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		
		set_camera_CBaseObject(this.nativeObject.pointer, cameraParamValue);
	}
	
	native private double get_altitude_void(long pNativeObject);
	public double get_altitude()
	{
		double jniValue = get_altitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_altitude_ev_real64 (long pNativeObject, double value);
	public void set_altitude(double altitude)
	{
		double altitudeParamValue = altitude;
		
		set_altitude_ev_real64(this.nativeObject.pointer, altitudeParamValue);
	}
	
	native private double get_longtitude_void(long pNativeObject);
	public double get_longtitude()
	{
		double jniValue = get_longtitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_longtitude_ev_real64 (long pNativeObject, double value);
	public void set_longtitude(double longtitude)
	{
		double longtitudeParamValue = longtitude;
		
		set_longtitude_ev_real64(this.nativeObject.pointer, longtitudeParamValue);
	}
	
	native private double get_latitude_void(long pNativeObject);
	public double get_latitude()
	{
		double jniValue = get_latitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_latitude_ev_real64 (long pNativeObject, double value);
	public void set_latitude(double latitude)
	{
		double latitudeParamValue = latitude;
		
		set_latitude_ev_real64(this.nativeObject.pointer, latitudeParamValue);
	}
	
	native private double get_heading_void(long pNativeObject);
	public double get_heading()
	{
		double jniValue = get_heading_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_heading_ev_real64 (long pNativeObject, double value);
	public void set_heading(double heading)
	{
		double headingParamValue = heading;
		
		set_heading_ev_real64(this.nativeObject.pointer, headingParamValue);
	}
	
	native private double get_tilt_void(long pNativeObject);
	public double get_tilt()
	{
		double jniValue = get_tilt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_tilt_ev_real64 (long pNativeObject, double value);
	public void set_tilt(double tilt)
	{
		double tiltParamValue = tilt;
		
		set_tilt_ev_real64(this.nativeObject.pointer, tiltParamValue);
	}
	
	native private double get_moditifAltitude_void(long pNativeObject);
	public double get_moditifAltitude()
	{
		double jniValue = get_moditifAltitude_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_moditifAltitude_ev_real64 (long pNativeObject, double value);
	public void set_moditifAltitude(double moditifAltitude)
	{
		double moditifAltitudeParamValue = moditifAltitude;
		
		set_moditifAltitude_ev_real64(this.nativeObject.pointer, moditifAltitudeParamValue);
	}
	
	native private boolean get_operationOver_void(long pNativeObject);
	public boolean get_operationOver()
	{
		boolean jniValue = get_operationOver_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_operationOver_ev_bool (long pNativeObject, boolean value);
	public void set_operationOver(boolean operationOver)
	{
		boolean operationOverParamValue = operationOver;
		
		set_operationOver_ev_bool(this.nativeObject.pointer, operationOverParamValue);
	}
	
	public SceneViewArgs(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SceneViewArgs(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getType_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
		}
	}
	
	public static SceneViewArgs fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SceneViewArgs obj = null;
 		if(baseObj instanceof SceneViewArgs)
		{
			obj = (SceneViewArgs)baseObj;
		} else {
			obj = new SceneViewArgs(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSceneViewArgs");
			obj.increaseCast();
		}

		return obj;
	}
}
