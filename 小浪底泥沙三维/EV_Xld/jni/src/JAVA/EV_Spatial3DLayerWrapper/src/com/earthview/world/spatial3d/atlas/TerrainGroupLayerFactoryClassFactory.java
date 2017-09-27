package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainGroupLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainGroupLayerFactory emptyInstance = new TerrainGroupLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
