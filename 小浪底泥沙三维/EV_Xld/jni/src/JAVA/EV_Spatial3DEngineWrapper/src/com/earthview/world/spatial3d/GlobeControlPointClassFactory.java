package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeControlPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeControlPoint emptyInstance = new GlobeControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
