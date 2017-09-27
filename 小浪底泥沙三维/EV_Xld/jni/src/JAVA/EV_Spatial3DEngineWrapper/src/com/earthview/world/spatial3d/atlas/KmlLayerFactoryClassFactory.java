package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlLayerFactory emptyInstance = new KmlLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
