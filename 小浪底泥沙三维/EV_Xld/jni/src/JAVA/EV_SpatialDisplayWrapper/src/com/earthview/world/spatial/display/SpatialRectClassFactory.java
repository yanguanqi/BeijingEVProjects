package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialRectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialRect emptyInstance = new SpatialRect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
