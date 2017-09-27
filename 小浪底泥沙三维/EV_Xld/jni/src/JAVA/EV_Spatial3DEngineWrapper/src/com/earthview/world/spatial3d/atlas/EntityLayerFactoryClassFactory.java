package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityLayerFactory emptyInstance = new EntityLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
