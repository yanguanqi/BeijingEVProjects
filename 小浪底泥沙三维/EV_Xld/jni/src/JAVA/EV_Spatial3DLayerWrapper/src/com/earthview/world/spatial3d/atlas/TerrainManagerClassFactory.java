package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainManager emptyInstance = new TerrainManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
