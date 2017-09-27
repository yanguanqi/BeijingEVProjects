package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IspatialindexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ispatialindex emptyInstance = new Ispatialindex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
