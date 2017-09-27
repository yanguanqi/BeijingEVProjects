package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;
import com.earthview.world.graphic.*;

public class MaterialPriorityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialPriority emptyInstance = new MaterialPriority(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
