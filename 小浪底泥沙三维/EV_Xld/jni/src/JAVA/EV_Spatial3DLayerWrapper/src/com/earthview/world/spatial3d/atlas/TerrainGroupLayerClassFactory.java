package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainGroupLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainGroupLayer emptyInstance = new TerrainGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
