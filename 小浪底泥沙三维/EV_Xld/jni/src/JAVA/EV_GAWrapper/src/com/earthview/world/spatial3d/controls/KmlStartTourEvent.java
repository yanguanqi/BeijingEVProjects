package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStartTourEvent extends com.earthview.world.spatial3d.controls.KmlTourEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlStartTourEvent", new KmlStartTourEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlStartTourEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlStartTourEvent", null);
	}

	public KmlStartTourEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlStartTourEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlStartTourEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlStartTourEvent obj = null;
 		if(baseObj instanceof KmlStartTourEvent)
		{
			obj = (KmlStartTourEvent)baseObj;
		} else {
			obj = new KmlStartTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlStartTourEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
