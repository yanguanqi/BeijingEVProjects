package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalTerrainLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalTerrainLayerFactory emptyInstance = new LocalTerrainLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
