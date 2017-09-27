package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IspatialscaleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ispatialscale emptyInstance = new Ispatialscale(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
