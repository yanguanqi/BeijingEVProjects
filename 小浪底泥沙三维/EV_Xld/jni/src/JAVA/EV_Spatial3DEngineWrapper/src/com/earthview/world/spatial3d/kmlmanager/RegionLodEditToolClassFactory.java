package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionLodEditToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RegionLodEditTool emptyInstance = new RegionLodEditTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
