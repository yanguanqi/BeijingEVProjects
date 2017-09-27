package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Obqrecordinfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::OBQRecordInfo", new ObqrecordinfoClassFactory());
	}

	public Obqrecordinfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("OBQRecordInfo", null);
	}

	native private long get_EVID_void(long pNativeObject);
	public long get_EVID()
	{
		long jniValue = get_EVID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_EVID_ev_uint32 (long pNativeObject, long value);
	public void set_EVID(long EVID)
	{
		long EVIDParamValue = EVID;
		
		set_EVID_ev_uint32(this.nativeObject.pointer, EVIDParamValue);
	}
	
	native private String get_EntityName_void(long pNativeObject);
	public String get_EntityName()
	{
		String jniValue = get_EntityName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_EntityName_EVString (long pNativeObject, String value);
	public void set_EntityName(String EntityName)
	{
		String EntityNameParamValue = EntityName;
		
		set_EntityName_EVString(this.nativeObject.pointer, EntityNameParamValue);
	}
	
	native private String get_ObqFullFilePath_void(long pNativeObject);
	public String get_ObqFullFilePath()
	{
		String jniValue = get_ObqFullFilePath_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ObqFullFilePath_EVString (long pNativeObject, String value);
	public void set_ObqFullFilePath(String ObqFullFilePath)
	{
		String ObqFullFilePathParamValue = ObqFullFilePath;
		
		set_ObqFullFilePath_EVString(this.nativeObject.pointer, ObqFullFilePathParamValue);
	}
	
	native private double get_Lon_void(long pNativeObject);
	public double get_Lon()
	{
		double jniValue = get_Lon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Lon_ev_real64 (long pNativeObject, double value);
	public void set_Lon(double Lon)
	{
		double LonParamValue = Lon;
		
		set_Lon_ev_real64(this.nativeObject.pointer, LonParamValue);
	}
	
	native private double get_Lat_void(long pNativeObject);
	public double get_Lat()
	{
		double jniValue = get_Lat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Lat_ev_real64 (long pNativeObject, double value);
	public void set_Lat(double Lat)
	{
		double LatParamValue = Lat;
		
		set_Lat_ev_real64(this.nativeObject.pointer, LatParamValue);
	}
	
	native private double get_Alt_void(long pNativeObject);
	public double get_Alt()
	{
		double jniValue = get_Alt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Alt_ev_real64 (long pNativeObject, double value);
	public void set_Alt(double Alt)
	{
		double AltParamValue = Alt;
		
		set_Alt_ev_real64(this.nativeObject.pointer, AltParamValue);
	}
	
	native private long get_WorldBounds_void(long pNativeObject);
	public com.earthview.world.spatial.math.AxisAlignedBox get_WorldBounds()
	{
		long jniValue = get_WorldBounds_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	
	native private void set_WorldBounds_CAxisAlignedBox (long pNativeObject, long value);
	public void set_WorldBounds(com.earthview.world.spatial.math.AxisAlignedBox WorldBounds)
	{
		long WorldBoundsParamValue = WorldBounds.nativeObject.pointer;
		
		set_WorldBounds_CAxisAlignedBox(this.nativeObject.pointer, WorldBoundsParamValue);
	}
	
	native private boolean get_Instance_void(long pNativeObject);
	public boolean get_Instance()
	{
		boolean jniValue = get_Instance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_Instance_ev_bool (long pNativeObject, boolean value);
	public void set_Instance(boolean Instance)
	{
		boolean InstanceParamValue = Instance;
		
		set_Instance_ev_bool(this.nativeObject.pointer, InstanceParamValue);
	}
	
	native private double get_ScaleX_void(long pNativeObject);
	public double get_ScaleX()
	{
		double jniValue = get_ScaleX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ScaleX_Real (long pNativeObject, double value);
	public void set_ScaleX(double ScaleX)
	{
		double ScaleXParamValue = ScaleX;
		
		set_ScaleX_Real(this.nativeObject.pointer, ScaleXParamValue);
	}
	
	native private double get_ScaleY_void(long pNativeObject);
	public double get_ScaleY()
	{
		double jniValue = get_ScaleY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ScaleY_Real (long pNativeObject, double value);
	public void set_ScaleY(double ScaleY)
	{
		double ScaleYParamValue = ScaleY;
		
		set_ScaleY_Real(this.nativeObject.pointer, ScaleYParamValue);
	}
	
	native private double get_ScaleZ_void(long pNativeObject);
	public double get_ScaleZ()
	{
		double jniValue = get_ScaleZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_ScaleZ_Real (long pNativeObject, double value);
	public void set_ScaleZ(double ScaleZ)
	{
		double ScaleZParamValue = ScaleZ;
		
		set_ScaleZ_Real(this.nativeObject.pointer, ScaleZParamValue);
	}
	
	native private double get_OrientationW_void(long pNativeObject);
	public double get_OrientationW()
	{
		double jniValue = get_OrientationW_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_OrientationW_Real (long pNativeObject, double value);
	public void set_OrientationW(double OrientationW)
	{
		double OrientationWParamValue = OrientationW;
		
		set_OrientationW_Real(this.nativeObject.pointer, OrientationWParamValue);
	}
	
	native private double get_OrientationX_void(long pNativeObject);
	public double get_OrientationX()
	{
		double jniValue = get_OrientationX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_OrientationX_Real (long pNativeObject, double value);
	public void set_OrientationX(double OrientationX)
	{
		double OrientationXParamValue = OrientationX;
		
		set_OrientationX_Real(this.nativeObject.pointer, OrientationXParamValue);
	}
	
	native private double get_OrientationY_void(long pNativeObject);
	public double get_OrientationY()
	{
		double jniValue = get_OrientationY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_OrientationY_Real (long pNativeObject, double value);
	public void set_OrientationY(double OrientationY)
	{
		double OrientationYParamValue = OrientationY;
		
		set_OrientationY_Real(this.nativeObject.pointer, OrientationYParamValue);
	}
	
	native private double get_OrientationZ_void(long pNativeObject);
	public double get_OrientationZ()
	{
		double jniValue = get_OrientationZ_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_OrientationZ_Real (long pNativeObject, double value);
	public void set_OrientationZ(double OrientationZ)
	{
		double OrientationZParamValue = OrientationZ;
		
		set_OrientationZ_Real(this.nativeObject.pointer, OrientationZParamValue);
	}
	
	public Obqrecordinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Obqrecordinfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Obqrecordinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Obqrecordinfo obj = null;
 		if(baseObj instanceof Obqrecordinfo)
		{
			obj = (Obqrecordinfo)baseObj;
		} else {
			obj = new Obqrecordinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "OBQRecordInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
