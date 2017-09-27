package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandAnalysis3DRegionFloodClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandAnalysis3DRegionFlood emptyInstance = new CommandAnalysis3DRegionFlood(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
