package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingRectItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingRectItem emptyInstance = new TrackingRectItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
