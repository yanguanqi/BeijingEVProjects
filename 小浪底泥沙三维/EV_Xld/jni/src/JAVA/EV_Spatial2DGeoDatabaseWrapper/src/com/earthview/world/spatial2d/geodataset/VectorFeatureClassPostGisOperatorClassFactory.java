package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorFeatureClassPostGisOperatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorFeatureClassPostGisOperator emptyInstance = new VectorFeatureClassPostGisOperator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
