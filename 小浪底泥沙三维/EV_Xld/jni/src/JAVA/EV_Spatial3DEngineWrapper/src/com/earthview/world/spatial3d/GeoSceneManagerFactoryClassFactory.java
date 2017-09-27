package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoSceneManagerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoSceneManagerFactory emptyInstance = new GeoSceneManagerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
