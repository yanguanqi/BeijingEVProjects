package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainLayerFactory emptyInstance = new TerrainLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
