package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompassWidgetVisibleEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCompassWidgetVisibleEvent", new CompassWidgetVisibleEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public CompassWidgetVisibleEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCompassWidgetVisibleEvent", null);
	}

	native private int get_mvisibleMode_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.VisibleMode get_mvisibleMode()
	{
		int jniValue = get_mvisibleMode_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.controls.VisibleMode.toEnum(jniValue);
	}
	
	native private void set_mvisibleMode_VisibleMode (long pNativeObject, int value);
	public void set_mvisibleMode(com.earthview.world.spatial3d.controls.VisibleMode mvisibleMode)
	{
		int mvisibleModeParamValue = mvisibleMode.getValue();
		
		set_mvisibleMode_VisibleMode(this.nativeObject.pointer, mvisibleModeParamValue);
	}
	
	public CompassWidgetVisibleEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompassWidgetVisibleEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompassWidgetVisibleEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompassWidgetVisibleEvent obj = null;
 		if(baseObj instanceof CompassWidgetVisibleEvent)
		{
			obj = (CompassWidgetVisibleEvent)baseObj;
		} else {
			obj = new CompassWidgetVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompassWidgetVisibleEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
