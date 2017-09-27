package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingGeometryItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingGeometryItem emptyInstance = new TrackingGeometryItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
