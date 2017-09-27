package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorMovableEditToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorMovableEditTool emptyInstance = new VectorMovableEditTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
