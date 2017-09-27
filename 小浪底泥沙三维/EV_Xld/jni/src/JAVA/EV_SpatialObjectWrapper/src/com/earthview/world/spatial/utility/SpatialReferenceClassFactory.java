package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialReferenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialReference emptyInstance = new SpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
