package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectGroupManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelObjectGroupManager emptyInstance = new ModelObjectGroupManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
