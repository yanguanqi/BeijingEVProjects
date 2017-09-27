package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebLayerFactory emptyInstance = new WebLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
