package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainLayer emptyInstance = new TerrainLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
