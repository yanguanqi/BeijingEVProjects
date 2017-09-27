package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureIntersectionTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureIntersectionTask emptyInstance = new FeatureIntersectionTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
