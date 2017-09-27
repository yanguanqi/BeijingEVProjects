package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshFileDriver extends com.earthview.world.spatial3d.dataexchange.ModelDataDriver {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshFileDriver", new MeshFileDriverClassFactory());
	}

	public MeshFileDriver(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshFileDriver(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshFileDriver fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshFileDriver obj = null;
 		if(baseObj instanceof MeshFileDriver)
		{
			obj = (MeshFileDriver)baseObj;
		} else {
			obj = new MeshFileDriver(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshFileDriver");
			obj.increaseCast();
		}

		return obj;
	}
}
