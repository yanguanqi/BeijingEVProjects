package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureIterator emptyInstance = new FeatureIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
