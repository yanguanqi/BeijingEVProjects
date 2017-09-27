package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingItem emptyInstance = new TrackingItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
