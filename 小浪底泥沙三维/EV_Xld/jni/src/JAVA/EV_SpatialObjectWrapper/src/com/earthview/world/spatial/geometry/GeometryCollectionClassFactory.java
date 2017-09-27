package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryCollectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryCollection emptyInstance = new GeometryCollection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
