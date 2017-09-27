package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TerrainColorInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TerrainColorInfo emptyInstance = new TerrainColorInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
