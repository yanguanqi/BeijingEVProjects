package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionAreaToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RegionAreaTool emptyInstance = new RegionAreaTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
