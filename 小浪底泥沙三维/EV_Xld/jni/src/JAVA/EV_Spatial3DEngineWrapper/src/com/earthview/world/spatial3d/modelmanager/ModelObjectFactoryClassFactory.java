package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelObjectFactory emptyInstance = new ModelObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
