package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingPolylineItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingPolylineItem emptyInstance = new TrackingPolylineItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
