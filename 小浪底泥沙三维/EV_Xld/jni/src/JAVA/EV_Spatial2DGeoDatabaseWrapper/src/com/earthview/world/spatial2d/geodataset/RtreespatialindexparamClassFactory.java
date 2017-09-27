package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RtreespatialindexparamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Rtreespatialindexparam emptyInstance = new Rtreespatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
