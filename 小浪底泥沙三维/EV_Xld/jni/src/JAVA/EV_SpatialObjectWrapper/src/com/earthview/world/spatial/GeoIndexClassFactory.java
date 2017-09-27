package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoIndexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoIndex emptyInstance = new GeoIndex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
