package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DRegionFloodParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DRegionFloodParam emptyInstance = new Analysis3DRegionFloodParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
