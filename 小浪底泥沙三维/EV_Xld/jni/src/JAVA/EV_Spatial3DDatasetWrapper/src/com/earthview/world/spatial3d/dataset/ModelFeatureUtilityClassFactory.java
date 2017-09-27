package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelFeatureUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelFeatureUtility emptyInstance = new ModelFeatureUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
