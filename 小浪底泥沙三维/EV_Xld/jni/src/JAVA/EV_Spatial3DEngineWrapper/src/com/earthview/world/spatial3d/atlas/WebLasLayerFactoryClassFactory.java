package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebLasLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebLasLayerFactory emptyInstance = new WebLasLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
