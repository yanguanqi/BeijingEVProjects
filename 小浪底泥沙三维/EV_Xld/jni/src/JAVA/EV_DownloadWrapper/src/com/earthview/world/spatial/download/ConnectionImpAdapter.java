package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class ConnectionImpAdapter extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ConnectionImpAdapter", new ConnectionImpAdapterClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public ConnectionImpAdapter() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ConnectionImpAdapter", null);
	}

	public ConnectionImpAdapter(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConnectionImpAdapter(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConnectionImpAdapter fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConnectionImpAdapter obj = null;
 		if(baseObj instanceof ConnectionImpAdapter)
		{
			obj = (ConnectionImpAdapter)baseObj;
		} else {
			obj = new ConnectionImpAdapter(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConnectionImpAdapter");
			obj.increaseCast();
		}

		return obj;
	}
}
