package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///struct ShadowTextureConfig
public class ShadowTextureConfig extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ShadowTextureConfig", new ShadowTextureConfigClassFactory());
	}

	native private long get_width_void(long pNativeObject);
	public long get_width()
	{
		long jniValue = get_width_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_width_ev_uint32 (long pNativeObject, long value);
	public void set_width(long width)
	{
		long widthParamValue = width;
		
		set_width_ev_uint32(this.nativeObject.pointer, widthParamValue);
	}
	
	native private long get_height_void(long pNativeObject);
	public long get_height()
	{
		long jniValue = get_height_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_height_ev_uint32 (long pNativeObject, long value);
	public void set_height(long height)
	{
		long heightParamValue = height;
		
		set_height_ev_uint32(this.nativeObject.pointer, heightParamValue);
	}
	
	native private int get_format_void(long pNativeObject);
	public com.earthview.world.graphic.PixelFormat get_format()
	{
		int jniValue = get_format_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.PixelFormat.toEnum(jniValue);
	}
	
	native private void set_format_PixelFormat (long pNativeObject, int value);
	public void set_format(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		
		set_format_PixelFormat(this.nativeObject.pointer, formatParamValue);
	}
	
	native private long get_fsaa_void(long pNativeObject);
	public long get_fsaa()
	{
		long jniValue = get_fsaa_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_fsaa_ev_uint32 (long pNativeObject, long value);
	public void set_fsaa(long fsaa)
	{
		long fsaaParamValue = fsaa;
		
		set_fsaa_ev_uint32(this.nativeObject.pointer, fsaaParamValue);
	}
	
	native private int get_depthBufferPoolId_void(long pNativeObject);
	public int get_depthBufferPoolId()
	{
		int jniValue = get_depthBufferPoolId_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_depthBufferPoolId_ev_uint16 (long pNativeObject, int value);
	public void set_depthBufferPoolId(int depthBufferPoolId)
	{
		int depthBufferPoolIdParamValue = depthBufferPoolId;
		
		set_depthBufferPoolId_ev_uint16(this.nativeObject.pointer, depthBufferPoolIdParamValue);
	}
	
	public ShadowTextureConfig() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ShadowTextureConfig", null);
	}

	public ShadowTextureConfig(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadowTextureConfig(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ShadowTextureConfig fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadowTextureConfig obj = null;
 		if(baseObj instanceof ShadowTextureConfig)
		{
			obj = (ShadowTextureConfig)baseObj;
		} else {
			obj = new ShadowTextureConfig(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ShadowTextureConfig");
			obj.increaseCast();
		}

		return obj;
	}
}
