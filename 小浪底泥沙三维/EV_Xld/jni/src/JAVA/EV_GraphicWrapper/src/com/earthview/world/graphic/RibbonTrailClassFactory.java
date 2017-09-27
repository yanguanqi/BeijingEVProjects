package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RibbonTrailClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RibbonTrail emptyInstance = new RibbonTrail(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
