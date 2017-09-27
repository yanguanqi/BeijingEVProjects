package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelObjectMap emptyInstance = new ModelObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
