package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeFlyEvent", new GlobeFlyEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GlobeFlyEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGlobeFlyEvent", null);
	}

	public GlobeFlyEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeFlyEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GlobeFlyEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeFlyEvent obj = null;
 		if(baseObj instanceof GlobeFlyEvent)
		{
			obj = (GlobeFlyEvent)baseObj;
		} else {
			obj = new GlobeFlyEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeFlyEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
