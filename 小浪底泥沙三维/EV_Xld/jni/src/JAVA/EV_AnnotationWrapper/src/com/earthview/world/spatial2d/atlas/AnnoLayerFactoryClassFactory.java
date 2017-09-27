package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AnnoLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AnnoLayerFactory emptyInstance = new AnnoLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
