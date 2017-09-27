package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolygonEditToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PolygonEditTool emptyInstance = new PolygonEditTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
