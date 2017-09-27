package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceGeometryFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceGeometryFactory emptyInstance = new ResourceGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
