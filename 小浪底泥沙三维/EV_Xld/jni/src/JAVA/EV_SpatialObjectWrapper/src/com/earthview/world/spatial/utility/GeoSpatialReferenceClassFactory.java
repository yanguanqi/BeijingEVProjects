package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoSpatialReferenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoSpatialReference emptyInstance = new GeoSpatialReference(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
