package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyDataEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent", new GlobeFlyDataEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyDataEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyDataEvent", null);
	}

	native private void setFlyPath_CGlobeFlyPathPtr(long pNativeObject, long flyPath);
	/**
	 * 设置飞行线路
	 * @param flyPath 飞行线路
	 */
	public void setFlyPath(com.earthview.world.spatial3d.GlobeFlyPathPtr flyPath)
	{
		long flyPathParamValue = flyPath.nativeObject.pointer;
		setFlyPath_CGlobeFlyPathPtr(this.nativeObject.pointer, flyPathParamValue);
	}
	public GlobeFlyDataEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyDataEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyDataEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyDataEvent obj = null;
 		if(baseObj instanceof GlobeFlyDataEvent)
		{
			obj = (GlobeFlyDataEvent)baseObj;
		} else {
			obj = new GlobeFlyDataEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyDataEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
