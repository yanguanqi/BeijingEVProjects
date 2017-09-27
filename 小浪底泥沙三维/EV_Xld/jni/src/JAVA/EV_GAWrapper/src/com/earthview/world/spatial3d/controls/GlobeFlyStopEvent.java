package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStopEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent", new GlobeFlyStopEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyStopEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyStopEvent", null);
	}

	public GlobeFlyStopEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyStopEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyStopEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyStopEvent obj = null;
 		if(baseObj instanceof GlobeFlyStopEvent)
		{
			obj = (GlobeFlyStopEvent)baseObj;
		} else {
			obj = new GlobeFlyStopEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyStopEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
