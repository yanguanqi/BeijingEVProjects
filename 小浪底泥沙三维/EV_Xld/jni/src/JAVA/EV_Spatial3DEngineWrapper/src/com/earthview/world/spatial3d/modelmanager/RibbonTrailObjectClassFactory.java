package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RibbonTrailObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RibbonTrailObject emptyInstance = new RibbonTrailObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
