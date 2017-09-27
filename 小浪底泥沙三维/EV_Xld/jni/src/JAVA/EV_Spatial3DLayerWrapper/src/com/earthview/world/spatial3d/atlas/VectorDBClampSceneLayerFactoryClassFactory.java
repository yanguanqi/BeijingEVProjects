package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorDBClampSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorDBClampSceneLayerFactory emptyInstance = new VectorDBClampSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
