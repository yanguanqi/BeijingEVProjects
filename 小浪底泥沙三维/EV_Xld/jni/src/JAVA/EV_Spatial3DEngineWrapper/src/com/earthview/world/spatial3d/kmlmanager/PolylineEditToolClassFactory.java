package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolylineEditToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PolylineEditTool emptyInstance = new PolylineEditTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
