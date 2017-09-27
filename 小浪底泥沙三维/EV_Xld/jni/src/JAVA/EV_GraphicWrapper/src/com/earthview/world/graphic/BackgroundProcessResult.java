package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Identifier of a background process
public class BackgroundProcessResult extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::BackgroundProcessResult", new BackgroundProcessResultClassFactory());
	}

	public BackgroundProcessResult(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BackgroundProcessResult(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BackgroundProcessResult fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BackgroundProcessResult obj = null;
 		if(baseObj instanceof BackgroundProcessResult)
		{
			obj = (BackgroundProcessResult)baseObj;
		} else {
			obj = new BackgroundProcessResult(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "BackgroundProcessResult");
			obj.increaseCast();
		}

		return obj;
	}
}
