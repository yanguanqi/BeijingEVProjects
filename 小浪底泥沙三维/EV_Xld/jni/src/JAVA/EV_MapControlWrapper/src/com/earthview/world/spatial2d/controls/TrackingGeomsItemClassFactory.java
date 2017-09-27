package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingGeomsItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingGeomsItem emptyInstance = new TrackingGeomsItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
