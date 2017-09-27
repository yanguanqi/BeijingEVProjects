package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FlyTo extends com.earthview.world.spatial.kml.TourUnit {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CFlyTo", new FlyToClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCFlyToProxy", new FlyToClassFactory());
	}

	public static class CameraStr extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CFlyTo::CameraStr", new CameraStrClassFactory());
		}

		/**
		 * /构造函数/
		 */
		public CameraStr() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("CameraStr", null);
		}

		native private double get_lon_void(long pNativeObject);
		public double get_lon()
		{
			double jniValue = get_lon_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_lon_double (long pNativeObject, double value);
		public void set_lon(double lon)
		{
			double lonParamValue = lon;
			
			set_lon_double(this.nativeObject.pointer, lonParamValue);
		}
		
		native private double get_lat_void(long pNativeObject);
		public double get_lat()
		{
			double jniValue = get_lat_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_lat_double (long pNativeObject, double value);
		public void set_lat(double lat)
		{
			double latParamValue = lat;
			
			set_lat_double(this.nativeObject.pointer, latParamValue);
		}
		
		native private double get_altitude_void(long pNativeObject);
		public double get_altitude()
		{
			double jniValue = get_altitude_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_altitude_double (long pNativeObject, double value);
		public void set_altitude(double altitude)
		{
			double altitudeParamValue = altitude;
			
			set_altitude_double(this.nativeObject.pointer, altitudeParamValue);
		}
		
		native private double get_heading_void(long pNativeObject);
		public double get_heading()
		{
			double jniValue = get_heading_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_heading_double (long pNativeObject, double value);
		public void set_heading(double heading)
		{
			double headingParamValue = heading;
			
			set_heading_double(this.nativeObject.pointer, headingParamValue);
		}
		
		native private double get_tilt_void(long pNativeObject);
		public double get_tilt()
		{
			double jniValue = get_tilt_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_tilt_double (long pNativeObject, double value);
		public void set_tilt(double tilt)
		{
			double tiltParamValue = tilt;
			
			set_tilt_double(this.nativeObject.pointer, tiltParamValue);
		}
		
		native private int get_altitidemode_void(long pNativeObject);
		public com.earthview.world.spatial.utility.EVAltitudeMode get_altitidemode()
		{
			int jniValue = get_altitidemode_void(this.nativeObject.pointer);
			
			return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(jniValue);
		}
		
		native private void set_altitidemode_EVAltitudeMode (long pNativeObject, int value);
		public void set_altitidemode(com.earthview.world.spatial.utility.EVAltitudeMode altitidemode)
		{
			int altitidemodeParamValue = altitidemode.getValue();
			
			set_altitidemode_EVAltitudeMode(this.nativeObject.pointer, altitidemodeParamValue);
		}
		
		native private double get_roll_void(long pNativeObject);
		public double get_roll()
		{
			double jniValue = get_roll_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_roll_double (long pNativeObject, double value);
		public void set_roll(double roll)
		{
			double rollParamValue = roll;
			
			set_roll_double(this.nativeObject.pointer, rollParamValue);
		}
		
		public CameraStr(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public CameraStr(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static CameraStr fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			CameraStr obj = null;
 			if(baseObj instanceof CameraStr)
			{
				obj = (CameraStr)baseObj;
			} else {
				obj = new CameraStr(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "CameraStr");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class CameraStrClassFactory implements IClassFactory {
		public BaseObject create()
		{
			CameraStr emptyInstance = new CameraStr(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	///0
	public static class LookAtStr extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CFlyTo::LookAtStr", new LookAtStrClassFactory());
		}

		/**
		 * /构造函数/
		 */
		public LookAtStr() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LookAtStr", null);
		}

		native private double get_lon_void(long pNativeObject);
		public double get_lon()
		{
			double jniValue = get_lon_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_lon_double (long pNativeObject, double value);
		public void set_lon(double lon)
		{
			double lonParamValue = lon;
			
			set_lon_double(this.nativeObject.pointer, lonParamValue);
		}
		
		native private double get_lat_void(long pNativeObject);
		public double get_lat()
		{
			double jniValue = get_lat_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_lat_double (long pNativeObject, double value);
		public void set_lat(double lat)
		{
			double latParamValue = lat;
			
			set_lat_double(this.nativeObject.pointer, latParamValue);
		}
		
		native private double get_altitude_void(long pNativeObject);
		public double get_altitude()
		{
			double jniValue = get_altitude_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_altitude_double (long pNativeObject, double value);
		public void set_altitude(double altitude)
		{
			double altitudeParamValue = altitude;
			
			set_altitude_double(this.nativeObject.pointer, altitudeParamValue);
		}
		
		native private double get_heading_void(long pNativeObject);
		public double get_heading()
		{
			double jniValue = get_heading_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_heading_double (long pNativeObject, double value);
		public void set_heading(double heading)
		{
			double headingParamValue = heading;
			
			set_heading_double(this.nativeObject.pointer, headingParamValue);
		}
		
		native private double get_tilt_void(long pNativeObject);
		public double get_tilt()
		{
			double jniValue = get_tilt_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_tilt_double (long pNativeObject, double value);
		public void set_tilt(double tilt)
		{
			double tiltParamValue = tilt;
			
			set_tilt_double(this.nativeObject.pointer, tiltParamValue);
		}
		
		native private int get_altitidemode_void(long pNativeObject);
		public com.earthview.world.spatial.utility.EVAltitudeMode get_altitidemode()
		{
			int jniValue = get_altitidemode_void(this.nativeObject.pointer);
			
			return com.earthview.world.spatial.utility.EVAltitudeMode.toEnum(jniValue);
		}
		
		native private void set_altitidemode_EVAltitudeMode (long pNativeObject, int value);
		public void set_altitidemode(com.earthview.world.spatial.utility.EVAltitudeMode altitidemode)
		{
			int altitidemodeParamValue = altitidemode.getValue();
			
			set_altitidemode_EVAltitudeMode(this.nativeObject.pointer, altitidemodeParamValue);
		}
		
		native private double get_range_void(long pNativeObject);
		public double get_range()
		{
			double jniValue = get_range_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_range_double (long pNativeObject, double value);
		public void set_range(double range)
		{
			double rangeParamValue = range;
			
			set_range_double(this.nativeObject.pointer, rangeParamValue);
		}
		
		public LookAtStr(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LookAtStr(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LookAtStr fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LookAtStr obj = null;
 			if(baseObj instanceof LookAtStr)
			{
				obj = (LookAtStr)baseObj;
			} else {
				obj = new LookAtStr(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LookAtStr");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LookAtStrClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LookAtStr emptyInstance = new LookAtStr(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数
	 */
	public FlyTo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFlyToProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.kml.FlyTo".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getDuration_void(long pNativeObject);
	/**
	 * 获得飞行时间
	 * @return 返回飞行的时间
	 */
	public double getDuration()
	{
		double returnValue = getDuration_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDuration_double(long pNativeObject, double durationF);
	/**
	 * 设置飞行时间
	 * @param durationF 飞行时间
	 */
	public void setDuration(double durationF)
	{
		double durationFParamValue = durationF;
		setDuration_double(this.nativeObject.pointer, durationFParamValue);
	}
	native private int getFlyToMode_void(long pNativeObject);
	/**
	 * 获得飞行模式
	 * @return 返回飞行模式
	 */
	public com.earthview.world.spatial.kml.EVFlyToMode getFlyToMode()
	{
		int returnValue = getFlyToMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVFlyToMode.toEnum(returnValue);
	}
	native private void setFlyToMode_EVFlyToMode(long pNativeObject, int mode);
	/**
	 * 设置飞行模式
	 * @param durationF 飞行模式
	 */
	public void setFlyToMode(com.earthview.world.spatial.kml.EVFlyToMode mode)
	{
		int modeParamValue = mode.getValue();
		setFlyToMode_EVFlyToMode(this.nativeObject.pointer, modeParamValue);
	}
	native private int getAbstractView_void(long pNativeObject);
	/**
	 * 获得AbstractView哪种观察方式
	 * @return 返回观察方式
	 */
	public com.earthview.world.spatial.kml.EVAbstractView getAbstractView()
	{
		int returnValue = getAbstractView_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.kml.EVAbstractView.toEnum(returnValue);
	}
	native private void setAbstractView_EVAbstractView(long pNativeObject, int abstra);
	/**
	 * 设置观察方式
	 * @param abstra 观察的方式
	 */
	public void setAbstractView(com.earthview.world.spatial.kml.EVAbstractView abstra)
	{
		int abstraParamValue = abstra.getValue();
		setAbstractView_EVAbstractView(this.nativeObject.pointer, abstraParamValue);
	}
	native private long getCamera_void(long pNativeObject);
	/**
	 * 获得相机描述
	 * @return 返回相机描述
	 */
	public com.earthview.world.spatial.kml.FlyTo.CameraStr getCamera()
	{
		long returnValue = getCamera_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.FlyTo.CameraStr __returnValue = new com.earthview.world.spatial.kml.FlyTo.CameraStr(CreatedWhenConstruct.CWC_NotToCreate, "CameraStr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.FlyTo.CameraStr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CameraStr");
		}
		return __returnValue;
	}
	native private void setCamera_CameraStr(long pNativeObject, long camera_tour);
	/**
	 * 设置相机描述
	 * @param camera_tour 相机描述
	 */
	public void setCamera(com.earthview.world.spatial.kml.FlyTo.CameraStr camera_tour)
	{
		long camera_tourParamValue = camera_tour.nativeObject.pointer;
		setCamera_CameraStr(this.nativeObject.pointer, camera_tourParamValue);
	}
	native private long getLookAt_void(long pNativeObject);
	/**
	 * 获得观察描述
	 * @return 返回观察描述
	 */
	public com.earthview.world.spatial.kml.FlyTo.LookAtStr getLookAt()
	{
		long returnValue = getLookAt_void(this.nativeObject.pointer);
		com.earthview.world.spatial.kml.FlyTo.LookAtStr __returnValue = new com.earthview.world.spatial.kml.FlyTo.LookAtStr(CreatedWhenConstruct.CWC_NotToCreate, "LookAtStr");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.FlyTo.LookAtStr)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "LookAtStr");
		}
		return __returnValue;
	}
	native private void setLookAt_LookAtStr(long pNativeObject, long lookat_tour);
	/**
	 * 设置观察描述
	 * @param camera_tour 观察描述类
	 */
	public void setLookAt(com.earthview.world.spatial.kml.FlyTo.LookAtStr lookat_tour)
	{
		long lookat_tourParamValue = lookat_tour.nativeObject.pointer;
		setLookAt_LookAtStr(this.nativeObject.pointer, lookat_tourParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * /克隆/
	 * @return 返回克隆对象
	 */
	public com.earthview.world.spatial.kml.TourUnit ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.TourUnit __returnValue = new com.earthview.world.spatial.kml.TourUnit(CreatedWhenConstruct.CWC_NotToCreate, "CTourUnit");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.TourUnit)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTourUnit");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.kml.TourUnit ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.TourUnit __returnValue = new com.earthview.world.spatial.kml.TourUnit(CreatedWhenConstruct.CWC_NotToCreate, "CTourUnit");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.TourUnit)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CTourUnit");
		}
		return __returnValue;
	}

	public FlyTo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FlyTo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取漫游的类型
	 * @return 返回漫游的类型
	 */
	public com.earthview.world.spatial.kml.EVTourUnitType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
		}
	}
	
	public static FlyTo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FlyTo obj = null;
 		if(baseObj instanceof FlyTo)
		{
			obj = (FlyTo)baseObj;
		} else {
			obj = new FlyTo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFlyTo");
			obj.increaseCast();
		}

		return obj;
	}
}
