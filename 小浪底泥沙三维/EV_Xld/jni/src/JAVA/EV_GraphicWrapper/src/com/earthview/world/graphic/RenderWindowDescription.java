package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渲染窗口类提供渲染窗口的一些参数
 */
public class RenderWindowDescription extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RenderWindowDescription", new RenderWindowDescriptionClassFactory());
	}

	/**
	 * 默认的构造函数
	 * @param  
	 */
	public RenderWindowDescription() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("RenderWindowDescription", null);
	}

	native private String get_name_void(long pNativeObject);
	public String get_name()
	{
		String jniValue = get_name_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_name_EVString (long pNativeObject, String value);
	public void set_name(String name)
	{
		String nameParamValue = name;
		
		set_name_EVString(this.nativeObject.pointer, nameParamValue);
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
	
	native private boolean get_useFullScreen_void(long pNativeObject);
	public boolean get_useFullScreen()
	{
		boolean jniValue = get_useFullScreen_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_useFullScreen_ev_bool (long pNativeObject, boolean value);
	public void set_useFullScreen(boolean useFullScreen)
	{
		boolean useFullScreenParamValue = useFullScreen;
		
		set_useFullScreen_ev_bool(this.nativeObject.pointer, useFullScreenParamValue);
	}
	
	native private long get_miscParams_void(long pNativeObject);
	public com.earthview.world.core.CommonStringPairList get_miscParams()
	{
		long jniValue = get_miscParams_void(this.nativeObject.pointer);
		
		com.earthview.world.core.CommonStringPairList __returnValue = new com.earthview.world.core.CommonStringPairList(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.CommonStringPairList)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CommonStringPairList");
		}
		return __returnValue;
	}
	
	native private void set_miscParams_CommonStringPairList (long pNativeObject, long value);
	public void set_miscParams(com.earthview.world.core.CommonStringPairList miscParams)
	{
		long miscParamsParamValue = miscParams.nativeObject.pointer;
		
		set_miscParams_CommonStringPairList(this.nativeObject.pointer, miscParamsParamValue);
	}
	
	public RenderWindowDescription(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderWindowDescription(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderWindowDescription fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderWindowDescription obj = null;
 		if(baseObj instanceof RenderWindowDescription)
		{
			obj = (RenderWindowDescription)baseObj;
		} else {
			obj = new RenderWindowDescription(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "RenderWindowDescription");
			obj.increaseCast();
		}

		return obj;
	}
}
