package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingEllipseItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingEllipseItem emptyInstance = new TrackingEllipseItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
