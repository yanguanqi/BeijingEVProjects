package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityGeometryFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityGeometryFactory emptyInstance = new EntityGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
