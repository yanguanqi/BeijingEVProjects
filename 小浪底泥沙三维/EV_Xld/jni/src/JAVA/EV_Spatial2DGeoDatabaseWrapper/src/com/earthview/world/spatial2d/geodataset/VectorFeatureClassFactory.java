package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorFeature emptyInstance = new VectorFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
