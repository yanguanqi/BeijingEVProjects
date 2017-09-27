package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyStartSamplePointEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent", new GlobeFlyStartSamplePointEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyStartSamplePointEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyStartSamplePointEvent", null);
	}

	public GlobeFlyStartSamplePointEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyStartSamplePointEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyStartSamplePointEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyStartSamplePointEvent obj = null;
 		if(baseObj instanceof GlobeFlyStartSamplePointEvent)
		{
			obj = (GlobeFlyStartSamplePointEvent)baseObj;
		} else {
			obj = new GlobeFlyStartSamplePointEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyStartSamplePointEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
