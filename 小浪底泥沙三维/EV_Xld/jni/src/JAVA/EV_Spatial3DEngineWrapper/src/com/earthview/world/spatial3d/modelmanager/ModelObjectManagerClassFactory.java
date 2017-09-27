package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelObjectManager emptyInstance = new ModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
