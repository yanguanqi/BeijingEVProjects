package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingItemSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingItemSet emptyInstance = new TrackingItemSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
