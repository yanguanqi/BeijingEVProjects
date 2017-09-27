package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的图标信息类
 */
public class ServerIcon extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerIcon", new ServerIconClassFactory());
	}

	native private String get_iconData_void(long pNativeObject);
	public String get_iconData()
	{
		String jniValue = get_iconData_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_iconData_EVString (long pNativeObject, String value);
	public void set_iconData(String iconData)
	{
		String iconDataParamValue = iconData;
		
		set_iconData_EVString(this.nativeObject.pointer, iconDataParamValue);
	}
	
	native private int get_iconHeight_void(long pNativeObject);
	public int get_iconHeight()
	{
		int jniValue = get_iconHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_iconHeight_ev_int32 (long pNativeObject, int value);
	public void set_iconHeight(int iconHeight)
	{
		int iconHeightParamValue = iconHeight;
		
		set_iconHeight_ev_int32(this.nativeObject.pointer, iconHeightParamValue);
	}
	
	native private int get_iconWidth_void(long pNativeObject);
	public int get_iconWidth()
	{
		int jniValue = get_iconWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_iconWidth_ev_int32 (long pNativeObject, int value);
	public void set_iconWidth(int iconWidth)
	{
		int iconWidthParamValue = iconWidth;
		
		set_iconWidth_ev_int32(this.nativeObject.pointer, iconWidthParamValue);
	}
	
	native private boolean get_isIconVisible_void(long pNativeObject);
	public boolean get_isIconVisible()
	{
		boolean jniValue = get_isIconVisible_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_isIconVisible_ev_bool (long pNativeObject, boolean value);
	public void set_isIconVisible(boolean isIconVisible)
	{
		boolean isIconVisibleParamValue = isIconVisible;
		
		set_isIconVisible_ev_bool(this.nativeObject.pointer, isIconVisibleParamValue);
	}
	
	/**
	 * 默认构造函数
	 */
	public ServerIcon() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerIcon", null);
	}

	public ServerIcon(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerIcon(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerIcon fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerIcon obj = null;
 		if(baseObj instanceof ServerIcon)
		{
			obj = (ServerIcon)baseObj;
		} else {
			obj = new ServerIcon(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerIcon");
			obj.increaseCast();
		}

		return obj;
	}
}
