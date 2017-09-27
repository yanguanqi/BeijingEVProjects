package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BaseGroupLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BaseGroupLayerFactory emptyInstance = new BaseGroupLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
