package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IspatialindexparamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ispatialindexparam emptyInstance = new Ispatialindexparam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
