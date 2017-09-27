package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataStreamSourcePublishTool extends com.earthview.world.spatial3d.ModelPublishToolDbdessource {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CModelDataStreamSourcePublishTool", new ModelDataStreamSourcePublishToolClassFactory());
	}

	/**
	 * ¹¹Ôìº¯Êý
	 */
	public ModelDataStreamSourcePublishTool() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CModelDataStreamSourcePublishTool", null);
	}

	public ModelDataStreamSourcePublishTool(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelDataStreamSourcePublishTool(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelDataStreamSourcePublishTool fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelDataStreamSourcePublishTool obj = null;
 		if(baseObj instanceof ModelDataStreamSourcePublishTool)
		{
			obj = (ModelDataStreamSourcePublishTool)baseObj;
		} else {
			obj = new ModelDataStreamSourcePublishTool(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelDataStreamSourcePublishTool");
			obj.increaseCast();
		}

		return obj;
	}
}
