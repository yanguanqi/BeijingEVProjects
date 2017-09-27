package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStartRecordTourEvent extends com.earthview.world.spatial3d.controls.KmlTourEvent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent", new KmlStartRecordTourEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public KmlStartRecordTourEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlStartRecordTourEvent", null);
	}

	public KmlStartRecordTourEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlStartRecordTourEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlStartRecordTourEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlStartRecordTourEvent obj = null;
 		if(baseObj instanceof KmlStartRecordTourEvent)
		{
			obj = (KmlStartRecordTourEvent)baseObj;
		} else {
			obj = new KmlStartRecordTourEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlStartRecordTourEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
