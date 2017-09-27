package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NodeTag extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CNodeTag", new NodeTagClassFactory());
	}

	public NodeTag() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CNodeTag", null);
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
	
	native private String get_mTagDescription_void(long pNativeObject);
	public String get_mTagDescription()
	{
		String jniValue = get_mTagDescription_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mTagDescription_EVString (long pNativeObject, String value);
	public void set_mTagDescription(String mTagDescription)
	{
		String mTagDescriptionParamValue = mTagDescription;
		
		set_mTagDescription_EVString(this.nativeObject.pointer, mTagDescriptionParamValue);
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
	
	public NodeTag(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public NodeTag(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static NodeTag fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		NodeTag obj = null;
 		if(baseObj instanceof NodeTag)
		{
			obj = (NodeTag)baseObj;
		} else {
			obj = new NodeTag(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CNodeTag");
			obj.increaseCast();
		}

		return obj;
	}
}
