package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RibbonTrailObjectMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RibbonTrailObjectMap emptyInstance = new RibbonTrailObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
