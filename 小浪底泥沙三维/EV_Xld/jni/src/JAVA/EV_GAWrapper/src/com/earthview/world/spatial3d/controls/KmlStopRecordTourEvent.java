package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStopRecordTourEvent extends com.earthview.world.spatial3d.controls.KmlTourEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent", new KmlStopRecordTourEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlStopRecordTourEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlStopRecordTourEvent", null);
	}

	public KmlStopRecordTourEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlStopRecordTourEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlStopRecordTourEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlStopRecordTourEvent obj = null;
 		if(baseObj instanceof KmlStopRecordTourEvent)
		{
			obj = (KmlStopRecordTourEvent)baseObj;
		} else {
			obj = new KmlStopRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlStopRecordTourEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
