package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialTransformerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialTransformer emptyInstance = new SpatialTransformer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
