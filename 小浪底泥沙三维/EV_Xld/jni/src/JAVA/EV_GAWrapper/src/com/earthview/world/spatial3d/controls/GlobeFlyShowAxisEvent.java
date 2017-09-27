package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyShowAxisEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent", new GlobeFlyShowAxisEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyShowAxisEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyShowAxisEvent", null);
	}

	native private boolean get_mcloseWindow_void(long pNativeObject);
	public boolean get_mcloseWindow()
	{
		boolean jniValue = get_mcloseWindow_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mcloseWindow_ev_bool (long pNativeObject, boolean value);
	public void set_mcloseWindow(boolean mcloseWindow)
	{
		boolean mcloseWindowParamValue = mcloseWindow;
		
		set_mcloseWindow_ev_bool(this.nativeObject.pointer, mcloseWindowParamValue);
	}
	
	public GlobeFlyShowAxisEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyShowAxisEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyShowAxisEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyShowAxisEvent obj = null;
 		if(baseObj instanceof GlobeFlyShowAxisEvent)
		{
			obj = (GlobeFlyShowAxisEvent)baseObj;
		} else {
			obj = new GlobeFlyShowAxisEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyShowAxisEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
