package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlGroupLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlGroupLayerFactory emptyInstance = new KmlGroupLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
