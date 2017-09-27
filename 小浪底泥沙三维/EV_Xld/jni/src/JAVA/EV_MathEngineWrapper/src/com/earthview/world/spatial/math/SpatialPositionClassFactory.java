package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialPositionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialPosition emptyInstance = new SpatialPosition(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
