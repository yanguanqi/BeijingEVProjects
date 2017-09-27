package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPoint emptyInstance = new MultiPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
