package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorFeatureClassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorFeatureClass emptyInstance = new VectorFeatureClass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
