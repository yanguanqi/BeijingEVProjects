package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrameTag extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFrameTag", new FrameTagClassFactory());
	}

	public FrameTag() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CFrameTag", null);
	}

	native private String get_mTagName_void(long pNativeObject);
	public String get_mTagName()
	{
		String jniValue = get_mTagName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTagName_EVString (long pNativeObject, String value);
	public void set_mTagName(String mTagName)
	{
		String mTagNameParamValue = mTagName;
		
		set_mTagName_EVString(this.nativeObject.pointer, mTagNameParamValue);
	}
	
	native private double get_mTimeValue_void(long pNativeObject);
	public double get_mTimeValue()
	{
		double jniValue = get_mTimeValue_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTimeValue_ev_real64 (long pNativeObject, double value);
	public void set_mTimeValue(double mTimeValue)
	{
		double mTimeValueParamValue = mTimeValue;
		
		set_mTimeValue_ev_real64(this.nativeObject.pointer, mTimeValueParamValue);
	}
	
	native private long get_mID_void(long pNativeObject);
	public long get_mID()
	{
		long jniValue = get_mID_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mID_ev_uint32 (long pNativeObject, long value);
	public void set_mID(long mID)
	{
		long mIDParamValue = mID;
		
		set_mID_ev_uint32(this.nativeObject.pointer, mIDParamValue);
	}
	
	public FrameTag(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FrameTag(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static FrameTag fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FrameTag obj = null;
 		if(baseObj instanceof FrameTag)
		{
			obj = (FrameTag)baseObj;
		} else {
			obj = new FrameTag(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFrameTag");
			obj.increaseCast();
		}

		return obj;
	}
}
