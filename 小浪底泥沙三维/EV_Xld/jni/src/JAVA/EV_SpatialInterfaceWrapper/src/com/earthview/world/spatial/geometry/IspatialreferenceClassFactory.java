package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IspatialreferenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ispatialreference emptyInstance = new Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
