package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPauseEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent", new GlobeFlyPauseEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyPauseEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyPauseEvent", null);
	}

	public GlobeFlyPauseEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyPauseEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyPauseEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyPauseEvent obj = null;
 		if(baseObj instanceof GlobeFlyPauseEvent)
		{
			obj = (GlobeFlyPauseEvent)baseObj;
		} else {
			obj = new GlobeFlyPauseEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyPauseEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
