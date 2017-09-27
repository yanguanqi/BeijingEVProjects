package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyAdjustModeEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent", new GlobeFlyAdjustModeEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyAdjustModeEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyAdjustModeEvent", null);
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
	
	public GlobeFlyAdjustModeEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyAdjustModeEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyAdjustModeEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyAdjustModeEvent obj = null;
 		if(baseObj instanceof GlobeFlyAdjustModeEvent)
		{
			obj = (GlobeFlyAdjustModeEvent)baseObj;
		} else {
			obj = new GlobeFlyAdjustModeEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyAdjustModeEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
