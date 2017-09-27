package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * RenderSystemCapabilities、OPENGL和D3D9使用的驱动版本存储目前GPU驱动的版本
 */
public class DriverVersion extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::DriverVersion", new DriverVersionClassFactory());
	}

	native private int get_major_void(long pNativeObject);
	public int get_major()
	{
		int jniValue = get_major_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_major_ev_int32 (long pNativeObject, int value);
	public void set_major(int major)
	{
		int majorParamValue = major;
		
		set_major_ev_int32(this.nativeObject.pointer, majorParamValue);
	}
	
	native private int get_minor_void(long pNativeObject);
	public int get_minor()
	{
		int jniValue = get_minor_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_minor_ev_int32 (long pNativeObject, int value);
	public void set_minor(int minor)
	{
		int minorParamValue = minor;
		
		set_minor_ev_int32(this.nativeObject.pointer, minorParamValue);
	}
	
	native private int get_release_void(long pNativeObject);
	public int get_release()
	{
		int jniValue = get_release_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_release_ev_int32 (long pNativeObject, int value);
	public void set_release(int release)
	{
		int releaseParamValue = release;
		
		set_release_ev_int32(this.nativeObject.pointer, releaseParamValue);
	}
	
	native private int get_build_void(long pNativeObject);
	public int get_build()
	{
		int jniValue = get_build_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_build_ev_int32 (long pNativeObject, int value);
	public void set_build(int build)
	{
		int buildParamValue = build;
		
		set_build_ev_int32(this.nativeObject.pointer, buildParamValue);
	}
	
	public DriverVersion() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("DriverVersion", null);
	}

	native private String ev_toString_void(long pNativeObject);
	public String ev_toString()
	{
		String returnValue = ev_toString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void fromString_EVString(long pNativeObject, String versionString);
	public void fromString(String versionString)
	{
		String versionStringParamValue = versionString;
		fromString_EVString(this.nativeObject.pointer, versionStringParamValue);
	}
	public DriverVersion(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DriverVersion(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DriverVersion fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DriverVersion obj = null;
 		if(baseObj instanceof DriverVersion)
		{
			obj = (DriverVersion)baseObj;
		} else {
			obj = new DriverVersion(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "DriverVersion");
			obj.increaseCast();
		}

		return obj;
	}
}
