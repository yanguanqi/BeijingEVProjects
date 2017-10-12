package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterMosaic extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterMosaic", new RasterMosaicClassFactory());
	}

	public RasterMosaic() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRasterMosaic", null);
	}

	public RasterMosaic(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RasterMosaic(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RasterMosaic fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RasterMosaic obj = null;
 		if(baseObj instanceof RasterMosaic)
		{
			obj = (RasterMosaic)baseObj;
		} else {
			obj = new RasterMosaic(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRasterMosaic");
			obj.increaseCast();
		}

		return obj;
	}
}
