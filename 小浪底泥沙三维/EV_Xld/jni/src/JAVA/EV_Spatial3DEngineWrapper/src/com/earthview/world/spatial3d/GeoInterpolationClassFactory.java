package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoInterpolationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoInterpolation emptyInstance = new GeoInterpolation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
