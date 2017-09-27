package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EditingState extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::ModelManager::EditingState", new EditingStateClassFactory());
	}

	public EditingState() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("EditingState", null);
	}

	native private long get_id_void(long pNativeObject);
	public long get_id()
	{
		long jniValue = get_id_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_id_ev_uint32 (long pNativeObject, long value);
	public void set_id(long id)
	{
		long idParamValue = id;
		
		set_id_ev_uint32(this.nativeObject.pointer, idParamValue);
	}
	
	native private String get_meshxfile_void(long pNativeObject);
	public String get_meshxfile()
	{
		String jniValue = get_meshxfile_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_meshxfile_EVString (long pNativeObject, String value);
	public void set_meshxfile(String meshxfile)
	{
		String meshxfileParamValue = meshxfile;
		
		set_meshxfile_EVString(this.nativeObject.pointer, meshxfileParamValue);
	}
	
	native private double get_lat_void(long pNativeObject);
	public double get_lat()
	{
		double jniValue = get_lat_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_lat_ev_real64 (long pNativeObject, double value);
	public void set_lat(double lat)
	{
		double latParamValue = lat;
		
		set_lat_ev_real64(this.nativeObject.pointer, latParamValue);
	}
	
	native private double get_lon_void(long pNativeObject);
	public double get_lon()
	{
		double jniValue = get_lon_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_lon_ev_real64 (long pNativeObject, double value);
	public void set_lon(double lon)
	{
		double lonParamValue = lon;
		
		set_lon_ev_real64(this.nativeObject.pointer, lonParamValue);
	}
	
	native private double get_alt_void(long pNativeObject);
	public double get_alt()
	{
		double jniValue = get_alt_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_alt_ev_real64 (long pNativeObject, double value);
	public void set_alt(double alt)
	{
		double altParamValue = alt;
		
		set_alt_ev_real64(this.nativeObject.pointer, altParamValue);
	}
	
	native private long get_localScale_void(long pNativeObject);
	public com.earthview.world.spatial.math.Vector3 get_localScale()
	{
		long jniValue = get_localScale_void(this.nativeObject.pointer);
		
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
	
	native private void set_localScale_CVector3 (long pNativeObject, long value);
	public void set_localScale(com.earthview.world.spatial.math.Vector3 localScale)
	{
		long localScaleParamValue = localScale.nativeObject.pointer;
		
		set_localScale_CVector3(this.nativeObject.pointer, localScaleParamValue);
	}
	
	native private long get_localOrientation_void(long pNativeObject);
	public com.earthview.world.spatial.math.Quaternion get_localOrientation()
	{
		long jniValue = get_localOrientation_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.math.Quaternion __returnValue = new com.earthview.world.spatial.math.Quaternion(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Quaternion)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CQuaternion");
		}
		return __returnValue;
	}
	
	native private void set_localOrientation_CQuaternion (long pNativeObject, long value);
	public void set_localOrientation(com.earthview.world.spatial.math.Quaternion localOrientation)
	{
		long localOrientationParamValue = localOrientation.nativeObject.pointer;
		
		set_localOrientation_CQuaternion(this.nativeObject.pointer, localOrientationParamValue);
	}
	
	native private long get_mPropertyVal_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.PropertySet get_mPropertyVal()
	{
		long jniValue = get_mPropertyVal_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.geodataset.PropertySet __returnValue = new com.earthview.world.spatial.geodataset.PropertySet(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CPropertySet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.PropertySet)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPropertySet");
		}
		return __returnValue;
	}
	
	native private void set_mPropertyVal_CPropertySet (long pNativeObject, long value);
	public void set_mPropertyVal(com.earthview.world.spatial.geodataset.PropertySet mPropertyVal)
	{
		long mPropertyValParamValue = mPropertyVal.nativeObject.pointer;
		
		set_mPropertyVal_CPropertySet(this.nativeObject.pointer, mPropertyValParamValue);
	}
	
	native private boolean get_isInstance_void(long pNativeObject);
	public boolean get_isInstance()
	{
		boolean jniValue = get_isInstance_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isInstance_ev_bool (long pNativeObject, boolean value);
	public void set_isInstance(boolean isInstance)
	{
		boolean isInstanceParamValue = isInstance;
		
		set_isInstance_ev_bool(this.nativeObject.pointer, isInstanceParamValue);
	}
	
	public EditingState(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EditingState(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EditingState fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EditingState obj = null;
 		if(baseObj instanceof EditingState)
		{
			obj = (EditingState)baseObj;
		} else {
			obj = new EditingState(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EditingState");
			obj.increaseCast();
		}

		return obj;
	}
}
