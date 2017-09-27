package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoEntityFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoEntityFactory emptyInstance = new GeoEntityFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
