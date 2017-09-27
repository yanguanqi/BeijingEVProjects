package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UnifyMeshToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UnifyMeshTool emptyInstance = new UnifyMeshTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
