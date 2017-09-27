package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStopTourEvent extends com.earthview.world.spatial3d.controls.KmlTourEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlStopTourEvent", new KmlStopTourEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlStopTourEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlStopTourEvent", null);
	}

	public KmlStopTourEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlStopTourEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlStopTourEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlStopTourEvent obj = null;
 		if(baseObj instanceof KmlStopTourEvent)
		{
			obj = (KmlStopTourEvent)baseObj;
		} else {
			obj = new KmlStopTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlStopTourEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
