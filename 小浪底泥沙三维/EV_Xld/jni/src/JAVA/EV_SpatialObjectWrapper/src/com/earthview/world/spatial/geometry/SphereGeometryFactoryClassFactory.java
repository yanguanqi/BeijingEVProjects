package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereGeometryFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SphereGeometryFactory emptyInstance = new SphereGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
