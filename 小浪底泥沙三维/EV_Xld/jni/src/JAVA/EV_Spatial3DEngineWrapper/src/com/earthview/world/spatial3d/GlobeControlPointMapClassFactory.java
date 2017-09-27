package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeControlPointMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeControlPointMap emptyInstance = new GlobeControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
