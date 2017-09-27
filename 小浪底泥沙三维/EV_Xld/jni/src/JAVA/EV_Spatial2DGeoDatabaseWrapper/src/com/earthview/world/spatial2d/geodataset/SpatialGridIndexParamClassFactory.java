package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialGridIndexParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialGridIndexParam emptyInstance = new SpatialGridIndexParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
