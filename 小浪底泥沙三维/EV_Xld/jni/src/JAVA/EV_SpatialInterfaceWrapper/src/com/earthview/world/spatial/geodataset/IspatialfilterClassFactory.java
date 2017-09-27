package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IspatialfilterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ispatialfilter emptyInstance = new Ispatialfilter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
