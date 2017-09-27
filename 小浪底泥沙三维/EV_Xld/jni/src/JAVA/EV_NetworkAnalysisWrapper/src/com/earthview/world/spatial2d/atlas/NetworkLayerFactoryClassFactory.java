package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkLayerFactory emptyInstance = new NetworkLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
