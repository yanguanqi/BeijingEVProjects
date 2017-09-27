package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoEntityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoEntity emptyInstance = new GeoEntity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
