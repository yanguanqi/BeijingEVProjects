package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalImageClampSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalImageClampSceneLayerFactory emptyInstance = new LocalImageClampSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
