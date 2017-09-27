package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStopSamplePointEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent", new GlobeFlyStopSamplePointEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyStopSamplePointEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyStopSamplePointEvent", null);
	}

	public GlobeFlyStopSamplePointEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyStopSamplePointEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyStopSamplePointEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyStopSamplePointEvent obj = null;
 		if(baseObj instanceof GlobeFlyStopSamplePointEvent)
		{
			obj = (GlobeFlyStopSamplePointEvent)baseObj;
		} else {
			obj = new GlobeFlyStopSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyStopSamplePointEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
