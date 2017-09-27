package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelLayerFactory emptyInstance = new ModelLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
