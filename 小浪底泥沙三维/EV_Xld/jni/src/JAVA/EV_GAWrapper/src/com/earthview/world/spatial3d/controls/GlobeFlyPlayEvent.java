package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPlayEvent extends com.earthview.world.spatial3d.controls.GlobeFlyEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent", new GlobeFlyPlayEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyPlayEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyPlayEvent", null);
	}

	public GlobeFlyPlayEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyPlayEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyPlayEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyPlayEvent obj = null;
 		if(baseObj instanceof GlobeFlyPlayEvent)
		{
			obj = (GlobeFlyPlayEvent)baseObj;
		} else {
			obj = new GlobeFlyPlayEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyPlayEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
