package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的注记信息类
 */
public class ServerAnnotation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerAnnotation", new ServerAnnotationClassFactory());
	}

	native private boolean get_isVisible_void(long pNativeObject);
	public boolean get_isVisible()
	{
		boolean jniValue = get_isVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isVisible_ev_bool (long pNativeObject, boolean value);
	public void set_isVisible(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		
		set_isVisible_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	
	native private String get_fieldName_void(long pNativeObject);
	public String get_fieldName()
	{
		String jniValue = get_fieldName_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_fieldName_EVString (long pNativeObject, String value);
	public void set_fieldName(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		
		set_fieldName_EVString(this.nativeObject.pointer, fieldNameParamValue);
	}
	
	native private boolean get_isSprite_void(long pNativeObject);
	public boolean get_isSprite()
	{
		boolean jniValue = get_isSprite_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isSprite_ev_bool (long pNativeObject, boolean value);
	public void set_isSprite(boolean isSprite)
	{
		boolean isSpriteParamValue = isSprite;
		
		set_isSprite_ev_bool(this.nativeObject.pointer, isSpriteParamValue);
	}
	
	native private long get_font_void(long pNativeObject);
	public com.earthview.world.spatial.ServerFont get_font()
	{
		long jniValue = get_font_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.ServerFont __returnValue = new com.earthview.world.spatial.ServerFont(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CServerFont");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerFont)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CServerFont");
		}
		return __returnValue;
	}
	
	native private void set_font_CServerFont (long pNativeObject, long value);
	public void set_font(com.earthview.world.spatial.ServerFont font)
	{
		long fontParamValue = font.nativeObject.pointer;
		
		set_font_CServerFont(this.nativeObject.pointer, fontParamValue);
	}
	
	/**
	 * 默认构造函数
	 */
	public ServerAnnotation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerAnnotation", null);
	}

	/**
	 * 拷贝构造函数
	 * @param info 拷贝对象1
	 */
	public ServerAnnotation(com.earthview.world.spatial.ServerAnnotation info) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer infoPtr = new BasePointer(info);
		list.add("info", infoPtr.get());
		Create("CServerAnnotation", list);
	}

	public ServerAnnotation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerAnnotation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerAnnotation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerAnnotation obj = null;
 		if(baseObj instanceof ServerAnnotation)
		{
			obj = (ServerAnnotation)baseObj;
		} else {
			obj = new ServerAnnotation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerAnnotation");
			obj.increaseCast();
		}

		return obj;
	}
}
