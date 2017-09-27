package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RecordEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CRecordEvent", new RecordEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RecordEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRecordEvent", null);
	}

	public RecordEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RecordEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RecordEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RecordEvent obj = null;
 		if(baseObj instanceof RecordEvent)
		{
			obj = (RecordEvent)baseObj;
		} else {
			obj = new RecordEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRecordEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
