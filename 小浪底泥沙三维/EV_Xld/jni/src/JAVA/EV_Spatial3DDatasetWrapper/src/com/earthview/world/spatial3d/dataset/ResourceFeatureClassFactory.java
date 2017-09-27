package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceFeature emptyInstance = new ResourceFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
