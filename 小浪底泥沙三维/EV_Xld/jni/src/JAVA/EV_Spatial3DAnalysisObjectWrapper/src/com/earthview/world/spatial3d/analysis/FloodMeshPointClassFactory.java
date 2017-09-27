package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloodMeshPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FloodMeshPoint emptyInstance = new FloodMeshPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
