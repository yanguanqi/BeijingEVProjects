package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodObjectFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodObjectFactory emptyInstance = new LodObjectFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
