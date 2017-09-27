package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DRegionFloodClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DRegionFlood emptyInstance = new Analysis3DRegionFlood(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
