package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartLayerFactory emptyInstance = new ChartLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
