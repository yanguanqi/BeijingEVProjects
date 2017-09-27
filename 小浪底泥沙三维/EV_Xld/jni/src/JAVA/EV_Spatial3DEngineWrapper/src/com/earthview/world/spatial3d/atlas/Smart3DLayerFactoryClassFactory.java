package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Smart3DLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Smart3DLayerFactory emptyInstance = new Smart3DLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
